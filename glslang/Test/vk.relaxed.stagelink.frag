#version 460

layout (location = 0) in vec4 io;

out vec4 o;

// default uniforms will be gathered into a uniform block
// final global block will merge uniforms from all linked files
uniform vec4 a;     // declared in both stages
uniform vec2 b1;    // declaration order swapped in other stage
uniform vec2 b2;
uniform vec4 c1;    // not delcared in other file
uniform vec4 d;

// final global buffer will berge buffers from all linked files
layout (binding = 0) uniform atomic_uint counter1;
layout (binding = 0) uniform atomic_uint counter2;

vec4 foo() {
    uint j = atomicCounterIncrement(counter1) + atomicCounterDecrement(counter2);
    vec4 v = a + vec4(b1.x, b1.y, b2.x, b2.y) + c1 + d;

    return float(j) * v;
}

void main() {
    o = io + foo();
}