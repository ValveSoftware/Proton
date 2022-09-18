#version 430 core

layout (std140) uniform UBO // offset can't use on 430 core with out extension require
{
    layout(offset = 0) vec4 a;
};

in  vec4 in_vs;
out vec4 out_vs;

void main()
{
    out_vs = in_vs + a;
}
