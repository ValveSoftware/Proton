#version 460 core
#extension GL_EXT_demote_to_helper_invocation : enable

layout(set = 0, binding = 0) uniform sampler2D tex;
layout(location = 0) in vec2 coord;
layout(location = 0) out vec4 o;

void main (void)
{
    vec4 v = texture(tex, coord);

    if (v == vec4(0.1,0.2,0.3,0.4))
        demote;

    bool x = helperInvocationEXT();

    o = v;
}
