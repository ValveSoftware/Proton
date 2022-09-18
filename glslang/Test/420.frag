#version 420 core

layout(depth_any) out float gl_FragDepth;
layout(depth_greater) out float gl_FragDepth; // ERROR: redeclaration with different qualifier

void main()
{
    gl_FragDepth = 0.3;
}

layout(depth_less) in float depth; // ERROR: depth_less only applies to gl_FragDepth
layout(depth_any) out float gl_FragDepth;  // ERROR, done after use

layout(binding=0) uniform atomic_uint a[];

uniform writeonly image2D      i2D;
ivec2 iv2dim = imageSize(i2D); // ERROR: imageSize called without enabling GL_ARB_shader_image_size extension
#extension GL_ARB_shader_image_size : enable
ivec2 iv2dim1 = imageSize(i2D);

#extension GL_ARB_shader_storage_buffer_object : enable

layout(binding = 0,std430) buffer Buffer
{
    int atomi;
    uint atomu;
};

void atomicOpPass()
{
    int origi = atomicAdd(atomi, 3);
    uint origu = atomicAnd(atomu, 7u);
    origi = atomicExchange(atomi, 4);
    origu = atomicCompSwap(atomu, 10u, 8u);
}

layout(binding = 2,std430) buffer ssboElem01
{
    int member01;
    int memberArr01[2];
    int memberUnsizedArr01[];
} ssboStd430Arr[2];

// if turns on EShReflectionSharedStd140SSBO, SPIR-V would be different
layout(binding = 3,shared) buffer ssboElem02
{
    int member02;
    int memberArr02[2];
    int memberUnsizedArr02[];
} ssboSharedArr[2];

#extension GL_ARB_shader_storage_buffer_object : disable

layout(binding = 1,std430) buffer BufferFail // Error std430 and "buffer" block support disabled 
{
    int atom1i;
};
