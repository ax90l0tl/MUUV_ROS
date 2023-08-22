// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetUseGlobalCurrentVel.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__init(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // use_global
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * msg)
{
  if (!msg) {
    return;
  }
  // use_global
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__are_equal(const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * lhs, const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // use_global
  if (lhs->use_global != rhs->use_global) {
    return false;
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__copy(
  const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * input,
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // use_global
  output->use_global = input->use_global;
  return true;
}

uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request *
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * msg = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request));
  bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__destroy(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__init(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * data = NULL;

  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request *)allocator.zero_allocate(size, sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__fini(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * array)
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
      uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence *
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * array = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__are_equal(const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * lhs, const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence__copy(
  const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * input,
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request);
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request * data =
      (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(&data[i]);
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
    if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__init(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__are_equal(const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * lhs, const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__copy(
  const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * input,
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response *
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * msg = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response));
  bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__destroy(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__init(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * data = NULL;

  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response *)allocator.zero_allocate(size, sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__fini(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * array)
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
      uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence *
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * array = (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__are_equal(const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * lhs, const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence__copy(
  const uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * input,
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response);
    uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response * data =
      (uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(&data[i]);
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
    if (!uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
