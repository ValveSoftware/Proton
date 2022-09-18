#version 430

layout (std140) uniform ColorBlock
{
	vec4 color1;
	vec4 color2;
} a;

layout (std140) uniform Block
{
	mat4 uProj;
	mat4 uWorld;
} b;

out Vertex
{
	vec4 v1;
	vec4 v2;
} c;


in vec4 P;

vec4 getColor2()
{
	return a.color2;
}

vec4 getWorld()
{
	return b.uWorld * P;
	c.v2 = vec4(1);
}

