// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/float_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(msg);
    return false;
  }
  // data
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
}

bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * lhs, const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * rhs)
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
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * input,
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * output)
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

uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__destroy(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * data = NULL;

  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *)allocator.zero_allocate(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array)
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
      uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * lhs, const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * input,
  uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_gazebo_ros_plugins_msgs__msg__FloatStamped);
    uuv_gazebo_ros_plugins_msgs__msg__FloatStamped * data =
      (uuv_gazebo_ros_plugins_msgs__msg__FloatStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__fini(&data[i]);
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
    if (!uuv_gazebo_ros_plugins_msgs__msg__FloatStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
