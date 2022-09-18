#version 450

layout (location = 0) out vec4 color;

layout (location = 0) uniform vec4 in_color = vec4(0.0, 1.0, 0.0, 1.0);

void main()
{
	color = in_color;
}
