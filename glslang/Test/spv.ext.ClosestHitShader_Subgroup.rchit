#version 460
#pragma use_vulkan_memory_model
#extension GL_EXT_ray_tracing : enable
#extension GL_NV_shader_sm_builtins : enable
#extension GL_KHR_shader_subgroup_ballot : enable
#extension GL_ARB_shader_ballot : enable
#extension GL_NV_shader_sm_builtins : enable
layout(binding = 0, set = 0) uniform accelerationStructureEXT accEXT;
layout(location = 1) rayPayloadInEXT vec4 incomingPayload;
void main()
{
	traceRayEXT(accEXT, 0u, 1u, 2u, 3u, 0u, vec3(0.5f), 0.5f, vec3(1.0f), 0.75f, 1);
        incomingPayload.x = float(gl_SubgroupInvocationID) + float(gl_SubGroupGeMaskARB) +
			    float(gl_SubgroupGtMask) + float(gl_SubgroupLeMask) + 
                            float(gl_SubGroupLtMaskARB) + float(gl_SMIDNV);
}
