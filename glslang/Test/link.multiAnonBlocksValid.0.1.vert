#version 430

layout (std140) uniform ColorBlock
{
	vec4 color1;
	vec4 color2;
};

layout (std140) uniform Block
{
	mat4 uProj;
	mat4 uWorld;
};

out Vertex
{
	vec4 v1;
	vec4 v2;
};


in vec4 P;

vec4 getColor2()
{
	return color2;
}

vec4 getWorld()
{
	return uWorld * P;
	v2 = vec4(1);
}

