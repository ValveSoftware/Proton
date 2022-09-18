#version 430

// Error: Block has different members
layout (std140) uniform Block
{
	mat4 uProj;
};

// Error: BufferBlock has different members
buffer BufferBlock
{
	vec4 b;
};

// Error: Vertex has different members
out Vertex
{
	vec4 v1;
};

// Error: ColorBlock has different members
layout (std140) uniform ColorBlock
{
	vec4 color1;
	vec4 color2;
	// Error, redeclare varaible in another anonymous block
	vec4 v1;
};

// Error: NamedBlock is anonymous in other compilation unit
layout (std140) uniform NamedBlock
{
	mat4 m;
} myName;

vec4 getWorld();
vec4 getColor2();

out vec4 oColor;

// Error: redeclare varaibles that are in anonymous blocks
out vec4 v1;
uniform mat4 uProj;

void
main()
{
	oColor = color1 * getColor2();
	v1 = color1;

	gl_Position = uProj * getWorld();
}
