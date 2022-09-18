#version 450 core

#extension GL_EXT_spirv_intrinsics: enable

spirv_instruction(id = 61)
vec4 load(spirv_by_reference vec4 pointer, spirv_literal int memoryOperands);

spirv_instruction(id = 62)
void store(spirv_by_reference vec4 pointer, vec4 object, spirv_literal int memoryOperands);

layout(location = 0) in vec4 vec4In;
layout(location = 1) out vec4 vec4Out;

void main()
{
    store(vec4Out, load(vec4In, /*None=*/0x0), /*Volatile=*/0x1);
}
