// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/SetSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSMControllerParams_Request_
{
  using Type = SetSMControllerParams_Request_<ContainerAllocator>;

  explicit SetSMControllerParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetSMControllerParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _k_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _k_type k;
  using _kd_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _kd_type kd;
  using _ki_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _ki_type ki;
  using _slope_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _slope_type slope;

  // setters for named parameter idiom
  Type & set__k(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->k = _arg;
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
  Type & set__slope(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->slope = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Request
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Request
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSMControllerParams_Request_ & other) const
  {
    if (this->k != other.k) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSMControllerParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSMControllerParams_Request_

// alias to use template instance with default allocator
using SetSMControllerParams_Request =
  uuv_control_msgs::srv::SetSMControllerParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSMControllerParams_Response_
{
  using Type = SetSMControllerParams_Response_<ContainerAllocator>;

  explicit SetSMControllerParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetSMControllerParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Response
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__SetSMControllerParams_Response
    std::shared_ptr<uuv_control_msgs::srv::SetSMControllerParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSMControllerParams_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSMControllerParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSMControllerParams_Response_

// alias to use template instance with default allocator
using SetSMControllerParams_Response =
  uuv_control_msgs::srv::SetSMControllerParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct SetSMControllerParams
{
  using Request = uuv_control_msgs::srv::SetSMControllerParams_Request;
  using Response = uuv_control_msgs::srv::SetSMControllerParams_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__SET_SM_CONTROLLER_PARAMS__STRUCT_HPP_
