#include "unix_private.h"

static u_VRVulkanTextureData_t *unwrap_texture_vkdata( const w_VRVulkanTextureData_t *w_vkdata, u_VRVulkanTextureData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

static u_VRVulkanTextureArrayData_t *unwrap_texture_vkdata_array( const w_VRVulkanTextureArrayData_t *w_vkdata, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

static u_VRTextureWithPoseAndDepth_t unwrap_texture_with_pose_and_depth( const w_VRTextureWithPoseAndDepth_t *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata,
                                                                         u_VRVulkanTextureData_t *u_depth_vkdata )
{
    u_VRTextureWithPoseAndDepth_t u_texture = *w_texture;

    if (w_texture->eType == TextureType_Vulkan)
    {
        if (flags & Submit_VulkanTextureWithArrayData) u_texture.handle = unwrap_texture_vkdata_array( (w_VRVulkanTextureArrayData_t *)w_texture->handle, u_vkdata );
        else u_texture.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->handle, (u_VRVulkanTextureData_t *)u_vkdata );
        u_texture.depth.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->depth.handle, u_depth_vkdata );
    }

    return u_texture;
}

static u_VRTextureWithDepth_t unwrap_texture_with_depth( const w_VRTextureWithDepth_t *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata,
                                                         u_VRVulkanTextureData_t *u_depth_vkdata )
{
    u_VRTextureWithDepth_t u_texture = *w_texture;

    if (w_texture->eType == TextureType_Vulkan)
    {
        if (flags & Submit_VulkanTextureWithArrayData) u_texture.handle = unwrap_texture_vkdata_array( (w_VRVulkanTextureArrayData_t *)w_texture->handle, u_vkdata );
        else u_texture.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->handle, (u_VRVulkanTextureData_t *)u_vkdata );
        /* We should maybe unwrap the vkdata but No Man Sky uses a garbage handle in its w_VRTextureDepthInfo_t, is this really used? */
        u_texture.depth.handle = w_texture->depth.handle;
    }

    return u_texture;
}

static u_VRTextureWithPose_t unwrap_texture_with_pose( const w_VRTextureWithPose_t *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    u_VRTextureWithPose_t u_texture = *w_texture;

    if (w_texture->eType == TextureType_Vulkan)
    {
        if (flags & Submit_VulkanTextureWithArrayData) u_texture.handle = unwrap_texture_vkdata_array( (w_VRVulkanTextureArrayData_t *)w_texture->handle, u_vkdata );
        else u_texture.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->handle, (u_VRVulkanTextureData_t *)u_vkdata );
    }

    return u_texture;
}

static u_Texture_t unwrap_texture_data( const w_Texture_t *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    u_Texture_t u_texture = *w_texture;

    if (w_texture->eType == TextureType_Vulkan)
    {
        if (flags & Submit_VulkanTextureWithArrayData) u_texture.handle = unwrap_texture_vkdata_array( (w_VRVulkanTextureArrayData_t *)w_texture->handle, u_vkdata );
        else u_texture.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->handle, (u_VRVulkanTextureData_t *)u_vkdata );
    }

    return u_texture;
}

