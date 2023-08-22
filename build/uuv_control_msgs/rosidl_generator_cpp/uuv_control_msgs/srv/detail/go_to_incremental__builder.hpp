// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/GoToIncremental.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/go_to_incremental__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GoToIncremental_Request_interpolator
{
public:
  explicit Init_GoToIncremental_Request_interpolator(::uuv_control_msgs::srv::GoToIncremental_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::GoToIncremental_Request interpolator(::uuv_control_msgs::srv::GoToIncremental_Request::_interpolator_type arg)
  {
    msg_.interpolator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoToIncremental_Request msg_;
};

class Init_GoToIncremental_Request_max_forward_speed
{
public:
  explicit Init_GoToIncremental_Request_max_forward_speed(::uuv_control_msgs::srv::GoToIncremental_Request & msg)
  : msg_(msg)
  {}
  Init_GoToIncremental_Request_interpolator max_forward_speed(::uuv_control_msgs::srv::GoToIncremental_Request::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_GoToIncremental_Request_interpolator(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoToIncremental_Request msg_;
};

class Init_GoToIncremental_Request_step
{
public:
  Init_GoToIncremental_Request_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToIncremental_Request_max_forward_speed step(::uuv_control_msgs::srv::GoToIncremental_Request::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_GoToIncremental_Request_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoToIncremental_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GoToIncremental_Request>()
{
  return uuv_control_msgs::srv::builder::Init_GoToIncremental_Request_step();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GoToIncremental_Response_success
{
public:
  Init_GoToIncremental_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::GoToIncremental_Response success(::uuv_control_msgs::srv::GoToIncremental_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GoToIncremental_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GoToIncremental_Response>()
{
  return uuv_control_msgs::srv::builder::Init_GoToIncremental_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO_INCREMENTAL__BUILDER_HPP_
