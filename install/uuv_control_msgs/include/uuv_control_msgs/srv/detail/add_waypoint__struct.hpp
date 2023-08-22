// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'waypoint'
#include "uuv_control_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddWaypoint_Request_
{
  using Type = AddWaypoint_Request_<ContainerAllocator>;

  explicit AddWaypoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint(_init)
  {
    (void)_init;
  }

  explicit AddWaypoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoint(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _waypoint_type =
    uuv_control_msgs::msg::Waypoint_<ContainerAllocator>;
  _waypoint_type waypoint;

  // setters for named parameter idiom
  Type & set__waypoint(
    const uuv_control_msgs::msg::Waypoint_<ContainerAllocator> & _arg)
  {
    this->waypoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Request
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Request
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddWaypoint_Request_ & other) const
  {
    if (this->waypoint != other.waypoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddWaypoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddWaypoint_Request_

// alias to use template instance with default allocator
using AddWaypoint_Request =
  uuv_control_msgs::srv::AddWaypoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


// Include directives for member types
// Member 'waypoints'
// already included above
// #include "uuv_control_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddWaypoint_Response_
{
  using Type = AddWaypoint_Response_<ContainerAllocator>;

  explicit AddWaypoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit AddWaypoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _waypoints_type =
    std::vector<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<uuv_control_msgs::msg::Waypoint_<ContainerAllocator>>::other>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Response
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__AddWaypoint_Response
    std::shared_ptr<uuv_control_msgs::srv::AddWaypoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddWaypoint_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddWaypoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddWaypoint_Response_

// alias to use template instance with default allocator
using AddWaypoint_Response =
  uuv_control_msgs::srv::AddWaypoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct AddWaypoint
{
  using Request = uuv_control_msgs::srv::AddWaypoint_Request;
  using Response = uuv_control_msgs::srv::AddWaypoint_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__ADD_WAYPOINT__STRUCT_HPP_
