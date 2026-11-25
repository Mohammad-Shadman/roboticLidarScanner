// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kinova_gen3_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kinova_gen3_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
#include "kinova_gen3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kinova_gen3_interfaces/srv/detail/set_joints__functions.h"
#include "kinova_gen3_interfaces/srv/detail/set_joints__struct.h"


// Include directives for member types
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinova_gen3_interfaces__srv__SetJoints_Request__init(message_memory);
}

void kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_fini_function(void * message_memory)
{
  kinova_gen3_interfaces__srv__SetJoints_Request__fini(message_memory);
}

size_t kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__size_function__SetJoints_Request__joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_const_function__SetJoints_Request__joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_function__SetJoints_Request__joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__fetch_function__SetJoints_Request__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_const_function__SetJoints_Request__joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__assign_function__SetJoints_Request__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_function__SetJoints_Request__joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__resize_function__SetJoints_Request__joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_member_array[1] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinova_gen3_interfaces__srv__SetJoints_Request, joints),  // bytes offset in struct
    NULL,  // default value
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__size_function__SetJoints_Request__joints,  // size() function pointer
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_const_function__SetJoints_Request__joints,  // get_const(index) function pointer
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__get_function__SetJoints_Request__joints,  // get(index) function pointer
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__fetch_function__SetJoints_Request__joints,  // fetch(index, &value) function pointer
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__assign_function__SetJoints_Request__joints,  // assign(index, value) function pointer
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__resize_function__SetJoints_Request__joints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_members = {
  "kinova_gen3_interfaces__srv",  // message namespace
  "SetJoints_Request",  // message name
  1,  // number of fields
  sizeof(kinova_gen3_interfaces__srv__SetJoints_Request),
  kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_member_array,  // message members
  kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle = {
  0,
  &kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinova_gen3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Request)() {
  if (!kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle.typesupport_identifier) {
    kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinova_gen3_interfaces__srv__SetJoints_Request__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kinova_gen3_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kinova_gen3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kinova_gen3_interfaces/srv/detail/set_joints__functions.h"
// already included above
// #include "kinova_gen3_interfaces/srv/detail/set_joints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kinova_gen3_interfaces__srv__SetJoints_Response__init(message_memory);
}

void kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_fini_function(void * message_memory)
{
  kinova_gen3_interfaces__srv__SetJoints_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kinova_gen3_interfaces__srv__SetJoints_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_members = {
  "kinova_gen3_interfaces__srv",  // message namespace
  "SetJoints_Response",  // message name
  1,  // number of fields
  sizeof(kinova_gen3_interfaces__srv__SetJoints_Response),
  kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_member_array,  // message members
  kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle = {
  0,
  &kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinova_gen3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Response)() {
  if (!kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle.typesupport_identifier) {
    kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kinova_gen3_interfaces__srv__SetJoints_Response__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kinova_gen3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kinova_gen3_interfaces/srv/detail/set_joints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_members = {
  "kinova_gen3_interfaces__srv",  // service namespace
  "SetJoints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_Request_message_type_support_handle,
  NULL  // response message
  // kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_Response_message_type_support_handle
};

static rosidl_service_type_support_t kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle = {
  0,
  &kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kinova_gen3_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints)() {
  if (!kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.typesupport_identifier) {
    kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kinova_gen3_interfaces, srv, SetJoints_Response)()->data;
  }

  return &kinova_gen3_interfaces__srv__detail__set_joints__rosidl_typesupport_introspection_c__SetJoints_service_type_support_handle;
}
