#version 450
#extension GL_ARB_fragment_shader_interlock : enable

layout(set = 0, binding = 0) coherent buffer B1 {
    layout(offset = 0)  int x;
} b1;

layout(set = 0, binding = 1, rgba32f) coherent uniform image2D im;

layout(sample_interlock_ordered) in;

void main() {

    beginInvocationInterlockARB();

    b1.x = 1;
    imageStore(im, ivec2(0,0), vec4(0));

    endInvocationInterlockARB();
}
