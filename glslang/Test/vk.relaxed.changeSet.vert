#version 460

in vec2 aPos;
in vec2 aUV;
in vec4 aColor;
uniform mat4 projectionMatrix;

out vec4 Color;
out vec2 UV;

void main()
{
    Color = aColor;
    UV = aUV;
    gl_Position = projectionMatrix * vec4(aPos, 0, 1);
}
