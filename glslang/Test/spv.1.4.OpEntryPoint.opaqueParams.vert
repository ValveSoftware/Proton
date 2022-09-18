#version 450

layout(binding = 0) uniform sampler2D s2D;
layout(binding = 1) uniform texture2D t2D;
layout(binding = 3) uniform sampler s;

vec2 funOpaque(in sampler2D s2D, texture2D t2D, sampler s)
{
    return textureSize(s2D, 0) * texture(sampler2D(t2D, s), vec2(0.5)).xy;
}

void main()
{
    vec2 size = funOpaque(s2D, t2D, s);
}