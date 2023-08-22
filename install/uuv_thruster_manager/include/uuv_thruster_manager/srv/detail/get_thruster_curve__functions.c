// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/get_thruster_curve__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__init(uuv_thruster_manager__srv__GetThrusterCurve_Request * msg)
{
  if (!msg) {
    return false;
  }
  // min
  // max
  // n_points
  return true;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(uuv_thruster_manager__srv__GetThrusterCurve_Request * msg)
{
  if (!msg) {
    return;
  }
  // min
  // max
  // n_points
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__are_equal(const uuv_thruster_manager__srv__GetThrusterCurve_Request * lhs, const uuv_thruster_manager__srv__GetThrusterCurve_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  // n_points
  if (lhs->n_points != rhs->n_points) {
    return false;
  }
  return true;
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__copy(
  const uuv_thruster_manager__srv__GetThrusterCurve_Request * input,
  uuv_thruster_manager__srv__GetThrusterCurve_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // min
  output->min = input->min;
  // max
  output->max = input->max;
  // n_points
  output->n_points = input->n_points;
  return true;
}

uuv_thruster_manager__srv__GetThrusterCurve_Request *
uuv_thruster_manager__srv__GetThrusterCurve_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Request * msg = (uuv_thruster_manager__srv__GetThrusterCurve_Request *)allocator.allocate(sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request));
  bool success = uuv_thruster_manager__srv__GetThrusterCurve_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Request__destroy(uuv_thruster_manager__srv__GetThrusterCurve_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__init(uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Request * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__GetThrusterCurve_Request *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__GetThrusterCurve_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__fini(uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * array)
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
      uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(&array->data[i]);
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

uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence *
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * array = (uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__destroy(uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__are_equal(const uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * lhs, const uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__GetThrusterCurve_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence__copy(
  const uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * input,
  uuv_thruster_manager__srv__GetThrusterCurve_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Request);
    uuv_thruster_manager__srv__GetThrusterCurve_Request * data =
      (uuv_thruster_manager__srv__GetThrusterCurve_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__GetThrusterCurve_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__GetThrusterCurve_Request__fini(&data[i]);
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
    if (!uuv_thruster_manager__srv__GetThrusterCurve_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `input`
// Member `thrust`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__init(uuv_thruster_manager__srv__GetThrusterCurve_Response * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input, 0)) {
    uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(msg);
    return false;
  }
  // thrust
  if (!rosidl_runtime_c__double__Sequence__init(&msg->thrust, 0)) {
    uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(msg);
    return false;
  }
  return true;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(uuv_thruster_manager__srv__GetThrusterCurve_Response * msg)
{
  if (!msg) {
    return;
  }
  // input
  rosidl_runtime_c__double__Sequence__fini(&msg->input);
  // thrust
  rosidl_runtime_c__double__Sequence__fini(&msg->thrust);
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__are_equal(const uuv_thruster_manager__srv__GetThrusterCurve_Response * lhs, const uuv_thruster_manager__srv__GetThrusterCurve_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // thrust
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->thrust), &(rhs->thrust)))
  {
    return false;
  }
  return true;
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__copy(
  const uuv_thruster_manager__srv__GetThrusterCurve_Response * input,
  uuv_thruster_manager__srv__GetThrusterCurve_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // thrust
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->thrust), &(output->thrust)))
  {
    return false;
  }
  return true;
}

uuv_thruster_manager__srv__GetThrusterCurve_Response *
uuv_thruster_manager__srv__GetThrusterCurve_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Response * msg = (uuv_thruster_manager__srv__GetThrusterCurve_Response *)allocator.allocate(sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response));
  bool success = uuv_thruster_manager__srv__GetThrusterCurve_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Response__destroy(uuv_thruster_manager__srv__GetThrusterCurve_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__init(uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Response * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__GetThrusterCurve_Response *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__GetThrusterCurve_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__fini(uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * array)
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
      uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(&array->data[i]);
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

uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence *
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * array = (uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__destroy(uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__are_equal(const uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * lhs, const uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__GetThrusterCurve_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence__copy(
  const uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * input,
  uuv_thruster_manager__srv__GetThrusterCurve_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__GetThrusterCurve_Response);
    uuv_thruster_manager__srv__GetThrusterCurve_Response * data =
      (uuv_thruster_manager__srv__GetThrusterCurve_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__GetThrusterCurve_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__GetThrusterCurve_Response__fini(&data[i]);
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
    if (!uuv_thruster_manager__srv__GetThrusterCurve_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
