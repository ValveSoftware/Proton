#version 450

vec4 undeclared_errors(vec4 f4)
{
  vec4 result;
  gl_SubgroupSize;               // ERROR, extension not enabled (basic)
  gl_SubgroupInvocationID;       // ERROR, extension not enabled (basic)
  subgroupBarrier();             // ERROR, extension not enabled (basic)
  subgroupMemoryBarrier();       // ERROR, extension not enabled (basic)
  subgroupMemoryBarrierBuffer(); // ERROR, extension not enabled (basic)
  subgroupMemoryBarrierImage();  // ERROR, extension not enabled (basic)
  subgroupElect();               // ERROR, extension not enabled (basic)
  gl_NumSubgroups;               // ERROR, only defined in compute
  gl_SubgroupID;                 // ERROR, only defined in compute
  subgroupMemoryBarrierShared(); // ERROR, only defined in compute

  subgroupAll(true);        // ERROR extension not enabled (vote)
  subgroupAny(false);       // ERROR extension not enabled (vote)
  subgroupAllEqual(f4);     // ERROR extension not enabled (vote)

  gl_SubgroupEqMask;                        // ERROR extension not enabled (ballot)
  gl_SubgroupGeMask;                        // ERROR extension not enabled (ballot)
  gl_SubgroupGtMask;                        // ERROR extension not enabled (ballot)
  gl_SubgroupLeMask;                        // ERROR extension not enabled (ballot)
  gl_SubgroupLtMask;                        // ERROR extension not enabled (ballot)
  subgroupBroadcast(f4, 0);                 // ERROR extension not enabled (ballot)
  subgroupBroadcastFirst(f4);               // ERROR extension not enabled (ballot)
  uvec4 ballot = subgroupBallot(false);     // ERROR extension not enabled (ballot)
  subgroupInverseBallot(uvec4(0x1));        // ERROR extension not enabled (ballot)
  subgroupBallotBitExtract(ballot, 0);      // ERROR extension not enabled (ballot)
  subgroupBallotBitCount(ballot);           // ERROR extension not enabled (ballot)
  subgroupBallotInclusiveBitCount(ballot);  // ERROR extension not enabled (ballot)
  subgroupBallotExclusiveBitCount(ballot);  // ERROR extension not enabled (ballot)
  subgroupBallotFindLSB(ballot);            // ERROR extension not enabled (ballot)
  subgroupBallotFindMSB(ballot);            // ERROR extension not enabled (ballot)

  subgroupShuffle(f4, 0);           // ERROR extension not enabled (shuffle)
  subgroupShuffleXor(f4, 0x1);      // ERROR extension not enabled (shuffle)
  subgroupShuffleUp(f4, 1);         // ERROR extension not enabled (shuffle_relative)
  subgroupShuffleDown(f4, 1);       // ERROR extension not enabled (shuffle_relative)

  result = subgroupAdd(f4);         // ERROR, extension not enabled (arith)
  subgroupMul(f4);                  // ERROR, extension not enabled (arith)
  subgroupMin(f4);                  // ERROR, extension not enabled (arith)
  subgroupMax(f4);                  // ERROR, extension not enabled (arith)
  subgroupAnd(ballot);              // ERROR, extension not enabled (arith)
  subgroupOr(ballot);               // ERROR, extension not enabled (arith)
  subgroupXor(ballot);              // ERROR, extension not enabled (arith)
  subgroupInclusiveAdd(f4);         // ERROR, extension not enabled (arith)
  subgroupInclusiveMul(f4);         // ERROR, extension not enabled (arith)
  subgroupInclusiveMin(f4);         // ERROR, extension not enabled (arith)
  subgroupInclusiveMax(f4);         // ERROR, extension not enabled (arith)
  subgroupInclusiveAnd(ballot);     // ERROR, extension not enabled (arith)
  subgroupInclusiveOr(ballot);      // ERROR, extension not enabled (arith)
  subgroupInclusiveXor(ballot);     // ERROR, extension not enabled (arith)
  subgroupExclusiveAdd(f4);         // ERROR, extension not enabled (arith)
  subgroupExclusiveMul(f4);         // ERROR, extension not enabled (arith)
  subgroupExclusiveMin(f4);         // ERROR, extension not enabled (arith)
  subgroupExclusiveMax(f4);         // ERROR, extension not enabled (arith)
  subgroupExclusiveAnd(ballot);     // ERROR, extension not enabled (arith)
  subgroupExclusiveOr(ballot);      // ERROR, extension not enabled (arith)
  subgroupExclusiveXor(ballot);     // ERROR, extension not enabled (arith)

  subgroupClusteredAdd(f4, 2);      // ERROR, extension not enabled (clustered)
  subgroupClusteredMul(f4, 2);      // ERROR, extension not enabled (clustered)
  subgroupClusteredMin(f4, 2);      // ERROR, extension not enabled (clustered)
  subgroupClusteredMax(f4, 2);      // ERROR, extension not enabled (clustered)
  subgroupClusteredAnd(ballot, 2);  // ERROR, extension not enabled (clustered)
  subgroupClusteredOr(ballot, 2);   // ERROR, extension not enabled (clustered)
  subgroupClusteredXor(ballot, 2);  // ERROR, extension not enabled (clustered)

  subgroupQuadBroadcast(f4, 0);     // ERROR, extension not enabled (quad)
  subgroupQuadSwapHorizontal(f4);   // ERROR, extension not enabled (quad)
  subgroupQuadSwapVertical(f4);     // ERROR, extension not enabled (quad)
  subgroupQuadSwapDiagonal(f4);     // ERROR, extension not enabled (quad)

  uvec4 parti = subgroupPartitionNV(f4);                // ERROR, extension not enabled (partitioned)
  subgroupPartitionedAddNV(f4, parti);                  // ERROR, extension not enabled (partitioned)
  subgroupPartitionedMulNV(f4, parti);                  // ERROR, extension not enabled (partitioned)
  subgroupPartitionedMinNV(f4, parti);                  // ERROR, extension not enabled (partitioned)
  subgroupPartitionedMaxNV(f4, parti);                  // ERROR, extension not enabled (partitioned)
  subgroupPartitionedAndNV(ballot, parti);              // ERROR, extension not enabled (partitioned)
  subgroupPartitionedOrNV(ballot, parti);               // ERROR, extension not enabled (partitioned)
  subgroupPartitionedXorNV(ballot, parti);              // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveAddNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveMulNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveMinNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveMaxNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveAndNV(ballot, parti);     // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveOrNV(ballot, parti);      // ERROR, extension not enabled (partitioned)
  subgroupPartitionedInclusiveXorNV(ballot, parti);     // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveAddNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveMulNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveMinNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveMaxNV(f4, parti);         // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveAndNV(ballot, parti);     // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveOrNV(ballot, parti);      // ERROR, extension not enabled (partitioned)
  subgroupPartitionedExclusiveXorNV(ballot, parti);     // ERROR, extension not enabled (partitioned)

  return result;
}

