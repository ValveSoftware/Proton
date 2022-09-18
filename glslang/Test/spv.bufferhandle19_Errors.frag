#version 450

#extension GL_EXT_shader_explicit_arithmetic_types_int64 : enable
#extension GL_EXT_buffer_reference2 : enable
#extension GL_EXT_scalar_block_layout : enable

layout(buffer_reference) buffer T1 {
    int x[];
};

layout(buffer_reference) buffer T2 {
    int x[2];
};

void main()
{
    T1 a;
    a+1;
    a-1;
    1+a;
    a-a;
    a+=1;
    a-=1;
    a+=a;
    a-=a;

    T2 b;
    b+=b;
    b-=b;
    b+b;
    1-b;
}
