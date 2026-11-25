// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_interfaces:srv/GetTool.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__BUILDER_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_interfaces/srv/detail/get_tool__struct.hpp"
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
auto build<::kinova_gen3_interfaces::srv::GetTool_Request>()
{
  return ::kinova_gen3_interfaces::srv::GetTool_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace kinova_gen3_interfaces


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetTool_Response_theta_z
{
public:
  explicit Init_GetTool_Response_theta_z(::kinova_gen3_interfaces::srv::GetTool_Response & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_interfaces::srv::GetTool_Response theta_z(::kinova_gen3_interfaces::srv::GetTool_Response::_theta_z_type arg)
  {
    msg_.theta_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

class Init_GetTool_Response_theta_y
{
public:
  explicit Init_GetTool_Response_theta_y(::kinova_gen3_interfaces::srv::GetTool_Response & msg)
  : msg_(msg)
  {}
  Init_GetTool_Response_theta_z theta_y(::kinova_gen3_interfaces::srv::GetTool_Response::_theta_y_type arg)
  {
    msg_.theta_y = std::move(arg);
    return Init_GetTool_Response_theta_z(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

class Init_GetTool_Response_theta_x
{
public:
  explicit Init_GetTool_Response_theta_x(::kinova_gen3_interfaces::srv::GetTool_Response & msg)
  : msg_(msg)
  {}
  Init_GetTool_Response_theta_y theta_x(::kinova_gen3_interfaces::srv::GetTool_Response::_theta_x_type arg)
  {
    msg_.theta_x = std::move(arg);
    return Init_GetTool_Response_theta_y(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

class Init_GetTool_Response_z
{
public:
  explicit Init_GetTool_Response_z(::kinova_gen3_interfaces::srv::GetTool_Response & msg)
  : msg_(msg)
  {}
  Init_GetTool_Response_theta_x z(::kinova_gen3_interfaces::srv::GetTool_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetTool_Response_theta_x(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

class Init_GetTool_Response_y
{
public:
  explicit Init_GetTool_Response_y(::kinova_gen3_interfaces::srv::GetTool_Response & msg)
  : msg_(msg)
  {}
  Init_GetTool_Response_z y(::kinova_gen3_interfaces::srv::GetTool_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetTool_Response_z(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

class Init_GetTool_Response_x
{
public:
  Init_GetTool_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTool_Response_y x(::kinova_gen3_interfaces::srv::GetTool_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetTool_Response_y(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::GetTool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::GetTool_Response>()
{
  return kinova_gen3_interfaces::srv::builder::Init_GetTool_Response_x();
}

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_TOOL__BUILDER_HPP_
