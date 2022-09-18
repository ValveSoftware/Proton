#version 310 es

precision highp float;

layout(binding = 0) uniform block {
    mediump float f;
} instanceName;

struct S {
    int i;
} s;

float a[5];

void main()
{
    bool b;
    float f;
    int i;
    uint u;
    bvec3 b3;
    vec3 v3;
    ivec3 iv3;
    uvec3 uv3;
    vec4 v4;
    ivec4 iv4;
    uvec4 uv4;
    mat2 m2;
    mat4 m4;

    f * v4;
    u + u;
    uv4 / u;
    iv3 -= iv3;
    
    i %= 3;
    uv3 % 4u;
    --m2;
    iv4++;

    m4 != m4;
    m2 == m2;
    i <= i;
    a == a;
    s != s;

    b && b;
    b || b;
    b ^^ b;

    !b, uv3;

    ~i;
    ~u;
    ~uv3;
    ~iv3;

    uv3 <<= i;
    i >> i;
    u << u;
    iv3 >> iv3;

    i & i;
    u | u;
    iv3 ^ iv3;
    u & uv3;
    uv3 | u;
    uv3 &= u;
    int arr[0x222 & 0xf];
    arr[1]; // size 2
    int arr2[(uvec2(0, 0x2) | 0x1u).y];
    arr2[2]; // size 3
}
