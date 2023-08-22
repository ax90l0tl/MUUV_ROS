// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include "uuv_control_msgs/msg/detail/trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_acceleration
{
public:
  explicit Init_TrajectoryPoint_acceleration(::uuv_control_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::msg::TrajectoryPoint acceleration(::uuv_control_msgs::msg::TrajectoryPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_velocity
{
public:
  explicit Init_TrajectoryPoint_velocity(::uuv_control_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration velocity(::uuv_control_msgs::msg::TrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryPoint_acceleration(msg_);
  }

private:
  ::uuv_control_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_pose
{
public:
  explicit Init_TrajectoryPoint_pose(::uuv_control_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_velocity pose(::uuv_control_msgs::msg::TrajectoryPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrajectoryPoint_velocity(msg_);
  }

private:
  ::uuv_control_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_header
{
public:
  Init_TrajectoryPoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_pose header(::uuv_control_msgs::msg::TrajectoryPoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryPoint_pose(msg_);
  }

private:
  ::uuv_control_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::msg::TrajectoryPoint>()
{
  return uuv_control_msgs::msg::builder::Init_TrajectoryPoint_header();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
