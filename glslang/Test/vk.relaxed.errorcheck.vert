#version 460

layout (location = 0) out vec4 io;

// default uniforms will be gathered into a uniform block
// final global block will merge uniforms from all linked files
uniform vec2 a;     // declared in both stages with different type

vec4 foo() {
    return a.xyxy;
}

void main() {
    io = foo();
}