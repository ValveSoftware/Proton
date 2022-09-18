#version 430

// Verify that matching by block name is working, not
// instance name, which was at one point failing on this
// test due to E.g anon@1 being different blocks for
// different compilation units

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

layout (std140) uniform ColorBlock
{
	vec4 color1;
	vec4 color2;
};

vec4 getWorld();
vec4 getColor2();

out vec4 oColor;

void
main()
{
	oColor = color1 * getColor2();
	v1 = color1;

	gl_Position = uProj * getWorld();
}
