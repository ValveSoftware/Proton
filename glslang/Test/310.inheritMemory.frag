#version 310 es
precision mediump float;

struct S {
    float buff[10];
};

layout(std430, binding=2) readonly buffer RoBuff {
    float buff_ro[10];
    S s_ro;
} ro_buffer;

layout(std430, binding=2) buffer Buff {
    float buff[10];
    S s;
} non_ro_buffer;

void non_ro_fun(float[10] buff) { }
void non_ro_funf(float el) { }
void non_ro_funS(S s) { }

out vec4 fragColor;

void main()
{
    S s;

    non_ro_fun(s.buff);
    non_ro_funf(s.buff[3]);
    non_ro_funS(s);

    non_ro_fun(non_ro_buffer.buff);
    non_ro_fun(non_ro_buffer.s.buff);
    non_ro_funf(non_ro_buffer.buff[3]);
    non_ro_funf(non_ro_buffer.s.buff[3]);
    non_ro_funS(non_ro_buffer.s);

    non_ro_fun(ro_buffer.buff_ro);
    non_ro_fun(ro_buffer.s_ro.buff);
    non_ro_funf(ro_buffer.buff_ro[3]);
    non_ro_funf(ro_buffer.s_ro.buff[3]);
    non_ro_funS(ro_buffer.s_ro);
}
