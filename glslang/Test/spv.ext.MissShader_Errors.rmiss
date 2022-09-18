#version 460
#extension GL_EXT_ray_tracing : enable
hitAttributeEXT vec4 payload;                               // ERROR, hitattributeEXT unsupported in this stage 
void main()
{
    int e0 = gl_PrimitiveID;                               // ERROR, unsupported builtin in stage
    int e1 = gl_InstanceID;                                // ERROR, unsupported builtin in stage
    int e3 = gl_InstanceCustomIndexEXT;                     // ERROR, unsupported builtin in stage
    mat4x3 e10 = gl_ObjectToWorldEXT;                       // ERROR, unsupported builtin in stage
    mat4x3 e11 = gl_WorldToObjectEXT;                       // ERROR, unsupported builtin in stage
    float e12 = gl_HitTEXT;                                 // ERROR, unsupported builtin in stage
    float e13 = gl_HitKindEXT;                              // ERROR, unsupported builtin in stage
    reportIntersectionEXT(1.0, 1U);                         // ERROR, unsupported builtin in stage
    ignoreIntersectionEXT;                                  // ERROR, unsupported in stage
    terminateRayEXT;                                        // ERROR, unsupported in stage
}
