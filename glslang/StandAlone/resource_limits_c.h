/**
BSD 2-Clause License

Copyright (c) 2020, Travis Fort
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**/

#ifndef _STAND_ALONE_RESOURCE_LIMITS_C_INCLUDED_
#define _STAND_ALONE_RESOURCE_LIMITS_C_INCLUDED_

#include "../glslang/Include/glslang_c_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

// These are the default resources for TBuiltInResources, used for both
//  - parsing this string for the case where the user didn't supply one,
//  - dumping out a template for user construction of a config file.
const glslang_resource_t* glslang_default_resource(void);

// Returns the DefaultTBuiltInResource as a human-readable string.
// NOTE: User is responsible for freeing this string.
const char* glslang_default_resource_string();

// Decodes the resource limits from |config| to |resources|.
void glslang_decode_resource_limits(glslang_resource_t* resources, char* config);

#ifdef __cplusplus
}
#endif

#endif // _STAND_ALONE_RESOURCE_LIMITS_C_INCLUDED_
