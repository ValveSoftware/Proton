#version 450 core

#extension GL_AMD_shader_image_load_store_lod: enable
#extension GL_ARB_gpu_shader_int64: enable
#extension GL_EXT_shader_image_int64: enable

layout(rgba32f,  binding = 0) uniform image1D         i1D;
layout(rgba32f,  binding = 1) uniform image2D         i2D;
layout(rgba32f,  binding = 2) uniform image3D         i3D;
layout(rgba32i,  binding = 3) uniform iimageCube      iiCube;
layout(rgba32i,  binding = 4) uniform iimage1DArray   ii1DArray;
layout(rgba32ui, binding = 5) uniform uimage2DArray   ui2DArray;
layout(rgba32ui, binding = 6) uniform uimageCubeArray uiCubeArray;

layout(location = 0) out vec4 fragColor;

layout(r64i,  binding = 7)  uniform i64image1D        i64i1D;
layout(r64i,  binding = 8)  uniform i64image2D        i64i2D;
layout(r64i,  binding = 9)  uniform i64image3D        i64i3D;
layout(r64ui, binding = 10) uniform u64imageCube      u64iCube;
layout(r64ui, binding = 11) uniform u64image1DArray   u64i1DArray;
layout(r64ui, binding = 12) uniform u64image2DArray   u64i2DArray;
layout(r64ui, binding = 13) uniform u64imageCubeArray u64iCubeArray;

layout(binding = 14) buffer Buf
{
    i64vec4 i64v4;
    u64vec4 u64v4;
};

void main()
{
    const int c1 = 1;
    const ivec2 c2 = ivec2(2, 3);
    const ivec3 c3 = ivec3(4, 5, 6);

    const int lod = 3;

    vec4 f4 = vec4(0.0);
    f4 += imageLoadLodAMD(i1D, c1, lod);
    f4 += imageLoadLodAMD(i2D, c2, lod);
    f4 += imageLoadLodAMD(i3D, c3, lod);

    imageStoreLodAMD(iiCube, c3, lod, ivec4(f4));
    imageStoreLodAMD(ii1DArray, c2, lod, ivec4(f4));

    uvec4 u4;
    sparseImageLoadLodAMD(ui2DArray, c3, lod, u4);
    sparseImageLoadLodAMD(uiCubeArray, c3, lod, u4);

    fragColor = f4 + vec4(u4);

    i64v4 += imageLoadLodAMD(i64i1D, c1, lod);
    i64v4 += imageLoadLodAMD(i64i2D, c2, lod);
    i64v4 += imageLoadLodAMD(i64i3D, c3, lod);

    imageStoreLodAMD(u64iCube, c3, lod, u64v4);
    imageStoreLodAMD(u64i1DArray, c2, lod, u64v4);

    sparseImageLoadLodAMD(u64i2DArray, c3, lod, u64v4);
    sparseImageLoadLodAMD(u64iCubeArray, c3, lod, u64v4);
}