// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/go_to__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GoTo_Request_interpolator
{
public:
  explicit Init_GoTo_Request_interpolator(::uuv_control_msgs::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::GoTo_Request interpolator(::uuv_control_msgs::srv::GoTo_Request::_interpolator_type arg)
  {
    msg_.interpolator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_max_forward_speed
{
public:
  explicit Init_GoTo_Request_max_forward_speed(::uuv_control_msgs::srv::GoTo_Request & msg)
  : msg_(msg)
  {}
  Init_GoTo_Request_interpolator max_forward_speed(::uuv_control_msgs::srv::GoTo_Request::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_GoTo_Request_interpolator(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoTo_Request msg_;
};

class Init_GoTo_Request_waypoint
{
public:
  Init_GoTo_Request_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Request_max_forward_speed waypoint(::uuv_control_msgs::srv::GoTo_Request::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return Init_GoTo_Request_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoTo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GoTo_Request>()
{
  return uuv_control_msgs::srv::builder::Init_GoTo_Request_waypoint();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GoTo_Response_success
{
public:
  Init_GoTo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::GoTo_Response success(::uuv_control_msgs::srv::GoTo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoTo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GoTo_Response>()
{
  return uuv_control_msgs::srv::builder::Init_GoTo_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__BUILDER_HPP_
