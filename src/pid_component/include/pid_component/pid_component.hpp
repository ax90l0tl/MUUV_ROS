#ifndef PID_COMPONENT_HPP
#define PID_COMPONENT_HPP

#include "rclcpp/rclcpp.hpp"
#include "visibility_control.h"
#include "std_msgs/msg/float64.hpp"
#include "control_toolbox/pid.hpp"
#include <cmath>
#include <chrono>
#include <iostream>
using namespace std;
    class Pid_component
    {
    public:
        COMPOSITION_PUBLIC
        explicit Pid_component(const rclcpp::NodeOptions &options);

        COMPOSITION_PUBLIC
        rclcpp::node_interfaces::NodeBaseInterface::SharedPtr get_node_base_interface() const;

    private:
        rclcpp::Node::SharedPtr node_;
        rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr ctrl_effort;
        rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr setpoint;
        rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr state;
        rclcpp::TimerBase::SharedPtr timer_;
        size_t count_ = 0;
        float state_ = 0;
        float setpoint_ = 0;
    };
#endif