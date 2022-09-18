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

LOCAL_PATH := $(call my-dir)

# Generate glslang/build_info.h
GLSLANG_GENERATED_INCLUDEDIR:=$(TARGET_OUT)/include
GLSLANG_BUILD_INFO_H:=$(GLSLANG_GENERATED_INCLUDEDIR)/glslang/build_info.h

define gen_glslang_build_info_h
$(call generate-file-dir,$(GLSLANG_GENERATED_INCLUDEDIR)/dummy_filename)
$(GLSLANG_BUILD_INFO_H): \
		$(LOCAL_PATH)/build_info.py \
		$(LOCAL_PATH)/build_info.h.tmpl \
		$(LOCAL_PATH)/CHANGES.md
		@$(HOST_PYTHON) $(LOCAL_PATH)/build_info.py \
						$(LOCAL_PATH) \
						-i $(LOCAL_PATH)/build_info.h.tmpl \
						-o $(GLSLANG_BUILD_INFO_H)
		@echo "[$(TARGET_ARCH_ABI)] Generate       : $(GLSLANG_BUILD_INFO_H) <= CHANGES.md"
endef
$(eval $(call gen_glslang_build_info_h))

GLSLANG_OS_FLAGS := -DGLSLANG_OSINCLUDE_UNIX
# AMD and NV extensions are turned on by default in upstream Glslang.
GLSLANG_DEFINES:= -DAMD_EXTENSIONS -DNV_EXTENSIONS -DENABLE_HLSL $(GLSLANG_OS_FLAGS)

include $(CLEAR_VARS)
LOCAL_MODULE:=OSDependent
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:=glslang/OSDependent/Unix/ossource.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH) $(LOCAL_PATH)/glslang/OSDependent/Unix/
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/glslang/OSDependent/Unix/
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE:=OGLCompiler
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:=OGLCompilersDLL/InitializeDll.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH)/OGLCompiler
LOCAL_STATIC_LIBRARIES:=OSDependent
include $(BUILD_STATIC_LIBRARY)

# Build the stubbed HLSL library.
# The HLSL source is now directly referenced by the glslang static library
# instead.
include $(CLEAR_VARS)
LOCAL_MODULE:=HLSL
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_SRC_FILES:= \
	hlsl/stub.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/glslang/HLSL
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
GLSLANG_OUT_PATH=$(if $(call host-path-is-absolute,$(TARGET_OUT)),$(TARGET_OUT),$(abspath $(TARGET_OUT)))

# ShaderLang.cpp depends on the generated build_info.h
$(LOCAL_PATH)/glslang/MachineIndependent/ShaderLang.cpp: \
	$(GLSLANG_BUILD_INFO_H)

LOCAL_MODULE:=glslang
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti $(GLSLANG_DEFINES)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)
LOCAL_SRC_FILES:= \
		glslang/CInterface/glslang_c_interface.cpp \
		glslang/GenericCodeGen/CodeGen.cpp \
		glslang/GenericCodeGen/Link.cpp \
		glslang/HLSL/hlslAttributes.cpp \
		glslang/HLSL/hlslGrammar.cpp \
		glslang/HLSL/hlslOpMap.cpp \
		glslang/HLSL/hlslParseables.cpp \
		glslang/HLSL/hlslParseHelper.cpp \
		glslang/HLSL/hlslScanContext.cpp \
		glslang/HLSL/hlslTokenStream.cpp \
		glslang/MachineIndependent/attribute.cpp \
		glslang/MachineIndependent/Constant.cpp \
		glslang/MachineIndependent/glslang_tab.cpp \
		glslang/MachineIndependent/InfoSink.cpp \
		glslang/MachineIndependent/Initialize.cpp \
		glslang/MachineIndependent/Intermediate.cpp \
		glslang/MachineIndependent/intermOut.cpp \
		glslang/MachineIndependent/IntermTraverse.cpp \
		glslang/MachineIndependent/iomapper.cpp \
		glslang/MachineIndependent/limits.cpp \
		glslang/MachineIndependent/linkValidate.cpp \
		glslang/MachineIndependent/parseConst.cpp \
		glslang/MachineIndependent/ParseContextBase.cpp \
		glslang/MachineIndependent/ParseHelper.cpp \
		glslang/MachineIndependent/PoolAlloc.cpp \
		glslang/MachineIndependent/propagateNoContraction.cpp \
		glslang/MachineIndependent/reflection.cpp \
		glslang/MachineIndependent/RemoveTree.cpp \
		glslang/MachineIndependent/Scan.cpp \
		glslang/MachineIndependent/ShaderLang.cpp \
		glslang/MachineIndependent/SpirvIntrinsics.cpp \
		glslang/MachineIndependent/SymbolTable.cpp \
		glslang/MachineIndependent/Versions.cpp \
		glslang/MachineIndependent/preprocessor/PpAtom.cpp \
		glslang/MachineIndependent/preprocessor/PpContext.cpp \
		glslang/MachineIndependent/preprocessor/Pp.cpp \
		glslang/MachineIndependent/preprocessor/PpScanner.cpp \
		glslang/MachineIndependent/preprocessor/PpTokens.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/glslang/MachineIndependent \
	$(GLSLANG_GENERATED_INCLUDEDIR) \
	$(GLSLANG_OUT_PATH)
LOCAL_STATIC_LIBRARIES:=OSDependent OGLCompiler HLSL
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

# GlslangToSpv.cpp depends on the generated build_info.h
$(LOCAL_PATH)/SPIRV/GlslangToSpv.cpp: \
	$(GLSLANG_BUILD_INFO_H)

LOCAL_MODULE:=SPIRV
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -fno-rtti -Werror $(GLSLANG_DEFINES)
LOCAL_SRC_FILES:= \
	SPIRV/CInterface/spirv_c_interface.cpp \
	SPIRV/GlslangToSpv.cpp \
	SPIRV/InReadableOrder.cpp \
	SPIRV/Logger.cpp \
	SPIRV/SPVRemapper.cpp \
	SPIRV/SpvBuilder.cpp \
	SPIRV/SpvPostProcess.cpp \
	SPIRV/SpvTools.cpp \
	SPIRV/disassemble.cpp \
	SPIRV/doc.cpp
LOCAL_C_INCLUDES:=$(LOCAL_PATH) \
	$(LOCAL_PATH)/glslang/SPIRV \
	$(GLSLANG_GENERATED_INCLUDEDIR)
LOCAL_EXPORT_C_INCLUDES:=$(LOCAL_PATH)/glslang/SPIRV
LOCAL_STATIC_LIBRARIES:=glslang
include $(BUILD_STATIC_LIBRARY)
