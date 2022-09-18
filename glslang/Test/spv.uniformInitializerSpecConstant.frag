#version 450

layout (location = 0) out vec4 color;

layout (constant_id = 1) const float opacity = 0.5;

layout (location = 0) uniform vec3 in_color = vec3(1.0, 0.5, 0);

layout (location = 4) uniform float foo = opacity;

void main()
{
	color = vec4(in_color, foo);
}
