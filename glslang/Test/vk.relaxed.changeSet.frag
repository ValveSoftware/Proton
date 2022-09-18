#version 460

layout(location = 0) out vec4 fragColor;

uniform sampler2D sTexture;

in vec4 Color;
in vec2 UV;

void main()
{
    fragColor = Color * texture(sTexture, UV.st).r;
}
