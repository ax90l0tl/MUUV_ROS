// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/ResetController.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__RESET_CONTROLLER__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__RESET_CONTROLLER__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/reset_controller__struct.hpp"
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
auto build<::uuv_control_msgs::srv::ResetController_Request>()
{
  return ::uuv_control_msgs::srv::ResetController_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetController_Response_success
{
public:
  Init_ResetController_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::ResetController_Response success(::uuv_control_msgs::srv::ResetController_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::ResetController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::ResetController_Response>()
{
  return uuv_control_msgs::srv::builder::Init_ResetController_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__RESET_CONTROLLER__BUILDER_HPP_
