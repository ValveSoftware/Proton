#version 150 core
#extension GL_ARB_gpu_shader5 : require
layout(points) in;
layout(points, max_vertices = 1) out;
layout(stream=0) out float output1;
layout(stream=0) out float output2;
layout(stream=1) out float output3;
layout(stream=1) out float output4;
uniform uint stream;
void main() {

    output1 = 1.0;
    output2 = 2.0;
    EmitStreamVertex(0);
    EndStreamPrimitive(0);
    output3 = 3.0;
    output4 = 4.0;
    EmitStreamVertex(1);
    EndStreamPrimitive(1);
}