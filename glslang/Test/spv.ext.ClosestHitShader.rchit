#version 460
#extension GL_EXT_ray_tracing : enable
#extension GL_EXT_ray_cull_mask : enable

layout(binding = 0, set = 0) uniform accelerationStructureEXT accEXT;
layout(location = 0) rayPayloadEXT vec4 localPayload;
layout(location = 1) rayPayloadInEXT vec4 incomingPayload;
void main()
{
	uvec3 v0 = gl_LaunchIDEXT;
	uvec3 v1 = gl_LaunchSizeEXT;
	int v2 = gl_PrimitiveID;
	int v3 = gl_InstanceID;
	int v4 = gl_InstanceCustomIndexEXT;
	vec3 v5 = gl_WorldRayOriginEXT;
	vec3 v6 = gl_WorldRayDirectionEXT;
	vec3 v7 = gl_ObjectRayOriginEXT;
	vec3 v8 = gl_ObjectRayDirectionEXT;
	float v9 = gl_RayTminEXT;
	float v10 = gl_RayTmaxEXT;
	float v11 = gl_HitTEXT;
	uint v12 = gl_HitKindEXT;
	mat4x3 v13 = gl_ObjectToWorldEXT;
	mat4x3 v14 = gl_WorldToObjectEXT;
    int v15 = gl_GeometryIndexEXT;
    mat3x4 v16 = gl_ObjectToWorld3x4EXT;
    mat3x4 v17 = gl_WorldToObject3x4EXT;
	uint v18 = gl_CullMaskEXT;
	traceRayEXT(accEXT, 0u, 1u, 2u, 3u, 0u, vec3(0.5f), 0.5f, vec3(1.0f), 0.75f, 1);
}
