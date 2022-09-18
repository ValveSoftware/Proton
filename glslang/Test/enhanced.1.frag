#version 450

in Vertex {
    vec4 v;
} vVert;

void main()
{
    vec4 color = vec4(vVert.v2.rgb, 1.0);
}

