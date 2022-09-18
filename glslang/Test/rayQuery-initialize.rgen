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

layout(binding = 0, set = 0) uniform accelerationStructureEXT rtas;
layout(std430, set = 0, binding = 2) buffer Rays { Ray rays[]; };

uint launchIndex()
{
    return gl_LaunchIDNV.z*gl_LaunchSizeNV.x*gl_LaunchSizeNV.y + gl_LaunchIDNV.y*gl_LaunchSizeNV.x + gl_LaunchIDNV.x;
}

void doInitialize(rayQueryEXT rayQuery, Ray ray)
{
    rayQueryInitializeEXT(rayQuery, rtas, gl_RayFlagsNoneEXT, gl_RayFlagsCullBackFacingTrianglesEXT, ray.pos, ray.tmin, ray.dir, ray.tmax);
}

void main()
{
    uint index = launchIndex();
    Ray ray = rays[index];
    rayQueryEXT rayQuery;
    doInitialize(rayQuery, ray);
    rayQueryInitializeEXT(rayQuery, rtas, gl_RayFlagsOpaqueEXT, gl_RayFlagsCullFrontFacingTrianglesEXT, ray.pos, ray.tmin, ray.dir, ray.tmax);
}
