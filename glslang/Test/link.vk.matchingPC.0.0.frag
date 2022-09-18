#version 450

layout(location=0) out vec4 color;

layout (push_constant) uniform PushConstantBlock
{
	vec4 color;
	vec4 color2;
	float scale;
} uPC;

vec4 getColor2();
float getScale();

void main()
{
    color = uPC.color + getColor2() * getScale();
}
