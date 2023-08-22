// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/InitRectTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/init_rect_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitRectTrajectory_Request_max_forward_speed
{
public:
  explicit Init_InitRectTrajectory_Request_max_forward_speed(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::InitRectTrajectory_Request max_forward_speed(::uuv_control_msgs::srv::InitRectTrajectory_Request::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_heading_offset
{
public:
  explicit Init_InitRectTrajectory_Request_heading_offset(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_max_forward_speed heading_offset(::uuv_control_msgs::srv::InitRectTrajectory_Request::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_InitRectTrajectory_Request_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_angle_offset
{
public:
  explicit Init_InitRectTrajectory_Request_angle_offset(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_heading_offset angle_offset(::uuv_control_msgs::srv::InitRectTrajectory_Request::_angle_offset_type arg)
  {
    msg_.angle_offset = std::move(arg);
    return Init_InitRectTrajectory_Request_heading_offset(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_width
{
public:
  explicit Init_InitRectTrajectory_Request_width(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_angle_offset width(::uuv_control_msgs::srv::InitRectTrajectory_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_InitRectTrajectory_Request_angle_offset(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_height
{
public:
  explicit Init_InitRectTrajectory_Request_height(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_width height(::uuv_control_msgs::srv::InitRectTrajectory_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_InitRectTrajectory_Request_width(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_origin
{
public:
  explicit Init_InitRectTrajectory_Request_origin(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_height origin(::uuv_control_msgs::srv::InitRectTrajectory_Request::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_InitRectTrajectory_Request_height(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_start_now
{
public:
  explicit Init_InitRectTrajectory_Request_start_now(::uuv_control_msgs::srv::InitRectTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitRectTrajectory_Request_origin start_now(::uuv_control_msgs::srv::InitRectTrajectory_Request::_start_now_type arg)
  {
    msg_.start_now = std::move(arg);
    return Init_InitRectTrajectory_Request_origin(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

class Init_InitRectTrajectory_Request_start_time
{
public:
  Init_InitRectTrajectory_Request_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitRectTrajectory_Request_start_now start_time(::uuv_control_msgs::srv::InitRectTrajectory_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_InitRectTrajectory_Request_start_now(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitRectTrajectory_Request>()
{
  return uuv_control_msgs::srv::builder::Init_InitRectTrajectory_Request_start_time();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitRectTrajectory_Response_success
{
public:
  Init_InitRectTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::InitRectTrajectory_Response success(::uuv_control_msgs::srv::InitRectTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitRectTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitRectTrajectory_Response>()
{
  return uuv_control_msgs::srv::builder::Init_InitRectTrajectory_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__BUILDER_HPP_
