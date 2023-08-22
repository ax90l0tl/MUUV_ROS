// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/GetPIDParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPIDParams_Request_
{
  using Type = GetPIDParams_Request_<ContainerAllocator>;

  explicit GetPIDParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetPIDParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Request
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Request
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPIDParams_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPIDParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPIDParams_Request_

// alias to use template instance with default allocator
using GetPIDParams_Request =
  uuv_control_msgs::srv::GetPIDParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPIDParams_Response_
{
  using Type = GetPIDParams_Response_<ContainerAllocator>;

  explicit GetPIDParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetPIDParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _kp_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _kp_type kp;
  using _kd_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _kd_type kd;
  using _ki_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _ki_type ki;

  // setters for named parameter idiom
  Type & set__kp(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__ki(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->ki = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Response
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GetPIDParams_Response
    std::shared_ptr<uuv_control_msgs::srv::GetPIDParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPIDParams_Response_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPIDParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPIDParams_Response_

// alias to use template instance with default allocator
using GetPIDParams_Response =
  uuv_control_msgs::srv::GetPIDParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct GetPIDParams
{
  using Request = uuv_control_msgs::srv::GetPIDParams_Request;
  using Response = uuv_control_msgs::srv::GetPIDParams_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_PID_PARAMS__STRUCT_HPP_
