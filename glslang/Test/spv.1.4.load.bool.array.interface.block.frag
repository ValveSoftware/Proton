#version 450 core

layout(std140, set=0, binding=0) uniform ub {
    bool bi[2][3];
};
layout(std430, set=0, binding=1) buffer ssbo {
    bool bo[2][3];
};

layout(location=0) out vec4 color;

void main()
{
    bo = bi;
    color = vec4(0);
}

