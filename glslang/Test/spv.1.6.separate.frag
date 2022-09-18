#version 400

uniform sampler s;

uniform textureBuffer             texBuffer;
uniform itextureBuffer            itexBuffer;
uniform utextureBuffer            utexBuffer;

void main()
{
    samplerBuffer          (texBuffer, s);
    isamplerBuffer         (itexBuffer, s);
    usamplerBuffer         (utexBuffer, s);
}
