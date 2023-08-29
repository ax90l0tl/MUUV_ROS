#ifndef PID_COMPONENT_HPP
#define PID_COMPONENT_HPP

#include "rclcpp/rclcpp.hpp"
#include "visibility_control.h"
// #include "std_msgs/msg/float64.hpp"
#include "custom_msg_srv/msg/float64_stamped.hpp"
#include "control_toolbox/pid.hpp"
#include <cmath>
#include <chrono>
#include <iostream>
using namespace std::chrono_literals;

    class Pid_component
    {
    public:
        COMPOSITION_PUBLIC
        explicit Pid_component(const rclcpp::NodeOptions &options);

        COMPOSITION_PUBLIC
        rclcpp::node_interfaces::NodeBaseInterface::SharedPtr get_node_base_interface() const;

    private:
        rclcpp::Node::SharedPtr node_;
        rclcpp::Publisher<custom_msg_srv::msg::Float64Stamped>::SharedPtr ctrl_effort;
        rclcpp::Subscription<custom_msg_srv::msg::Float64Stamped>::SharedPtr setpoint;
        rclcpp::Subscription<custom_msg_srv::msg::Float64Stamped>::SharedPtr state;
        control_toolbox::Pid pid_controller;
        float state_ = 0;
        float setpoint_ = 0;
        rclcpp::Time last_time;
    };
#endif