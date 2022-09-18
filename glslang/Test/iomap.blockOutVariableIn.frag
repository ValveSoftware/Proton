#version 440

layout(location = 0) in vec4 a1;
layout(location = 1) in vec2 a2;

layout(location = 0) out vec4 color;

void main()
{
    color = vec4(a1.xy, a2);
}
