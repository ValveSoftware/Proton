#version 450 core
layout(local_size_x = 0) in; // ERROR, 0 not allowed

layout(binding=10000) uniform atomic_uint;     // ERROR

void main()
{
    shared float f;   // ERROR shared must be global
}
