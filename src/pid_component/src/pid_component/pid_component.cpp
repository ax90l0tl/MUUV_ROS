#include "pid_component.hpp"

Pid_component::Pid_component(const rclcpp::NodeOptions &options)
    : node_(std::make_shared<rclcpp::Node>("pid", options)), pid_controller(), last_time(0)
{
    // topic parameters
    this->node_->declare_parameter("ctrl_effort_name", "ctrl_effort");
    this->node_->declare_parameter("setpoint_name", "setpoint");
    this->node_->declare_parameter("state_name", "state");

    // pid gain parameters
    const std::map<std::string, double> &gains = {{"p", 0}, {"i", 0}, {"d", 0}, {"i_max", 0}, {"i_min", 0}};
    this->node_->declare_parameters("gains", gains);
    this->node_->declare_parameter("antiwindup", false);
    pid_controller.initPid(this->node_->get_parameter("gains.p").as_double(), this->node_->get_parameter("gains.i").as_double(),
                           this->node_->get_parameter("gains.d").as_double(), this->node_->get_parameter("gains.i_max").as_double(),
                           this->node_->get_parameter("gains.i_min").as_double(), this->node_->get_parameter("antiwindup").as_bool());
    // quality of service profile for message filtering
    // rclcpp::QoS custom_qos_profile = rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default))
    //                                      .history(rmw_qos_history_policy_t::RMW_QOS_POLICY_HISTORY_KEEP_LAST)
    //                                      .keep_last(1)
    //                                      .reliability(rmw_qos_reliability_policy_t::RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT)
    //                                      .durability(rmw_qos_durability_policy_t::RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL)
    //                                      .avoid_ros_namespace_conventions(false);

    last_time = this->node_->now();
    // RCLCPP_INFO(this->node_->get_logger(), "starttime: '%i'", last_time);

    // Create a publisher of "custom_msg_srv/Float64Stamped" messages on the parameter topic.
    // ctrl_effort = this->node_->create_publisher<custom_msg_srv::msg::Float64Stamped>(this->node_->get_parameter("ctrl_effort_name").as_string(),
    //                                                                                  custom_qos_profile);
    ctrl_effort = this->node_->create_publisher<custom_msg_srv::msg::Float64Stamped>(this->node_->get_parameter("ctrl_effort_name").as_string(),
                                                                                     10);

    // Create a callback function for when messages are received.
    // Variations of this function also exist using, for example, UniquePtr for zero-copy transport.
    auto setpoint_callback =
        [this](const typename custom_msg_srv::msg::Float64Stamped::SharedPtr setpoint) -> void
    {
        setpoint_ = setpoint->data;
    };

    auto state_callback =
        [this](const typename custom_msg_srv::msg::Float64Stamped::SharedPtr state) -> void
    {
        // RCLCPP_INFO(this->node_->get_logger(), "last_time: '%i'", last_time);
        state_ = state->data;
        double error = setpoint_ - state_;
        // RCLCPP_INFO(this->node_->get_logger(), "now: '%i'", this->node_->now());
        rclcpp::Duration diff = this->node_->now() - last_time;
        auto nano_sec = diff.to_chrono<std::chrono::nanoseconds>();
        uint64_t dt = nano_sec.count();
        // RCLCPP_INFO(this->node_->get_logger(), "dt: '%i'", dt);
        _Float64 cmd = pid_controller.computeCommand(error, dt);
        auto msg = std::make_unique<custom_msg_srv::msg::Float64Stamped>();
        msg->data = cmd;
        msg->header.stamp = this->node_->now();
        ctrl_effort->publish(std::move(msg));
        last_time = this->node_->now();
    };

    // Create a subscription to the "chatter" topic which can be matched with one or more
    // compatible ROS publishers.
    // Note that not all publishers on the same topic with the same type will be compatible:
    // they must have compatible Quality of Service policies.
    setpoint = this->node_->create_subscription<custom_msg_srv::msg::Float64Stamped>(this->node_->get_parameter("setpoint_name").as_string(), 1, setpoint_callback);
    state = this->node_->create_subscription<custom_msg_srv::msg::Float64Stamped>(this->node_->get_parameter("state_name").as_string(), 1, state_callback);
}

rclcpp::node_interfaces::NodeBaseInterface::SharedPtr
Pid_component::get_node_base_interface() const
{
    return this->node_->get_node_base_interface();
}

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
RCLCPP_COMPONENTS_REGISTER_NODE(Pid_component)