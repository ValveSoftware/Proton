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

if(WIN32)
    add_subdirectory(OSDependent/Windows)
elseif(UNIX OR "${CMAKE_SYSTEM_NAME}" STREQUAL "Fuchsia")
    add_subdirectory(OSDependent/Unix)
else()
    message("unknown platform")
endif()

if(EMSCRIPTEN OR ENABLE_GLSLANG_JS)
    # May be enabled on non-Emscripten builds for binary-size testing.
    add_subdirectory(OSDependent/Web)
endif()

################################################################################
# GenericCodeGen
################################################################################
add_library(GenericCodeGen STATIC
    GenericCodeGen/CodeGen.cpp
    GenericCodeGen/Link.cpp)
set_property(TARGET GenericCodeGen PROPERTY POSITION_INDEPENDENT_CODE ON)
set_property(TARGET GenericCodeGen PROPERTY FOLDER glslang)

################################################################################
# MachineIndependent
################################################################################
set(MACHINEINDEPENDENT_SOURCES
    MachineIndependent/glslang.m4
    MachineIndependent/glslang.y
    MachineIndependent/glslang_tab.cpp
    MachineIndependent/attribute.cpp
    MachineIndependent/Constant.cpp
    MachineIndependent/iomapper.cpp
    MachineIndependent/InfoSink.cpp
    MachineIndependent/Initialize.cpp
    MachineIndependent/IntermTraverse.cpp
    MachineIndependent/Intermediate.cpp
    MachineIndependent/ParseContextBase.cpp
    MachineIndependent/ParseHelper.cpp
    MachineIndependent/PoolAlloc.cpp
    MachineIndependent/RemoveTree.cpp
    MachineIndependent/Scan.cpp
    MachineIndependent/ShaderLang.cpp
    MachineIndependent/SpirvIntrinsics.cpp
    MachineIndependent/SymbolTable.cpp
    MachineIndependent/Versions.cpp
    MachineIndependent/intermOut.cpp
    MachineIndependent/limits.cpp
    MachineIndependent/linkValidate.cpp
    MachineIndependent/parseConst.cpp
    MachineIndependent/reflection.cpp
    MachineIndependent/preprocessor/Pp.cpp
    MachineIndependent/preprocessor/PpAtom.cpp
    MachineIndependent/preprocessor/PpContext.cpp
    MachineIndependent/preprocessor/PpScanner.cpp
    MachineIndependent/preprocessor/PpTokens.cpp
    MachineIndependent/propagateNoContraction.cpp
)

set(MACHINEINDEPENDENT_HEADERS
    MachineIndependent/attribute.h
    MachineIndependent/glslang_tab.cpp.h
    MachineIndependent/gl_types.h
    MachineIndependent/Initialize.h
    MachineIndependent/iomapper.h
    MachineIndependent/LiveTraverser.h
    MachineIndependent/localintermediate.h
    MachineIndependent/ParseHelper.h
    MachineIndependent/reflection.h
    MachineIndependent/RemoveTree.h
    MachineIndependent/Scan.h
    MachineIndependent/ScanContext.h
    MachineIndependent/SymbolTable.h
    MachineIndependent/Versions.h
    MachineIndependent/parseVersions.h
    MachineIndependent/propagateNoContraction.h
    MachineIndependent/preprocessor/PpContext.h
    MachineIndependent/preprocessor/PpTokens.h
)

if(ENABLE_HLSL)
    list(APPEND MACHINEINDEPENDENT_SOURCES
        HLSL/hlslAttributes.cpp
        HLSL/hlslParseHelper.cpp
        HLSL/hlslScanContext.cpp
        HLSL/hlslOpMap.cpp
        HLSL/hlslTokenStream.cpp
        HLSL/hlslGrammar.cpp
        HLSL/hlslParseables.cpp)

    list(APPEND MACHINEINDEPENDENT_HEADERS
        HLSL/hlslAttributes.h
        HLSL/hlslParseHelper.h
        HLSL/hlslTokens.h
        HLSL/hlslScanContext.h
        HLSL/hlslOpMap.h
        HLSL/hlslTokenStream.h
        HLSL/hlslGrammar.h
        HLSL/hlslParseables.h)
