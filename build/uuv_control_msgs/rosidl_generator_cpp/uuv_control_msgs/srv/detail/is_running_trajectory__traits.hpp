// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/IsRunningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/is_running_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory_Request>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory_Request>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory_Response>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory_Response>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::IsRunningTrajectory>()
{
  return "uuv_control_msgs::srv::IsRunningTrajectory";
}

template<>
inline const char * name<uuv_control_msgs::srv::IsRunningTrajectory>()
{
  return "uuv_control_msgs/srv/IsRunningTrajectory";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::IsRunningTrajectory_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::IsRunningTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::IsRunningTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::IsRunningTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__TRAITS_HPP_
