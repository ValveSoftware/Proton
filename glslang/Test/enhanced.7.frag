#version 450 core

layout (location = 0) out vec4 FragColor;

layout (location = 0) in Vertex
{
        vec4 color;
        vec3 worldSpacePos;
        vec3 worldSpaceNorm;
        vec2 texCoord1;
        flat int cameraIndex;
} fs_in;

layout (binding = 1) uniform sampler2D t0;

void main()
{             
    FragColor = texture(t0, fs_in.texCoord1);   
}

