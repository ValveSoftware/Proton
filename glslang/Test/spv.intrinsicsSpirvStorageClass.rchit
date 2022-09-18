#version 460

#extension GL_EXT_spirv_intrinsics: enable

#define rayPayloadEXT spirv_storage_class(extensions = ["SPV_KHR_ray_tracing"], capabilities = [5353], 5338)

layout(location = 1) rayPayloadEXT vec4 payload;

void main()
{
    payload = vec4(0.0, 1.0, 0.0, 1.0);
}
