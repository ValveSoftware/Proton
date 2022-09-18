#version 450
#extension GL_EXT_nonuniform_qualifier : require
layout(set = 0, binding = 0) uniform texture2D uTex[];
layout(set = 1, binding = 0) uniform sampler uSamp;
layout(location = 0) flat in int Index;
layout(location = 0) out vec4 FragColor;
void main()
{
    FragColor = texture(nonuniformEXT(sampler2D(uTex[Index], uSamp)), vec2(0.5));
}
