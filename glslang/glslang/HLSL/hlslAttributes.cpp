//
// Copyright (C) 2016 LunarG, Inc.
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//    Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above
//    copyright notice, this list of conditions and the following
//    disclaimer in the documentation and/or other materials provided
//    with the distribution.
//
//    Neither the name of Google, Inc., nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

#include "hlslAttributes.h"
#include "hlslParseHelper.h"

namespace glslang {
    // Map the given string to an attribute enum from TAttributeType,
    // or EatNone if invalid.
    TAttributeType HlslParseContext::attributeFromName(const TString& nameSpace, const TString& name) const
    {
        // handle names within a namespace

        if (nameSpace == "vk") {
            if (name == "input_attachment_index")
                return EatInputAttachment;
            else if (name == "location")
                return EatLocation;
            else if (name == "binding")
                return EatBinding;
            else if (name == "global_cbuffer_binding")
                return EatGlobalBinding;
            else if (name == "builtin")
                return EatBuiltIn;
            else if (name == "constant_id")
                return EatConstantId;
            else if (name == "push_constant")
                return EatPushConstant;
        } else if (nameSpace == "spv") {
            if (name == "format_rgba32f")       return EatFormatRgba32f;
            if (name == "format_rgba16f")       return EatFormatRgba16f;
            if (name == "format_r32f")          return EatFormatR32f;
            if (name == "format_rgba8")         return EatFormatRgba8;
            if (name == "format_rgba8snorm")    return EatFormatRgba8Snorm;
            if (name == "format_rg32f")         return EatFormatRg32f;
            if (name == "format_rg16f")         return EatFormatRg16f;
            if (name == "format_r11fg11fb10f")  return EatFormatR11fG11fB10f;
            if (name == "format_r16f")          return EatFormatR16f;
            if (name == "format_rgba16")        return EatFormatRgba16;
            if (name == "format_rgb10a2")       return EatFormatRgb10A2;
            if (name == "format_rg16")          return EatFormatRg16;
            if (name == "format_rg8")           return EatFormatRg8;
            if (name == "format_r16")           return EatFormatR16;
            if (name == "format_r8")            return EatFormatR8;
            if (name == "format_rgba16snorm")   return EatFormatRgba16Snorm;
            if (name == "format_rg16snorm")     return EatFormatRg16Snorm;
            if (name == "format_rg8snorm")      return EatFormatRg8Snorm;
            if (name == "format_r16snorm")      return EatFormatR16Snorm;
            if (name == "format_r8snorm")       return EatFormatR8Snorm;
            if (name == "format_rgba32i")       return EatFormatRgba32i;
            if (name == "format_rgba16i")       return EatFormatRgba16i;
            if (name == "format_rgba8i")        return EatFormatRgba8i;
            if (name == "format_r32i")          return EatFormatR32i;
            if (name == "format_rg32i")         return EatFormatRg32i;
            if (name == "format_rg16i")         return EatFormatRg16i;
            if (name == "format_rg8i")          return EatFormatRg8i;
            if (name == "format_r16i")          return EatFormatR16i;
            if (name == "format_r8i")           return EatFormatR8i;
            if (name == "format_rgba32ui")      return EatFormatRgba32ui;
            if (name == "format_rgba16ui")      return EatFormatRgba16ui;
            if (name == "format_rgba8ui")       return EatFormatRgba8ui;
            if (name == "format_r32ui")         return EatFormatR32ui;
            if (name == "format_rgb10a2ui")     return EatFormatRgb10a2ui;
            if (name == "format_rg32ui")        return EatFormatRg32ui;
            if (name == "format_rg16ui")        return EatFormatRg16ui;
            if (name == "format_rg8ui")         return EatFormatRg8ui;
            if (name == "format_r16ui")         return EatFormatR16ui;
            if (name == "format_r8ui")          return EatFormatR8ui;

            if (name == "nonwritable")    return EatNonWritable;
            if (name == "nonreadable")    return EatNonReadable;
        } else if (nameSpace.size() > 0)
            return EatNone;

        // handle names with no namespace

        if (name == "allow_uav_condition")
            return EatAllow_uav_condition;
        else if (name == "branch")
            return EatBranch;
        else if (name == "call")
            return EatCall;
        else if (name == "domain")
            return EatDomain;
        else if (name == "earlydepthstencil")
            return EatEarlyDepthStencil;
        else if (name == "fastopt")
            return EatFastOpt;
        else if (name == "flatten")
            return EatFlatten;
        else if (name == "forcecase")
            return EatForceCase;
        else if (name == "instance")
            return EatInstance;
        else if (name == "maxtessfactor")
            return EatMaxTessFactor;
        else if (name == "maxvertexcount")
            return EatMaxVertexCount;
        else if (name == "numthreads")
            return EatNumThreads;
        else if (name == "outputcontrolpoints")
            return EatOutputControlPoints;
        else if (name == "outputtopology")
            return EatOutputTopology;
        else if (name == "partitioning")
            return EatPartitioning;
        else if (name == "patchconstantfunc")
            return EatPatchConstantFunc;
        else if (name == "unroll")
            return EatUnroll;
        else if (name == "loop")
            return EatLoop;
        else
            return EatNone;
    }

} // end namespace glslang
