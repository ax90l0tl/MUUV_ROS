// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/msg/detail/waypoint_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `waypoints`
#include "uuv_control_msgs/msg/detail/waypoint__functions.h"

bool
uuv_control_msgs__msg__WaypointSet__init(uuv_control_msgs__msg__WaypointSet * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_control_msgs__msg__WaypointSet__fini(msg);
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    uuv_control_msgs__msg__WaypointSet__fini(msg);
    return false;
  }
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__init(&msg->waypoints, 0)) {
    uuv_control_msgs__msg__WaypointSet__fini(msg);
    return false;
  }
  return true;
}

void
uuv_control_msgs__msg__WaypointSet__fini(uuv_control_msgs__msg__WaypointSet * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // waypoints
  uuv_control_msgs__msg__Waypoint__Sequence__fini(&msg->waypoints);
}

bool
uuv_control_msgs__msg__WaypointSet__are_equal(const uuv_control_msgs__msg__WaypointSet * lhs, const uuv_control_msgs__msg__WaypointSet * rhs)
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
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  return true;
}

bool
uuv_control_msgs__msg__WaypointSet__copy(
  const uuv_control_msgs__msg__WaypointSet * input,
  uuv_control_msgs__msg__WaypointSet * output)
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
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // waypoints
  if (!uuv_control_msgs__msg__Waypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  return true;
}

uuv_control_msgs__msg__WaypointSet *
uuv_control_msgs__msg__WaypointSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__WaypointSet * msg = (uuv_control_msgs__msg__WaypointSet *)allocator.allocate(sizeof(uuv_control_msgs__msg__WaypointSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__msg__WaypointSet));
  bool success = uuv_control_msgs__msg__WaypointSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__msg__WaypointSet__destroy(uuv_control_msgs__msg__WaypointSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__msg__WaypointSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__msg__WaypointSet__Sequence__init(uuv_control_msgs__msg__WaypointSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__WaypointSet * data = NULL;

  if (size) {
    data = (uuv_control_msgs__msg__WaypointSet *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__msg__WaypointSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__msg__WaypointSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__msg__WaypointSet__fini(&data[i - 1]);
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
uuv_control_msgs__msg__WaypointSet__Sequence__fini(uuv_control_msgs__msg__WaypointSet__Sequence * array)
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
      uuv_control_msgs__msg__WaypointSet__fini(&array->data[i]);
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

uuv_control_msgs__msg__WaypointSet__Sequence *
uuv_control_msgs__msg__WaypointSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__msg__WaypointSet__Sequence * array = (uuv_control_msgs__msg__WaypointSet__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__msg__WaypointSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__msg__WaypointSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__msg__WaypointSet__Sequence__destroy(uuv_control_msgs__msg__WaypointSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__msg__WaypointSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__msg__WaypointSet__Sequence__are_equal(const uuv_control_msgs__msg__WaypointSet__Sequence * lhs, const uuv_control_msgs__msg__WaypointSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__msg__WaypointSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__msg__WaypointSet__Sequence__copy(
  const uuv_control_msgs__msg__WaypointSet__Sequence * input,
  uuv_control_msgs__msg__WaypointSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__msg__WaypointSet);
    uuv_control_msgs__msg__WaypointSet * data =
      (uuv_control_msgs__msg__WaypointSet *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__msg__WaypointSet__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__msg__WaypointSet__fini(&data[i]);
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
    if (!uuv_control_msgs__msg__WaypointSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
