#version 140

layout (std140) uniform UBO // offset can't use under version 140
{
    layout(offset = 0) vec4 a;
};

in  vec4 in_vs;
out vec4 out_vs;

void main()
{
    out_vs = in_vs + a;
}
