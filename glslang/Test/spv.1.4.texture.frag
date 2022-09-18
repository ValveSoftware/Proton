#version 450

uniform  sampler2D       texSampler2D;
uniform isampler2D      itexSampler2D;
uniform usampler2D      utexSampler2D;

in  vec2 t;
in  vec2 coords2D;
flat in ivec2 iCoords2D;

out vec4 color;

flat in int iLod;

void main()
{
    vec4  color = vec4(0.0, 0.0, 0.0, 0.0);

    color += texture( texSampler2D, coords2D);
    color += texture(itexSampler2D, coords2D);
    color += texture(utexSampler2D, coords2D);

    color += texelFetch( texSampler2D, iCoords2D, iLod);
    color += texelFetch(itexSampler2D, iCoords2D, iLod);
    color += texelFetch(utexSampler2D, iCoords2D, iLod);
}