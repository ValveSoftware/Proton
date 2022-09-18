#version 450

struct S1 {
    float a;
    int b;
};

layout(location = 0) flat in S1 in1;
layout(location = 2) flat in S1 in2;
layout(location = 4) flat in int cond;

layout(location = 0) out float outv;

void fun1(){}
void fun2(){}

void main()
{
    // glslang will only make OpSelect for very trivial looking expressions

    float f1 = 1.0;
    float f2 = 2.0;
    outv = cond < 8 ? f1 : f2;           // in all versions

    ivec4 iv1 = ivec4(f1);
    ivec4 iv2 = ivec4(f2);
    outv *= (cond > 0 ? iv1 : iv2).z;     // in all versions, but in 1.4 as scalar condition, not smeared ala mix()

    mat3 m1 = mat3(1.0);
    mat3 m2 = mat3(2.0);
    outv *= (cond < 20 ? m1 : m2)[2][1];  // in 1.4, but not before

    S1 fv = cond > 5 ? in1 : in2;         // in 1.4, but not before
    outv *= fv.a;

    cond > 0 ? fun1() : fun2();           // not allowed by any version
}
