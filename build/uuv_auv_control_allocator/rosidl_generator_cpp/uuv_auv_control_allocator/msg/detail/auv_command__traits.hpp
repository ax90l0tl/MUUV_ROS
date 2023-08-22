// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_

#include "uuv_auv_control_allocator/msg/detail/auv_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'command'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_auv_control_allocator::msg::AUVCommand>()
{
  return "uuv_auv_control_allocator::msg::AUVCommand";
}

template<>
inline const char * name<uuv_auv_control_allocator::msg::AUVCommand>()
{
  return "uuv_auv_control_allocator/msg/AUVCommand";
}

template<>
struct has_fixed_size<uuv_auv_control_allocator::msg::AUVCommand>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Wrench>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_auv_control_allocator::msg::AUVCommand>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Wrench>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_auv_control_allocator::msg::AUVCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__TRAITS_HPP_
