// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/get_waypoints__struct.hpp"
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
auto build<::uuv_control_msgs::srv::GetWaypoints_Request>()
{
  return ::uuv_control_msgs::srv::GetWaypoints_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWaypoints_Response_waypoints
{
public:
  Init_GetWaypoints_Response_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::GetWaypoints_Response waypoints(::uuv_control_msgs::srv::GetWaypoints_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::GetWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::GetWaypoints_Response>()
{
  return uuv_control_msgs::srv::builder::Init_GetWaypoints_Response_waypoints();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_WAYPOINTS__BUILDER_HPP_
