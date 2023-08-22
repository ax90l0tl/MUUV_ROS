// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_HPP_

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
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'waypoints'
#include "uuv_control_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__msg__WaypointSet __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__msg__WaypointSet __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointSet_
{
  using Type = WaypointSet_<ContainerAllocator>;

  explicit WaypointSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start_time(_init)
  {
    (void)_init;
  }

  explicit WaypointSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    start_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _waypoints_type =
    std::vector<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>::other>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>::other> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__msg__WaypointSet
    std::shared_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__msg__WaypointSet
    std::shared_ptr<uuv_control_msgs::msg::WaypointSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointSet_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointSet_

// alias to use template instance with default allocator
using WaypointSet =
  uuv_control_msgs::msg::WaypointSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__STRUCT_HPP_
