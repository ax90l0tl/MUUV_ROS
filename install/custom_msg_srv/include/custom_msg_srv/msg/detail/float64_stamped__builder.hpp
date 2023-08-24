// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg_srv:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
#define CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_

#include "custom_msg_srv/msg/detail/float64_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg_srv
{

namespace msg
{

namespace builder
{

class Init_Float64Stamped_data
{
public:
  explicit Init_Float64Stamped_data(::custom_msg_srv::msg::Float64Stamped & msg)
  : msg_(msg)
  {}
  ::custom_msg_srv::msg::Float64Stamped data(::custom_msg_srv::msg::Float64Stamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg_srv::msg::Float64Stamped msg_;
};

class Init_Float64Stamped_header
{
public:
  Init_Float64Stamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64Stamped_data header(::custom_msg_srv::msg::Float64Stamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64Stamped_data(msg_);
  }

private:
  ::custom_msg_srv::msg::Float64Stamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg_srv::msg::Float64Stamped>()
{
  return custom_msg_srv::msg::builder::Init_Float64Stamped_header();
}

}  // namespace custom_msg_srv

#endif  // CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__BUILDER_HPP_
