#version 460

out vec4 vgo1; // declaration order different than fragment shader
out vec2 vgo2; // declaration order different than fragment shader

layout(location = 5) out outBlock {
    vec4 o3;
};

layout (binding = 0) uniform sampler2D glass;

uniform crossStageBlock1 {
    uniform vec4 a;
    vec4 b;
};

readonly buffer vertOnlyBlock {
    vec2 vb1;
};

uniform crossStageBlock2 {
    uniform vec4 a;
    vec2 b;
} blockName1 [2]; // instance name different from frag

void main()
{
    vgo1 = vec4(0);
    vgo2 = vec2(0);
    o3 = vec4(0);
}

