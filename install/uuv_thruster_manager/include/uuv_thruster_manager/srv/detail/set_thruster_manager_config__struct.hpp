// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_
#define UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Request __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetThrusterManagerConfig_Request_
{
  using Type = SetThrusterManagerConfig_Request_<ContainerAllocator>;

  explicit SetThrusterManagerConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_link = "";
      this->thruster_frame_base = "";
      this->thruster_topic_prefix = "";
      this->thruster_topic_suffix = "";
      this->timeout = 0.0;
      this->max_thrust = 0.0;
    }
  }

  explicit SetThrusterManagerConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_link(_alloc),
    thruster_frame_base(_alloc),
    thruster_topic_prefix(_alloc),
    thruster_topic_suffix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_link = "";
      this->thruster_frame_base = "";
      this->thruster_topic_prefix = "";
      this->thruster_topic_suffix = "";
      this->timeout = 0.0;
      this->max_thrust = 0.0;
    }
  }

  // field types and members
  using _base_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _base_link_type base_link;
  using _thruster_frame_base_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_frame_base_type thruster_frame_base;
  using _thruster_topic_prefix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_topic_prefix_type thruster_topic_prefix;
  using _thruster_topic_suffix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _thruster_topic_suffix_type thruster_topic_suffix;
  using _timeout_type =
    double;
  _timeout_type timeout;
  using _max_thrust_type =
    double;
  _max_thrust_type max_thrust;

  // setters for named parameter idiom
  Type & set__base_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->base_link = _arg;
    return *this;
  }
  Type & set__thruster_frame_base(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_frame_base = _arg;
    return *this;
  }
  Type & set__thruster_topic_prefix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_topic_prefix = _arg;
    return *this;
  }
  Type & set__thruster_topic_suffix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->thruster_topic_suffix = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__max_thrust(
    const double & _arg)
  {
    this->max_thrust = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> DEFAULT_BASE_LINK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> DEFAULT_THRUSTER_FRAME_BASE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> DEFAULT_PREFIX;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> DEFAULT_SUFFIX;

  // pointer types
  using RawPtr =
    uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Request
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Request
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetThrusterManagerConfig_Request_ & other) const
  {
    if (this->base_link != other.base_link) {
      return false;
    }
    if (this->thruster_frame_base != other.thruster_frame_base) {
      return false;
    }
    if (this->thruster_topic_prefix != other.thruster_topic_prefix) {
      return false;
    }
    if (this->thruster_topic_suffix != other.thruster_topic_suffix) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->max_thrust != other.max_thrust) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetThrusterManagerConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetThrusterManagerConfig_Request_

// alias to use template instance with default allocator
using SetThrusterManagerConfig_Request =
  uuv_thruster_manager::srv::SetThrusterManagerConfig_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetThrusterManagerConfig_Request_<ContainerAllocator>::DEFAULT_BASE_LINK = "/base_link";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetThrusterManagerConfig_Request_<ContainerAllocator>::DEFAULT_THRUSTER_FRAME_BASE = "/thruster_";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetThrusterManagerConfig_Request_<ContainerAllocator>::DEFAULT_PREFIX = "thrusters/";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetThrusterManagerConfig_Request_<ContainerAllocator>::DEFAULT_SUFFIX = "/input";

}  // namespace srv

}  // namespace uuv_thruster_manager


#ifndef _WIN32
# define DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Response __declspec(deprecated)
#endif

namespace uuv_thruster_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetThrusterManagerConfig_Response_
{
  using Type = SetThrusterManagerConfig_Response_<ContainerAllocator>;

  explicit SetThrusterManagerConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetThrusterManagerConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Response
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_thruster_manager__srv__SetThrusterManagerConfig_Response
    std::shared_ptr<uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetThrusterManagerConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetThrusterManagerConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetThrusterManagerConfig_Response_

// alias to use template instance with default allocator
using SetThrusterManagerConfig_Response =
  uuv_thruster_manager::srv::SetThrusterManagerConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_thruster_manager

namespace uuv_thruster_manager
{

namespace srv
{

struct SetThrusterManagerConfig
{
  using Request = uuv_thruster_manager::srv::SetThrusterManagerConfig_Request;
  using Response = uuv_thruster_manager::srv::SetThrusterManagerConfig_Response;
};

}  // namespace srv

}  // namespace uuv_thruster_manager

#endif  // UUV_THRUSTER_MANAGER__SRV__DETAIL__SET_THRUSTER_MANAGER_CONFIG__STRUCT_HPP_
