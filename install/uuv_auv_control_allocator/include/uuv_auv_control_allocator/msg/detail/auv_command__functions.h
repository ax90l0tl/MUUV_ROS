// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__FUNCTIONS_H_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "uuv_auv_control_allocator/msg/rosidl_generator_c__visibility_control.h"

#include "uuv_auv_control_allocator/msg/detail/auv_command__struct.h"

/// Initialize msg/AUVCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * uuv_auv_control_allocator__msg__AUVCommand
 * )) before or use
 * uuv_auv_control_allocator__msg__AUVCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__init(uuv_auv_control_allocator__msg__AUVCommand * msg);

/// Finalize msg/AUVCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
void
uuv_auv_control_allocator__msg__AUVCommand__fini(uuv_auv_control_allocator__msg__AUVCommand * msg);

/// Create msg/AUVCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * uuv_auv_control_allocator__msg__AUVCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
uuv_auv_control_allocator__msg__AUVCommand *
uuv_auv_control_allocator__msg__AUVCommand__create();

/// Destroy msg/AUVCommand message.
/**
 * It calls
 * uuv_auv_control_allocator__msg__AUVCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
void
uuv_auv_control_allocator__msg__AUVCommand__destroy(uuv_auv_control_allocator__msg__AUVCommand * msg);

/// Check for msg/AUVCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__are_equal(const uuv_auv_control_allocator__msg__AUVCommand * lhs, const uuv_auv_control_allocator__msg__AUVCommand * rhs);

/// Copy a msg/AUVCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__copy(
  const uuv_auv_control_allocator__msg__AUVCommand * input,
  uuv_auv_control_allocator__msg__AUVCommand * output);

/// Initialize array of msg/AUVCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * uuv_auv_control_allocator__msg__AUVCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__init(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array, size_t size);

/// Finalize array of msg/AUVCommand messages.
/**
 * It calls
 * uuv_auv_control_allocator__msg__AUVCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
void
uuv_auv_control_allocator__msg__AUVCommand__Sequence__fini(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array);

/// Create array of msg/AUVCommand messages.
/**
 * It allocates the memory for the array and calls
 * uuv_auv_control_allocator__msg__AUVCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
uuv_auv_control_allocator__msg__AUVCommand__Sequence *
uuv_auv_control_allocator__msg__AUVCommand__Sequence__create(size_t size);

/// Destroy array of msg/AUVCommand messages.
/**
 * It calls
 * uuv_auv_control_allocator__msg__AUVCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
void
uuv_auv_control_allocator__msg__AUVCommand__Sequence__destroy(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array);

/// Check for msg/AUVCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__are_equal(const uuv_auv_control_allocator__msg__AUVCommand__Sequence * lhs, const uuv_auv_control_allocator__msg__AUVCommand__Sequence * rhs);

/// Copy an array of msg/AUVCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_uuv_auv_control_allocator
bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__copy(
  const uuv_auv_control_allocator__msg__AUVCommand__Sequence * input,
  uuv_auv_control_allocator__msg__AUVCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__DETAIL__AUV_COMMAND__FUNCTIONS_H_
