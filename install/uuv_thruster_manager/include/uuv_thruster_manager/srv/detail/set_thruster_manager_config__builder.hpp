// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_

#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_SetThrusterManagerConfig_Request_max_thrust
{
public:
  explicit Init_SetThrusterManagerConfig_Request_max_thrust(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request & msg)
  : msg_(msg)
  {}
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request max_thrust(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_max_thrust_type arg)
  {
    msg_.max_thrust = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

class Init_SetThrusterManagerConfig_Request_timeout
{
public:
  explicit Init_SetThrusterManagerConfig_Request_timeout(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetThrusterManagerConfig_Request_max_thrust timeout(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_SetThrusterManagerConfig_Request_max_thrust(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

class Init_SetThrusterManagerConfig_Request_thruster_topic_suffix
{
public:
  explicit Init_SetThrusterManagerConfig_Request_thruster_topic_suffix(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetThrusterManagerConfig_Request_timeout thruster_topic_suffix(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_thruster_topic_suffix_type arg)
  {
    msg_.thruster_topic_suffix = std::move(arg);
    return Init_SetThrusterManagerConfig_Request_timeout(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

class Init_SetThrusterManagerConfig_Request_thruster_topic_prefix
{
public:
  explicit Init_SetThrusterManagerConfig_Request_thruster_topic_prefix(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetThrusterManagerConfig_Request_thruster_topic_suffix thruster_topic_prefix(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_thruster_topic_prefix_type arg)
  {
    msg_.thruster_topic_prefix = std::move(arg);
    return Init_SetThrusterManagerConfig_Request_thruster_topic_suffix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

class Init_SetThrusterManagerConfig_Request_thruster_frame_base
{
public:
  explicit Init_SetThrusterManagerConfig_Request_thruster_frame_base(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetThrusterManagerConfig_Request_thruster_topic_prefix thruster_frame_base(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_thruster_frame_base_type arg)
  {
    msg_.thruster_frame_base = std::move(arg);
    return Init_SetThrusterManagerConfig_Request_thruster_topic_prefix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

class Init_SetThrusterManagerConfig_Request_base_link
{
public:
  Init_SetThrusterManagerConfig_Request_base_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetThrusterManagerConfig_Request_thruster_frame_base base_link(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request::_base_link_type arg)
  {
    msg_.base_link = std::move(arg);
    return Init_SetThrusterManagerConfig_Request_thruster_frame_base(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>()
{
  return uuv_thruster_manager::srv::builder::Init_SetThrusterManagerConfig_Request_base_link();
}

}  // namespace uuv_thruster_manager


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_SetThrusterManagerConfig_Response_success
{
public:
  Init_SetThrusterManagerConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Response success(::uuv_thruster_manager::srv::SetThrusterManagerConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::SetThrusterManagerConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>()
{
  return uuv_thruster_manager::srv::builder::Init_SetThrusterManagerConfig_Response_success();
}

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_
