#version 430 core
#extension GL_ARB_enhanced_layouts : require

layout (xfb_offset = 0) out vec4 xfb_buffer[]; // ERROR: unsized array cannot be used for an xfb buffer?

in  vec4 in_vs;
out vec4 out_vs;

void main()
{
    vec4 result = in_vs;

    xfb_buffer[0] = result / 2;

    out_vs = result;
}
