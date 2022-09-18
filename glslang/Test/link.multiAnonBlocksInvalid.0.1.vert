#version 430

// Error: ColorBlock has different members
layout (std140) uniform ColorBlock
{
	vec4 color2;
};

// Error: Block has different members
layout (std140) uniform Block
{
	mat4 uProj;
	mat4 uWorld;
};

// Error: Vertex has different members
out Vertex
{
	vec4 v1;
	vec4 v2;
};

// Error BufferBlock has different members
buffer BufferBlock
{
	vec4 a;
};

// Error: NamedBlock is anonymous in other compilation unit
layout (std140) uniform NamedBlock
{
	mat4 m;
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

