// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_HPP_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'command'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_auv_control_allocator__msg__AUVCommand __attribute__((deprecated))
#else
# define DEPRECATED__uuv_auv_control_allocator__msg__AUVCommand __declspec(deprecated)
#endif

namespace uuv_auv_control_allocator
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AUVCommand_
{
  using Type = AUVCommand_<ContainerAllocator>;

  explicit AUVCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    command(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge_speed = 0.0;
    }
  }

  explicit AUVCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    command(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->surge_speed = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _surge_speed_type =
    double;
  _surge_speed_type surge_speed;
  using _command_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__surge_speed(
    const double & _arg)
  {
    this->surge_speed = _arg;
    return *this;
  }
  Type & set__command(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_auv_control_allocator__msg__AUVCommand
    std::shared_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_auv_control_allocator__msg__AUVCommand
    std::shared_ptr<uuv_auv_control_allocator::msg::AUVCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AUVCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->surge_speed != other.surge_speed) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const AUVCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AUVCommand_

// alias to use template instance with default allocator
using AUVCommand =
  uuv_auv_control_allocator::msg::AUVCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_auv_control_allocator

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__STRUCT_HPP_
