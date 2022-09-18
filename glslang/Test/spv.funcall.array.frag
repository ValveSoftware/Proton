#version 450 core

uniform ub {
    vec4 u[9];
};

vec4 f(const vec4 a[9], int ix) {
    return a[ix];
}

out vec4 color;

void main()
{
     color = f(u, 2);
}

