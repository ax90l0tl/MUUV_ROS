// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__BUILDER_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__BUILDER_HPP_

#include "uuv_control_msgs/msg/detail/waypoint_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointSet_waypoints
{
public:
  explicit Init_WaypointSet_waypoints(::uuv_control_msgs::msg::WaypointSet & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::msg::WaypointSet waypoints(::uuv_control_msgs::msg::WaypointSet::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::msg::WaypointSet msg_;
};

class Init_WaypointSet_start_time
{
public:
  explicit Init_WaypointSet_start_time(::uuv_control_msgs::msg::WaypointSet & msg)
  : msg_(msg)
  {}
  Init_WaypointSet_waypoints start_time(::uuv_control_msgs::msg::WaypointSet::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_WaypointSet_waypoints(msg_);
  }

private:
  ::uuv_control_msgs::msg::WaypointSet msg_;
};

class Init_WaypointSet_header
{
public:
  Init_WaypointSet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointSet_start_time header(::uuv_control_msgs::msg::WaypointSet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WaypointSet_start_time(msg_);
  }

private:
  ::uuv_control_msgs::msg::WaypointSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::msg::WaypointSet>()
{
  return uuv_control_msgs::msg::builder::Init_WaypointSet_header();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__BUILDER_HPP_
