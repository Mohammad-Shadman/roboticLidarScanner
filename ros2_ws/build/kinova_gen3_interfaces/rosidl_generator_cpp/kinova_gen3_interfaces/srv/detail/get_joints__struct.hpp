// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kinova_gen3_interfaces:srv/GetJoints.idl
// generated code does not contain a copyright notice

#ifndef KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__STRUCT_HPP_
#define KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Request __declspec(deprecated)
#endif

namespace kinova_gen3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJoints_Request_
{
  using Type = GetJoints_Request_<ContainerAllocator>;

  explicit GetJoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetJoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Request
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Request
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJoints_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJoints_Request_

// alias to use template instance with default allocator
using GetJoints_Request =
  kinova_gen3_interfaces::srv::GetJoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinova_gen3_interfaces


#ifndef _WIN32
# define DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Response __declspec(deprecated)
#endif

namespace kinova_gen3_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJoints_Response_
{
  using Type = GetJoints_Response_<ContainerAllocator>;

  explicit GetJoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetJoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joints_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _joints_type joints;

  // setters for named parameter idiom
  Type & set__joints(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->joints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Response
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kinova_gen3_interfaces__srv__GetJoints_Response
    std::shared_ptr<kinova_gen3_interfaces::srv::GetJoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJoints_Response_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJoints_Response_

// alias to use template instance with default allocator
using GetJoints_Response =
  kinova_gen3_interfaces::srv::GetJoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kinova_gen3_interfaces

namespace kinova_gen3_interfaces
{

namespace srv
{

struct GetJoints
{
  using Request = kinova_gen3_interfaces::srv::GetJoints_Request;
  using Response = kinova_gen3_interfaces::srv::GetJoints_Response;
};

}  // namespace srv

}  // namespace kinova_gen3_interfaces

#endif  // KINOVA_GEN3_INTERFACES__SRV__DETAIL__GET_JOINTS__STRUCT_HPP_
