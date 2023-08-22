// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_

#include "uuv_control_msgs/msg/detail/trajectory_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::msg::TrajectoryPoint>()
{
  return "uuv_control_msgs::msg::TrajectoryPoint";
}

template<>
inline const char * name<uuv_control_msgs::msg::TrajectoryPoint>()
{
  return "uuv_control_msgs/msg/TrajectoryPoint";
}

template<>
struct has_fixed_size<uuv_control_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_control_msgs::msg::TrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
