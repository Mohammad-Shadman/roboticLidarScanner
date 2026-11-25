# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target kinova_gen3_interfaces::kinova_gen3_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${kinova_gen3_interfaces_TARGETS}.
if(kinova_gen3_interfaces_TARGETS AND NOT TARGET kinova_gen3_interfaces::kinova_gen3_interfaces)
  add_library(kinova_gen3_interfaces::kinova_gen3_interfaces INTERFACE IMPORTED)
  set_target_properties(kinova_gen3_interfaces::kinova_gen3_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${kinova_gen3_interfaces_TARGETS}")
endif()
