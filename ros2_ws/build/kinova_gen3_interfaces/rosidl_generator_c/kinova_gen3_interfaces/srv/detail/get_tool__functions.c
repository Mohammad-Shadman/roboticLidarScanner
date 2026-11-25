// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinova_gen3_interfaces:srv/GetTool.idl
// generated code does not contain a copyright notice
#include "kinova_gen3_interfaces/srv/detail/get_tool__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
kinova_gen3_interfaces__srv__GetTool_Request__init(kinova_gen3_interfaces__srv__GetTool_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
kinova_gen3_interfaces__srv__GetTool_Request__fini(kinova_gen3_interfaces__srv__GetTool_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
kinova_gen3_interfaces__srv__GetTool_Request__are_equal(const kinova_gen3_interfaces__srv__GetTool_Request * lhs, const kinova_gen3_interfaces__srv__GetTool_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
kinova_gen3_interfaces__srv__GetTool_Request__copy(
  const kinova_gen3_interfaces__srv__GetTool_Request * input,
  kinova_gen3_interfaces__srv__GetTool_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

kinova_gen3_interfaces__srv__GetTool_Request *
kinova_gen3_interfaces__srv__GetTool_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Request * msg = (kinova_gen3_interfaces__srv__GetTool_Request *)allocator.allocate(sizeof(kinova_gen3_interfaces__srv__GetTool_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_interfaces__srv__GetTool_Request));
  bool success = kinova_gen3_interfaces__srv__GetTool_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_interfaces__srv__GetTool_Request__destroy(kinova_gen3_interfaces__srv__GetTool_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_interfaces__srv__GetTool_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__init(kinova_gen3_interfaces__srv__GetTool_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Request * data = NULL;

  if (size) {
    data = (kinova_gen3_interfaces__srv__GetTool_Request *)allocator.zero_allocate(size, sizeof(kinova_gen3_interfaces__srv__GetTool_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_interfaces__srv__GetTool_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_interfaces__srv__GetTool_Request__fini(&data[i - 1]);
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
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__fini(kinova_gen3_interfaces__srv__GetTool_Request__Sequence * array)
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
      kinova_gen3_interfaces__srv__GetTool_Request__fini(&array->data[i]);
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

kinova_gen3_interfaces__srv__GetTool_Request__Sequence *
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Request__Sequence * array = (kinova_gen3_interfaces__srv__GetTool_Request__Sequence *)allocator.allocate(sizeof(kinova_gen3_interfaces__srv__GetTool_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_interfaces__srv__GetTool_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__destroy(kinova_gen3_interfaces__srv__GetTool_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_interfaces__srv__GetTool_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__are_equal(const kinova_gen3_interfaces__srv__GetTool_Request__Sequence * lhs, const kinova_gen3_interfaces__srv__GetTool_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_interfaces__srv__GetTool_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_interfaces__srv__GetTool_Request__Sequence__copy(
  const kinova_gen3_interfaces__srv__GetTool_Request__Sequence * input,
  kinova_gen3_interfaces__srv__GetTool_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_interfaces__srv__GetTool_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_interfaces__srv__GetTool_Request * data =
      (kinova_gen3_interfaces__srv__GetTool_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_interfaces__srv__GetTool_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_interfaces__srv__GetTool_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_interfaces__srv__GetTool_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
kinova_gen3_interfaces__srv__GetTool_Response__init(kinova_gen3_interfaces__srv__GetTool_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // theta_x
  // theta_y
  // theta_z
  return true;
}

void
kinova_gen3_interfaces__srv__GetTool_Response__fini(kinova_gen3_interfaces__srv__GetTool_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // theta_x
  // theta_y
  // theta_z
}

bool
kinova_gen3_interfaces__srv__GetTool_Response__are_equal(const kinova_gen3_interfaces__srv__GetTool_Response * lhs, const kinova_gen3_interfaces__srv__GetTool_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // theta_x
  if (lhs->theta_x != rhs->theta_x) {
    return false;
  }
  // theta_y
  if (lhs->theta_y != rhs->theta_y) {
    return false;
  }
  // theta_z
  if (lhs->theta_z != rhs->theta_z) {
    return false;
  }
  return true;
}

bool
kinova_gen3_interfaces__srv__GetTool_Response__copy(
  const kinova_gen3_interfaces__srv__GetTool_Response * input,
  kinova_gen3_interfaces__srv__GetTool_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // theta_x
  output->theta_x = input->theta_x;
  // theta_y
  output->theta_y = input->theta_y;
  // theta_z
  output->theta_z = input->theta_z;
  return true;
}

kinova_gen3_interfaces__srv__GetTool_Response *
kinova_gen3_interfaces__srv__GetTool_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Response * msg = (kinova_gen3_interfaces__srv__GetTool_Response *)allocator.allocate(sizeof(kinova_gen3_interfaces__srv__GetTool_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinova_gen3_interfaces__srv__GetTool_Response));
  bool success = kinova_gen3_interfaces__srv__GetTool_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinova_gen3_interfaces__srv__GetTool_Response__destroy(kinova_gen3_interfaces__srv__GetTool_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinova_gen3_interfaces__srv__GetTool_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__init(kinova_gen3_interfaces__srv__GetTool_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Response * data = NULL;

  if (size) {
    data = (kinova_gen3_interfaces__srv__GetTool_Response *)allocator.zero_allocate(size, sizeof(kinova_gen3_interfaces__srv__GetTool_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinova_gen3_interfaces__srv__GetTool_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinova_gen3_interfaces__srv__GetTool_Response__fini(&data[i - 1]);
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
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__fini(kinova_gen3_interfaces__srv__GetTool_Response__Sequence * array)
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
      kinova_gen3_interfaces__srv__GetTool_Response__fini(&array->data[i]);
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

kinova_gen3_interfaces__srv__GetTool_Response__Sequence *
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinova_gen3_interfaces__srv__GetTool_Response__Sequence * array = (kinova_gen3_interfaces__srv__GetTool_Response__Sequence *)allocator.allocate(sizeof(kinova_gen3_interfaces__srv__GetTool_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinova_gen3_interfaces__srv__GetTool_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__destroy(kinova_gen3_interfaces__srv__GetTool_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinova_gen3_interfaces__srv__GetTool_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__are_equal(const kinova_gen3_interfaces__srv__GetTool_Response__Sequence * lhs, const kinova_gen3_interfaces__srv__GetTool_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinova_gen3_interfaces__srv__GetTool_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinova_gen3_interfaces__srv__GetTool_Response__Sequence__copy(
  const kinova_gen3_interfaces__srv__GetTool_Response__Sequence * input,
  kinova_gen3_interfaces__srv__GetTool_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinova_gen3_interfaces__srv__GetTool_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinova_gen3_interfaces__srv__GetTool_Response * data =
      (kinova_gen3_interfaces__srv__GetTool_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinova_gen3_interfaces__srv__GetTool_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinova_gen3_interfaces__srv__GetTool_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinova_gen3_interfaces__srv__GetTool_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
