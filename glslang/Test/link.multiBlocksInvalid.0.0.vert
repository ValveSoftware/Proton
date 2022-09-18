#version 430

// Verify that blocks with different instance names
// are correctly detected as invalid non-matching blocks
// when they are matched up by block name
layout (std140) uniform Block
{
	mat4 uProj;
} uD;

out Vertex
{
	vec4 v1;
} oV;

layout (std140) uniform ColorBlock
{
	vec4 color1;
} uC;

// Error, buffer blocks and uniform blocks share the
// same namespace for their block name
layout (std430) buffer ColorBlock
{
	vec4 color1;
} uBufC;

vec4 getWorld();
vec4 getColor2();

out vec4 oColor;

void
main()
{
	oColor = uC.color1 * getColor2();
	oV.v1 = uC.color1 + uBufC.color1;

	gl_Position = uD.uProj * getWorld();
}
