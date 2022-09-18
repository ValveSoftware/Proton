#version 450

layout (push_constant) uniform Block2
{
	mat4 uWorld;
	mat4 uProj;
	vec4 color1;
	vec4 color2;
} a;

in vec4 P;

vec4 getColor2()
{
	return a.color2;
}

vec4 getWorld()
{
	return a.uWorld * P;
}

