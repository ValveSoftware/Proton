#version 440

layout(location = 0) in Primitive
{
    vec2 texCoord;
} IN;

layout(location = 0) out vec4 oColor;

layout(binding = 0) uniform sampler2D mytex;

void main()
{
    oColor = texture(mytex, IN.texCoord);
}
