// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/GetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/get_sm_controller_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GetSMControllerParams_Request>()
{
  return ::uuv_control_msgs::srv::GetSMControllerParams_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetSMControllerParams_Response_slope
{
public:
  explicit Init_GetSMControllerParams_Response_slope(::uuv_control_msgs::srv::GetSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::GetSMControllerParams_Response slope(::uuv_control_msgs::srv::GetSMControllerParams_Response::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetSMControllerParams_Response msg_;
};

class Init_GetSMControllerParams_Response_ki
{
public:
  explicit Init_GetSMControllerParams_Response_ki(::uuv_control_msgs::srv::GetSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetSMControllerParams_Response_slope ki(::uuv_control_msgs::srv::GetSMControllerParams_Response::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_GetSMControllerParams_Response_slope(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetSMControllerParams_Response msg_;
};

class Init_GetSMControllerParams_Response_kd
{
public:
  explicit Init_GetSMControllerParams_Response_kd(::uuv_control_msgs::srv::GetSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetSMControllerParams_Response_ki kd(::uuv_control_msgs::srv::GetSMControllerParams_Response::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_GetSMControllerParams_Response_ki(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetSMControllerParams_Response msg_;
};

class Init_GetSMControllerParams_Response_k
{
public:
  Init_GetSMControllerParams_Response_k()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSMControllerParams_Response_kd k(::uuv_control_msgs::srv::GetSMControllerParams_Response::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_GetSMControllerParams_Response_kd(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetSMControllerParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GetSMControllerParams_Response>()
{
  return uuv_control_msgs::srv::builder::Init_GetSMControllerParams_Response_k();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_SM_CONTROLLER_PARAMS__BUILDER_HPP_
