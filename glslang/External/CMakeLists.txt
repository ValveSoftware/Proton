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

# Suppress all warnings from external projects.
set_property(DIRECTORY APPEND PROPERTY COMPILE_OPTIONS -w)

if(BUILD_TESTING)
    if(TARGET gmock)
        message(STATUS "Google Mock already configured - use it")
    elseif(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/googletest)
        # We need to make sure Google Test does not mess up with the
        # global CRT settings on Windows.
        if(WIN32)
            set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
        endif(WIN32)
        # EXCLUDE_FROM_ALL keeps the install target from installing GTEST files.
        add_subdirectory(googletest EXCLUDE_FROM_ALL)
        set(GTEST_TARGETS
            gtest
            gtest_main
            gmock
            gmock_main)
        foreach(target ${GTEST_TARGETS})
            set_property(TARGET ${target} PROPERTY FOLDER gtest)
        endforeach()
        mark_as_advanced(gmock_build_tests
            BUILD_GMOCK
            BUILD_GTEST
            BUILD_SHARED_LIBS
            gtest_build_samples
            gtest_build_tests
            gtest_disable_pthreads
            gtest_force_shared_crt
            gtest_hide_internal_symbols)
    else()
        message(STATUS
            "Google Mock was not found - tests based on that will not build")
    endif()
endif()

if(ENABLE_OPT AND NOT TARGET SPIRV-Tools-opt)
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/spirv-tools)
        set(SPIRV_SKIP_TESTS ON CACHE BOOL "Skip building SPIRV-Tools tests")
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/spirv-tools spirv-tools)
    endif()
endif()

