#version 450
#extension GL_ARB_sparse_texture2: enable

uniform sampler2D               s2D;
uniform isampler2D             is2D;
uniform usampler2D             us2D;

layout(rgba32f)  uniform  image2D i2D;
layout(rgba32i)  uniform iimage2DMS ii2DMS;
layout(rgba32ui) uniform uimage3D ui3D;

in vec2 c2;
in vec3 c3;
in vec4 c4;

in flat ivec2 ic2;
in flat ivec3 ic3;

in flat ivec2 offsets[4];

out vec4 outColor;

void main()
{
    int   resident = 0;
    vec4  texel  = vec4(0.0);
    ivec4 itexel = ivec4(0);
    uvec4 utexel = uvec4(0);

    resident |= sparseTextureARB(s2D,  c2, texel);
    resident |= sparseTextureARB(is2D, c2, texel);
    resident |= sparseTextureARB(us2D, c2, texel);

    resident |= sparseTextureLodARB( s2D, c2, 2.0, texel);
    resident |= sparseTextureLodARB(is2D, c2, 2.0, texel);
    resident |= sparseTextureLodARB(us2D, c2, 2.0, texel);

    resident |= sparseTexelFetchARB( s2D, ivec2(c2), 2, texel);
    resident |= sparseTexelFetchARB(is2D, ivec2(c2), 2, texel);
    resident |= sparseTexelFetchARB(us2D, ivec2(c2), 2, texel);

    resident |= sparseImageLoadARB(i2D, ic2, texel);
    resident |= sparseImageLoadARB(ii2DMS, ic2, 3, texel);
    resident |= sparseImageLoadARB(ui3D, ic3, utexel);

    outColor = sparseTexelsResidentARB(resident) ? texel : vec4(itexel) + vec4(utexel);
}