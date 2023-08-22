// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_

#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>()
{
  return "uuv_thruster_manager::srv::SetThrusterManagerConfig_Request";
}

template<>
inline const char * name<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>()
{
  return "uuv_thruster_manager/srv/SetThrusterManagerConfig_Request";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>()
{
  return "uuv_thruster_manager::srv::SetThrusterManagerConfig_Response";
}

template<>
inline const char * name<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>()
{
  return "uuv_thruster_manager/srv/SetThrusterManagerConfig_Response";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::SetThrusterManagerConfig>()
{
  return "uuv_thruster_manager::srv::SetThrusterManagerConfig";
}

template<>
inline const char * name<uuv_thruster_manager::srv::SetThrusterManagerConfig>()
{
  return "uuv_thruster_manager/srv/SetThrusterManagerConfig";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::SetThrusterManagerConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>::value &&
    has_fixed_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::SetThrusterManagerConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>::value &&
    has_bounded_size<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>::value
  >
{
};

template<>
struct is_service<uuv_thruster_manager::srv::SetThrusterManagerConfig>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__TRAITS_HPP_
