# Copyright (C) 2020 The Khronos Group Inc.
#
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#    Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#
#    Redistributions in binary form must reproduce the above
#    copyright notice, this list of conditions and the following
#    disclaimer in the documentation and/or other materials provided
#    with the distribution.
#
#    Neither the name of The Khronos Group Inc. nor the names of its
#    contributors may be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

find_host_package(PythonInterp 3 REQUIRED)

set(GLSLANG_INTRINSIC_H          "${GLSLANG_GENERATED_INCLUDEDIR}/glslang/glsl_intrinsic_header.h")
set(GLSLANG_INTRINSIC_PY         "${CMAKE_CURRENT_SOURCE_DIR}/../gen_extension_headers.py")
set(GLSLANG_INTRINSIC_HEADER_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../glslang/ExtensionHeaders")

add_custom_command(
    OUTPUT  ${GLSLANG_INTRINSIC_H}
    COMMAND ${PYTHON_EXECUTABLE} "${GLSLANG_INTRINSIC_PY}"
            "-i" ${GLSLANG_INTRINSIC_HEADER_DIR}
            "-o" ${GLSLANG_INTRINSIC_H}
    DEPENDS ${GLSLANG_INTRINSIC_PY}
    COMMENT "Generating ${GLSLANG_INTRINSIC_H}")

#add_custom_target(glslangValidator DEPENDS ${GLSLANG_INTRINSIC_H})

add_library(glslang-default-resource-limits
            ${CMAKE_CURRENT_SOURCE_DIR}/ResourceLimits.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/resource_limits_c.cpp)
set_property(TARGET glslang-default-resource-limits PROPERTY FOLDER glslang)
set_property(TARGET glslang-default-resource-limits PROPERTY POSITION_INDEPENDENT_CODE ON)

target_include_directories(glslang-default-resource-limits
                           PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                           PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)

set(SOURCES StandAlone.cpp DirStackFileIncluder.h  ${GLSLANG_INTRINSIC_H})

add_executable(glslangValidator ${SOURCES})
set_property(TARGET glslangValidator PROPERTY FOLDER tools)
glslang_set_link_args(glslangValidator)

set(LIBRARIES
    glslang
    SPIRV
    glslang-default-resource-limits)

if(ENABLE_SPVREMAPPER)
    set(LIBRARIES ${LIBRARIES} SPVRemapper)
endif()

if(WIN32)
    set(LIBRARIES ${LIBRARIES} psapi)
elseif(UNIX)
    if(NOT ANDROID)
        set(LIBRARIES ${LIBRARIES} pthread)
    endif()
endif()

target_link_libraries(glslangValidator ${LIBRARIES})
target_include_directories(glslangValidator PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../External>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/External>)

if(ENABLE_OPT)
    target_include_directories(glslangValidator
        PRIVATE ${spirv-tools_SOURCE_DIR}/include
    )
endif()

if(ENABLE_SPVREMAPPER)
    set(REMAPPER_SOURCES spirv-remap.cpp)
    add_executable(spirv-remap ${REMAPPER_SOURCES})
    set_property(TARGET spirv-remap PROPERTY FOLDER tools)
    glslang_set_link_args(spirv-remap)
    target_link_libraries(spirv-remap ${LIBRARIES})
endif()

if(WIN32)
    source_group("Source" FILES ${SOURCES})
endif()

if(ENABLE_GLSLANG_INSTALL)
    install(TARGETS glslangValidator EXPORT glslang-targets)

    # Backward compatibility
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/glslangValidatorTargets.cmake" "
        message(WARNING \"Using `glslangValidatorTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

        if (NOT TARGET glslang::glslangValidator)
            include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
        endif()

        add_library(glslangValidator ALIAS glslang::glslangValidator)
    ")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/glslangValidatorTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)

    if(ENABLE_SPVREMAPPER)
        install(TARGETS spirv-remap EXPORT glslang-targets)

        # Backward compatibility
        file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/spirv-remapTargets.cmake" "
            message(WARNING \"Using `spirv-remapTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

            if (NOT TARGET glslang::spirv-remap)
                include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
            endif()

            add_library(spirv-remap ALIAS glslang::spirv-remap)
        ")
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/spirv-remapTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)
    endif()

    install(TARGETS glslang-default-resource-limits EXPORT glslang-targets)

    # Backward compatibility
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/glslang-default-resource-limitsTargets.cmake" "
        message(WARNING \"Using `glslang-default-resource-limitsTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

        if (NOT TARGET glslang::glslang-default-resource-limits)
            include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
        endif()

        add_library(glslang-default-resource-limits ALIAS glslang::glslang-default-resource-limits)
    ")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/glslang-default-resource-limitsTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)

endif()
