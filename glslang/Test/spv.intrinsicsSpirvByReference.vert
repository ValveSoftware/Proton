#version 450 core

#extension GL_EXT_spirv_intrinsics: enable

spirv_instruction (set = "GLSL.std.450", id = 35) // modf
float modf(float x, spirv_by_reference float i);

layout(location = 0) in float floatIn;
layout(location = 0) out vec2 vec2Out;
layout(location = 1) out float floatOut;

void func(spirv_by_reference float f)
{
    f = 0.5;
}

void main()
{
    vec2Out.x = modf(floatIn, vec2Out.y);
    func(floatOut);
}
