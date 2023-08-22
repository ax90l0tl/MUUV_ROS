// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_control_msgs:srv/SetMBSMControllerParams.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `lambda_array`
// Member `rho_constant`
// Member `k`
// Member `c`
// Member `adapt_slope`
// Member `rho_0`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__init(uuv_control_msgs__srv__SetMBSMControllerParams_Request * msg)
{
  if (!msg) {
    return false;
  }
  // lambda_array
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lambda_array, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // rho_constant
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rho_constant, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // k
  if (!rosidl_runtime_c__double__Sequence__init(&msg->k, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__init(&msg->c, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // adapt_slope
  if (!rosidl_runtime_c__double__Sequence__init(&msg->adapt_slope, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // rho_0
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rho_0, 0)) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
    return false;
  }
  // drift_prevent
  return true;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(uuv_control_msgs__srv__SetMBSMControllerParams_Request * msg)
{
  if (!msg) {
    return;
  }
  // lambda_array
  rosidl_runtime_c__double__Sequence__fini(&msg->lambda_array);
  // rho_constant
  rosidl_runtime_c__double__Sequence__fini(&msg->rho_constant);
  // k
  rosidl_runtime_c__double__Sequence__fini(&msg->k);
  // c
  rosidl_runtime_c__double__Sequence__fini(&msg->c);
  // adapt_slope
  rosidl_runtime_c__double__Sequence__fini(&msg->adapt_slope);
  // rho_0
  rosidl_runtime_c__double__Sequence__fini(&msg->rho_0);
  // drift_prevent
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__are_equal(const uuv_control_msgs__srv__SetMBSMControllerParams_Request * lhs, const uuv_control_msgs__srv__SetMBSMControllerParams_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lambda_array
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lambda_array), &(rhs->lambda_array)))
  {
    return false;
  }
  // rho_constant
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rho_constant), &(rhs->rho_constant)))
  {
    return false;
  }
  // k
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->k), &(rhs->k)))
  {
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->c), &(rhs->c)))
  {
    return false;
  }
  // adapt_slope
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->adapt_slope), &(rhs->adapt_slope)))
  {
    return false;
  }
  // rho_0
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rho_0), &(rhs->rho_0)))
  {
    return false;
  }
  // drift_prevent
  if (lhs->drift_prevent != rhs->drift_prevent) {
    return false;
  }
  return true;
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__copy(
  const uuv_control_msgs__srv__SetMBSMControllerParams_Request * input,
  uuv_control_msgs__srv__SetMBSMControllerParams_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // lambda_array
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lambda_array), &(output->lambda_array)))
  {
    return false;
  }
  // rho_constant
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rho_constant), &(output->rho_constant)))
  {
    return false;
  }
  // k
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->k), &(output->k)))
  {
    return false;
  }
  // c
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->c), &(output->c)))
  {
    return false;
  }
  // adapt_slope
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->adapt_slope), &(output->adapt_slope)))
  {
    return false;
  }
  // rho_0
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rho_0), &(output->rho_0)))
  {
    return false;
  }
  // drift_prevent
  output->drift_prevent = input->drift_prevent;
  return true;
}

uuv_control_msgs__srv__SetMBSMControllerParams_Request *
uuv_control_msgs__srv__SetMBSMControllerParams_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Request * msg = (uuv_control_msgs__srv__SetMBSMControllerParams_Request *)allocator.allocate(sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Request));
  bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Request__destroy(uuv_control_msgs__srv__SetMBSMControllerParams_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__init(uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Request * data = NULL;

  if (size) {
    data = (uuv_control_msgs__srv__SetMBSMControllerParams_Request *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(&data[i - 1]);
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
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__fini(uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * array)
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
      uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(&array->data[i]);
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

uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence *
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * array = (uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__destroy(uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__are_equal(const uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * lhs, const uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__srv__SetMBSMControllerParams_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence__copy(
  const uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * input,
  uuv_control_msgs__srv__SetMBSMControllerParams_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Request);
    uuv_control_msgs__srv__SetMBSMControllerParams_Request * data =
      (uuv_control_msgs__srv__SetMBSMControllerParams_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__srv__SetMBSMControllerParams_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__srv__SetMBSMControllerParams_Request__fini(&data[i]);
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
    if (!uuv_control_msgs__srv__SetMBSMControllerParams_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
uuv_control_msgs__srv__SetMBSMControllerParams_Response__init(uuv_control_msgs__srv__SetMBSMControllerParams_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Response__fini(uuv_control_msgs__srv__SetMBSMControllerParams_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Response__are_equal(const uuv_control_msgs__srv__SetMBSMControllerParams_Response * lhs, const uuv_control_msgs__srv__SetMBSMControllerParams_Response * rhs)
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
uuv_control_msgs__srv__SetMBSMControllerParams_Response__copy(
  const uuv_control_msgs__srv__SetMBSMControllerParams_Response * input,
  uuv_control_msgs__srv__SetMBSMControllerParams_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

uuv_control_msgs__srv__SetMBSMControllerParams_Response *
uuv_control_msgs__srv__SetMBSMControllerParams_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Response * msg = (uuv_control_msgs__srv__SetMBSMControllerParams_Response *)allocator.allocate(sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Response));
  bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Response__destroy(uuv_control_msgs__srv__SetMBSMControllerParams_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__init(uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Response * data = NULL;

  if (size) {
    data = (uuv_control_msgs__srv__SetMBSMControllerParams_Response *)allocator.zero_allocate(size, sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_control_msgs__srv__SetMBSMControllerParams_Response__fini(&data[i - 1]);
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
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__fini(uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * array)
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
      uuv_control_msgs__srv__SetMBSMControllerParams_Response__fini(&array->data[i]);
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

uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence *
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * array = (uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence *)allocator.allocate(sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__destroy(uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__are_equal(const uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * lhs, const uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_control_msgs__srv__SetMBSMControllerParams_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence__copy(
  const uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * input,
  uuv_control_msgs__srv__SetMBSMControllerParams_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_control_msgs__srv__SetMBSMControllerParams_Response);
    uuv_control_msgs__srv__SetMBSMControllerParams_Response * data =
      (uuv_control_msgs__srv__SetMBSMControllerParams_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_control_msgs__srv__SetMBSMControllerParams_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_control_msgs__srv__SetMBSMControllerParams_Response__fini(&data[i]);
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
    if (!uuv_control_msgs__srv__SetMBSMControllerParams_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
