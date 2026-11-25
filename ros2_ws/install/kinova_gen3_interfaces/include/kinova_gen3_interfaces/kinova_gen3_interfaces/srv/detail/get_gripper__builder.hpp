// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_interfaces:srv/GetGripper.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__BUILDER_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_interfaces/srv/detail/get_gripper__struct.hpp"
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
auto build<::kinova_gen3_interfaces::srv::GetGripper_Request>()
{
  return ::kinova_gen3_interfaces::srv::GetGripper_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kinova_gen3_interfaces


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGripper_Response_value
{
public:
  Init_GetGripper_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_interfaces::srv::GetGripper_Response value(::kinova_gen3_interfaces::srv::GetGripper_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::GetGripper_Response>()
{
  return kinova_gen3_interfaces::srv::builder::Init_GetGripper_Response_value();
}

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__BUILDER_HPP_
