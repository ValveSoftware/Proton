#version 310 es

layout(location = 2) in vec4 inv4;
layout(location = 1) out vec4 outv4;

layout(binding = 3) uniform uBlock {
    vec4 a;
    ivec4 b;
    uvec4 c;
} uInst;

void main()
{
    outv4 = normalize(inv4) * uInst.a * vec4(uInst.b) * vec4(uInst.c);
}
