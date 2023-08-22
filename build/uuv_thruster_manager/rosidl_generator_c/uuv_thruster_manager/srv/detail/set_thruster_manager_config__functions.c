// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/set_thruster_manager_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `base_link`
// Member `thruster_frame_base`
// Member `thruster_topic_prefix`
// Member `thruster_topic_suffix`
#include "rosidl_runtime_c/string_functions.h"

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__init(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // base_link
  if (!rosidl_runtime_c__String__init(&msg->base_link)) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(msg);
    return false;
  }
  // thruster_frame_base
  if (!rosidl_runtime_c__String__init(&msg->thruster_frame_base)) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(msg);
    return false;
  }
  // thruster_topic_prefix
  if (!rosidl_runtime_c__String__init(&msg->thruster_topic_prefix)) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(msg);
    return false;
  }
  // thruster_topic_suffix
  if (!rosidl_runtime_c__String__init(&msg->thruster_topic_suffix)) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(msg);
    return false;
  }
  // timeout
  // max_thrust
  return true;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // base_link
  rosidl_runtime_c__String__fini(&msg->base_link);
  // thruster_frame_base
  rosidl_runtime_c__String__fini(&msg->thruster_frame_base);
  // thruster_topic_prefix
  rosidl_runtime_c__String__fini(&msg->thruster_topic_prefix);
  // thruster_topic_suffix
  rosidl_runtime_c__String__fini(&msg->thruster_topic_suffix);
  // timeout
  // max_thrust
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__are_equal(const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * lhs, const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_link), &(rhs->base_link)))
  {
    return false;
  }
  // thruster_frame_base
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->thruster_frame_base), &(rhs->thruster_frame_base)))
  {
    return false;
  }
  // thruster_topic_prefix
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->thruster_topic_prefix), &(rhs->thruster_topic_prefix)))
  {
    return false;
  }
  // thruster_topic_suffix
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->thruster_topic_suffix), &(rhs->thruster_topic_suffix)))
  {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // max_thrust
  if (lhs->max_thrust != rhs->max_thrust) {
    return false;
  }
  return true;
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__copy(
  const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * input,
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // base_link
  if (!rosidl_runtime_c__String__copy(
      &(input->base_link), &(output->base_link)))
  {
    return false;
  }
  // thruster_frame_base
  if (!rosidl_runtime_c__String__copy(
      &(input->thruster_frame_base), &(output->thruster_frame_base)))
  {
    return false;
  }
  // thruster_topic_prefix
  if (!rosidl_runtime_c__String__copy(
      &(input->thruster_topic_prefix), &(output->thruster_topic_prefix)))
  {
    return false;
  }
  // thruster_topic_suffix
  if (!rosidl_runtime_c__String__copy(
      &(input->thruster_topic_suffix), &(output->thruster_topic_suffix)))
  {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // max_thrust
  output->max_thrust = input->max_thrust;
  return true;
}

uuv_thruster_manager__srv__SetThrusterManagerConfig_Request *
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * msg = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Request *)allocator.allocate(sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request));
  bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__destroy(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__init(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Request *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__fini(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * array)
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
      uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(&array->data[i]);
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

uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence *
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * array = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__destroy(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__are_equal(const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * lhs, const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence__copy(
  const uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * input,
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Request);
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Request * data =
      (uuv_thruster_manager__srv__SetThrusterManagerConfig_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__fini(&data[i]);
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
    if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__init(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__fini(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__are_equal(const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * lhs, const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * rhs)
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
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__copy(
  const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * input,
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

uuv_thruster_manager__srv__SetThrusterManagerConfig_Response *
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * msg = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Response *)allocator.allocate(sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response));
  bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__destroy(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__init(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Response *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__fini(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * array)
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
      uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__fini(&array->data[i]);
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

uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence *
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * array = (uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__destroy(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__are_equal(const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * lhs, const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence__copy(
  const uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * input,
  uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__SetThrusterManagerConfig_Response);
    uuv_thruster_manager__srv__SetThrusterManagerConfig_Response * data =
      (uuv_thruster_manager__srv__SetThrusterManagerConfig_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__fini(&data[i]);
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
    if (!uuv_thruster_manager__srv__SetThrusterManagerConfig_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
