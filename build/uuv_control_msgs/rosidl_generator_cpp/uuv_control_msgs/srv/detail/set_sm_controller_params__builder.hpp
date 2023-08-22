// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/SetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/set_sm_controller_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSMControllerParams_Request_slope
{
public:
  explicit Init_SetSMControllerParams_Request_slope(::uuv_control_msgs::srv::SetSMControllerParams_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::SetSMControllerParams_Request slope(::uuv_control_msgs::srv::SetSMControllerParams_Request::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetSMControllerParams_Request msg_;
};

class Init_SetSMControllerParams_Request_ki
{
public:
  explicit Init_SetSMControllerParams_Request_ki(::uuv_control_msgs::srv::SetSMControllerParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetSMControllerParams_Request_slope ki(::uuv_control_msgs::srv::SetSMControllerParams_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_SetSMControllerParams_Request_slope(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetSMControllerParams_Request msg_;
};

class Init_SetSMControllerParams_Request_kd
{
public:
  explicit Init_SetSMControllerParams_Request_kd(::uuv_control_msgs::srv::SetSMControllerParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetSMControllerParams_Request_ki kd(::uuv_control_msgs::srv::SetSMControllerParams_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_SetSMControllerParams_Request_ki(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetSMControllerParams_Request msg_;
};

class Init_SetSMControllerParams_Request_k
{
public:
  Init_SetSMControllerParams_Request_k()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSMControllerParams_Request_kd k(::uuv_control_msgs::srv::SetSMControllerParams_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_SetSMControllerParams_Request_kd(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetSMControllerParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::SetSMControllerParams_Request>()
{
  return uuv_control_msgs::srv::builder::Init_SetSMControllerParams_Request_k();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSMControllerParams_Response_success
{
public:
  Init_SetSMControllerParams_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::SetSMControllerParams_Response success(::uuv_control_msgs::srv::SetSMControllerParams_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::SetSMControllerParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::SetSMControllerParams_Response>()
{
  return uuv_control_msgs::srv::builder::Init_SetSMControllerParams_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__BUILDER_HPP_
