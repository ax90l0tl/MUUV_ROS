// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitHelicalTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/init_helical_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory_Request>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory_Request>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory_Response>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory_Response>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitHelicalTrajectory>()
{
  return "uuv_control_msgs::srv::InitHelicalTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitHelicalTrajectory>()
{
  return "uuv_control_msgs/srv/InitHelicalTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitHelicalTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitHelicalTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitHelicalTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitHelicalTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_HELICAL_TRAJECTORY__TRAITS_HPP_
