#version 310 es
precision highp float;

out vec4 outp;
void main()
{
    if (gl_HelperInvocation)
        ++outp;
}

