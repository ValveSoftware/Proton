#version 430

layout (triangles) in;
layout (triangle_strip, max_vertices = 3) out;

// OK: different instance names is allowed
layout (std140, binding = 0) uniform MatrixBlock
{
	mat4 uProj;
	mat4 uWorld;
} uM;

// Verify that in/out blocks with same block name work
in Vertex
{
	vec4 v1;
	vec4 v2;
} iV[3];

out Vertex
{
	vec4 val1;
} oV;

// OK: different instance names is allowed
layout (std140, binding = 1) uniform ColorBlock
{
	vec4 color1;
	bool b;
	vec4 color2;
	vec4 color3;
} uC;

// OK: different instance names is allowed
layout (std430, binding = 1) buffer BufferBlock
{
	mat4 p;
} uBuf;

vec4 getWorld(int i);
vec4 getColor2();

out vec4 oColor;

float globalF;

void
main()
{
	oColor = uC.color1 * getColor2();

	globalF = 1.0;

	for (int i = 0; i < 3; i++)
	{
		gl_Position = uM.uProj * getWorld(i);
		oV.val1 = uC.color1 + iV[i].v2 * globalF;
		EmitVertex();
	}

	EndPrimitive();
}
