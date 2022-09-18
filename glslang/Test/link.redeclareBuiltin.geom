#version 410

layout(triangles) in;
layout(triangle_strip, max_vertices=3) out;

in gl_PerVertex
{
  vec4 gl_Position;
} gl_in[];

void main()
{
    gl_Position = gl_in[0].gl_Position;
    EmitVertex();

    gl_Position = gl_in[1].gl_Position;
    EmitVertex();

    gl_Position = gl_in[2].gl_Position;
    EmitVertex();

    EndPrimitive();
}