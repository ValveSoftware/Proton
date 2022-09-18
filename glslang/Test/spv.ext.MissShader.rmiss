#version 460
#extension GL_EXT_ray_tracing : enable
#extension GL_NV_shader_sm_builtins : enable
#extension GL_KHR_shader_subgroup_ballot : enable
#extension GL_ARB_shader_ballot : enable
#extension GL_NV_shader_sm_builtins : enable
#extension GL_ARB_sparse_texture_clamp: enable
#extension GL_EXT_ray_cull_mask : enable

layout(binding = 0, set = 0) uniform accelerationStructureEXT accEXT;
layout(location = 0) rayPayloadEXT vec4 localPayload;
layout(location = 1) rayPayloadInEXT vec4 incomingPayload;

layout(binding = 1, set = 0) uniform sampler2D    s2D;
layout(location = 2) in vec2 c2;
layout(location = 3) in float lodClamp;

void main()
{
	uvec3 v0 = gl_LaunchIDEXT;
	uvec3 v1 = gl_LaunchSizeEXT;
	vec3 v2 = gl_WorldRayOriginEXT;
	vec3 v3 = gl_WorldRayDirectionEXT;
	float v4 = gl_RayTminEXT;
	float v5 = gl_RayTmaxEXT;
	uint v6 = gl_CullMaskEXT;
	traceRayEXT(accEXT, 0u, 1u, 2u, 3u, 0u, vec3(0.5f), 0.5f, vec3(1.0f), 0.75f, 1);
    incomingPayload.x = float(gl_SubGroupSizeARB) + float(gl_SubgroupEqMask) + float(gl_WarpIDNV);
        vec4 texel = textureGradOffsetClampARB(s2D, c2, c2, c2, ivec2(5), lodClamp);
}
