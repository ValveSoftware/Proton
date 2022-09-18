#version 460

layout(points) in;
layout(triangle_strip, max_vertices=3) out;

in vec4 vgo1[];
in vec2 vgo2[];

layout(location = 5) in outBlock {
    vec4 o3;
} inBlock[];

out vec4 gfo1;
out vec2 gfo2;

layout(location = 5) out outBlock {
    vec4 o3;
} gf_out;

uniform crossStageBlock2 {
    uniform vec4 a;
    vec2 b;
} blockName1 [2]; // instance name different from frag

void main()
{
    for (int i = 0; i < 3; i++) {
        gfo1 = vec4(0);
        gfo2 = vec2(0);
        gf_out.o3 = inBlock[i].o3;
        EmitVertex();
    }
    EndPrimitive();
}

