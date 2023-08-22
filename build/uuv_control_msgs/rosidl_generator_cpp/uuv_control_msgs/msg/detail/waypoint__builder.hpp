// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include "uuv_control_msgs/msg/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_radius_of_acceptance
{
public:
  explicit Init_Waypoint_radius_of_acceptance(::uuv_control_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::msg::Waypoint radius_of_acceptance(::uuv_control_msgs::msg::Waypoint::_radius_of_acceptance_type arg)
  {
    msg_.radius_of_acceptance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_use_fixed_heading
{
public:
  explicit Init_Waypoint_use_fixed_heading(::uuv_control_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_radius_of_acceptance use_fixed_heading(::uuv_control_msgs::msg::Waypoint::_use_fixed_heading_type arg)
  {
    msg_.use_fixed_heading = std::move(arg);
    return Init_Waypoint_radius_of_acceptance(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_heading_offset
{
public:
  explicit Init_Waypoint_heading_offset(::uuv_control_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_use_fixed_heading heading_offset(::uuv_control_msgs::msg::Waypoint::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_Waypoint_use_fixed_heading(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_max_forward_speed
{
public:
  explicit Init_Waypoint_max_forward_speed(::uuv_control_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_heading_offset max_forward_speed(::uuv_control_msgs::msg::Waypoint::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_Waypoint_heading_offset(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_point
{
public:
  explicit Init_Waypoint_point(::uuv_control_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_max_forward_speed point(::uuv_control_msgs::msg::Waypoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Waypoint_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_header
{
public:
  Init_Waypoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_point header(::uuv_control_msgs::msg::Waypoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Waypoint_point(msg_);
  }

private:
  ::uuv_control_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::msg::Waypoint>()
{
  return uuv_control_msgs::msg::builder::Init_Waypoint_header();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
