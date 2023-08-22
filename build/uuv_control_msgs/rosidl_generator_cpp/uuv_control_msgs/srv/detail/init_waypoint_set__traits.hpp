// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'interpolator'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return "uuv_control_msgs::srv::InitWaypointSet_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet_Request>()
{
  return "uuv_control_msgs/srv/InitWaypointSet_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return "uuv_control_msgs::srv::InitWaypointSet_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet_Response>()
{
  return "uuv_control_msgs/srv/InitWaypointSet_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointSet>()
{
  return "uuv_control_msgs::srv::InitWaypointSet";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointSet>()
{
  return "uuv_control_msgs/srv/InitWaypointSet";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointSet>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitWaypointSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointSet>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitWaypointSet_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitWaypointSet>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitWaypointSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitWaypointSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINT_SET__TRAITS_HPP_
