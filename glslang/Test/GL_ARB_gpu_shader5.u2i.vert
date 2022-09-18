#version 150
#extension GL_ARB_gpu_shader5 : require

uniform int u1;
uniform int u2;
out   vec4 result;
void main()
{
    uint v = 0;
    v = uint(u2) - u1;  // implicit conversions
}
