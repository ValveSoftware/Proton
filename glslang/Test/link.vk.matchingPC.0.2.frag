#version 450

layout (push_constant) uniform PushConstantBlock
{
	vec4 color;
	vec4 color2;
	float scale;
} uPC;

float
getScale()
{
	return uPC.scale;
}
