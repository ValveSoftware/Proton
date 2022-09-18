#version 430 core
#extension GL_ARB_enhanced_layouts : require
layout(isolines, point_mode) in;
layout (xfb_offset = 0) out vec4 unsized[]; // error: unsized array

void main()
{
}
