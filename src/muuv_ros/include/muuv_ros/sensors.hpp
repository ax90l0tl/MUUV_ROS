#ifndef SENSORS_HPP
#define SENSORS_HPP

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "MTi.h"
#include <cmath>
#include <chrono>
#include <functional>
#include <memory>
#include <iostream>
using namespace std;

class Sensors : public rclcpp::Node
{
public:
    Sensors();
    ~Sensors();
    // void run();

private:
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub;
    // North(x)-East(y)-Down(z) Coordinate
    void timer_Callback();
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
    MTi *imu;
    int pi;
};

#endif