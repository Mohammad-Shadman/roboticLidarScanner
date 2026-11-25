// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_interfaces:srv/GetJoints.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__BUILDER_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_interfaces/srv/detail/get_joints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinova_gen3_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::GetJoints_Request>()
{
  return ::kinova_gen3_interfaces::srv::GetJoints_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kinova_gen3_interfaces


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetJoints_Response_joints
{
public:
  Init_GetJoints_Response_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_interfaces::srv::GetJoints_Response joints(::kinova_gen3_interfaces::srv::GetJoints_Response::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetJoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::GetJoints_Response>()
{
  return kinova_gen3_interfaces::srv::builder::Init_GetJoints_Response_joints();
}

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__BUILDER_HPP_
