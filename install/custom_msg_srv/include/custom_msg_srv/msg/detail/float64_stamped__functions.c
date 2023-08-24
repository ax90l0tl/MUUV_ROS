// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg_srv:msg/Float64Stamped.idl
// generated code does not contain a copyright notice
#include "custom_msg_srv/msg/detail/float64_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
custom_msg_srv__msg__Float64Stamped__init(custom_msg_srv__msg__Float64Stamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_msg_srv__msg__Float64Stamped__fini(msg);
    return false;
  }
  // data
  return true;
}

void
custom_msg_srv__msg__Float64Stamped__fini(custom_msg_srv__msg__Float64Stamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
}

bool
custom_msg_srv__msg__Float64Stamped__are_equal(const custom_msg_srv__msg__Float64Stamped * lhs, const custom_msg_srv__msg__Float64Stamped * rhs)
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
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
custom_msg_srv__msg__Float64Stamped__copy(
  const custom_msg_srv__msg__Float64Stamped * input,
  custom_msg_srv__msg__Float64Stamped * output)
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
  // data
  output->data = input->data;
  return true;
}

custom_msg_srv__msg__Float64Stamped *
custom_msg_srv__msg__Float64Stamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_srv__msg__Float64Stamped * msg = (custom_msg_srv__msg__Float64Stamped *)allocator.allocate(sizeof(custom_msg_srv__msg__Float64Stamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg_srv__msg__Float64Stamped));
  bool success = custom_msg_srv__msg__Float64Stamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msg_srv__msg__Float64Stamped__destroy(custom_msg_srv__msg__Float64Stamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msg_srv__msg__Float64Stamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msg_srv__msg__Float64Stamped__Sequence__init(custom_msg_srv__msg__Float64Stamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_srv__msg__Float64Stamped * data = NULL;

  if (size) {
    data = (custom_msg_srv__msg__Float64Stamped *)allocator.zero_allocate(size, sizeof(custom_msg_srv__msg__Float64Stamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg_srv__msg__Float64Stamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg_srv__msg__Float64Stamped__fini(&data[i - 1]);
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
custom_msg_srv__msg__Float64Stamped__Sequence__fini(custom_msg_srv__msg__Float64Stamped__Sequence * array)
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
      custom_msg_srv__msg__Float64Stamped__fini(&array->data[i]);
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

custom_msg_srv__msg__Float64Stamped__Sequence *
custom_msg_srv__msg__Float64Stamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg_srv__msg__Float64Stamped__Sequence * array = (custom_msg_srv__msg__Float64Stamped__Sequence *)allocator.allocate(sizeof(custom_msg_srv__msg__Float64Stamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msg_srv__msg__Float64Stamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msg_srv__msg__Float64Stamped__Sequence__destroy(custom_msg_srv__msg__Float64Stamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msg_srv__msg__Float64Stamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msg_srv__msg__Float64Stamped__Sequence__are_equal(const custom_msg_srv__msg__Float64Stamped__Sequence * lhs, const custom_msg_srv__msg__Float64Stamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg_srv__msg__Float64Stamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg_srv__msg__Float64Stamped__Sequence__copy(
  const custom_msg_srv__msg__Float64Stamped__Sequence * input,
  custom_msg_srv__msg__Float64Stamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg_srv__msg__Float64Stamped);
    custom_msg_srv__msg__Float64Stamped * data =
      (custom_msg_srv__msg__Float64Stamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg_srv__msg__Float64Stamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msg_srv__msg__Float64Stamped__fini(&data[i]);
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
    if (!custom_msg_srv__msg__Float64Stamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
