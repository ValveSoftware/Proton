#version 460 core

layout(lines_adjacency) in; 
layout(triangle_strip, max_vertices = 50) out;

in vs_output 
{ 
	vec4 color;
} gs_in[]; 

out gs_output
{
	vec4 color;
} gs_out;

void main()
{
	gl_Position = gl_in[0].gl_Position;
	gs_out.color = gs_in[0].color;
	EmitVertex();
	gs_out.color = gs_in[1].color;
	gl_Position = gl_in[1].gl_Position;
	EmitVertex();
	gs_out.color = gs_in[0].color;
	gl_Position = gl_in[0].gl_Position;
	EmitVertex();
}
