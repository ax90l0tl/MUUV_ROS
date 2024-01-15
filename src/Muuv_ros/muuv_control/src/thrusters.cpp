#include "thrusters.hpp"

using std::placeholders::_1;

Thrusters::Thrusters() : rclcpp::Node("thrusters")
{
    this->declare_parameter("pi_address", "192.168.8.157");
    this->declare_parameter("pi_port", "8888");
    this->declare_parameter("motor_pins", vector<int64_t>{17, 22, 27});
    this->declare_parameter("sub_topic", "motor_command");
    pi_ = pigpio_start(this->get_parameter("pi_address").as_string().c_str(),
                       this->get_parameter("pi_port").as_string().c_str());
    if (pi_ < 0)
    {
        RCLCPP_INFO(this->get_logger(), "PI not detected!");
    }

    vector<int64_t> motor_pins = this->get_parameter("motor_pins").as_integer_array();
    for (int i = 0; i < NUMBER_OF_MOTORS; i++)
    {
        unique_ptr<PWM_obj> temp(new PWM_obj(pi_, motor_pins.at(i)));
        motor_[i] = move(temp);
    }

    sub_ = this->create_subscription<muuv_msgs::msg::MotorCommandList>(
        this->get_parameter("sub_topic").as_string(), 10, std::bind(&Thrusters::sub_Callback, this, _1));
}

void Thrusters::sub_Callback(const muuv_msgs::msg::MotorCommandList::SharedPtr msg)
{
    for (size_t i = 0; i < NUMBER_OF_MOTORS; ++i)
    {
        motor_[i]->run(msg->motor_commands[i].position);
    }
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Thrusters>());
    rclcpp::shutdown();
    return 0;
}