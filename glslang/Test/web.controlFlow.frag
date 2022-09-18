#version 310 es

precision mediump float;
precision highp int;

int c, d;
layout(location = 0) in highp float x;
layout(location = 1) in vec4 bigColor;
layout(location = 2) in vec4 BaseColor;
layout(location = 3) in float f;

layout(location = 4) flat in int Count;
layout(location = 5) flat in uvec4 v4;

layout(location = 0) out vec4 outColor;

void main()
{
    float f;
    int a[2];

    switch(c)
    {
    }

    switch (c) {      // a no-error normal switch
    case 1:
        f = sin(x);
        break;
    case 2:
        switch (d) {
        case 1:
            f = x * x * x;
            break;
        case 2:
            f = x * x;
            break;
        }
        break;
    default:
        f = tan(x);
    }

    vec4 color = BaseColor;

    for (int i = 0; i < Count; ++i) {
        color += bigColor;
    }

    outColor = color;

    float sum = 0.0;
    for (int i = 0; i < 4; ++i)
        sum += float(v4[i]);

    vec4 tv4;

    for (int i = 0; i < 4; ++i)
        tv4[i] = float(v4[i] * 4u);

    outColor += vec4(sum) + tv4;

    vec4 r;
    r.xyz = BaseColor.xyz;

    for (int i = 0; i < Count; ++i)
        r.w = f;

    outColor.xyz += r.xyz;

    for (int i = 0; i < 16; i += 4)
        outColor *= f;

    int i = 0;
    int A, B, C, D;
    while (i<10) {
        A = 1;
        if (i%2 == 0) {
            B = 2;
            continue;
            C = 2;
        }
        if (i%5 == 0) {
            B = 2;
            break;
            C = 2;
        }
        i++;
    }
    D = 3;
}
