#version 440

layout(location = 0) in Primitive
{
    vec2 texCoord;
} IN[];

layout(location = 0) out Primitive
{
    vec2 texCoord;
} OUT;

layout(triangles, fractional_odd_spacing) in;
layout(cw) in;
void main()
{
    float u = gl_TessCoord.x;
    float v = gl_TessCoord.y;
    float w = gl_TessCoord.z;

    vec2 newUv = vec2( u * IN[0].texCoord + v * IN[1].texCoord + w * IN[2].texCoord);
    OUT.texCoord = newUv;
    gl_Position = gl_in[gl_PatchVerticesIn].gl_Position;
}


