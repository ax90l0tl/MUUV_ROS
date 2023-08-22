// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__FUNCTIONS_H_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_sensor_ros_plugins_msgs/msg/detail/salinity__struct.h"

/// Initialize msg/Salinity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_sensor_ros_plugins_msgs__msg__Salinity
 * )) before or use
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__init(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg);

/// Finalize msg/Salinity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__Salinity__fini(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg);

/// Create msg/Salinity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
uuv_sensor_ros_plugins_msgs__msg__Salinity *
uuv_sensor_ros_plugins_msgs__msg__Salinity__create();

/// Destroy msg/Salinity message.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__Salinity__destroy(uuv_sensor_ros_plugins_msgs__msg__Salinity * msg);

/// Check for msg/Salinity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__are_equal(const uuv_sensor_ros_plugins_msgs__msg__Salinity * lhs, const uuv_sensor_ros_plugins_msgs__msg__Salinity * rhs);

/// Copy a msg/Salinity message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__copy(
  const uuv_sensor_ros_plugins_msgs__msg__Salinity * input,
  uuv_sensor_ros_plugins_msgs__msg__Salinity * output);

/// Initialize array of msg/Salinity messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array, size_t size);

/// Finalize array of msg/Salinity messages.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array);

/// Create array of msg/Salinity messages.
/**
 * It allocates the memory for the array and calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence *
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__create(size_t size);

/// Destroy array of msg/Salinity messages.
/**
 * It calls
 * uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
void
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * array);

/// Check for msg/Salinity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__are_equal(const uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * lhs, const uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * rhs);

/// Copy an array of msg/Salinity messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_sensor_ros_plugins_msgs
bool
uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence__copy(
  const uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * input,
  uuv_sensor_ros_plugins_msgs__msg__Salinity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__FUNCTIONS_H_
