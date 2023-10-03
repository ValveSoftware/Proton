#include "unix_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static u_Texture_t unwrap_texture_data( const w_Texture_t *w_texture, u_VRVulkanTextureData_t *u_vkdata )
{
    u_Texture_t u_texture = *w_texture;

    if (u_texture.eType == TextureType_Vulkan)
    {
        w_VRVulkanTextureData_t *w_vkdata = (w_VRVulkanTextureData_t *)w_texture->handle;

        *u_vkdata = *w_vkdata;
        u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
        u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
        u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
        u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

        u_texture.handle = u_vkdata;
    }

    return u_texture;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;

    FIXME("unimplemented!\n");

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_002_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_002_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_002_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;

    FIXME("unimplemented!\n");

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_003_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_003_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_003_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_003 *iface = (struct u_IVROverlay_IVROverlay_003 *)params->linux_side;

    FIXME("unimplemented!\n");

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_004_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_004_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_004_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_004 *iface = (struct u_IVROverlay_IVROverlay_004 *)params->linux_side;

    FIXME("unimplemented!\n");

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_005_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_005_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_005_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;

    FIXME("unimplemented!\n");

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_007_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_007_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_007_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_007 *iface = (struct u_IVROverlay_IVROverlay_007 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_008_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_008_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_008_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_008 *iface = (struct u_IVROverlay_IVROverlay_008 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_010_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_010_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_010_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_010 *iface = (struct u_IVROverlay_IVROverlay_010 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_011_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_011_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_011_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_012_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_012_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_012_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_012 *iface = (struct u_IVROverlay_IVROverlay_012 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_013_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_013_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_013_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_014_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_014_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_014_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_014 *iface = (struct u_IVROverlay_IVROverlay_014 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_016_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_016_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_016_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_016 *iface = (struct u_IVROverlay_IVROverlay_016 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_017_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_017_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_017_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_017 *iface = (struct u_IVROverlay_IVROverlay_017 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_018_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_018_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_018_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_018 *iface = (struct u_IVROverlay_IVROverlay_018 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_019_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_019_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_019_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_019 *iface = (struct u_IVROverlay_IVROverlay_019 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_020_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_020_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_020_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_020 *iface = (struct u_IVROverlay_IVROverlay_020 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_021_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_021_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_021_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_021 *iface = (struct u_IVROverlay_IVROverlay_021 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_022_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_022_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_022_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_022 *iface = (struct u_IVROverlay_IVROverlay_022 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_024_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_024_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_024_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_024 *iface = (struct u_IVROverlay_IVROverlay_024 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_025_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_025_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_025_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_025 *iface = (struct u_IVROverlay_IVROverlay_025 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_026_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_026_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_026_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_026 *iface = (struct u_IVROverlay_IVROverlay_026 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_027_SetOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_027_SetOverlayTexture_params *params = (struct IVROverlay_IVROverlay_027_SetOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_027 *iface = (struct u_IVROverlay_IVROverlay_027 *)params->linux_side;
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}
