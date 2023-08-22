// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Request __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMBSMControllerParams_Request_
{
  using Type = GetMBSMControllerParams_Request_<ContainerAllocator>;

  explicit GetMBSMControllerParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetMBSMControllerParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Request
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Request
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMBSMControllerParams_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMBSMControllerParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMBSMControllerParams_Request_

// alias to use template instance with default allocator
using GetMBSMControllerParams_Request =
  uuv_control_msgs::srv::GetMBSMControllerParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Response __declspec(deprecated)
#endif

namespace uuv_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMBSMControllerParams_Response_
{
  using Type = GetMBSMControllerParams_Response_<ContainerAllocator>;

  explicit GetMBSMControllerParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drift_prevent = 0.0;
    }
  }

  explicit GetMBSMControllerParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drift_prevent = 0.0;
    }
  }

  // field types and members
  using _lambda_array_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _lambda_array_type lambda_array;
  using _rho_constant_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _rho_constant_type rho_constant;
  using _k_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _k_type k;
  using _c_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _c_type c;
  using _adapt_slope_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _adapt_slope_type adapt_slope;
  using _rho_0_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _rho_0_type rho_0;
  using _drift_prevent_type =
    double;
  _drift_prevent_type drift_prevent;

  // setters for named parameter idiom
  Type & set__lambda_array(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->lambda_array = _arg;
    return *this;
  }
  Type & set__rho_constant(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->rho_constant = _arg;
    return *this;
  }
  Type & set__k(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__c(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__adapt_slope(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->adapt_slope = _arg;
    return *this;
  }
  Type & set__rho_0(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->rho_0 = _arg;
    return *this;
  }
  Type & set__drift_prevent(
    const double & _arg)
  {
    this->drift_prevent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Response
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_control_msgs__srv__GetMBSMControllerParams_Response
    std::shared_ptr<uuv_control_msgs::srv::GetMBSMControllerParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMBSMControllerParams_Response_ & other) const
  {
    if (this->lambda_array != other.lambda_array) {
      return false;
    }
    if (this->rho_constant != other.rho_constant) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->adapt_slope != other.adapt_slope) {
      return false;
    }
    if (this->rho_0 != other.rho_0) {
      return false;
    }
    if (this->drift_prevent != other.drift_prevent) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMBSMControllerParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMBSMControllerParams_Response_

// alias to use template instance with default allocator
using GetMBSMControllerParams_Response =
  uuv_control_msgs::srv::GetMBSMControllerParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_control_msgs

namespace uuv_control_msgs
{

namespace srv
{

struct GetMBSMControllerParams
{
  using Request = uuv_control_msgs::srv::GetMBSMControllerParams_Request;
  using Response = uuv_control_msgs::srv::GetMBSMControllerParams_Response;
};

}  // namespace srv

}  // namespace uuv_control_msgs

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_HPP_
