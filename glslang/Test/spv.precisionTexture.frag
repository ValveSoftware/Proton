#version 310 es
precision mediump float;
precision mediump int;
layout(binding = 0) uniform mediump sampler2D texM;
layout(binding = 1) uniform highp sampler2D texH;
layout(binding = 0, rgba32f) uniform readonly mediump image2D imageM;
layout(binding = 1, rgba32f) uniform readonly highp image2D imageH;

layout(location = 0) in highp vec4 vertex;
layout(location = 1) flat in highp ivec2 coord;
layout(location = 0) out vec4 fragColor;

void main()
{
    vec4 v;
    v = texture(texM, vertex.xy);
    v = texture(texH, vertex.xy);
    v = textureLod(texM, vertex.xy, vertex.z);
    v = textureLod(texH, vertex.xy, vertex.z);
    v = textureProj(texM, vertex.xyz);
    v = textureProj(texH, vertex.xyz);
    v = imageLoad(imageM, coord);
    v = imageLoad(imageH, coord);
}