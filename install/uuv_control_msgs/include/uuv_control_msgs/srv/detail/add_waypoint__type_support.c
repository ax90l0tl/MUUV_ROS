// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/add_waypoint__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/add_waypoint__functions.h"
#include "uuv_control_msgs/srv/detail/add_waypoint__struct.h"


// Include directives for member types
// Member `waypoint`
#include "uuv_control_msgs/msg/waypoint.h"
// Member `waypoint`
#include "uuv_control_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__AddWaypoint_Request__init(message_memory);
}

void AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__AddWaypoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_member_array[1] = {
  {
    "waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__AddWaypoint_Request, waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "AddWaypoint_Request",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__AddWaypoint_Request),
  AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_member_array,  // message members
  AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_type_support_handle = {
  0,
  &AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Request)() {
  AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, msg, Waypoint)();
  if (!AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_type_support_handle.typesupport_identifier) {
    AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddWaypoint_Request__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__struct.h"


// Include directives for member types
// Member `waypoints`
// already included above
// #include "uuv_control_msgs/msg/waypoint.h"
// Member `waypoints`
// already included above
// #include "uuv_control_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__AddWaypoint_Response__init(message_memory);
}

void AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__AddWaypoint_Response__fini(message_memory);
}

size_t AddWaypoint_Response__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints(
  const void * untyped_member)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * AddWaypoint_Response__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints(
  const void * untyped_member, size_t index)
{
  const uuv_control_msgs__msg__Waypoint__Sequence * member =
    (const uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AddWaypoint_Response__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints(
  void * untyped_member, size_t index)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AddWaypoint_Response__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints(
  void * untyped_member, size_t size)
{
  uuv_control_msgs__msg__Waypoint__Sequence * member =
    (uuv_control_msgs__msg__Waypoint__Sequence *)(untyped_member);
  uuv_control_msgs__msg__Waypoint__Sequence__fini(member);
  return uuv_control_msgs__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__AddWaypoint_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__AddWaypoint_Response, waypoints),  // bytes offset in struct
    NULL,  // default value
    AddWaypoint_Response__rosidl_typesupport_introspection_c__size_function__Waypoint__waypoints,  // size() function pointer
    AddWaypoint_Response__rosidl_typesupport_introspection_c__get_const_function__Waypoint__waypoints,  // get_const(index) function pointer
    AddWaypoint_Response__rosidl_typesupport_introspection_c__get_function__Waypoint__waypoints,  // get(index) function pointer
    AddWaypoint_Response__rosidl_typesupport_introspection_c__resize_function__Waypoint__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "AddWaypoint_Response",  // message name
  2,  // number of fields
  sizeof(uuv_control_msgs__srv__AddWaypoint_Response),
  AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_member_array,  // message members
  AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_type_support_handle = {
  0,
  &AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Response)() {
  AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, msg, Waypoint)();
  if (!AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_type_support_handle.typesupport_identifier) {
    AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddWaypoint_Response__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/add_waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "AddWaypoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint)() {
  if (!uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, AddWaypoint_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__add_waypoint__rosidl_typesupport_introspection_c__AddWaypoint_service_type_support_handle;
}
