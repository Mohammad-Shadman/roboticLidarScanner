// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinova_gen3_interfaces:srv/GetTool.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__STRUCT_H_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTool in the package kinova_gen3_interfaces.
typedef struct kinova_gen3_interfaces__srv__GetTool_Request
{
  uint8_t structure_needs_at_least_one_member;
} kinova_gen3_interfaces__srv__GetTool_Request;

// Struct for a sequence of kinova_gen3_interfaces__srv__GetTool_Request.
typedef struct kinova_gen3_interfaces__srv__GetTool_Request__Sequence
{
  kinova_gen3_interfaces__srv__GetTool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_interfaces__srv__GetTool_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetTool in the package kinova_gen3_interfaces.
typedef struct kinova_gen3_interfaces__srv__GetTool_Response
{
  float x;
  float y;
  float z;
  float theta_x;
  float theta_y;
  float theta_z;
} kinova_gen3_interfaces__srv__GetTool_Response;

// Struct for a sequence of kinova_gen3_interfaces__srv__GetTool_Response.
typedef struct kinova_gen3_interfaces__srv__GetTool_Response__Sequence
{
  kinova_gen3_interfaces__srv__GetTool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinova_gen3_interfaces__srv__GetTool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__STRUCT_H_
