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

if(BUILD_TESTING)
    if(TARGET gmock)
        message(STATUS "Google Mock found - building tests")

        set(TEST_SOURCES
            # Framework related source files
            ${CMAKE_CURRENT_SOURCE_DIR}/Initializer.h
            ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Settings.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Settings.h
            ${CMAKE_CURRENT_SOURCE_DIR}/TestFixture.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/TestFixture.h

            # Test related source files
            ${CMAKE_CURRENT_SOURCE_DIR}/AST.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/BuiltInResource.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Common.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Config.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/HexFloat.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Hlsl.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Link.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Link.FromFile.Vk.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Pp.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Spv.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/VkRelaxed.FromFile.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/GlslMapIO.FromFile.cpp)

        if(ENABLE_SPVREMAPPER)
            set(TEST_SOURCES ${TEST_SOURCES}
                ${CMAKE_CURRENT_SOURCE_DIR}/Remap.FromFile.cpp)
        endif()


        add_executable(glslangtests ${TEST_SOURCES})
        glslang_pch(glslangtests ${CMAKE_CURRENT_SOURCE_DIR}/pch.h)
        set_property(TARGET glslangtests PROPERTY FOLDER tests)
        glslang_set_link_args(glslangtests)
        if(ENABLE_GLSLANG_INSTALL)
            install(TARGETS glslangtests EXPORT glslang-targets)

            # Backward compatibility
            file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/glslangtestsTargets.cmake" "
                message(WARNING \"Using `glslangtestsTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

                if (NOT TARGET glslang::glslangtests)
                    include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
                endif()

                add_library(glslangtests ALIAS glslang::glslangtests)
            ")
            install(FILES "${CMAKE_CURRENT_BINARY_DIR}/glslangtestsTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)
        endif()

        set(GLSLANG_TEST_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../Test")
        # Supply a default test root directory, so that manual testing
        # doesn't have to specify the --test-root option in the normal
        # case that you want to use the tests from the same source tree.
        target_compile_definitions(glslangtests
                                   PRIVATE GLSLANG_TEST_DIRECTORY="${GLSLANG_TEST_DIRECTORY}")
        target_include_directories(glslangtests PRIVATE
                                   ${CMAKE_CURRENT_SOURCE_DIR}
                                   ${PROJECT_SOURCE_DIR}
                                   ${gmock_SOURCE_DIR}/include
                                   ${gtest_SOURCE_DIR}/include)

        if(ENABLE_OPT)
            target_include_directories(glslangtests
                PRIVATE ${spirv-tools_SOURCE_DIR}/include
            )
        endif()

        set(LIBRARIES
            glslang OSDependent OGLCompiler glslang
            SPIRV glslang-default-resource-limits)

        if(ENABLE_SPVREMAPPER)
            set(LIBRARIES ${LIBRARIES} SPVRemapper)
        endif()

        if(ENABLE_HLSL)
            set(LIBRARIES ${LIBRARIES} HLSL)
        endif()
        target_link_libraries(glslangtests PRIVATE ${LIBRARIES} gmock)

        add_test(NAME glslang-gtests
                 COMMAND glslangtests --test-root "${GLSLANG_TEST_DIRECTORY}")
    endif()
endif()
