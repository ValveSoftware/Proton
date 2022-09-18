#version 310 es
layout(binding = 1) uniform sampler2D s2D;
layout(binding = 2) uniform lowp sampler3D s3D;
layout(binding = 3) uniform samplerCube sCube;
layout(binding = 4) uniform lowp samplerCubeShadow sCubeShadow;
layout(binding = 5) uniform lowp sampler2DShadow s2DShadow;
layout(binding = 6) uniform lowp sampler2DArray s2DArray;
layout(binding = 7) uniform lowp sampler2DArrayShadow s2DArrayShadow;
layout(binding = 8) uniform lowp isampler2D is2D;
layout(binding = 9) uniform lowp isampler3D is3D;
layout(binding = 10) uniform lowp isamplerCube isCube;
layout(binding = 11) uniform lowp isampler2DArray is2DArray;
layout(binding = 12) uniform lowp usampler2D us2D;
layout(binding = 13) uniform lowp usampler3D us3D;
layout(binding = 14) uniform lowp usamplerCube usCube;
layout(binding = 15) uniform lowp usampler2DArray us2DArray;

precision lowp float;
layout(location = 4) in float c1D;
layout(location = 5) in vec2  c2D;
layout(location = 6) in vec3  c3D;
layout(location = 7) in smooth vec4  c4D;

layout(location = 1) flat in int   ic1D;
layout(location = 2) flat in ivec3 ic3D;
layout(location = 3) flat in ivec4 ic4D;

const ivec2 ic2D = ivec2(2, 3);

struct s {
    int i;
    sampler2D s;
};

struct S2 {
    vec3 c;
    float f;
};

layout(location = 8) in S2 s2;

layout(location = 0) out vec3 sc;
layout(location = 1) out float sf;

layout(binding = 0) uniform sampler2D arrayedSampler[5];

void main()
{
    float f;
    vec4 v;
    v = texture(s2D, c2D);
    v = textureProj(s3D, c4D);
    v = textureLod(s2DArray, c3D, 1.2);
    v = texelFetch(s3D, ic3D, ic1D);
    f = textureLodOffset(s2DShadow, c3D, c1D, ic2D);
    v = textureProjLodOffset(s2D, c3D, c1D, ic2D);
    v = textureGrad(sCube, c3D, c3D, c3D);
    f = textureGradOffset(s2DArrayShadow, c4D, c2D, c2D, ic2D);
    v = textureProjGrad(s3D, c4D, c3D, c3D);
    v = textureProjGradOffset(s2D, c3D, c2D, c2D, ic2D);

    ivec4 iv;
    iv = texture(is2D, c2D);
    iv = textureProjOffset(is2D, c4D, ic2D);
    iv = textureProjLod(is2D, c3D, c1D);
    iv = textureProjGrad(is2D, c3D, c2D, c2D);
    iv = texture(is3D, c3D, 4.2);
    iv = textureLod(isCube, c3D, c1D);
    iv = texelFetch(is2DArray, ic3D, ic1D);

    iv.xy = textureSize(sCubeShadow, 2);
}

void foo23()
{
    textureOffset(s2DShadow, c3D, ivec2(-8, 7), c1D);
}
