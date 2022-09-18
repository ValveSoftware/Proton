#version 150 core
#extension GL_ARB_explicit_attrib_location : enable

#ifdef GL_ES
precision mediump float;
#endif

layout (origin_upper_left,pixel_center_integer) in vec4 gl_FragCoord;
float myGlobalVar = gl_FragCoord.x;
layout (origin_upper_left,pixel_center_integer) in vec4 gl_FragCoord;

in vec4 i;
layout (location = 0) out vec4 myColor;
const float eps=0.001;

void main() {
    myColor = vec4(0.2);
    if (gl_FragCoord.y >= 10) {
        myColor.b = 0.8;
    }
    if (gl_FragCoord.y == trunc(gl_FragCoord.y)) {
        myColor.g = 0.8;
    }
    if (gl_FragCoord.x == trunc(gl_FragCoord.x)) {
        myColor.r = 0.8;
    }

    vec4 diff = gl_FragCoord - i;
    if (abs(diff.z)>eps) myColor.b = 0.5;
    if (abs(diff.w)>eps) myColor.a = 0.5;
}
