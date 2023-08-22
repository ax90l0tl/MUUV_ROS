// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__FUNCTIONS_H_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_control_msgs/msg/detail/waypoint_set__struct.h"

/// Initialize msg/WaypointSet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_control_msgs__msg__WaypointSet
 * )) before or use
 * uuv_control_msgs__msg__WaypointSet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__init(uuv_control_msgs__msg__WaypointSet * msg);

/// Finalize msg/WaypointSet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__msg__WaypointSet__fini(uuv_control_msgs__msg__WaypointSet * msg);

/// Create msg/WaypointSet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_control_msgs__msg__WaypointSet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__msg__WaypointSet *
uuv_control_msgs__msg__WaypointSet__create();

/// Destroy msg/WaypointSet message.
/**
 * It calls
 * uuv_control_msgs__msg__WaypointSet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__msg__WaypointSet__destroy(uuv_control_msgs__msg__WaypointSet * msg);

/// Check for msg/WaypointSet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__are_equal(const uuv_control_msgs__msg__WaypointSet * lhs, const uuv_control_msgs__msg__WaypointSet * rhs);

/// Copy a msg/WaypointSet message.
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
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__copy(
  const uuv_control_msgs__msg__WaypointSet * input,
  uuv_control_msgs__msg__WaypointSet * output);

/// Initialize array of msg/WaypointSet messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_control_msgs__msg__WaypointSet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__Sequence__init(uuv_control_msgs__msg__WaypointSet__Sequence * array, size_t size);

/// Finalize array of msg/WaypointSet messages.
/**
 * It calls
 * uuv_control_msgs__msg__WaypointSet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__msg__WaypointSet__Sequence__fini(uuv_control_msgs__msg__WaypointSet__Sequence * array);

/// Create array of msg/WaypointSet messages.
/**
 * It allocates the memory for the array and calls
 * uuv_control_msgs__msg__WaypointSet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
uuv_control_msgs__msg__WaypointSet__Sequence *
uuv_control_msgs__msg__WaypointSet__Sequence__create(size_t size);

/// Destroy array of msg/WaypointSet messages.
/**
 * It calls
 * uuv_control_msgs__msg__WaypointSet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
void
uuv_control_msgs__msg__WaypointSet__Sequence__destroy(uuv_control_msgs__msg__WaypointSet__Sequence * array);

/// Check for msg/WaypointSet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__Sequence__are_equal(const uuv_control_msgs__msg__WaypointSet__Sequence * lhs, const uuv_control_msgs__msg__WaypointSet__Sequence * rhs);

/// Copy an array of msg/WaypointSet messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uuv_control_msgs
bool
uuv_control_msgs__msg__WaypointSet__Sequence__copy(
  const uuv_control_msgs__msg__WaypointSet__Sequence * input,
  uuv_control_msgs__msg__WaypointSet__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__FUNCTIONS_H_