#extension GL_KHR_shader_subgroup_basic: enable
layout(isolines) in;
layout(set = 0, binding = 0, std430) buffer Output
{
  uvec4 result[];
};

void main (void)
{
  result[gl_PrimitiveID] = uvec4(gl_SubgroupSize, gl_SubgroupInvocationID, 0, 0);
  subgroupBarrier();
  subgroupMemoryBarrier();
  subgroupMemoryBarrierBuffer();
  subgroupMemoryBarrierImage();
  subgroupElect();
}

#extension GL_KHR_shader_subgroup_ballot: enable
void ballot_works(vec4 f4) {
  gl_SubgroupEqMask;
  gl_SubgroupGeMask;
  gl_SubgroupGtMask;
  gl_SubgroupLeMask;
  gl_SubgroupLtMask;
  subgroupBroadcast(f4, 0);
  subgroupBroadcastFirst(f4);
  uvec4 ballot = subgroupBallot(false);
  subgroupInverseBallot(uvec4(0x1));
  subgroupBallotBitExtract(ballot, 0);
  subgroupBallotBitCount(ballot);
  subgroupBallotInclusiveBitCount(ballot);
  subgroupBallotExclusiveBitCount(ballot);
  subgroupBallotFindLSB(ballot);
  subgroupBallotFindMSB(ballot);
}

#extension GL_KHR_shader_subgroup_vote: enable
void vote_works(vec4 f4)
{
  subgroupAll(true);
  subgroupAny(false);
  subgroupAllEqual(f4);
}

