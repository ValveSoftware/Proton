#version 450
#extension GL_KHR_shader_subgroup_vote: enable
#extension GL_EXT_shader_subgroup_extended_types_float16 : enable
layout(set = 0, binding = 0, std430) buffer Buffer1
{
  uint result[];
};

void main (void)
{
  uint tempRes;
  float16_t valueNoEqual = float16_t(gl_SubgroupInvocationID);
  tempRes = subgroupAllEqual(valueNoEqual) ? 0x0 : 0x10;
  result[gl_VertexIndex] = tempRes;
}

