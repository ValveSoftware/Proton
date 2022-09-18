#version 430

layout (triangles) in;
layout (triangle_strip, max_vertices = 3) out;

// OK: different instance names is allowed
layout (std140, binding = 1) uniform ColorBlock
{
	vec4 color1;
	bool b;
	vec4 color2;
	vec4 color3;
} uColor;

// OK: different instance names is allowed
layout (std430, binding = 1) buffer BufferBlock
{
	mat4 p;
} uBuffer;

// OK: different instance names is allowed
layout (std140, binding = 0) uniform MatrixBlock
{
	mat4 uProj;
	mat4 uWorld;
} uMatrix;

// OK, it's allowed for input/output interfaces to
// be anonymous is one unit and not in another
out Vertex
{
	vec4 val1;
};

in Vertex
{
	vec4 v1;
	vec4 v2;
} iVV[];


in vec4 P[3];

vec4 getColor2()
{
	return uColor.color2;
}

vec4 getWorld(int i)
{
	val1 = vec4(1);
	return uMatrix.uWorld * iVV[i].v1;
}

