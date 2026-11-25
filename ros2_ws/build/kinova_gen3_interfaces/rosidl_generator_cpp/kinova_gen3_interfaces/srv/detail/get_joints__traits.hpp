// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinova_gen3_interfaces:srv/GetJoints.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__TRAITS_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinova_gen3_interfaces/srv/detail/get_joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJoints_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJoints_Request & msg, bool use_flow_style = false)
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
  const kinova_gen3_interfaces::srv::GetJoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::GetJoints_Request & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetJoints_Request>()
{
  return "kinova_gen3_interfaces::srv::GetJoints_Request";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetJoints_Request>()
{
  return "kinova_gen3_interfaces/srv/GetJoints_Request";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetJoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetJoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::GetJoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kinova_gen3_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJoints_Response & msg, bool use_flow_style = false)
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
  const kinova_gen3_interfaces::srv::GetJoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinova_gen3_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinova_gen3_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinova_gen3_interfaces::srv::GetJoints_Response & msg)
{
  return kinova_gen3_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetJoints_Response>()
{
  return "kinova_gen3_interfaces::srv::GetJoints_Response";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetJoints_Response>()
{
  return "kinova_gen3_interfaces/srv/GetJoints_Response";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetJoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetJoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinova_gen3_interfaces::srv::GetJoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinova_gen3_interfaces::srv::GetJoints>()
{
  return "kinova_gen3_interfaces::srv::GetJoints";
}

template<>
inline const char * name<kinova_gen3_interfaces::srv::GetJoints>()
{
  return "kinova_gen3_interfaces/srv/GetJoints";
}

template<>
struct has_fixed_size<kinova_gen3_interfaces::srv::GetJoints>
  : std::integral_constant<
    bool,
    has_fixed_size<kinova_gen3_interfaces::srv::GetJoints_Request>::value &&
    has_fixed_size<kinova_gen3_interfaces::srv::GetJoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinova_gen3_interfaces::srv::GetJoints>
  : std::integral_constant<
    bool,
    has_bounded_size<kinova_gen3_interfaces::srv::GetJoints_Request>::value &&
    has_bounded_size<kinova_gen3_interfaces::srv::GetJoints_Response>::value
  >
{
};

template<>
struct is_service<kinova_gen3_interfaces::srv::GetJoints>
  : std::true_type
{
};

template<>
struct is_service_request<kinova_gen3_interfaces::srv::GetJoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinova_gen3_interfaces::srv::GetJoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__TRAITS_HPP_
