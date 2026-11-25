// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinova_gen3_interfaces:srv/SetTool.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__BUILDER_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinova_gen3_interfaces/srv/detail/set_tool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTool_Request_theta_z
{
public:
  explicit Init_SetTool_Request_theta_z(::kinova_gen3_interfaces::srv::SetTool_Request & msg)
  : msg_(msg)
  {}
  ::kinova_gen3_interfaces::srv::SetTool_Request theta_z(::kinova_gen3_interfaces::srv::SetTool_Request::_theta_z_type arg)
  {
    msg_.theta_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

class Init_SetTool_Request_theta_y
{
public:
  explicit Init_SetTool_Request_theta_y(::kinova_gen3_interfaces::srv::SetTool_Request & msg)
  : msg_(msg)
  {}
  Init_SetTool_Request_theta_z theta_y(::kinova_gen3_interfaces::srv::SetTool_Request::_theta_y_type arg)
  {
    msg_.theta_y = std::move(arg);
    return Init_SetTool_Request_theta_z(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

class Init_SetTool_Request_theta_x
{
public:
  explicit Init_SetTool_Request_theta_x(::kinova_gen3_interfaces::srv::SetTool_Request & msg)
  : msg_(msg)
  {}
  Init_SetTool_Request_theta_y theta_x(::kinova_gen3_interfaces::srv::SetTool_Request::_theta_x_type arg)
  {
    msg_.theta_x = std::move(arg);
    return Init_SetTool_Request_theta_y(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

class Init_SetTool_Request_z
{
public:
  explicit Init_SetTool_Request_z(::kinova_gen3_interfaces::srv::SetTool_Request & msg)
  : msg_(msg)
  {}
  Init_SetTool_Request_theta_x z(::kinova_gen3_interfaces::srv::SetTool_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SetTool_Request_theta_x(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

class Init_SetTool_Request_y
{
public:
  explicit Init_SetTool_Request_y(::kinova_gen3_interfaces::srv::SetTool_Request & msg)
  : msg_(msg)
  {}
  Init_SetTool_Request_z y(::kinova_gen3_interfaces::srv::SetTool_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SetTool_Request_z(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

class Init_SetTool_Request_x
{
public:
  Init_SetTool_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTool_Request_y x(::kinova_gen3_interfaces::srv::SetTool_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetTool_Request_y(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::SetTool_Request>()
{
  return kinova_gen3_interfaces::srv::builder::Init_SetTool_Request_x();
}

}  // namespace kinova_gen3_interfaces


namespace kinova_gen3_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTool_Response_status
{
public:
  Init_SetTool_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinova_gen3_interfaces::srv::SetTool_Response status(::kinova_gen3_interfaces::srv::SetTool_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinova_gen3_interfaces::srv::SetTool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinova_gen3_interfaces::srv::SetTool_Response>()
{
  return kinova_gen3_interfaces::srv::builder::Init_SetTool_Response_status();
}

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__BUILDER_HPP_
