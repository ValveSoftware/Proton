#version 460
#extension GL_NV_ray_tracing : enable
#extension GL_EXT_ray_query : enable

struct Ray
{
    vec3 pos;
    float tmin;
    vec3 dir;
    float tmax;
};

layout(std430, set = 0, binding = 0) buffer Log
{
    uint x;
    uint y;
};

layout(binding = 1, set = 0) uniform accelerationStructureEXT rtas;
layout(std430, set = 0, binding = 2) buffer Rays { Ray rays[]; };

void doSomething()
{
    x = 0;
    y = 0;
}

uint launchIndex()
{
    return gl_LaunchIDNV.z*gl_LaunchSizeNV.x*gl_LaunchSizeNV.y + gl_LaunchIDNV.y*gl_LaunchSizeNV.x + gl_LaunchIDNV.x;
}

void main()
{
    uint index = launchIndex();
    Ray ray = rays[index];
    rayQueryEXT rayQuery;

    bool committed_true = true;
    bool committed_false = false;

    rayQueryInitializeEXT(rayQuery, rtas, gl_RayFlagsOpaqueEXT, gl_RayFlagsCullBackFacingTrianglesEXT, ray.pos, ray.tmin, ray.dir, ray.tmax);
    while (rayQueryProceedEXT(rayQuery))
    {
        mat4x3 mat_o2w;
        mat4x3 mat_w2o;

        uint candidateType = rayQueryGetIntersectionTypeEXT(rayQuery, committed_false);
        if (candidateType == gl_RayQueryCandidateIntersectionTriangleEXT)
        {
            rayQueryTerminateEXT(rayQuery);

            mat_o2w = rayQueryGetIntersectionObjectToWorldEXT(rayQuery, committed_false);
            mat_w2o = rayQueryGetIntersectionWorldToObjectEXT(rayQuery, committed_false);

            rayQueryConfirmIntersectionEXT(rayQuery);

            if (rayQueryGetIntersectionFrontFaceEXT(rayQuery, committed_true))
            {
                doSomething();
            }
            if (rayQueryGetIntersectionBarycentricsEXT(rayQuery, committed_true).x == 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionInstanceCustomIndexEXT(rayQuery, committed_true) > 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionInstanceIdEXT(rayQuery, committed_true) > 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionObjectRayDirectionEXT(rayQuery, committed_true).x > 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionObjectRayOriginEXT(rayQuery, committed_true).x > 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionPrimitiveIndexEXT(rayQuery, committed_true) > 0)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionTEXT(rayQuery, committed_true) > 0.f)
            {
                doSomething();
            }
            if (rayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetEXT(rayQuery, committed_true) > 0)
            {
                doSomething();
            }
        }
    }

    uint committedStatus = rayQueryGetIntersectionTypeEXT(rayQuery, committed_true);
    if (committedStatus == gl_RayQueryCommittedIntersectionGeneratedEXT)
    {
        if (rayQueryGetIntersectionGeometryIndexEXT(rayQuery, committed_true) > 0)
        {
            doSomething();
        }
    }
}
