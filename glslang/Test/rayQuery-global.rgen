#version 460
#extension GL_EXT_ray_query : enable
#extension GL_EXT_ray_flags_primitive_culling : enable

layout(binding = 1, set = 0) uniform accelerationStructureEXT rtas;

rayQueryEXT rqGlobal;

void otherWrapper(rayQueryEXT rq) {
    rayQueryProceedEXT(rq);
    rayQueryProceedEXT(rqGlobal);
}

void wrapper(rayQueryEXT rq) {
    rayQueryEXT rq2;
    rayQueryProceedEXT(rq);
    rayQueryProceedEXT(rqGlobal);
    otherWrapper(rq);
    otherWrapper(rq2);
    otherWrapper(rqGlobal);
}

void main() {
    rayQueryInitializeEXT(rqGlobal, rtas, gl_RayFlagsNoneEXT, 0xFF, vec3(0,0,0), 0.0, vec3(1,0,0), 1.0);
    wrapper(rqGlobal);
    otherWrapper(rqGlobal);
    rayQueryEXT rq2;
    rayQueryInitializeEXT(rq2, rtas, gl_RayFlagsNoneEXT, 0xFF, vec3(0,0,0), 0.0, vec3(1,0,0), 1.0);
    wrapper(rq2);
    otherWrapper(rq2);
}
