// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_

#include "uuv_thruster_manager/srv/detail/get_thruster_manager_config__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_thruster_manager
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::GetThrusterManagerConfig_Request>()
{
  return ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_thruster_manager


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_GetThrusterManagerConfig_Response_allocation_matrix
{
public:
  explicit Init_GetThrusterManagerConfig_Response_allocation_matrix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response allocation_matrix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_allocation_matrix_type arg)
  {
    msg_.allocation_matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_n_thrusters
{
public:
  explicit Init_GetThrusterManagerConfig_Response_n_thrusters(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_allocation_matrix n_thrusters(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_n_thrusters_type arg)
  {
    msg_.n_thrusters = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_allocation_matrix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_max_thrust
{
public:
  explicit Init_GetThrusterManagerConfig_Response_max_thrust(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_n_thrusters max_thrust(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_max_thrust_type arg)
  {
    msg_.max_thrust = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_n_thrusters(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_timeout
{
public:
  explicit Init_GetThrusterManagerConfig_Response_timeout(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_max_thrust timeout(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_max_thrust(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_thruster_topic_suffix
{
public:
  explicit Init_GetThrusterManagerConfig_Response_thruster_topic_suffix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_timeout thruster_topic_suffix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_thruster_topic_suffix_type arg)
  {
    msg_.thruster_topic_suffix = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_timeout(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_thruster_topic_prefix
{
public:
  explicit Init_GetThrusterManagerConfig_Response_thruster_topic_prefix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_thruster_topic_suffix thruster_topic_prefix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_thruster_topic_prefix_type arg)
  {
    msg_.thruster_topic_prefix = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_thruster_topic_suffix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_thruster_frame_base
{
public:
  explicit Init_GetThrusterManagerConfig_Response_thruster_frame_base(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_thruster_topic_prefix thruster_frame_base(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_thruster_frame_base_type arg)
  {
    msg_.thruster_frame_base = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_thruster_topic_prefix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_base_link
{
public:
  explicit Init_GetThrusterManagerConfig_Response_base_link(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response & msg)
  : msg_(msg)
  {}
  Init_GetThrusterManagerConfig_Response_thruster_frame_base base_link(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_base_link_type arg)
  {
    msg_.base_link = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_thruster_frame_base(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

class Init_GetThrusterManagerConfig_Response_tf_prefix
{
public:
  Init_GetThrusterManagerConfig_Response_tf_prefix()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetThrusterManagerConfig_Response_base_link tf_prefix(::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response::_tf_prefix_type arg)
  {
    msg_.tf_prefix = std::move(arg);
    return Init_GetThrusterManagerConfig_Response_base_link(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::GetThrusterManagerConfig_Response>()
{
  return uuv_thruster_manager::srv::builder::Init_GetThrusterManagerConfig_Response_tf_prefix();
}

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_MANAGER_CONFIG__BUILDER_HPP_
