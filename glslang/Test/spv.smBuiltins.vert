#version 450
#extension GL_NV_shader_sm_builtins: enable
layout(set = 0, binding = 0, std430) buffer Output
{
  uvec4 result[];
};

void main (void)
{
  result[gl_VertexIndex] = uvec4(gl_WarpsPerSMNV, gl_SMCountNV, gl_WarpIDNV, gl_SMIDNV);
}
