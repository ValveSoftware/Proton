#version 450 core
#extension GL_EXT_fragment_shading_rate : enable
#extension GL_ARB_shader_stencil_export : enable
#extension GL_ARB_fragment_shader_interlock : enable
#extension GL_AMD_shader_early_and_late_fragment_tests : enable
layout(location = 0) flat in int instanceIndex;
layout(early_and_late_fragment_tests_amd) in;
layout(depth_less) out float gl_FragDepth;
void main()
{
  gl_FragDepth = float(instanceIndex) / float(81);
}
