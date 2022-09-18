#version 310 es

precision lowp float;
layout(location = 4) in float c1D;
layout(location = 5) in vec2  c2D;
layout(location = 6) in vec3  c3D;
layout(location = 7) in smooth vec4  c4D;

layout(location = 1) flat in int   ic1D;
layout(location = 2) flat in ivec3 ic3D;
layout(location = 3) flat in ivec4 ic4D;

const ivec2 ic2D = ivec2(2, 3);

struct s {
    int i;
    sampler2D s;
};

struct S2 {
    vec3 c;
    float f;
};

layout(location = 8) in S2 s2;

layout(location = 0) out vec3 sc;
layout(location = 1) out float sf;

void main()
{
    float f = gl_FragCoord.y;
    gl_FragDepth = f;

    sc = s2.c;
    sf = s2.f;

    sinh(c1D) +
    cosh(c1D) * tanh(c2D);
    asinh(c4D) + acosh(c4D);
    atanh(c3D);
}

void foo324(void)
{
    float p = pow(3.2, 4.6);
    p += sin(0.4);
    p += distance(vec2(10.0, 11.0), vec2(13.0, 15.0)); // 5
    p += dot(vec3(2,3,5), vec3(-2,-1,4));              // 13
    vec3 c3 = cross(vec3(3,-3,1), vec3(4,9,2));        // (-15, -2, 39)
    c3 += faceforward(vec3(1,2,3), vec3(2,3,5), vec3(-2,-1,4));     // (-1,-2,-3)
    c3 += faceforward(vec3(1,2,3), vec3(-2,-3,-5), vec3(-2,-1,4));  // (1,2,3)
    vec2 c2 = reflect(vec2(1,3), vec2(0,1));           // (1,-3)
    c2 += refract(vec2(1,3), vec2(0,1), 1.0);          // (1,-3)
    c2 += refract(vec2(1,3), vec2(0,1), 3.0);
    c2 += refract(vec2(1,0.1), vec2(0,1), 5.0);        // (0,0)
    mat3x2 m32 = outerProduct(vec2(2,3), vec3(5,7,11));// rows: (10, 14, 22), (15, 21, 33)
}
