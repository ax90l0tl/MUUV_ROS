#ifndef THRUSTERS_HPP
#define THRUSTERS_HPP

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "raspi_dma_pwm.h"
#include <cmath>
#include <iostream>
using namespace std;

#define NUMBER_OF_MOTORS 3

class Thrusters : public rclcpp::Node
{
public:
    Thrusters();
    ~Thrusters();
    void run();

private:

    void ctrl_effort_Callback(const geometry_msgs::msg::Twist::SharedPtr msg);
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr ctrl_sub;
    PWM_obj *motor[3];

    // Thrustrs in triangle formation
    /*            0
    //           / \
    //          2   1
    */
    // Directional Vectors
    // North(x)-East(y)-Down(z) Coordinate

    // Motor wrench vectors
    // assume motor at full power has a force of 1 and is 1 unit away from origin (center of mass)
    // Motor0 (CCW), Motor1(CCW), Motor2(CCW)
    const float motor0[6] = {1, 0, 0, 1, -1, 0};
    const float motor1[6] = {1, 0, 0, 1, 0.5, -cos(M_PI/6)};
    const float motor2[6] = {1, 0, 0, -1, 0.5, cos(M_PI/6)};

    // const float x[6] = {1, 0, 0, 0, 0, 0};
    // No y or z motion with 3-thruster config
    // const float y[6] = { 0, 1, 0, 0, 0, 0 };
    // const float z[6] = { 0, 0, 1, 0, 0, 0 };
    // Pitch(x) - Roll(y) - Yaw(z)
    // CCW is positive 
    // const float pitch[6] = {0, 0, 0, 1, 0, 0};
    // const float roll[6] = { 0, 0, 0, 0, 1, 0};
    // const float yaw[6] = {0, 0, 0, 0, 0, 1};

    // const float* vectors[6] = {x, y, z, pitch, roll, yaw};
    float speed[3] = { 0 };
    int pi;
};

#endif