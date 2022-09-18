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

Ray makeRayDesc()
{
    Ray ray;
    ray.pos= vec3(0,0,0);
    ray.dir = vec3(1,0,0);
    ray.tmin = 0.0f;
    ray.tmax = 9999.0;
    return ray;
}

void main()
{
    Ray ray = makeRayDesc();
    rayQueryEXT rayQuery;
    rayQueryInitializeEXT(rayQuery, rtas, gl_RayFlagsNoneEXT, 0xFF, ray.pos, ray.tmin, ray.dir, ray.tmax);

    mat4x3 _mat4x3;
    mat3x4 _mat3x4;

    while (rayQueryProceedEXT(rayQuery) == 1)
    {
        int candidateType = rayQueryGetIntersectionTypeEXT(rayQuery, false);
        switch(candidateType)
        {
            case gl_RayQueryCandidateIntersectionTriangleEXT:

                rayQueryTerminateEXT(rayQuery);
                _mat4x3 = rayQueryGetIntersectionObjectToWorldEXT(rayQuery, false);
                _mat3x4 = transpose(_mat4x3);
                rayQueryConfirmIntersectionEXT(rayQuery);

                if (rayQueryGetIntersectionFrontFaceEXT(rayQuery, true) == 1)
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionBarycentricsEXT(rayQuery, true) == 0)
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionInstanceCustomIndexEXT(rayQuery, true))
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionInstanceIdEXT(rayQuery, true))
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionObjectRayDirectionEXT(rayQuery, true) > 0)
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionObjectRayOriginEXT(rayQuery, true) > 0)
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionPrimitiveIndexEXT(rayQuery, true))
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionTEXT(rayQuery, true))
                {
                    doSomething();
                }

                if (rayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetEXT(rayQuery, true))
                {
                    doSomething();
                }
                break;

            case gl_RayQueryCandidateIntersectionAABBEXT:
            {
                _mat4x3 = rayQueryGetIntersectionObjectToWorldEXT(rayQuery, false);
                _mat3x4 = transpose(_mat4x3);
                if (rayQueryGetIntersectionCandidateAABBOpaqueEXT(rayQuery))
                {
                    doSomething();
                }

                int t = 1;
                rayQueryGenerateIntersectionEXT(rayQuery, t);
                rayQueryTerminateEXT(rayQuery);
                break;
            }
        }
    }

    if(_mat3x4[0][0] == _mat4x3[0][0])
    {
        doSomething();
    }

    int committedStatus = rayQueryGetIntersectionTypeEXT(rayQuery, true);

    switch(committedStatus)
    {
        case gl_RayQueryCommittedIntersectionNoneEXT :
            _mat4x3 = rayQueryGetIntersectionWorldToObjectEXT(rayQuery, false);
            _mat3x4 = transpose(_mat4x3);
            break;

        case gl_RayQueryCommittedIntersectionTriangleEXT :
            _mat4x3 = rayQueryGetIntersectionWorldToObjectEXT(rayQuery, true);
            _mat3x4 = transpose(_mat4x3);

            if (rayQueryGetIntersectionFrontFaceEXT(rayQuery, true))
            {
                doSomething();
            }

            if (rayQueryGetIntersectionBarycentricsEXT(rayQuery, true) == 0)
            {
                doSomething();
            }
            break;

        case gl_RayQueryCommittedIntersectionGeneratedEXT :

            if(rayQueryGetIntersectionGeometryIndexEXT(rayQuery, true) > 0)
            {
                doSomething();
            }

            if(rayQueryGetIntersectionInstanceIdEXT(rayQuery, true))
            {
                doSomething();
            }

            if(rayQueryGetIntersectionInstanceCustomIndexEXT(rayQuery, true))
            {
                doSomething();
            }

            if(rayQueryGetIntersectionObjectRayDirectionEXT(rayQuery, true) > 0)
            {
                doSomething();
            }

            if(rayQueryGetIntersectionObjectRayOriginEXT(rayQuery, true) > 0)
            {
                doSomething();
            }

            if(rayQueryGetIntersectionPrimitiveIndexEXT(rayQuery, true))
            {
                doSomething();
            }

            if(rayQueryGetIntersectionTEXT(rayQuery, true))
            {
                doSomething();
            }
            break;
    }

    if (_mat3x4[0][0] == _mat4x3[0][0])
    {
        doSomething();
    }

    if (rayQueryGetRayFlagsEXT(rayQuery))
    {
        doSomething();
    }

    if (rayQueryGetRayTMinEXT(rayQuery))
    {
        doSomething();
    }

    vec3 o = rayQueryGetWorldRayOriginEXT(rayQuery);
    vec3 d = rayQueryGetWorldRayDirectionEXT(rayQuery);

    if (o.x == d.z)
    {
        doSomething();
    }
}
