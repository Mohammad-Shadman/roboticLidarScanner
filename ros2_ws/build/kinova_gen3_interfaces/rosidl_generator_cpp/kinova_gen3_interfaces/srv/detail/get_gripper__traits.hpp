// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinova_gen3_interfaces:srv/GetGripper.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__TRAITS_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinova_gen3_interfaces/srv/detail/get_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripper_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripper_Request & msg, bool use_flow_style = false)
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
  const kinova_gen3_interfaces::srv::GetGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::GetGripper_Request & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetGripper_Request>()
{
  return "kinova_gen3_interfaces::srv::GetGripper_Request";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetGripper_Request>()
{
  return "kinova_gen3_interfaces/srv/GetGripper_Request";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::GetGripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripper_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripper_Response & msg, bool use_flow_style = false)
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
  const kinova_gen3_interfaces::srv::GetGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::GetGripper_Response & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetGripper_Response>()
{
  return "kinova_gen3_interfaces::srv::GetGripper_Response";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetGripper_Response>()
{
  return "kinova_gen3_interfaces/srv/GetGripper_Response";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::GetGripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetGripper>()
{
  return "kinova_gen3_interfaces::srv::GetGripper";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetGripper>()
{
  return "kinova_gen3_interfaces/srv/GetGripper";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetGripper>
  : std::integral_constant<
    bool,
    has_fixed_size<kinova_gen3_interfaces::srv::GetGripper_Request>::value &&
    has_fixed_size<kinova_gen3_interfaces::srv::GetGripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetGripper>
  : std::integral_constant<
    bool,
    has_bounded_size<kinova_gen3_interfaces::srv::GetGripper_Request>::value &&
    has_bounded_size<kinova_gen3_interfaces::srv::GetGripper_Response>::value
  >
{
};

template<>
struct is_service<kinova_gen3_interfaces::srv::GetGripper>
  : std::true_type
{
};

template<>
struct is_service_request<kinova_gen3_interfaces::srv::GetGripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinova_gen3_interfaces::srv::GetGripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_GRIPPER__TRAITS_HPP_
