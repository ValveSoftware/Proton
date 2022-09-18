#version 450 core
#extension GL_ARB_shader_atomic_counters: enable
#extension GL_ARB_shader_atomic_counter_ops:enable

layout(binding = 0) uniform atomic_uint counter;

out highp vec4 vsColor;

void main(){
    vec4 outColor = vec4(1.0);
    uint ret;

    ret = atomicCounterAddARB(counter, 4u);
    ret = atomicCounterSubtractARB(counter, 4u);
    ret = atomicCounterMinARB(counter, 4u);
    ret = atomicCounterMaxARB(counter, 4u);
    ret = atomicCounterAndARB(counter, 4u);
    ret = atomicCounterOrARB(counter, 4u);
    ret = atomicCounterXorARB(counter, 4u);
    ret = atomicCounterExchangeARB(counter, 4u);
    ret = atomicCounterCompSwapARB(counter, 4u, 4u);

    uint after = atomicCounter(counter);
    if (after == ret)
        outColor = vec4(0.0);

    vsColor = outColor;
}