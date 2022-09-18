#version 150

#ifdef GL_ARB_texture_query_lod
#extension GL_ARB_texture_query_lod : enable
#endif
#ifdef GL_ARB_gpu_shader5
#extension GL_ARB_gpu_shader5 : enable
#endif

#ifdef GL_ES
precision highp float;
#endif

in vec2 vUV; // vert->frag
out vec4 color; // frag->fb
#define UV vUV

#define bias 1.5
#define TEX 128.0
#define offset ivec2(1,1)
uniform highp sampler2DShadow sampler;
uniform int funct;

void main (void)
{
    switch (funct)
    {
    case 0:
        ivec2 iv2 = textureSize(sampler, 0);
#ifdef GL_ARB_texture_query_lod
        vec2 fv2 = textureQueryLOD(sampler, vec2(0.0, 0.0));
#endif
		color = vec4(iv2,fv2);
        break;
    default:
        color = vec4(1.0, 1.0, 1.0, 1.0);
        break;
    }
}
