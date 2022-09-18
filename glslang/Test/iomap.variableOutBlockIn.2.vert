#version 440

layout(location = 0) out vec4 a1;
layout(location = 1) out vec2 a2;

void main()
{
    a1 = vec4(1.0);
    a2 = vec2(0.5);
    gl_Position = vec4(1.0);
}
