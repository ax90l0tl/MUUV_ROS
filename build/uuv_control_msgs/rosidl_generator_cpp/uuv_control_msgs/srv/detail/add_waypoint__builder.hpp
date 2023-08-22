// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/add_waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Request_waypoint
{
public:
  Init_AddWaypoint_Request_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::AddWaypoint_Request waypoint(::uuv_control_msgs::srv::AddWaypoint_Request::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::AddWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::AddWaypoint_Request>()
{
  return uuv_control_msgs::srv::builder::Init_AddWaypoint_Request_waypoint();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Response_waypoints
{
public:
  explicit Init_AddWaypoint_Response_waypoints(::uuv_control_msgs::srv::AddWaypoint_Response & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::AddWaypoint_Response waypoints(::uuv_control_msgs::srv::AddWaypoint_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::AddWaypoint_Response msg_;
};

class Init_AddWaypoint_Response_success
{
public:
  Init_AddWaypoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddWaypoint_Response_waypoints success(::uuv_control_msgs::srv::AddWaypoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddWaypoint_Response_waypoints(msg_);
  }

private:
  ::uuv_control_msgs::srv::AddWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::AddWaypoint_Response>()
{
  return uuv_control_msgs::srv::builder::Init_AddWaypoint_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
