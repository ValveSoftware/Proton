#version 460
#extension GL_EXT_ray_tracing : enable
#extension GL_NV_ray_tracing_motion_blur : enable
layout(binding = 0, set = 0) uniform accelerationStructureEXT accEXT;
layout(location = 0) rayPayloadEXT vec4  localPayloadEXT;
void main()
{
	float time = gl_CurrentRayTimeNV + 0.5f;
	traceRayMotionNV(accEXT, 0u, 1u, 2u, 3u, 0u, vec3(0.5f), 0.5f, vec3(1.0f), 0.75f, 1.0f, 0);
}
