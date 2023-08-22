// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__BUILDER_HPP_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__BUILDER_HPP_

#include "uuv_auv_control_allocator/msg/detail/auv_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_auv_control_allocator
{

namespace msg
{

namespace builder
{

class Init_AUVCommand_command
{
public:
  explicit Init_AUVCommand_command(::uuv_auv_control_allocator::msg::AUVCommand & msg)
  : msg_(msg)
  {}
  ::uuv_auv_control_allocator::msg::AUVCommand command(::uuv_auv_control_allocator::msg::AUVCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_auv_control_allocator::msg::AUVCommand msg_;
};

class Init_AUVCommand_surge_speed
{
public:
  explicit Init_AUVCommand_surge_speed(::uuv_auv_control_allocator::msg::AUVCommand & msg)
  : msg_(msg)
  {}
  Init_AUVCommand_command surge_speed(::uuv_auv_control_allocator::msg::AUVCommand::_surge_speed_type arg)
  {
    msg_.surge_speed = std::move(arg);
    return Init_AUVCommand_command(msg_);
  }

private:
  ::uuv_auv_control_allocator::msg::AUVCommand msg_;
};

class Init_AUVCommand_header
{
public:
  Init_AUVCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AUVCommand_surge_speed header(::uuv_auv_control_allocator::msg::AUVCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AUVCommand_surge_speed(msg_);
  }

private:
  ::uuv_auv_control_allocator::msg::AUVCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_auv_control_allocator::msg::AUVCommand>()
{
  return uuv_auv_control_allocator::msg::builder::Init_AUVCommand_header();
}

}  // namespace uuv_auv_control_allocator

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__BUILDER_HPP_
