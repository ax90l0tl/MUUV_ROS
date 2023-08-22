// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.hpp"
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
auto build<::uuv_control_msgs::srv::GetMBSMControllerParams_Request>()
{
  return ::uuv_control_msgs::srv::GetMBSMControllerParams_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMBSMControllerParams_Response_drift_prevent
{
public:
  explicit Init_GetMBSMControllerParams_Response_drift_prevent(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response drift_prevent(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_drift_prevent_type arg)
  {
    msg_.drift_prevent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_rho_0
{
public:
  explicit Init_GetMBSMControllerParams_Response_rho_0(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetMBSMControllerParams_Response_drift_prevent rho_0(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_rho_0_type arg)
  {
    msg_.rho_0 = std::move(arg);
    return Init_GetMBSMControllerParams_Response_drift_prevent(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_adapt_slope
{
public:
  explicit Init_GetMBSMControllerParams_Response_adapt_slope(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetMBSMControllerParams_Response_rho_0 adapt_slope(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_adapt_slope_type arg)
  {
    msg_.adapt_slope = std::move(arg);
    return Init_GetMBSMControllerParams_Response_rho_0(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_c
{
public:
  explicit Init_GetMBSMControllerParams_Response_c(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetMBSMControllerParams_Response_adapt_slope c(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_GetMBSMControllerParams_Response_adapt_slope(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_k
{
public:
  explicit Init_GetMBSMControllerParams_Response_k(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetMBSMControllerParams_Response_c k(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_GetMBSMControllerParams_Response_c(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_rho_constant
{
public:
  explicit Init_GetMBSMControllerParams_Response_rho_constant(::uuv_control_msgs::srv::GetMBSMControllerParams_Response & msg)
  : msg_(msg)
  {}
  Init_GetMBSMControllerParams_Response_k rho_constant(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_rho_constant_type arg)
  {
    msg_.rho_constant = std::move(arg);
    return Init_GetMBSMControllerParams_Response_k(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

class Init_GetMBSMControllerParams_Response_lambda_array
{
public:
  Init_GetMBSMControllerParams_Response_lambda_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMBSMControllerParams_Response_rho_constant lambda_array(::uuv_control_msgs::srv::GetMBSMControllerParams_Response::_lambda_array_type arg)
  {
    msg_.lambda_array = std::move(arg);
    return Init_GetMBSMControllerParams_Response_rho_constant(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetMBSMControllerParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GetMBSMControllerParams_Response>()
{
  return uuv_control_msgs::srv::builder::Init_GetMBSMControllerParams_Response_lambda_array();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__BUILDER_HPP_
