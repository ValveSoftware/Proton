#version 450

layout (push_constant) uniform PushConstantBlock
{
	vec4 color;
	vec4 color2;
	float scale;
} uPC;

vec4
getColor2()
{
	return uPC.color2;
}
