#version 460


layout(location = 5) in outBlock {
    vec4 o3;
};

in vec2 o2; // declaration order different than vertex shader
in vec4 o1; // declaration order different than vertex shader

out vec4 outColor;

uniform vec2 u1;
uniform vec3 u2;    // initializer present in vertex stage
uniform vec4 u3 = vec4(0); // initializer matches initializer in vertex stage

uniform mat2 um2 = mat2(4.0);

layout (location = 0, binding = 0) uniform sampler2D glass;

uniform crossStageBlock1 {
    uniform vec4 a;
    vec4 b;
};

buffer fragOnlyBlock {
    vec2 fb1;
};

uniform crossStageBlock2 {
    uniform vec4 a;
    vec2 b;
} blockName2 [2]; // instance name different from vert


void main()
{
    vec4 color = o1 * u1.rgrg * u2.rgbr * u3.rgba;        // o1 is statically used
    outColor = color;
}

