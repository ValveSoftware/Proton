#version 450

layout (push_constant) uniform PushConstantBlock
{
	vec4 color;
	vec4 color2;
	float scale2;
} uPC;

float
getScale()
{
	return uPC.scale2;
}

