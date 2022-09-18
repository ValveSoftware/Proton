#version 460

out vec4 o;

// default uniforms will be gathered into a uniform block
uniform vec4 a;
uniform vec2 b = vec2(0, 0);            // initializer will be ignored
layout(location = 0) uniform vec2 c;    // location qualifier will be ignored
uniform vec4 d[10];
uniform struct e {                      
    vec2 x;
    float y;
    uint z;
} structUniform; 

// opaque types will not be grouped into uniform block
uniform sampler2D t1;

// shared and packed layout qualifier are silently ignored
layout(shared) uniform UniformBlock {
    float j;
    vec4 k;
};

layout(packed) buffer BufferBlock {
    float j;
    vec4 k;
} bufferInstance;

// atomic_uint will be converted to uint and gathered in a buffer block
layout(binding = 0) uniform atomic_uint counter1; // offset not used
layout(binding = 0) uniform atomic_uint counter2; // offset not used
layout(binding = 1) uniform atomic_uint counter3; // offset not used

// atomic counter functions will be converted to equivalent integer atomic operations
uint bar() {
    uint j = 0;
    j = atomicCounterIncrement(counter1);
    j = atomicCounterDecrement(counter1);
    j = atomicCounter(counter1);

    j = atomicCounterAdd(counter1, 1);
    j = atomicCounterAdd(counter1, -1);
    j = atomicCounterSubtract(counter1, 1);

    j = atomicCounterMin(counter1, j);
    j = atomicCounterMax(counter1, j);
    j = atomicCounterAnd(counter1, j);

    j = atomicCounterOr(counter1, j);
    j = atomicCounterXor(counter1, j);
    
    j = atomicCounterExchange(counter1, j);
    j = atomicCounterCompSwap(counter1, 0, j);

    atomicCounterIncrement(counter2);
    atomicCounterIncrement(counter3);

    memoryBarrierAtomicCounter();
    
    return j;
}

vec4 foo() {
    float f = j + bufferInstance.j + structUniform.y + structUniform.z;
    vec2 v2 = b + c + structUniform.x;
    vec4 v4 = a + d[0] + d[1] + d[2] + k + bufferInstance.k + texture(t1, vec2(0, 0));
    return vec4(f) * vec4(v2, 1, 1) * v4;
}

void main() {
    float j = float(bar());
    o = j * foo();
}