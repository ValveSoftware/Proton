#version 450

layout(rgba32f, binding = 1)    uniform  image2D         i2D;
layout(r32i,   binding = 12)    uniform iimage2D        ii2D;
layout(r32ui,   binding = 12)   uniform uimage2D        ui2D;

layout(rgba32f, binding = 9)    uniform  image2DMS     i2DMS;
layout(r32i,    binding = 13)   uniform iimage2DMS    ii2DMS;
layout(r32ui,    binding = 13)  uniform uimage2DMS    ui2DMS;

flat in ivec2 ic2D;
flat in uint value;

out vec4 fragData;

void main()
{
    vec4 v = vec4(0.0);
    ivec4 iv = ivec4(0.0);
    uvec4 uv = uvec4(0.0);

    v += imageLoad(i2D, ic2D);
    imageStore(i2D, ic2D, v);
    v += imageLoad(ii2D, ic2D);
    imageStore(ii2D, ic2D, iv);
    v += imageLoad(ui2D, ic2D);
    imageStore(ui2D, ic2D, uv);

    v += imageLoad(i2DMS, ic2D, 1);
    imageStore(i2DMS, ic2D, 2, v);
    v += imageLoad(ii2DMS, ic2D, 1);
    imageStore(ii2DMS, ic2D, 2, iv);
    v += imageLoad(ui2DMS, ic2D, 1);
    imageStore(ui2DMS, ic2D, 2, uv);

    fragData = v;
}

