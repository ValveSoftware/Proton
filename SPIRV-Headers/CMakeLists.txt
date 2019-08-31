# Copyright (c) 2015-2016 The Khronos Group Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and/or associated documentation files (the
# "Materials"), to deal in the Materials without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Materials, and to
# permit persons to whom the Materials are furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Materials.
#
# MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS
# KHRONOS STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS
# SPECIFICATIONS AND HEADER INFORMATION ARE LOCATED AT
#    https://www.khronos.org/registry/
#
# THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
# CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
# TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
# MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.

#
# The SPIR-V headers from the SPIR-V Registry
# https://www.khronos.org/registry/spir-v/
#
cmake_minimum_required(VERSION 3.0)
project(SPIRV-Headers VERSION 1.4.1)

# There are two ways to use this project.
#
# Using this source tree directly from a CMake-based project:
#   1. Add an add_subdirectory directive to include this sub directory.
#   2. Use ${SPIRV-Headers_SOURCE_DIR}/include} in a target_include_directories
#      command.
#
# Installing the headers first, then using them with an implicit include
# directory.  To install the headers:
#   1. mkdir build ; cd build
#   2. cmake ..
#   3. cmake --build . --target install

# legacy
add_custom_target(install-headers
    COMMAND cmake -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/include/spirv
        $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include/spirv)

option(SPIRV_HEADERS_SKIP_EXAMPLES "Skip building examples"
      ${SPIRV_HEADERS_SKIP_EXAMPLES})
if(NOT ${SPIRV_HEADERS_SKIP_EXAMPLES})
  set(SPIRV_HEADERS_ENABLE_EXAMPLES ON)
endif()
if (SPIRV_HEADERS_ENABLE_EXAMPLES)
  message(STATUS "Building SPIRV-Header examples")
  add_subdirectory(example)
endif()

include(GNUInstallDirs)
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# Installation

set(config_install_dir "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")

set(generated_dir "${CMAKE_CURRENT_BINARY_DIR}/generated")

set(version_config "${generated_dir}/${PROJECT_NAME}ConfigVersion.cmake")
set(project_config "${generated_dir}/${PROJECT_NAME}Config.cmake")
set(TARGETS_EXPORT_NAME "${PROJECT_NAME}Targets")
set(namespace "${PROJECT_NAME}::")

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${version_config}"
    COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
    "cmake/Config.cmake.in"
    "${project_config}"
    INSTALL_DESTINATION "${config_install_dir}"
)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT "${TARGETS_EXPORT_NAME}"
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
    DIRECTORY include/spirv
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(
    FILES "${project_config}" "${version_config}"
    DESTINATION "${config_install_dir}"
)

install(
    EXPORT "${TARGETS_EXPORT_NAME}"
    NAMESPACE "${namespace}"
    DESTINATION "${config_install_dir}"
)