endif()

add_library(MachineIndependent STATIC ${MACHINEINDEPENDENT_SOURCES} ${MACHINEINDEPENDENT_HEADERS})
set_property(TARGET MachineIndependent PROPERTY POSITION_INDEPENDENT_CODE ON)
set_property(TARGET MachineIndependent PROPERTY FOLDER glslang)

glslang_add_build_info_dependency(MachineIndependent)

glslang_pch(MachineIndependent MachineIndependent/pch.h)

target_link_libraries(MachineIndependent PRIVATE OGLCompiler OSDependent GenericCodeGen)

################################################################################
# glslang
################################################################################
set(GLSLANG_SOURCES
    CInterface/glslang_c_interface.cpp)

set(GLSLANG_HEADERS
    Public/ShaderLang.h
    Include/arrays.h
    Include/BaseTypes.h
    Include/Common.h
    Include/ConstantUnion.h
    Include/glslang_c_interface.h
    Include/glslang_c_shader_types.h
    Include/InfoSink.h
    Include/InitializeGlobals.h
    Include/intermediate.h
    Include/PoolAlloc.h
    Include/ResourceLimits.h
    Include/ShHandle.h
    Include/SpirvIntrinsics.h
    Include/Types.h)

add_library(glslang ${LIB_TYPE} ${BISON_GLSLParser_OUTPUT_SOURCE} ${GLSLANG_SOURCES} ${GLSLANG_HEADERS})
set_target_properties(glslang PROPERTIES
    FOLDER glslang
    POSITION_INDEPENDENT_CODE ON
    VERSION   "${GLSLANG_VERSION}"
    SOVERSION "${GLSLANG_VERSION_MAJOR}")
target_link_libraries(glslang PRIVATE OGLCompiler OSDependent MachineIndependent)
target_include_directories(glslang PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

glslang_add_build_info_dependency(glslang)

glslang_only_export_explicit_symbols(glslang)

if(WIN32 AND BUILD_SHARED_LIBS)
    set_target_properties(glslang PROPERTIES PREFIX "")
endif()

################################################################################
# source_groups
################################################################################
if(WIN32)
    source_group("Public" REGULAR_EXPRESSION "Public/*")
    source_group("MachineIndependent" REGULAR_EXPRESSION "MachineIndependent/[^/]*")
    source_group("Include" REGULAR_EXPRESSION "Include/[^/]*")
    source_group("GenericCodeGen" REGULAR_EXPRESSION "GenericCodeGen/*")
    source_group("MachineIndependent\\Preprocessor" REGULAR_EXPRESSION "MachineIndependent/preprocessor/*")
    source_group("HLSL" REGULAR_EXPRESSION "HLSL/*")
    source_group("CInterface" REGULAR_EXPRESSION "CInterface/*")
endif()

################################################################################
# install
################################################################################
if(ENABLE_GLSLANG_INSTALL)
    install(TARGETS glslang EXPORT glslang-targets)
    install(TARGETS MachineIndependent EXPORT glslang-targets)
    install(TARGETS GenericCodeGen EXPORT glslang-targets)

    # Backward compatibility
    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/glslangTargets.cmake" "
        message(WARNING \"Using `glslangTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

        if (NOT TARGET glslang::glslang)
            include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
        endif()

        if(${BUILD_SHARED_LIBS})
            add_library(glslang ALIAS glslang::glslang)
        else()
            add_library(glslang ALIAS glslang::glslang)
            add_library(MachineIndependent ALIAS glslang::MachineIndependent)
            add_library(GenericCodeGen ALIAS glslang::GenericCodeGen)
        endif()
    ")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/glslangTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)

    set(ALL_HEADERS
        ${GLSLANG_HEADERS}
        ${MACHINEINDEPENDENT_HEADERS})

    foreach(file ${ALL_HEADERS})
        get_filename_component(dir ${file} DIRECTORY)
        install(FILES ${file} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/glslang/${dir})
    endforeach()

    install(FILES ${GLSLANG_BUILD_INFO_H} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/glslang)

endif()
