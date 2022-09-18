#version 450

layout(constant_id = 1) const int offs = 0;
layout(binding = 0) uniform sampler2D tex;
layout(location = 0) out vec4 color_out;

void main(void)
{
  color_out = textureLodOffset(tex, vec2(0.0, 0.0), 0.0, ivec2(offs, offs));
}