#version 460

out vec4 o1; // declaration order different than fragment shader
out vec2 o2; // declaration order different than fragment shader

layout(location = 5) out outBlock {
    vec4 o3;
};

uniform vec2 u1;
uniform vec3 u2 = vec3(0); // initializer not present in fragment stage
uniform vec4 u3 = vec4(0); // initializer matches initializer in fragment stage

uniform mat2 um2 = mat2(4.0);

layout (location = 0, binding = 0) uniform sampler2D glass;

uniform crossStageBlock1 {
    uniform vec4 a;
    vec4 b;
};

buffer vertOnlyBlock {
    vec2 vb1;
};

uniform crossStageBlock2 {
    uniform vec4 a;
    vec2 b;
} blockName1 [2]; // instance name different from frag

void main()
{
    o1 = vec4(0);
    o2 = vec2(0);
    o3 = vec4(0);
}

