// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_auv_control_allocator/msg/detail/auv_command__rosidl_typesupport_introspection_c.h"
#include "uuv_auv_control_allocator/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_auv_control_allocator/msg/detail/auv_command__functions.h"
#include "uuv_auv_control_allocator/msg/detail/auv_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `command`
#include "geometry_msgs/msg/wrench.h"
// Member `command`
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_auv_control_allocator__msg__AUVCommand__init(message_memory);
}

void AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_fini_function(void * message_memory)
{
  uuv_auv_control_allocator__msg__AUVCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_auv_control_allocator__msg__AUVCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surge_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_auv_control_allocator__msg__AUVCommand, surge_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_auv_control_allocator__msg__AUVCommand, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_members = {
  "uuv_auv_control_allocator__msg",  // message namespace
  "AUVCommand",  // message name
  3,  // number of fields
  sizeof(uuv_auv_control_allocator__msg__AUVCommand),
  AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_member_array,  // message members
  AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_type_support_handle = {
  0,
  &AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_auv_control_allocator
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_auv_control_allocator, msg, AUVCommand)() {
  AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  if (!AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_type_support_handle.typesupport_identifier) {
    AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AUVCommand__rosidl_typesupport_introspection_c__AUVCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
