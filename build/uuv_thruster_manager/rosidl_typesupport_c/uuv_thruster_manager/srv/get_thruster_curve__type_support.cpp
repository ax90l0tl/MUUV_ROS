// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uuv_thruster_manager/msg/rosidl_typesupport_c__visibility_control.h"
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterCurve_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterCurve_Request_type_support_ids_t;

static const _GetThrusterCurve_Request_type_support_ids_t _GetThrusterCurve_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterCurve_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterCurve_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterCurve_Request_type_support_symbol_names_t _GetThrusterCurve_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)),
  }
};

typedef struct _GetThrusterCurve_Request_type_support_data_t
{
  void * data[2];
} _GetThrusterCurve_Request_type_support_data_t;

static _GetThrusterCurve_Request_type_support_data_t _GetThrusterCurve_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterCurve_Request_message_typesupport_map = {
  2,
  "uuv_thruster_manager",
  &_GetThrusterCurve_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterCurve_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterCurve_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetThrusterCurve_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterCurve_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_thruster_manager

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uuv_thruster_manager, srv, GetThrusterCurve_Request)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_c::GetThrusterCurve_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/get_thruster_curve__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterCurve_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterCurve_Response_type_support_ids_t;

static const _GetThrusterCurve_Response_type_support_ids_t _GetThrusterCurve_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterCurve_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterCurve_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterCurve_Response_type_support_symbol_names_t _GetThrusterCurve_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)),
  }
};

typedef struct _GetThrusterCurve_Response_type_support_data_t
{
  void * data[2];
} _GetThrusterCurve_Response_type_support_data_t;

static _GetThrusterCurve_Response_type_support_data_t _GetThrusterCurve_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterCurve_Response_message_typesupport_map = {
  2,
  "uuv_thruster_manager",
  &_GetThrusterCurve_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterCurve_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterCurve_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetThrusterCurve_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterCurve_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_thruster_manager

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_thruster_manager
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uuv_thruster_manager, srv, GetThrusterCurve_Response)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_c::GetThrusterCurve_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_thruster_manager/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_thruster_manager
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterCurve_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterCurve_type_support_ids_t;

static const _GetThrusterCurve_type_support_ids_t _GetThrusterCurve_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterCurve_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterCurve_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterCurve_type_support_symbol_names_t _GetThrusterCurve_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_thruster_manager, srv, GetThrusterCurve)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_thruster_manager, srv, GetThrusterCurve)),
  }
};

typedef struct _GetThrusterCurve_type_support_data_t
{
  void * data[2];
} _GetThrusterCurve_type_support_data_t;

static _GetThrusterCurve_type_support_data_t _GetThrusterCurve_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterCurve_service_typesupport_map = {
  2,
  "uuv_thruster_manager",
  &_GetThrusterCurve_service_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterCurve_service_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterCurve_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetThrusterCurve_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterCurve_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_thruster_manager

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_thruster_manager
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uuv_thruster_manager, srv, GetThrusterCurve)() {
  return &::uuv_thruster_manager::srv::rosidl_typesupport_c::GetThrusterCurve_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
