#include "pid_component.hpp"

Pid_component::Pid_component(const rclcpp::NodeOptions &options) : node_(std::make_shared<rclcpp::Node>("pid", options))
{
    this->node_->declare_parameter("ctrl_effort_name", "ctrl_effort");
    this->node_->declare_parameter("setpoint_name", "setpoint");
    this->node_->declare_parameter("state_name", "state");
    // Create a publisher of "std_mgs/String" messages on the "chatter" topic.
    ctrl_effort = this->node_->create_publisher<std_msgs::msg::Float64>(this->node_->get_parameter("ctrl_effort_name").as_string(), 10);

    // Create a callback function for when messages are received.
    // Variations of this function also exist using, for example, UniquePtr for zero-copy transport.
    auto setpoint_callback =
        [this](const typename std_msgs::msg::Float64::SharedPtr setpoint) -> void
    {
        if (setpoint->data != setpoint_)
        {
            setpoint_ = setpoint->data;
            auto msg = std::make_unique<std_msgs::msg::Float64>();
            msg->data = setpoint->data;
            ctrl_effort->publish(std::move(msg));
        }
    };

    auto state_callback =
        [this](const typename std_msgs::msg::Float64::SharedPtr state) -> void
    {
        if (state->data != state_)
        {
            state_ = state->data;
            auto msg = std::make_unique<std_msgs::msg::Float64>();
            msg->data = state->data;
            ctrl_effort->publish(std::move(msg));
        }
    };

    // Create a subscription to the "chatter" topic which can be matched with one or more
    // compatible ROS publishers.
    // Note that not all publishers on the same topic with the same type will be compatible:
    // they must have compatible Quality of Service policies.
    setpoint = this->node_->create_subscription<std_msgs::msg::Float64>(this->node_->get_parameter("setpoint_name").as_string(), 10, setpoint_callback);
    state = this->node_->create_subscription<std_msgs::msg::Float64>(this->node_->get_parameter("state_name").as_string(), 10, state_callback);
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