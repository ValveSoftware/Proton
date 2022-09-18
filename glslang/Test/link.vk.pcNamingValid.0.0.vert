#version 450
layout (push_constant) uniform PCBlock
{
	mat4 uWorld;
	mat4 uProj;
	vec4 color1;
	vec4 color2;
} a;

vec4 getWorld();
vec4 getColor2();

layout(location = 0) out vec4 oColor;

void
main()
{
	oColor = a.color1 * getColor2();

	gl_Position = a.uProj * getWorld();
}
