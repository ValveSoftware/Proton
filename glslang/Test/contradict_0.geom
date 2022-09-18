#version 330

layout(points) in;
layout(triangle_strip, max_vertices = 4) out;

float getV();

void main (void)
{
    float v = getV();
    EndPrimitive();
    EndPrimitive();
}
