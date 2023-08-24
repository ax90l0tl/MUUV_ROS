// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg_srv:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__TRAITS_HPP_
#define CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__TRAITS_HPP_

#include "custom_msg_srv/msg/detail/float64_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msg_srv::msg::Float64Stamped>()
{
  return "custom_msg_srv::msg::Float64Stamped";
}

template<>
inline const char * name<custom_msg_srv::msg::Float64Stamped>()
{
  return "custom_msg_srv/msg/Float64Stamped";
}

template<>
struct has_fixed_size<custom_msg_srv::msg::Float64Stamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<custom_msg_srv::msg::Float64Stamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<custom_msg_srv::msg::Float64Stamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__TRAITS_HPP_
