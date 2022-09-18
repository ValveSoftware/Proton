#version 450 core

#extension GL_ARB_gpu_shader_int64: enable
#extension GL_EXT_shader_image_int64: enable
#extension GL_KHR_memory_scope_semantics: enable
#extension GL_ARB_sparse_texture2: enable
 
layout(binding = 0, r64i)  uniform i64image1D i1D;
layout(binding = 1, r64ui) uniform u64image2D u2D;
layout(binding = 2, r64i)  uniform i64image3D i3D;
layout(binding = 3, r64ui) uniform u64imageCube uCube;
layout(binding = 4, r64i)  uniform i64imageBuffer iBuf;
layout(binding = 5, r64ui) uniform u64image1DArray u1DArray;
layout(binding = 6, r64i)  uniform i64image2DArray i2DArray;
layout(binding = 7, r64ui) uniform u64imageCubeArray uCubeArray;
layout(binding = 8, r64i)  uniform i64image2DRect i2DRect;
layout(binding = 9, r64ui) uniform u64image2DMS u2DMS;
layout(binding = 10, r64i) uniform i64image2DMSArray i2DMSArray;

layout(binding = 11) buffer Buf
{
    int64_t i64;
    uint64_t u64;
    i64vec4 i64v4;
    u64vec4 u64v4;
    ivec4 i32v4;
};

void main()
{
    i64 = imageAtomicAdd(i1D, i32v4.x, i64);
    i64 = imageAtomicMin(i3D, i32v4.xyz, i64);
    i64 = imageAtomicMax(iBuf, i32v4.x, i64);
    i64 = imageAtomicAnd(i2DArray, i32v4.xyz, i64);
    i64 = imageAtomicOr(i2DRect, i32v4.xy, i64);
    i64 = imageAtomicXor(i2DMSArray, i32v4.xyz, i32v4.w, i64);
    i64 = imageAtomicExchange(i1D, i32v4.x, i64);
    i64 = imageAtomicCompSwap(i3D, i32v4.xyz, i64, i64 + 1);

    i64 = imageAtomicAdd(i1D, i32v4.x, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicMin(i3D, i32v4.xyz, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicMax(iBuf, i32v4.x, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicAnd(i2DArray, i32v4.xyz, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicOr(i2DRect, i32v4.xy, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicXor(i2DMSArray, i32v4.xyz, i32v4.w, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicExchange(i1D, i32v4.x, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicCompSwap(i3D, i32v4.xyz, i64, i64 + 1, gl_ScopeDevice,
            gl_StorageSemanticsImage, gl_SemanticsRelaxed, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    i64 = imageAtomicLoad(iBuf, i32v4.x, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    imageAtomicStore(i2DArray, i32v4.xyz, i64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);

    u64 = imageAtomicAdd(u2D, i32v4.xy, u64);
    u64 = imageAtomicMin(uCube, i32v4.xyz, u64);
    u64 = imageAtomicMax(u1DArray, i32v4.xy, u64);
    u64 = imageAtomicAnd(uCubeArray, i32v4.xyz, u64);
    u64 = imageAtomicOr(u2DMS, i32v4.xy, i32v4.z, u64);
    u64 = imageAtomicXor(u2D, i32v4.xy, u64);
    u64 = imageAtomicExchange(uCube, i32v4.xyz, u64);
    u64 = imageAtomicCompSwap(u1DArray, i32v4.xy, u64, u64 + 1);

    u64 = imageAtomicAdd(u2D, i32v4.xy, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicMin(uCube, i32v4.xyz, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicMax(u1DArray, i32v4.xy, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicAnd(uCubeArray, i32v4.xyz, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicOr(u2DMS, i32v4.xy, i32v4.z, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicXor(u2D, i32v4.xy, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicExchange(uCube, i32v4.xyz, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicCompSwap(u1DArray, i32v4.xy, u64, u64 + 1, gl_ScopeDevice,
            gl_StorageSemanticsImage, gl_SemanticsRelaxed, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    u64 = imageAtomicLoad(uCubeArray, i32v4.xyz, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);
    imageAtomicStore(u2DMS, i32v4.xy, i32v4.z, u64, gl_ScopeDevice, gl_StorageSemanticsImage, gl_SemanticsRelaxed);

    i64v4 += imageLoad(i1D, i32v4.x);
    i64v4 += imageLoad(i3D, i32v4.xyz);
    i64v4 += imageLoad(iBuf, i32v4.x);
    i64v4 += imageLoad(i2DArray, i32v4.xyz);
    i64v4 += imageLoad(i2DRect, i32v4.xy);
    i64v4 += imageLoad(i2DMSArray, i32v4.xyz, i32v4.w);

    imageStore(u2D, i32v4.xy, u64v4);
    imageStore(uCube, i32v4.xyz, u64v4);
    imageStore(u1DArray, i32v4.xy, u64v4);
    imageStore(uCubeArray, i32v4.xyz, u64v4);
    imageStore(u2DMS, i32v4.xy, i32v4.z, u64v4);

    sparseImageLoadARB(i3D, i32v4.xyz, i64v4);
    sparseImageLoadARB(i2DArray, i32v4.xyz, i64v4);
    sparseImageLoadARB(i2DRect, i32v4.xy, i64v4);
    sparseImageLoadARB(u2D, i32v4.xy, u64v4);
    sparseImageLoadARB(uCube, i32v4.xyz, u64v4);
    sparseImageLoadARB(uCubeArray, i32v4.xyz, u64v4);
}