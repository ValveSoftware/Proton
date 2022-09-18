#version 310 es

layout(local_size_x_id = 18, local_size_z_id = 19) in;

layout(local_size_x = 2) in;
layout(local_size_y = 5) in;
layout(local_size_z = 7) in;

const int total = gl_MaxComputeWorkGroupCount.x
                + gl_MaxComputeWorkGroupCount.y
                + gl_MaxComputeWorkGroupCount.z
                + gl_MaxComputeUniformComponents
                + gl_MaxComputeTextureImageUnits;

shared vec4 s[total];

int arrX[gl_WorkGroupSize.x];
int arrY[gl_WorkGroupSize.y];
int arrZ[gl_WorkGroupSize.z];

layout(binding = 0, set = 0) buffer bName {
    int size;
    uvec3 count;
    vec4 data[];
} bInst;

void main()
{
    barrier();

    bInst.data[bInst.size / 2] *= vec4(7.0);

    memoryBarrier();
    groupMemoryBarrier();
    memoryBarrierShared();
    memoryBarrierBuffer();

    s[3] = vec4(0, arrX[0], arrY[0], arrZ[0]);
    bInst.count = gl_NumWorkGroups + gl_WorkGroupSize + gl_WorkGroupID + gl_LocalInvocationID +
                  gl_GlobalInvocationID * gl_LocalInvocationIndex;

    atomicAdd(bInst.size, 2);
    atomicMin(bInst.size, 2);
    atomicMax(bInst.size, 2);
    atomicAnd(bInst.size, 2);
    atomicOr(bInst.size, 2);
    atomicXor(bInst.size, 2);
    atomicExchange(bInst.size, 2);
    atomicCompSwap(bInst.size, 5, 2);
}
