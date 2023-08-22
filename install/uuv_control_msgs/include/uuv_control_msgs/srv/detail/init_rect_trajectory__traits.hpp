// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitRectTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/init_rect_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory_Request>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory_Request>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory_Response>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory_Response>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitRectTrajectory>()
{
  return "uuv_control_msgs::srv::InitRectTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitRectTrajectory>()
{
  return "uuv_control_msgs/srv/InitRectTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitRectTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitRectTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitRectTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitRectTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitRectTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_RECT_TRAJECTORY__TRAITS_HPP_
