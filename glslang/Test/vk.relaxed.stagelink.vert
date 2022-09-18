#version 460

layout (location = 0) out vec4 io;

// default uniforms will be gathered into a uniform block
// final global block will merge uniforms from all linked files
uniform vec4 a;     // declared in both stages
uniform vec2 b2;    // declaration order swapped in other stage
uniform vec2 b1;
uniform vec4 c2;    // not delcared in other file
uniform vec4 d;

uniform vec4 s[4];

layout (binding = 0) uniform atomic_uint counter3;
layout (binding = 0) uniform atomic_uint counter2;

vec4 foo() {
    uint j = atomicCounterIncrement(counter2) + atomicCounterDecrement(counter3);
    vec4 v = a + vec4(b1.x, b1.y, b2.x, b2.y) + c2 + d;

    return float(j) * v;
}

void main() {

    vec4 v = foo();
    v = v + s[gl_VertexID - gl_VertexIndex];
    v.x = v.x - float(gl_InstanceID - gl_InstanceIndex);
    io = v;
}
