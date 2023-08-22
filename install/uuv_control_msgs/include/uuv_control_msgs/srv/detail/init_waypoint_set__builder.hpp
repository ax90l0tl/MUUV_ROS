// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitWaypointSet_Request_interpolator
{
public:
  explicit Init_InitWaypointSet_Request_interpolator(::uuv_control_msgs::srv::InitWaypointSet_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::InitWaypointSet_Request interpolator(::uuv_control_msgs::srv::InitWaypointSet_Request::_interpolator_type arg)
  {
    msg_.interpolator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

class Init_InitWaypointSet_Request_heading_offset
{
public:
  explicit Init_InitWaypointSet_Request_heading_offset(::uuv_control_msgs::srv::InitWaypointSet_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointSet_Request_interpolator heading_offset(::uuv_control_msgs::srv::InitWaypointSet_Request::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_InitWaypointSet_Request_interpolator(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

class Init_InitWaypointSet_Request_max_forward_speed
{
public:
  explicit Init_InitWaypointSet_Request_max_forward_speed(::uuv_control_msgs::srv::InitWaypointSet_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointSet_Request_heading_offset max_forward_speed(::uuv_control_msgs::srv::InitWaypointSet_Request::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_InitWaypointSet_Request_heading_offset(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

class Init_InitWaypointSet_Request_waypoints
{
public:
  explicit Init_InitWaypointSet_Request_waypoints(::uuv_control_msgs::srv::InitWaypointSet_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointSet_Request_max_forward_speed waypoints(::uuv_control_msgs::srv::InitWaypointSet_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_InitWaypointSet_Request_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

class Init_InitWaypointSet_Request_start_now
{
public:
  explicit Init_InitWaypointSet_Request_start_now(::uuv_control_msgs::srv::InitWaypointSet_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointSet_Request_waypoints start_now(::uuv_control_msgs::srv::InitWaypointSet_Request::_start_now_type arg)
  {
    msg_.start_now = std::move(arg);
    return Init_InitWaypointSet_Request_waypoints(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

class Init_InitWaypointSet_Request_start_time
{
public:
  Init_InitWaypointSet_Request_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitWaypointSet_Request_start_now start_time(::uuv_control_msgs::srv::InitWaypointSet_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_InitWaypointSet_Request_start_now(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return uuv_control_msgs::srv::builder::Init_InitWaypointSet_Request_start_time();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitWaypointSet_Response_success
{
public:
  Init_InitWaypointSet_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::InitWaypointSet_Response success(::uuv_control_msgs::srv::InitWaypointSet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return uuv_control_msgs::srv::builder::Init_InitWaypointSet_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__BUILDER_HPP_
