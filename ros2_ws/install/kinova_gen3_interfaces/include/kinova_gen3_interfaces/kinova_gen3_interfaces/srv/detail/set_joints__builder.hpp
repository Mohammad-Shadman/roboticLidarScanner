// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_interfaces:srv/SetJoints.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_interfaces/srv/detail/set_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoints_Request_joints
{
public:
  Init_SetJoints_Request_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_interfaces::srv::SetJoints_Request joints(::kinova_gen3_interfaces::srv::SetJoints_Request::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetJoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::SetJoints_Request>()
{
  return kinova_gen3_interfaces::srv::builder::Init_SetJoints_Request_joints();
}

}  // namespace kinova_gen3_interfaces


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetJoints_Response_status
{
public:
  Init_SetJoints_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_interfaces::srv::SetJoints_Response status(::kinova_gen3_interfaces::srv::SetJoints_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetJoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::SetJoints_Response>()
{
  return kinova_gen3_interfaces::srv::builder::Init_SetJoints_Response_status();
}

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_JOINTS__BUILDER_HPP_
