#version 460

layout (location = 0) in vec4 io;

out vec4 o;

// default uniforms will be gathered into a uniform block
uniform vec4 a;     // declared in both stages with different types

vec4 foo() {
    return a;
}

void main() {
    o = io + foo();
}