#version 430

layout (std140) uniform ColorBlock
{
	vec4 color2;
} uColorB;

layout (std140) uniform Block
{
	mat4 uWorld;
} uDefaultB;

out Vertex
{
	vec4 v2;
} oVert;


in vec4 P;

vec4 getColor2()
{
	return uColorB.color2;
}

vec4 getWorld()
{
	return uDefaultB.uWorld * P;
	oVert.v2 = vec4(1);
}

