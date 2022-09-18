#version 460

// default uniforms will be gathered into a uniform block
// final global block will merge uniforms from all linked files
uniform vec4 a;     // declared in both stages
uniform vec2 b2;    // declaration order swapped in other stage
uniform vec2 b1;
uniform vec4 c2;    // not delcared in other file
uniform vec4 d;

layout (binding = 0) uniform atomic_uint counter3;
layout (binding = 0) uniform atomic_uint counter2;

vec4 foo() {
    uint j = atomicCounterIncrement(counter2) + atomicCounterDecrement(counter3);
    vec4 v = a + vec4(b1.x, b1.y, b2.x, b2.y) + c2 + d;

    return float(j) * v;
}