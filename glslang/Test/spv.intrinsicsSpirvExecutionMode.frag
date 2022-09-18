#version 450 core

#extension GL_EXT_spirv_intrinsics: enable

#define GL_ARB_shader_stencil_export 1

spirv_execution_mode(5027); // StencilRefReplacingEXT

spirv_decorate(extensions = ["SPV_EXT_shader_stencil_export"], capabilities = [5013], 11, 5014)
out int gl_FragStencilRef;

layout(location = 0) in flat int color;

void main()
{
    gl_FragStencilRef = color;
}
