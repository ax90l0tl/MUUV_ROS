// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_control_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
uuv_control_msgs__msg__Waypoint__init(uuv_control_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_control_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__init(&msg->point)) {
    uuv_control_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // max_forward_speed
  // heading_offset
  // use_fixed_heading
  // radius_of_acceptance
  return true;
}

void
uuv_control_msgs__msg__Waypoint__fini(uuv_control_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // point
  geometry_msgs__msg__Point__fini(&msg->point);
  // max_forward_speed
  // heading_offset
  // use_fixed_heading
  // radius_of_acceptance
}

bool
uuv_control_msgs__msg__Waypoint__are_equal(const uuv_control_msgs__msg__Waypoint * lhs, const uuv_control_msgs__msg__Waypoint * rhs)
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
  // point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // max_forward_speed
  if (lhs->max_forward_speed != rhs->max_forward_speed) {
    return false;
  }
  // heading_offset
  if (lhs->heading_offset != rhs->heading_offset) {
    return false;
  }
  // use_fixed_heading
  if (lhs->use_fixed_heading != rhs->use_fixed_heading) {
    return false;
  }
  // radius_of_acceptance
  if (lhs->radius_of_acceptance != rhs->radius_of_acceptance) {
    return false;
  }
  return true;
}

bool
uuv_control_msgs__msg__Waypoint__copy(
  const uuv_control_msgs__msg__Waypoint * input,
  uuv_control_msgs__msg__Waypoint * output)
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
  // point
  if (!geometry_msgs__msg__Point__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // max_forward_speed
  output->max_forward_speed = input->max_forward_speed;
  // heading_offset
  output->heading_offset = input->heading_offset;
  // use_fixed_heading
  output->use_fixed_heading = input->use_fixed_heading;
  // radius_of_acceptance
  output->radius_of_acceptance = input->radius_of_acceptance;
  return true;
}

uuv_control_msgs__msg__Waypoint *
uuv_control_msgs__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__Waypoint * msg = (uuv_control_msgs__msg__Waypoint *)allocator.allocate(sizeof(uuv_control_msgs__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__msg__Waypoint));
  bool success = uuv_control_msgs__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__msg__Waypoint__destroy(uuv_control_msgs__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__msg__Waypoint__Sequence__init(uuv_control_msgs__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__Waypoint * data = NULL;

  if (size) {
    data = (uuv_control_msgs__msg__Waypoint *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__msg__Waypoint__fini(&data[i - 1]);
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
uuv_control_msgs__msg__Waypoint__Sequence__fini(uuv_control_msgs__msg__Waypoint__Sequence * array)
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
      uuv_control_msgs__msg__Waypoint__fini(&array->data[i]);
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

uuv_control_msgs__msg__Waypoint__Sequence *
uuv_control_msgs__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__Waypoint__Sequence * array = (uuv_control_msgs__msg__Waypoint__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__msg__Waypoint__Sequence__destroy(uuv_control_msgs__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__msg__Waypoint__Sequence__are_equal(const uuv_control_msgs__msg__Waypoint__Sequence * lhs, const uuv_control_msgs__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__msg__Waypoint__Sequence__copy(
  const uuv_control_msgs__msg__Waypoint__Sequence * input,
  uuv_control_msgs__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__msg__Waypoint);
    uuv_control_msgs__msg__Waypoint * data =
      (uuv_control_msgs__msg__Waypoint *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__msg__Waypoint__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__msg__Waypoint__fini(&data[i]);
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
    if (!uuv_control_msgs__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
