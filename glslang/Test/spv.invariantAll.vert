#version 450 core
#pragma STDGL invariant(all)

layout(location=0) out highp float v;

void main()
{
    gl_Position = vec4(v, v, 0, 1);
}

