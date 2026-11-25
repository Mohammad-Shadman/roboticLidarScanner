// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinova_gen3_interfaces:srv/SetTool.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__TRAITS_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinova_gen3_interfaces/srv/detail/set_tool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: theta_x
  {
    out << "theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_x, out);
    out << ", ";
  }

  // member: theta_y
  {
    out << "theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_y, out);
    out << ", ";
  }

  // member: theta_z
  {
    out << "theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: theta_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_x, out);
    out << "\n";
  }

  // member: theta_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_y, out);
    out << "\n";
  }

  // member: theta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTool_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kinova_gen3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_interfaces::srv::SetTool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::SetTool_Request & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::SetTool_Request>()
{
  return "kinova_gen3_interfaces::srv::SetTool_Request";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::SetTool_Request>()
{
  return "kinova_gen3_interfaces/srv/SetTool_Request";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::SetTool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::SetTool_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::SetTool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTool_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kinova_gen3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kinova_gen3_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinova_gen3_interfaces::srv::SetTool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::SetTool_Response & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::SetTool_Response>()
{
  return "kinova_gen3_interfaces::srv::SetTool_Response";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::SetTool_Response>()
{
  return "kinova_gen3_interfaces/srv/SetTool_Response";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::SetTool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::SetTool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::SetTool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::SetTool>()
{
  return "kinova_gen3_interfaces::srv::SetTool";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::SetTool>()
{
  return "kinova_gen3_interfaces/srv/SetTool";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::SetTool>
  : std::integral_constant<
    bool,
    has_fixed_size<kinova_gen3_interfaces::srv::SetTool_Request>::value &&
    has_fixed_size<kinova_gen3_interfaces::srv::SetTool_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::SetTool>
  : std::integral_constant<
    bool,
    has_bounded_size<kinova_gen3_interfaces::srv::SetTool_Request>::value &&
    has_bounded_size<kinova_gen3_interfaces::srv::SetTool_Response>::value
  >
{
};

template<>
struct is_service<kinova_gen3_interfaces::srv::SetTool>
  : std::true_type
{
};

template<>
struct is_service_request<kinova_gen3_interfaces::srv::SetTool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinova_gen3_interfaces::srv::SetTool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__SET_TOOL__TRAITS_HPP_
