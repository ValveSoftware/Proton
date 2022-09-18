#version 430

// OK: different instance names is allowed in other unit
layout (std140, binding = 0) uniform MatrixBlock
{
	mat4 uProj;
	mat4 uWorld;
} uM;

// OK: other unit has it as anonymous, but that is allowed
out Vertex
{
	vec4 v1;
	vec4 v2;
} oV;

// OK: different instance names is allowed in other unit
layout (std140, binding = 1) uniform ColorBlock
{
	vec4 color1;
	bool b;
	vec4 color2;
	vec4 color3;
} uC;

// OK: different instance names is allowed in other unit
layout (std430, binding = 1) buffer BufferBlock
{
	mat4 p;
} uBuf;

layout (std430, binding = 0) buffer SecondaryColorBlock
{
	vec4 c;
} uColorBuf;

vec4 getWorld();
vec4 getColor2();

out vec4 oColor;

void
main()
{
	oColor = uC.color1 * getColor2() * uColorBuf.c;
	oV.v1 = uC.color1;

	gl_Position = uM.uProj * getWorld();
}
