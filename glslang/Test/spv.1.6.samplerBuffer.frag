#version 140

out vec4 o;

uniform isamplerBuffer sampB;

void main()
{
    o.w = float(textureSize(sampB)) / 100.0;
}

