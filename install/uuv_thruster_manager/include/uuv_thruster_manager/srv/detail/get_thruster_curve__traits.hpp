// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_

#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve_Request";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve_Request>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve_Request";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve_Response";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve_Response>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve_Response";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  return "uuv_thruster_manager::srv::GetThrusterCurve";
}

template<>
inline const char * name<uuv_thruster_manager::srv::GetThrusterCurve>()
{
  return "uuv_thruster_manager/srv/GetThrusterCurve";
}

template<>
struct has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>::value &&
    has_fixed_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Request>::value &&
    has_bounded_size<uuv_thruster_manager::srv::GetThrusterCurve_Response>::value
  >
{
};

template<>
struct is_service<uuv_thruster_manager::srv::GetThrusterCurve>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_thruster_manager::srv::GetThrusterCurve_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_thruster_manager::srv::GetThrusterCurve_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__GET_THRUSTER_CURVE__TRAITS_HPP_
