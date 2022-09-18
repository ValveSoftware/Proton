#version 430
layout (std140) uniform Block
{
	mat4 uProj;
	mat4 uWorld;
} a;

out Vertex
{
	vec4 v1;
	vec4 v2;
} b;

layout (std140) uniform ColorBlock
{
	vec4 color1;
	vec4 color2;
} c;

vec4 getWorld();
vec4 getColor2();

out vec4 oColor;

void
main()
{
	oColor = c.color1 * getColor2();
	b.v1 = c.color1;

	gl_Position = a.uProj * getWorld();
}
