#version 300 es

layout (binding = 0, offset = 0) uniform UBO // offset can't use on under version es 300
{
    vec4 a;
};

in  vec4 in_vs;
out vec4 out_vs;

void main()
{
    out_vs = in_vs + a;
}