static u_Texture_t *unwrap_submit_texture_data( const w_VRTextureWithPoseAndDepth_t *w_texture, uint32_t flags, u_VRTextureWithPoseAndDepth_t *u_texture,
                                                u_VRVulkanTextureArrayData_t *u_vkdata, u_VRVulkanTextureData_t *u_depth_vkdata )
{
    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    default:
        *(u_Texture_t *)u_texture = unwrap_texture_data( (const w_Texture_t *)w_texture, flags, u_vkdata );
        break;
    case Submit_TextureWithPose:
        *(u_VRTextureWithPose_t *)u_texture = unwrap_texture_with_pose( (const w_VRTextureWithPose_t *)w_texture, flags, u_vkdata );
        break;
    case Submit_TextureWithDepth:
        *(u_VRTextureWithDepth_t *)u_texture = unwrap_texture_with_depth( (const w_VRTextureWithDepth_t *)w_texture, flags, u_vkdata, u_depth_vkdata );
        break;
    case Submit_TextureWithPose | Submit_TextureWithDepth:
        *u_texture = unwrap_texture_with_pose_and_depth( w_texture, flags, u_vkdata, u_depth_vkdata );
        break;
    }

    return (u_Texture_t *)u_texture;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_020 *iface = (struct u_IVRCompositor_IVRCompositor_020 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_024 *iface = (struct u_IVRCompositor_IVRCompositor_024 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_026 *iface = (struct u_IVRCompositor_IVRCompositor_026 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    params->_ret = (uint32_t)iface->GetVulkanDeviceExtensionsRequired( host_device, params->pchValue, params->unBufferSize );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_009_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_009_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_009_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_009 *iface = (struct u_IVRCompositor_IVRCompositor_009 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_010_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_010_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_010_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_011_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_011_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_011_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_013_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_013_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_014_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_014_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_015_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_015_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_016_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_016_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_016_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_016 *iface = (struct u_IVRCompositor_IVRCompositor_016 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_017_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_017_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_018_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_018_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_018_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_019_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_019_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_020_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_020_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_020_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_020 *iface = (struct u_IVRCompositor_IVRCompositor_020 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_021_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_021_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_021_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_022_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_022_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_024_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_024_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_024_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_024 *iface = (struct u_IVRCompositor_IVRCompositor_024 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_026_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_026_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_026_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_026 *iface = (struct u_IVRCompositor_IVRCompositor_026 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_027_SetSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_027_SetSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_027_SetSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    u_VRVulkanTextureArrayData_t vkdata[params->unTextureCount];
    u_Texture_t textures[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) textures[i] = unwrap_texture_data( params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_009_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_009_Submit_params *params = (struct IVRCompositor_IVRCompositor_009_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_009 *iface = (struct u_IVRCompositor_IVRCompositor_009 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_010_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_010_Submit_params *params = (struct IVRCompositor_IVRCompositor_010_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_010 *iface = (struct u_IVRCompositor_IVRCompositor_010 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_011_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_011_Submit_params *params = (struct IVRCompositor_IVRCompositor_011_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_011 *iface = (struct u_IVRCompositor_IVRCompositor_011 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_012_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_012_Submit_params *params = (struct IVRCompositor_IVRCompositor_012_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_012 *iface = (struct u_IVRCompositor_IVRCompositor_012 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_013_Submit_params *params = (struct IVRCompositor_IVRCompositor_013_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_014_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_014_Submit_params *params = (struct IVRCompositor_IVRCompositor_014_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_014 *iface = (struct u_IVRCompositor_IVRCompositor_014 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_015_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_015_Submit_params *params = (struct IVRCompositor_IVRCompositor_015_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_015 *iface = (struct u_IVRCompositor_IVRCompositor_015 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_016_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_016_Submit_params *params = (struct IVRCompositor_IVRCompositor_016_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_016 *iface = (struct u_IVRCompositor_IVRCompositor_016 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_017_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_017_Submit_params *params = (struct IVRCompositor_IVRCompositor_017_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_017 *iface = (struct u_IVRCompositor_IVRCompositor_017 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_018_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_018_Submit_params *params = (struct IVRCompositor_IVRCompositor_018_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_018 *iface = (struct u_IVRCompositor_IVRCompositor_018 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_019_Submit_params *params = (struct IVRCompositor_IVRCompositor_019_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_020_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_020_Submit_params *params = (struct IVRCompositor_IVRCompositor_020_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_020 *iface = (struct u_IVRCompositor_IVRCompositor_020 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_021_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_021_Submit_params *params = (struct IVRCompositor_IVRCompositor_021_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_021 *iface = (struct u_IVRCompositor_IVRCompositor_021 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_022_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_022_Submit_params *params = (struct IVRCompositor_IVRCompositor_022_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_022 *iface = (struct u_IVRCompositor_IVRCompositor_022 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_024_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_024_Submit_params *params = (struct IVRCompositor_IVRCompositor_024_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_024 *iface = (struct u_IVRCompositor_IVRCompositor_024 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_026_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_026_Submit_params *params = (struct IVRCompositor_IVRCompositor_026_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_026 *iface = (struct u_IVRCompositor_IVRCompositor_026 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_027_Submit( void *args )
{
    struct IVRCompositor_IVRCompositor_027_Submit_params *params = (struct IVRCompositor_IVRCompositor_027_Submit_params *)args;
    struct u_IVRCompositor_IVRCompositor_027 *iface = (struct u_IVRCompositor_IVRCompositor_027 *)params->linux_side;
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( (const w_VRTextureWithPoseAndDepth_t *)params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}
