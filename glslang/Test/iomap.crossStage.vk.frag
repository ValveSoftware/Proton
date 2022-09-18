#version 460


layout(location = 5) in outBlock {
    vec4 o3;
};


in vec4 gfo1;
in vec2 gfo2;

out vec4 outColor;

layout (binding = 0) uniform sampler2D glass;

uniform crossStageBlock1 {
    uniform vec4 a;
    vec4 b;
};

readonly buffer fragOnlyBlock {
    vec2 fb1;
};

uniform crossStageBlock2 {
    uniform vec4 a;
    vec2 b;
} blockName2 [2]; // instance name different from vert

vec2 Bar() {
    return  fb1 + 
            blockName2[0].b +
            blockName2[1].b;
}

vec4 Foo() {
    return  a + 
            b + 
            blockName2[0].a +
            blockName2[1].a +
            vec4(Bar(), 0.0, 0.0);
}

void main()
{
    vec4 color = gfo1; // o1 is statically used
    color = color + Foo();
    outColor = color;
}

