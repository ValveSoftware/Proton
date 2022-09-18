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

# The HLSL source is directly embedded into the glslang target when ENABLE_HLSL
# is set.
# This source now lives at: glslang/HLSL/
# The HLSL target is now just a stub that exists for backwards compatibility for
# projects that referenced this target.

add_library(HLSL ${LIB_TYPE} "stub.cpp")
set_property(TARGET HLSL PROPERTY FOLDER hlsl)
set_property(TARGET HLSL PROPERTY POSITION_INDEPENDENT_CODE ON)

if(WIN32 AND BUILD_SHARED_LIBS)
    set_target_properties(HLSL PROPERTIES PREFIX "")
endif()

if(ENABLE_GLSLANG_INSTALL)
    install(TARGETS HLSL EXPORT glslang-targets)

    file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/HLSLTargets.cmake" "
        message(WARNING \"Using `HLSLTargets.cmake` is deprecated: use `find_package(glslang)` to find glslang CMake targets.\")

        if (NOT TARGET glslang::HLSL)
            include(\"\${CMAKE_CURRENT_LIST_DIR}/../../${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME}/glslang-targets.cmake\")
        endif()

        add_library(HLSL ALIAS glslang::HLSL)
    ")
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/HLSLTargets.cmake" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake)
endif()
