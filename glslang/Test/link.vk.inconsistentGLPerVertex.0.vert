#version 460 core

// This test is to test isInconsistentGLPerVertexMember() workarounds.
// Without that workaround this compile fails due to block declarations
// in gl_PerVertex not being consistent for:
// gl_SecondaryPositionNV
// gl_PositionPerViewNV

out vs_output 
{ 
	vec4 color;
} vs_out; 

in vec4 P;
void main()
{
	vs_out.color = vec4(1.);
	gl_PointSize = 1.0;
	gl_Position = P;
}
