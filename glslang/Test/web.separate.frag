#version 310 es

precision highp sampler;
precision highp samplerShadow;
precision highp texture2DArray;
precision highp itexture2D;
precision highp itexture3D;
precision highp itextureCube;
precision highp itexture2DArray;
precision highp utexture2D;
precision highp utexture3D;
precision highp utextureCube;
precision highp utexture2DArray;
precision highp texture3D;
precision highp float;

layout(binding = 0) uniform sampler s;
layout(binding = 1) uniform samplerShadow sShadow;
layout(binding = 2) uniform sampler sA[4];
layout(binding = 3) uniform texture2D t2d;
layout(binding = 4) uniform texture3D t3d[4];
layout(location = 0) flat in int i;

layout(location = 0) out vec4 color;

void main()
{
    color = texture(sampler2D(t2d, s), vec2(0.5));
    color += texture(sampler3D(t3d[1], sA[2]), vec3(0.5));
    color += texture(sampler2D(t2d, s), vec2(0.5));
}

layout(binding =  5) uniform texture2D                 tex2D;
layout(binding =  6) uniform textureCube               texCube;
layout(binding = 15) uniform texture2DArray            tex2DArray;
layout(binding = 16) uniform itexture2D                itex2D;
layout(binding = 17) uniform itexture3D                itex3D;
layout(binding = 18) uniform itextureCube              itexCube;
layout(binding = 19) uniform itexture2DArray           itex2DArray;
layout(binding = 20) uniform utexture2D                utex2D;
layout(binding = 21) uniform utexture3D                utex3D;
layout(binding = 22) uniform utextureCube              utexCube;
layout(binding = 23) uniform utexture2DArray           utex2DArray;
layout(binding = 36) uniform texture3D                 tex3D;

void foo()
{
    sampler2D              (tex2D, s);
    samplerCube            (texCube, s);
    samplerCubeShadow      (texCube, sShadow);
    sampler2DArray         (tex2DArray, s);
    sampler2DArrayShadow   (tex2DArray, sShadow);
    isampler2D             (itex2D, s);
    isampler3D             (itex3D, s);
    isamplerCube           (itexCube, s);
    isampler2DArray        (itex2DArray, s);
    usampler2D             (utex2D, s);
    usampler3D             (utex3D, s);
    usamplerCube           (utexCube, s);
    usampler2DArray        (utex2DArray, s);
    sampler3D              (tex3D, s);
    sampler2DShadow        (tex2D, sShadow);
}
