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

static u_Texture_t unwrap_texture_data( const w_Texture_t *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    u_Texture_t u_texture = *w_texture;

    if (w_texture->eType == TextureType_Vulkan)
        u_texture.handle = unwrap_texture_vkdata( (w_VRVulkanTextureData_t *)w_texture->handle, (u_VRVulkanTextureData_t *)u_vkdata );

    return u_texture;
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
