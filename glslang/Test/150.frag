#version 150 core

in vec4 gl_FragCoord;
layout(origin_upper_left, pixel_center_integer) in vec4 gl_FragCoord;  // ERROR
layout(pixel_center_integer) in vec4 gl_FragCoord;  // ERROR
layout(origin_upper_left) in vec4 foo;  // ERROR
layout(origin_upper_left, pixel_center_integer) in vec4 gl_FragCoord;

void main()
{
    vec4 c = gl_FragCoord;
}

layout(origin_upper_left, pixel_center_integer) in vec4 gl_FragCoord;  // ERROR, declared after use

in struct S { float f; } s;

float patch = 3.1;

uniform sampler2DMS sms;
uniform isampler2DMS isms;
uniform usampler2DMS usms;
uniform sampler2DMSArray smsa;
uniform isampler2DMSArray ismsa;
uniform usampler2DMSArray usmsa;

flat in ivec2 p2;
flat in ivec3 p3;
flat in int samp;

void barWxyz()
{
    ivec2 t11 = textureSize( sms);
    ivec2 t12 = textureSize(isms);
    ivec2 t13 = textureSize(usms);
    ivec3 t21 = textureSize( smsa);
    ivec3 t22 = textureSize(ismsa);
    ivec3 t23 = textureSize(usmsa);
     vec4 t31 = texelFetch( sms, p2, samp);
    ivec4 t32 = texelFetch(isms, p2, samp);
    uvec4 t33 = texelFetch(usms, p2, 3);
     vec4 t41 = texelFetch( smsa, p3, samp);
    ivec4 t42 = texelFetch(ismsa, ivec3(2), samp);
    uvec4 t43 = texelFetch(usmsa, p3, samp);
}

int primitiveID()
{
   return gl_PrimitiveID;
   gl_PerFragment; // ERROR, block name can't get reused
}

in double type1;    // ERROR
#extension GL_ARB_gpu_shader_fp64 : enable
double type2;
double type3 = 2.0;
int absTest = sqrt(type3);
double absTest2 = sqrt(type3);
double absTest3 = sqrt(2);
float dk = sqrt(11);

#extension GL_ARB_shader_bit_encoding: enable

float f;
vec4 v4;
ivec4 iv4a;
uvec2 uv2c;
void bitEncodingPass()
{
    int i = floatBitsToInt(f);
    uvec4 uv11 = floatBitsToUint(v4);
    vec4 v14 = intBitsToFloat(iv4a);
    vec2 v15 = uintBitsToFloat(uv2c);
}

#extension GL_ARB_shader_bit_encoding: disable

void bitEncodingFail()
{
    int i = floatBitsToInt(f); // Error, extention GL_ARB_bit_encoding is diabled
}

#extension GL_ARB_shading_language_packing : enable
vec2 v2a;
uint uy;

void packingPass()
{
    uint u19 = packSnorm2x16(v2a);
    vec2 v20 = unpackSnorm2x16(uy);
    uint u15 = packUnorm2x16(v2a);
    vec2 v16 = unpackUnorm2x16(uy);
    uint u17 = packHalf2x16(v2a);
    vec2 v18 = unpackHalf2x16(uy);
}

#extension GL_ARB_shading_language_packing : disable
void packingFail()
{
    uint u19 = packSnorm2x16(v2a); // Error, extension GL_ARB_shading_language_packing is disabled
}

// Testing extension GL_ARB_texture_query_lod
uniform sampler1D samp1D;
uniform sampler2DShadow samp2Ds;

void qlodFail()
{
    vec2 lod;
    float pf;
    vec2 pf2;
    vec3 pf3;

    lod = textureQueryLOD(samp1D, pf);      // ERROR, extension GL_ARB_texture_query_lod needed
    lod = textureQueryLOD(samp2Ds, pf2);    // ERROR, extension GL_ARB_texture_query_lod needed
}

#extension GL_ARB_texture_query_lod : enable

uniform isampler2D isamp2D;
uniform usampler3D usamp3D;
uniform samplerCube sampCube;
uniform isampler1DArray isamp1DA;
uniform usampler2DArray usamp2DA;

uniform sampler1DShadow samp1Ds;
uniform samplerCubeShadow sampCubes;
uniform sampler1DArrayShadow samp1DAs;
uniform sampler2DArrayShadow samp2DAs;

uniform samplerBuffer sampBuf;
uniform sampler2DRect sampRect;

void qlodPass()
{
    vec2 lod;
    float pf;
    vec2 pf2;
    vec3 pf3;

    lod = textureQueryLOD(samp1D, pf);
    lod = textureQueryLOD(isamp2D, pf2);
    lod = textureQueryLOD(usamp3D, pf3);
    lod = textureQueryLOD(sampCube, pf3);
    lod = textureQueryLOD(isamp1DA, pf);
    lod = textureQueryLOD(usamp2DA, pf2);

    lod = textureQueryLOD(samp1Ds, pf);
    lod = textureQueryLOD(samp2Ds, pf2);
    lod = textureQueryLOD(sampCubes, pf3);
    lod = textureQueryLOD(samp1DAs, pf);
    lod = textureQueryLOD(samp2DAs, pf2);

    lod = textureQueryLOD(sampBuf, pf);     // ERROR
    lod = textureQueryLOD(sampRect, pf2);   // ERROR
}

// Test extension GL_EXT_shader_integer_mix
#extension GL_EXT_shader_integer_mix : enable
bool b1, b2, b;
int x,y;
uint z,w;

void testmix()
{
    int ival  = mix(x, y, b);
    ivec2 iv2 = mix(ivec2(x), ivec2(y), bvec2(b));
    ivec3 iv3 = mix(ivec3(x), ivec3(y), bvec3(b));
    ivec4 iv4 = mix(ivec4(x), ivec4(x), bvec4(b));
    uint  uiv = mix(z, w, b);
    uvec2 uv2 = mix(uvec2(z), uvec2(z), bvec2(b));
    uvec3 uv3 = mix(uvec3(z), uvec3(z), bvec3(b));
    uvec4 uv4 = mix(uvec4(z), uvec4(z), bvec4(b));
    bool  bv  = mix(b1, b2, b);
    bvec2 bv2 = mix(bvec2(b1), bvec2(b2), bvec2(b));
    bvec3 bv3 = mix(bvec3(b1), bvec3(b2), bvec3(b));
    bvec4 bv4 = mix(bvec4(b1), bvec4(b2), bvec4(b));
}

#extension GL_EXT_shader_integer_mix : disable
void testmixFail()
{
    int ival  = mix(x, y, b); // Error since extenson GL_EXT_shader_integer_mix is disabled
}
