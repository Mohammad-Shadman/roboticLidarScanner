// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinova_gen3_interfaces:srv/Status.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__STATUS__STRUCT_H_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Status in the package kinova_gen3_interfaces.
typedef struct kinova_gen3_interfaces__srv__Status_Request
{
  uint8_t structure_needs_at_least_one_member;
} kinova_gen3_interfaces__srv__Status_Request;

// Struct for a sequence of kinova_gen3_interfaces__srv__Status_Request.
typedef struct kinova_gen3_interfaces__srv__Status_Request__Sequence
{
  kinova_gen3_interfaces__srv__Status_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_interfaces__srv__Status_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Status in the package kinova_gen3_interfaces.
typedef struct kinova_gen3_interfaces__srv__Status_Response
{
  bool status;
} kinova_gen3_interfaces__srv__Status_Response;

// Struct for a sequence of kinova_gen3_interfaces__srv__Status_Response.
typedef struct kinova_gen3_interfaces__srv__Status_Response__Sequence
{
  kinova_gen3_interfaces__srv__Status_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_interfaces__srv__Status_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__STATUS__STRUCT_H_
