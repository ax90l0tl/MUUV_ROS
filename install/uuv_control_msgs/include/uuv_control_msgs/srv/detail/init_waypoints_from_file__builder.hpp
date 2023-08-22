// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__BUILDER_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__BUILDER_HPP_

#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitWaypointsFromFile_Request_interpolator
{
public:
  explicit Init_InitWaypointsFromFile_Request_interpolator(::uuv_control_msgs::srv::InitWaypointsFromFile_Request & msg)
  : msg_(msg)
  {}
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Request interpolator(::uuv_control_msgs::srv::InitWaypointsFromFile_Request::_interpolator_type arg)
  {
    msg_.interpolator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Request msg_;
};

class Init_InitWaypointsFromFile_Request_filename
{
public:
  explicit Init_InitWaypointsFromFile_Request_filename(::uuv_control_msgs::srv::InitWaypointsFromFile_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointsFromFile_Request_interpolator filename(::uuv_control_msgs::srv::InitWaypointsFromFile_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_InitWaypointsFromFile_Request_interpolator(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Request msg_;
};

class Init_InitWaypointsFromFile_Request_start_now
{
public:
  explicit Init_InitWaypointsFromFile_Request_start_now(::uuv_control_msgs::srv::InitWaypointsFromFile_Request & msg)
  : msg_(msg)
  {}
  Init_InitWaypointsFromFile_Request_filename start_now(::uuv_control_msgs::srv::InitWaypointsFromFile_Request::_start_now_type arg)
  {
    msg_.start_now = std::move(arg);
    return Init_InitWaypointsFromFile_Request_filename(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Request msg_;
};

class Init_InitWaypointsFromFile_Request_start_time
{
public:
  Init_InitWaypointsFromFile_Request_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InitWaypointsFromFile_Request_start_now start_time(::uuv_control_msgs::srv::InitWaypointsFromFile_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_InitWaypointsFromFile_Request_start_now(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitWaypointsFromFile_Request>()
{
  return uuv_control_msgs::srv::builder::Init_InitWaypointsFromFile_Request_start_time();
}

}  // namespace uuv_control_msgs


namespace uuv_control_msgs
{

namespace srv
{

namespace builder
{

class Init_InitWaypointsFromFile_Response_success
{
public:
  Init_InitWaypointsFromFile_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Response success(::uuv_control_msgs::srv::InitWaypointsFromFile_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_control_msgs::srv::InitWaypointsFromFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_control_msgs::srv::InitWaypointsFromFile_Response>()
{
  return uuv_control_msgs::srv::builder::Init_InitWaypointsFromFile_Response_success();
}

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__BUILDER_HPP_
