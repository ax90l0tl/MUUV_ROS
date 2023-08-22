// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_auv_control_allocator:msg/AUVCommand.idl
// generated code does not contain a copyright notice
#include "uuv_auv_control_allocator/msg/detail/auv_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `command`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
uuv_auv_control_allocator__msg__AUVCommand__init(uuv_auv_control_allocator__msg__AUVCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_auv_control_allocator__msg__AUVCommand__fini(msg);
    return false;
  }
  // surge_speed
  // command
  if (!geometry_msgs__msg__Wrench__init(&msg->command)) {
    uuv_auv_control_allocator__msg__AUVCommand__fini(msg);
    return false;
  }
  return true;
}

void
uuv_auv_control_allocator__msg__AUVCommand__fini(uuv_auv_control_allocator__msg__AUVCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // surge_speed
  // command
  geometry_msgs__msg__Wrench__fini(&msg->command);
}

bool
uuv_auv_control_allocator__msg__AUVCommand__are_equal(const uuv_auv_control_allocator__msg__AUVCommand * lhs, const uuv_auv_control_allocator__msg__AUVCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // surge_speed
  if (lhs->surge_speed != rhs->surge_speed) {
    return false;
  }
  // command
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
uuv_auv_control_allocator__msg__AUVCommand__copy(
  const uuv_auv_control_allocator__msg__AUVCommand * input,
  uuv_auv_control_allocator__msg__AUVCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // surge_speed
  output->surge_speed = input->surge_speed;
  // command
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

uuv_auv_control_allocator__msg__AUVCommand *
uuv_auv_control_allocator__msg__AUVCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_auv_control_allocator__msg__AUVCommand * msg = (uuv_auv_control_allocator__msg__AUVCommand *)allocator.allocate(sizeof(uuv_auv_control_allocator__msg__AUVCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_auv_control_allocator__msg__AUVCommand));
  bool success = uuv_auv_control_allocator__msg__AUVCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_auv_control_allocator__msg__AUVCommand__destroy(uuv_auv_control_allocator__msg__AUVCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_auv_control_allocator__msg__AUVCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__init(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_auv_control_allocator__msg__AUVCommand * data = NULL;

  if (size) {
    data = (uuv_auv_control_allocator__msg__AUVCommand *)allocator.zero_allocate(size, sizeof(uuv_auv_control_allocator__msg__AUVCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_auv_control_allocator__msg__AUVCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_auv_control_allocator__msg__AUVCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
uuv_auv_control_allocator__msg__AUVCommand__Sequence__fini(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_auv_control_allocator__msg__AUVCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

uuv_auv_control_allocator__msg__AUVCommand__Sequence *
uuv_auv_control_allocator__msg__AUVCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_auv_control_allocator__msg__AUVCommand__Sequence * array = (uuv_auv_control_allocator__msg__AUVCommand__Sequence *)allocator.allocate(sizeof(uuv_auv_control_allocator__msg__AUVCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_auv_control_allocator__msg__AUVCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_auv_control_allocator__msg__AUVCommand__Sequence__destroy(uuv_auv_control_allocator__msg__AUVCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_auv_control_allocator__msg__AUVCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__are_equal(const uuv_auv_control_allocator__msg__AUVCommand__Sequence * lhs, const uuv_auv_control_allocator__msg__AUVCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_auv_control_allocator__msg__AUVCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_auv_control_allocator__msg__AUVCommand__Sequence__copy(
  const uuv_auv_control_allocator__msg__AUVCommand__Sequence * input,
  uuv_auv_control_allocator__msg__AUVCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_auv_control_allocator__msg__AUVCommand);
    uuv_auv_control_allocator__msg__AUVCommand * data =
      (uuv_auv_control_allocator__msg__AUVCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_auv_control_allocator__msg__AUVCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_auv_control_allocator__msg__AUVCommand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_auv_control_allocator__msg__AUVCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
