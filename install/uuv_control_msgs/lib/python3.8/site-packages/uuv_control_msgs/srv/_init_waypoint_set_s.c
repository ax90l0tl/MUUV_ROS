// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from uuv_control_msgs:srv/InitWaypointSet.idl
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
#include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.h"
#include "uuv_control_msgs/srv/detail/init_waypoint_set__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "uuv_control_msgs/msg/detail/waypoint__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool uuv_control_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * uuv_control_msgs__msg__waypoint__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__string__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool uuv_control_msgs__srv__init_waypoint_set__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("uuv_control_msgs.srv._init_waypoint_set.InitWaypointSet_Request", full_classname_dest, 63) == 0);
  }
  uuv_control_msgs__srv__InitWaypointSet_Request * ros_message = _ros_message;
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_now
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_now");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_now = (Py_True == field);
    Py_DECREF(field);
  }
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'waypoints'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!uuv_control_msgs__msg__Waypoint__Sequence__init(&(ros_message->waypoints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create uuv_control_msgs__msg__Waypoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    uuv_control_msgs__msg__Waypoint * dest = ros_message->waypoints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!uuv_control_msgs__msg__waypoint__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // max_forward_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_forward_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_forward_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // interpolator
    PyObject * field = PyObject_GetAttrString(_pymsg, "interpolator");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__string__convert_from_py(field, &ros_message->interpolator)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * uuv_control_msgs__srv__init_waypoint_set__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InitWaypointSet_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_control_msgs.srv._init_waypoint_set");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InitWaypointSet_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_control_msgs__srv__InitWaypointSet_Request * ros_message = (uuv_control_msgs__srv__InitWaypointSet_Request *)raw_ros_message;
  {  // start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_now
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_now ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_now", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints
    PyObject * field = NULL;
    size_t size = ros_message->waypoints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    uuv_control_msgs__msg__Waypoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->waypoints.data[i]);
      PyObject * pyitem = uuv_control_msgs__msg__waypoint__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_forward_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_forward_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_forward_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interpolator
    PyObject * field = NULL;
    field = std_msgs__msg__string__convert_to_py(&ros_message->interpolator);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "interpolator", field);
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
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__struct.h"
// already included above
// #include "uuv_control_msgs/srv/detail/init_waypoint_set__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool uuv_control_msgs__srv__init_waypoint_set__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("uuv_control_msgs.srv._init_waypoint_set.InitWaypointSet_Response", full_classname_dest, 64) == 0);
  }
  uuv_control_msgs__srv__InitWaypointSet_Response * ros_message = _ros_message;
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
PyObject * uuv_control_msgs__srv__init_waypoint_set__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InitWaypointSet_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("uuv_control_msgs.srv._init_waypoint_set");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InitWaypointSet_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  uuv_control_msgs__srv__InitWaypointSet_Response * ros_message = (uuv_control_msgs__srv__InitWaypointSet_Response *)raw_ros_message;
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
