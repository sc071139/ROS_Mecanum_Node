# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(WARNING "Invoking generate_messages() without having added any message or service file before.
You should either add add_message_files() and/or add_service_files() calls or remove the invocation of generate_messages().")
message(STATUS "middle: 0 messages, 0 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/hydro/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(middle_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_cpp(middle
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/middle
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(middle_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(middle_generate_messages middle_generate_messages_cpp)

# target for backward compatibility
add_custom_target(middle_gencpp)
add_dependencies(middle_gencpp middle_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS middle_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_lisp(middle
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/middle
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(middle_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(middle_generate_messages middle_generate_messages_lisp)

# target for backward compatibility
add_custom_target(middle_genlisp)
add_dependencies(middle_genlisp middle_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS middle_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_py(middle
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/middle
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(middle_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(middle_generate_messages middle_generate_messages_py)

# target for backward compatibility
add_custom_target(middle_genpy)
add_dependencies(middle_genpy middle_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS middle_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/middle)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/middle
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(middle_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/middle)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/middle
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(middle_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/middle)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/middle\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/middle
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(middle_generate_messages_py std_msgs_generate_messages_py)
