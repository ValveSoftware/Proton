#version 460
#extension GL_ARB_separate_shader_objects : enable
#extension GL_EXT_nonuniform_qualifier : enable
#extension GL_GOOGLE_include_directive : enable
#extension GL_EXT_scalar_block_layout : enable
#extension GL_EXT_ray_query : enable

layout(location = 0) out vec4 outColor;

rayQueryEXT rq;

void main() {
  outColor = vec4(0.0);
}