#extension GL_KHR_shader_subgroup_shuffle: enable
#extension GL_KHR_shader_subgroup_shuffle_relative: enable
void shuffle_works(vec4 f4)
{
  subgroupShuffle(f4, 0);
  subgroupShuffleXor(f4, 0x1);
  subgroupShuffleUp(f4, 1);
  subgroupShuffleDown(f4, 1);
}

#extension GL_KHR_shader_subgroup_arithmetic: enable
void arith_works(vec4 f4)
{
  uvec4 ballot;
  subgroupAdd(f4);
  subgroupMul(f4);
  subgroupMin(f4);
  subgroupMax(f4);
  subgroupAnd(ballot);
  subgroupOr(ballot);
  subgroupXor(ballot);
  subgroupInclusiveAdd(f4);
  subgroupInclusiveMul(f4);
  subgroupInclusiveMin(f4);
  subgroupInclusiveMax(f4);
  subgroupInclusiveAnd(ballot);
  subgroupInclusiveOr(ballot);
  subgroupInclusiveXor(ballot);
  subgroupExclusiveAdd(f4);
  subgroupExclusiveMul(f4);
  subgroupExclusiveMin(f4);
  subgroupExclusiveMax(f4);
  subgroupExclusiveAnd(ballot);
  subgroupExclusiveOr(ballot);
  subgroupExclusiveXor(ballot);
}

#extension GL_KHR_shader_subgroup_clustered: enable
void clustered_works(vec4 f4)
{
  uvec4 ballot = uvec4(0x55,0,0,0);
  subgroupClusteredAdd(f4, 2);
  subgroupClusteredMul(f4, 2);
  subgroupClusteredMin(f4, 2);
  subgroupClusteredMax(f4, 2);
  subgroupClusteredAnd(ballot, 2);
  subgroupClusteredOr(ballot, 2);
  subgroupClusteredXor(ballot, 2);
}

#extension GL_KHR_shader_subgroup_quad: enable
void quad_works(vec4 f4)
{
  subgroupQuadBroadcast(f4, 0);
  subgroupQuadSwapHorizontal(f4);
  subgroupQuadSwapVertical(f4);
  subgroupQuadSwapDiagonal(f4);
}

#extension GL_NV_shader_subgroup_partitioned: enable
void partitioned_works(vec4 f4)
{
  uvec4 parti = subgroupPartitionNV(f4);
  uvec4 ballot = uvec4(0x55,0,0,0);
  subgroupPartitionedAddNV(f4, parti);
  subgroupPartitionedMulNV(f4, parti);
  subgroupPartitionedMinNV(f4, parti);
  subgroupPartitionedMaxNV(f4, parti);
  subgroupPartitionedAndNV(ballot, parti);
  subgroupPartitionedOrNV(ballot, parti);
  subgroupPartitionedXorNV(ballot, parti);
  subgroupPartitionedInclusiveAddNV(f4, parti);
  subgroupPartitionedInclusiveMulNV(f4, parti);
  subgroupPartitionedInclusiveMinNV(f4, parti);
  subgroupPartitionedInclusiveMaxNV(f4, parti);
  subgroupPartitionedInclusiveAndNV(ballot, parti);
  subgroupPartitionedInclusiveOrNV(ballot, parti);
  subgroupPartitionedInclusiveXorNV(ballot, parti);
  subgroupPartitionedExclusiveAddNV(f4, parti);
  subgroupPartitionedExclusiveMulNV(f4, parti);
  subgroupPartitionedExclusiveMinNV(f4, parti);
  subgroupPartitionedExclusiveMaxNV(f4, parti);
  subgroupPartitionedExclusiveAndNV(ballot, parti);
  subgroupPartitionedExclusiveOrNV(ballot, parti);
  subgroupPartitionedExclusiveXorNV(ballot, parti);
}

// tests for NV_shader_sm_builtins
void sm_builtins_err()
{
    gl_WarpsPerSMNV;    // ERROR, no extension
    gl_SMCountNV;       // ERROR, no extension
    gl_WarpIDNV;        // ERROR, no extension
    gl_SMIDNV;          // ERROR, no extension
}

#ifdef GL_NV_shader_sm_builtins
#extension GL_NV_shader_sm_builtins : enable
#endif

void sm_builtins()
{
    gl_WarpsPerSMNV;
    gl_SMCountNV;
    gl_WarpIDNV;
    gl_SMIDNV;
}
