#version 310 es

precision highp float;

float g4[4];
float g5[5];

layout(location = 0) out vec2 colorOut;

float[4] foo(float a[5])
{
    return float[](a[0], a[1], a[2], a[3]);
}

void main()
{
    g4 = foo(g5);

    if (float[4](1.0, 2.0, 3.0, 4.0) == g4)
        ;

    float u[5];
    foo(u);

    colorOut = vec2(g4.length(), g5.length());
}
