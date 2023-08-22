// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/SetPIDParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/set_pid_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPIDParams_Request_ki
{
public:
  explicit Init_SetPIDParams_Request_ki(::uuv_control_msgs::srv::SetPIDParams_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::SetPIDParams_Request ki(::uuv_control_msgs::srv::SetPIDParams_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetPIDParams_Request msg_;
};

class Init_SetPIDParams_Request_kd
{
public:
  explicit Init_SetPIDParams_Request_kd(::uuv_control_msgs::srv::SetPIDParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetPIDParams_Request_ki kd(::uuv_control_msgs::srv::SetPIDParams_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_SetPIDParams_Request_ki(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetPIDParams_Request msg_;
};

class Init_SetPIDParams_Request_kp
{
public:
  Init_SetPIDParams_Request_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPIDParams_Request_kd kp(::uuv_control_msgs::srv::SetPIDParams_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_SetPIDParams_Request_kd(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetPIDParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::SetPIDParams_Request>()
{
  return uuv_control_msgs::srv::builder::Init_SetPIDParams_Request_kp();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPIDParams_Response_success
{
public:
  Init_SetPIDParams_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::SetPIDParams_Response success(::uuv_control_msgs::srv::SetPIDParams_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetPIDParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::SetPIDParams_Response>()
{
  return uuv_control_msgs::srv::builder::Init_SetPIDParams_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_PID_PARAMS__BUILDER_HPP_
