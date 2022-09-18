#version 440

layout(location = 0) in Primitive
{
    vec2 texCoord;
} IN[];

layout(location = 0) out Primitive
{
    vec2 texCoord;
} OUT[];

layout(vertices = 3) out;
void main()
{
    OUT[gl_InvocationID].texCoord = IN[gl_InvocationID].texCoord;

    float tessLevel = 10.0;
    gl_TessLevelOuter[gl_InvocationID] = tessLevel;
    gl_TessLevelInner[0] = tessLevel;
}
