// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__BUILDER_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__BUILDER_HPP_

#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_GetThrusterCurve_Request_n_points
{
public:
  explicit Init_GetThrusterCurve_Request_n_points(::uuv_thruster_manager::srv::GetThrusterCurve_Request & msg)
  : msg_(msg)
  {}
  ::uuv_thruster_manager::srv::GetThrusterCurve_Request n_points(::uuv_thruster_manager::srv::GetThrusterCurve_Request::_n_points_type arg)
  {
    msg_.n_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterCurve_Request msg_;
};

class Init_GetThrusterCurve_Request_max
{
public:
  explicit Init_GetThrusterCurve_Request_max(::uuv_thruster_manager::srv::GetThrusterCurve_Request & msg)
  : msg_(msg)
  {}
  Init_GetThrusterCurve_Request_n_points max(::uuv_thruster_manager::srv::GetThrusterCurve_Request::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_GetThrusterCurve_Request_n_points(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterCurve_Request msg_;
};

class Init_GetThrusterCurve_Request_min
{
public:
  Init_GetThrusterCurve_Request_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetThrusterCurve_Request_max min(::uuv_thruster_manager::srv::GetThrusterCurve_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_GetThrusterCurve_Request_max(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterCurve_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return uuv_thruster_manager::srv::builder::Init_GetThrusterCurve_Request_min();
}

}  // namespace uuv_thruster_manager


namespace uuv_thruster_manager
{

namespace srv
{

namespace builder
{

class Init_GetThrusterCurve_Response_thrust
{
public:
  explicit Init_GetThrusterCurve_Response_thrust(::uuv_thruster_manager::srv::GetThrusterCurve_Response & msg)
  : msg_(msg)
  {}
  ::uuv_thruster_manager::srv::GetThrusterCurve_Response thrust(::uuv_thruster_manager::srv::GetThrusterCurve_Response::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterCurve_Response msg_;
};

class Init_GetThrusterCurve_Response_input
{
public:
  Init_GetThrusterCurve_Response_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetThrusterCurve_Response_thrust input(::uuv_thruster_manager::srv::GetThrusterCurve_Response::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_GetThrusterCurve_Response_thrust(msg_);
  }

private:
  ::uuv_thruster_manager::srv::GetThrusterCurve_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return uuv_thruster_manager::srv::builder::Init_GetThrusterCurve_Response_input();
}

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__BUILDER_HPP_
