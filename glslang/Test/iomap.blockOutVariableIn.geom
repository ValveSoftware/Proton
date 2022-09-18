#version 440

layout(triangles) in;
layout(triangle_strip, max_vertices=3) out;

layout(location = 0) in vec4 in_a1[3];
layout(location = 1) in vec2 in_a2[3];

layout(location = 0) out vec4 a1;
layout(location = 1) out vec2 a2;

void main()
{
    a1 = in_a1[0];
    a2 = in_a2[0];
    gl_Position = vec4(1.0);
    EmitVertex();

    a1 = in_a1[1];
    a2 = in_a2[1];
    gl_Position = vec4(1.0);
    EmitVertex();

    a1 = in_a1[2];
    a2 = in_a2[2];
    gl_Position = vec4(1.0);
    EmitVertex();
}
