// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/InitHelicalTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/init_helical_trajectory__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/init_helical_trajectory__functions.h"
#include "uuv_control_msgs/srv/detail/init_helical_trajectory__struct.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__InitHelicalTrajectory_Request__init(message_memory);
}

void InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__InitHelicalTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_member_array[12] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_now",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, start_now),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_clockwise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, is_clockwise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, angle_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, n_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, heading_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, max_forward_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_turns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, n_turns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Request, delta_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "InitHelicalTrajectory_Request",  // message name
  12,  // number of fields
  sizeof(uuv_control_msgs__srv__InitHelicalTrajectory_Request),
  InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_member_array,  // message members
  InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_type_support_handle = {
  0,
  &InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Request)() {
  InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InitHelicalTrajectory_Request__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/init_helical_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_helical_trajectory__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_helical_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__InitHelicalTrajectory_Response__init(message_memory);
}

void InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__InitHelicalTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__InitHelicalTrajectory_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "InitHelicalTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__InitHelicalTrajectory_Response),
  InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_member_array,  // message members
  InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_type_support_handle = {
  0,
  &InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Response)() {
  if (!InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InitHelicalTrajectory_Response__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_helical_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "InitHelicalTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory)() {
  if (!uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, InitHelicalTrajectory_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__init_helical_trajectory__rosidl_typesupport_introspection_c__InitHelicalTrajectory_service_type_support_handle;
}
