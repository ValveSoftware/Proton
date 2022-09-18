#version 440

layout(location = 0) in vec4 i_Pos;
layout(location = 1) in vec2 i_Tex;

layout(location = 0) out Primitive
{
    vec2 texCoord;
} OUT;

void main()
{
    gl_Position = i_Pos;
    OUT.texCoord = i_Tex;
}

