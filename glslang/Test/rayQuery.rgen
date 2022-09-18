#version 460
#extension GL_NV_ray_tracing : enable
#extension GL_EXT_ray_query : enable
layout(binding = 0, set = 0) uniform accelerationStructureEXT acc0;

layout(shaderRecordNV) buffer block
{
	vec3 dir;
	vec3 origin;
};

void main()
{
    rayQueryEXT localRayQuery;
    uint rayFlags = gl_RayFlagsOpaqueEXT | gl_RayFlagsSkipClosestHitShaderEXT;
    float tMin = 0.f;
    float tMax = 1000.f;
    rayQueryInitializeEXT(localRayQuery, acc0, rayFlags, 0xFF , origin, tMin, dir, tMax);
    if (!rayQueryProceedEXT(localRayQuery))
    {
        rayQueryTerminateEXT(localRayQuery);
    }
}
