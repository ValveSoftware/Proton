#version 450
#extension GL_ARB_fragment_shader_interlock : enable

layout(pixel_interlock_ordered) out;

layout(pixel_interlock_ordered) in;
layout(pixel_interlock_unordered) in;

void foo()
{
    beginInvocationInterlockARB();
    endInvocationInterlockARB();
}

void main() {

    endInvocationInterlockARB();
    beginInvocationInterlockARB();

    return;

    endInvocationInterlockARB();
}
