// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__BUILDER_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__BUILDER_HPP_

#include "uuv_thruster_manager/srv/detail/thruster_manager_info__struct.hpp"
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
auto build<::uuv_thruster_manager::srv::ThrusterManagerInfo_Request>()
{
  return ::uuv_thruster_manager::srv::ThrusterManagerInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_thruster_manager


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_ThrusterManagerInfo_Response_reference_frame
{
public:
  explicit Init_ThrusterManagerInfo_Response_reference_frame(::uuv_thruster_manager::srv::ThrusterManagerInfo_Response & msg)
  : msg_(msg)
  {}
  ::uuv_thruster_manager::srv::ThrusterManagerInfo_Response reference_frame(::uuv_thruster_manager::srv::ThrusterManagerInfo_Response::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::ThrusterManagerInfo_Response msg_;
};

class Init_ThrusterManagerInfo_Response_allocation_matrix
{
public:
  explicit Init_ThrusterManagerInfo_Response_allocation_matrix(::uuv_thruster_manager::srv::ThrusterManagerInfo_Response & msg)
  : msg_(msg)
  {}
  Init_ThrusterManagerInfo_Response_reference_frame allocation_matrix(::uuv_thruster_manager::srv::ThrusterManagerInfo_Response::_allocation_matrix_type arg)
  {
    msg_.allocation_matrix = std::move(arg);
    return Init_ThrusterManagerInfo_Response_reference_frame(msg_);
  }

private:
  ::uuv_thruster_manager::srv::ThrusterManagerInfo_Response msg_;
};

class Init_ThrusterManagerInfo_Response_n_thrusters
{
public:
  Init_ThrusterManagerInfo_Response_n_thrusters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterManagerInfo_Response_allocation_matrix n_thrusters(::uuv_thruster_manager::srv::ThrusterManagerInfo_Response::_n_thrusters_type arg)
  {
    msg_.n_thrusters = std::move(arg);
    return Init_ThrusterManagerInfo_Response_allocation_matrix(msg_);
  }

private:
  ::uuv_thruster_manager::srv::ThrusterManagerInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::ThrusterManagerInfo_Response>()
{
  return uuv_thruster_manager::srv::builder::Init_ThrusterManagerInfo_Response_n_thrusters();
}

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__THRUSTER_MANAGER_INFO__BUILDER_HPP_
