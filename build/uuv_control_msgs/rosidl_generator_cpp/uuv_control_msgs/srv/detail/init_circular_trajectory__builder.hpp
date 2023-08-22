// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/InitCircularTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/init_circular_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitCircularTrajectory_Request_duration
{
public:
  explicit Init_InitCircularTrajectory_Request_duration(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request duration(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_max_forward_speed
{
public:
  explicit Init_InitCircularTrajectory_Request_max_forward_speed(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_duration max_forward_speed(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_max_forward_speed_type arg)
  {
    msg_.max_forward_speed = std::move(arg);
    return Init_InitCircularTrajectory_Request_duration(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_heading_offset
{
public:
  explicit Init_InitCircularTrajectory_Request_heading_offset(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_max_forward_speed heading_offset(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_InitCircularTrajectory_Request_max_forward_speed(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_n_points
{
public:
  explicit Init_InitCircularTrajectory_Request_n_points(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_heading_offset n_points(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_n_points_type arg)
  {
    msg_.n_points = std::move(arg);
    return Init_InitCircularTrajectory_Request_heading_offset(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_angle_offset
{
public:
  explicit Init_InitCircularTrajectory_Request_angle_offset(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_n_points angle_offset(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_angle_offset_type arg)
  {
    msg_.angle_offset = std::move(arg);
    return Init_InitCircularTrajectory_Request_n_points(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_is_clockwise
{
public:
  explicit Init_InitCircularTrajectory_Request_is_clockwise(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_angle_offset is_clockwise(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_is_clockwise_type arg)
  {
    msg_.is_clockwise = std::move(arg);
    return Init_InitCircularTrajectory_Request_angle_offset(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_center
{
public:
  explicit Init_InitCircularTrajectory_Request_center(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_is_clockwise center(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_InitCircularTrajectory_Request_is_clockwise(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_radius
{
public:
  explicit Init_InitCircularTrajectory_Request_radius(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_center radius(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_InitCircularTrajectory_Request_center(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_start_now
{
public:
  explicit Init_InitCircularTrajectory_Request_start_now(::uuv_control_msgs::srv::InitCircularTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_InitCircularTrajectory_Request_radius start_now(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_start_now_type arg)
  {
    msg_.start_now = std::move(arg);
    return Init_InitCircularTrajectory_Request_radius(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

class Init_InitCircularTrajectory_Request_start_time
{
public:
  Init_InitCircularTrajectory_Request_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitCircularTrajectory_Request_start_now start_time(::uuv_control_msgs::srv::InitCircularTrajectory_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_InitCircularTrajectory_Request_start_now(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitCircularTrajectory_Request>()
{
  return uuv_control_msgs::srv::builder::Init_InitCircularTrajectory_Request_start_time();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitCircularTrajectory_Response_success
{
public:
  Init_InitCircularTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::InitCircularTrajectory_Response success(::uuv_control_msgs::srv::InitCircularTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitCircularTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitCircularTrajectory_Response>()
{
  return uuv_control_msgs::srv::builder::Init_InitCircularTrajectory_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_CIRCULAR_TRAJECTORY__BUILDER_HPP_
