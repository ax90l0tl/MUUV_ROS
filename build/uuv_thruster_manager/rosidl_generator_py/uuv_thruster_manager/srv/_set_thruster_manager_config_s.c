// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.h"
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_thruster_manager__srv__set_thruster_manager_config__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[87];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("uuv_thruster_manager.srv._set_thruster_manager_config.SetThrusterManagerConfig_Request", full_classname_dest, 86) == 0);
  }
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * ros_message = _ros_message;
  {  // base_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_link");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->base_link, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // thruster_frame_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "thruster_frame_base");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->thruster_frame_base, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // thruster_topic_prefix
    PyObject * field = PyObject_GetAttrString(_pymsg, "thruster_topic_prefix");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->thruster_topic_prefix, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // thruster_topic_suffix
    PyObject * field = PyObject_GetAttrString(_pymsg, "thruster_topic_suffix");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->thruster_topic_suffix, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timeout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_thrust
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_thrust");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_thrust = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_thruster_manager__srv__set_thruster_manager_config__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetThrusterManagerConfig_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_thruster_manager.srv._set_thruster_manager_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetThrusterManagerConfig_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * ros_message = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Request *)raw_ros_message;
  {  // base_link
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->base_link.data,
      strlen(ros_message->base_link.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thruster_frame_base
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->thruster_frame_base.data,
      strlen(ros_message->thruster_frame_base.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thruster_frame_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thruster_topic_prefix
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->thruster_topic_prefix.data,
      strlen(ros_message->thruster_topic_prefix.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thruster_topic_prefix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thruster_topic_suffix
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->thruster_topic_suffix.data,
      strlen(ros_message->thruster_topic_suffix.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thruster_topic_suffix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timeout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_thrust
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_thrust);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_thrust", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__struct.h"
// already included above
// #include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_thruster_manager__srv__set_thruster_manager_config__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[88];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("uuv_thruster_manager.srv._set_thruster_manager_config.SetThrusterManagerConfig_Response", full_classname_dest, 87) == 0);
  }
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_thruster_manager__srv__set_thruster_manager_config__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetThrusterManagerConfig_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_thruster_manager.srv._set_thruster_manager_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetThrusterManagerConfig_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * ros_message = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
