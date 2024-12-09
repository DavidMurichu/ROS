# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:second_coursework__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:second_coursework__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:second_coursework__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:second_coursework__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:second_coursework__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:second_coursework__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:second_coursework__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:second_coursework__rosidl_typesupport_cpp;__rosidl_generator_py:second_coursework__rosidl_generator_py")

# populate second_coursework_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "second_coursework::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'second_coursework' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND second_coursework_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
