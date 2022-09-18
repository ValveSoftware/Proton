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

set(SOURCES
    GlslangToSpv.cpp
    InReadableOrder.cpp
    Logger.cpp
    SpvBuilder.cpp
    SpvPostProcess.cpp
    doc.cpp
    SpvTools.cpp
    disassemble.cpp
    CInterface/spirv_c_interface.cpp)

set(SPVREMAP_SOURCES
    SPVRemapper.cpp
    doc.cpp)

set(HEADERS
    bitutils.h
    spirv.hpp
    GLSL.std.450.h
    GLSL.ext.EXT.h
    GLSL.ext.KHR.h
    GlslangToSpv.h
    hex_float.h
    Logger.h
    SpvBuilder.h
    spvIR.h
    doc.h
    SpvTools.h
    disassemble.h
    GLSL.ext.AMD.h
    GLSL.ext.NV.h
    NonSemanticDebugPrintf.h
    NonSemanticShaderDebugInfo100.h)

set(SPVREMAP_HEADERS
    SPVRemapper.h
    doc.h)

add_library(SPIRV ${LIB_TYPE} ${SOURCES} ${HEADERS})
set_property(TARGET SPIRV PROPERTY FOLDER glslang)
set_property(TARGET SPIRV PROPERTY POSITION_INDEPENDENT_CODE ON)
target_include_directories(SPIRV PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

glslang_add_build_info_dependency(SPIRV)

if (ENABLE_SPVREMAPPER)
    add_library(SPVRemapper ${LIB_TYPE} ${SPVREMAP_SOURCES} ${SPVREMAP_HEADERS})
    set_property(TARGET SPVRemapper PROPERTY FOLDER glslang)
    set_property(TARGET SPVRemapper PROPERTY POSITION_INDEPENDENT_CODE ON)
endif()

if(WIN32 AND BUILD_SHARED_LIBS)
    set_target_properties(SPIRV PROPERTIES PREFIX "")
    if (ENABLE_SPVREMAPPER)
        set_target_properties(SPVRemapper PROPERTIES PREFIX "")
    endif()
endif()

if(ENABLE_OPT)
    target_include_directories(SPIRV
        PRIVATE ${spirv-tools_SOURCE_DIR}/include
        PRIVATE ${spirv-tools_SOURCE_DIR}/source
    )
    target_link_libraries(SPIRV PRIVATE MachineIndependent SPIRV-Tools-opt)
    target_include_directories(SPIRV PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../External>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/External>)
else()
    target_link_libraries(SPIRV PRIVATE MachineIndependent)
endif()

if(WIN32)
    source_group("Source" FILES ${SOURCES} ${HEADERS})
    source_group("Source" FILES ${SPVREMAP_SOURCES} ${SPVREMAP_HEADERS})
endif()

if(ENABLE_GLSLANG_INSTALL)
    if (ENABLE_SPVREMAPPER)
        install(TARGETS SPVRemapper EXPORT glslang-targets)
    endif()

    install(TARGETS SPIRV EXPORT glslang-targets)

    # Backward compatibility
    if (ENABLE_SPVREMAPPER)
        file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/SPVRemapperTargets.cmake" "
            message(WARNING \"Using `SPVRemapperTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

            if (NOT TARGET glslang::SPVRemapper)
                include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
            endif()

            add_library(SPVRemapper ALIAS glslang::SPVRemapper)
        ")
        install(FILES "${CMAKE_CURRENT_BINARY_DIR}/SPVRemapperTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)
    endif()

    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/SPIRVTargets.cmake" "
        message(WARNING \"Using `SPIRVTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

        if (NOT TARGET glslang::SPIRV)
            include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
        endif()

        add_library(SPIRV ALIAS glslang::SPIRV)
    ")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/SPIRVTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)

    install(FILES ${HEADERS} ${SPVREMAP_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/glslang/SPIRV/)
endif()
