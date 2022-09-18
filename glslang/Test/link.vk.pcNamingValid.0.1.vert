#version 450

layout (push_constant) uniform PCBlock
{
	mat4 uWorld;
	mat4 uProj;
	vec4 color1;
	vec4 color2;
} b;

layout(location = 0) in vec4 P;

vec4 getColor2()
{
	return b.color2;
}

vec4 getWorld()
{
	return b.uWorld * P;
}

