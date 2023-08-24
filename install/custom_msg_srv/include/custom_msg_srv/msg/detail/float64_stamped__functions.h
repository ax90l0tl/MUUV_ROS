// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg_srv:msg/Float64Stamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__FUNCTIONS_H_
#define CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg_srv/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg_srv/msg/detail/float64_stamped__struct.h"

/// Initialize msg/Float64Stamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg_srv__msg__Float64Stamped
 * )) before or use
 * custom_msg_srv__msg__Float64Stamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__init(custom_msg_srv__msg__Float64Stamped * msg);

/// Finalize msg/Float64Stamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
void
custom_msg_srv__msg__Float64Stamped__fini(custom_msg_srv__msg__Float64Stamped * msg);

/// Create msg/Float64Stamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg_srv__msg__Float64Stamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
custom_msg_srv__msg__Float64Stamped *
custom_msg_srv__msg__Float64Stamped__create();

/// Destroy msg/Float64Stamped message.
/**
 * It calls
 * custom_msg_srv__msg__Float64Stamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
void
custom_msg_srv__msg__Float64Stamped__destroy(custom_msg_srv__msg__Float64Stamped * msg);

/// Check for msg/Float64Stamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__are_equal(const custom_msg_srv__msg__Float64Stamped * lhs, const custom_msg_srv__msg__Float64Stamped * rhs);

/// Copy a msg/Float64Stamped message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__copy(
  const custom_msg_srv__msg__Float64Stamped * input,
  custom_msg_srv__msg__Float64Stamped * output);

/// Initialize array of msg/Float64Stamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg_srv__msg__Float64Stamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__Sequence__init(custom_msg_srv__msg__Float64Stamped__Sequence * array, size_t size);

/// Finalize array of msg/Float64Stamped messages.
/**
 * It calls
 * custom_msg_srv__msg__Float64Stamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
void
custom_msg_srv__msg__Float64Stamped__Sequence__fini(custom_msg_srv__msg__Float64Stamped__Sequence * array);

/// Create array of msg/Float64Stamped messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg_srv__msg__Float64Stamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
custom_msg_srv__msg__Float64Stamped__Sequence *
custom_msg_srv__msg__Float64Stamped__Sequence__create(size_t size);

/// Destroy array of msg/Float64Stamped messages.
/**
 * It calls
 * custom_msg_srv__msg__Float64Stamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
void
custom_msg_srv__msg__Float64Stamped__Sequence__destroy(custom_msg_srv__msg__Float64Stamped__Sequence * array);

/// Check for msg/Float64Stamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__Sequence__are_equal(const custom_msg_srv__msg__Float64Stamped__Sequence * lhs, const custom_msg_srv__msg__Float64Stamped__Sequence * rhs);

/// Copy an array of msg/Float64Stamped messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_srv
bool
custom_msg_srv__msg__Float64Stamped__Sequence__copy(
  const custom_msg_srv__msg__Float64Stamped__Sequence * input,
  custom_msg_srv__msg__Float64Stamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_SRV__MSG__DETAIL__FLOAT64_STAMPED__FUNCTIONS_H_
