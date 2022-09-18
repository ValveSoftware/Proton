#version 460

layout (location = 0) in vec2 in_UV;

layout (set=0, binding=0) uniform texture2D u_Tex;
layout (set=0, binding=0) uniform sampler u_Sampler;

layout (location = 0) out vec4 out_Color;

void main() {
    vec4 color = texture(sampler2D(u_Tex, u_Sampler), in_UV);
    out_Color = color;
}
