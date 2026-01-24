#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static w_VRVulkanTextureData_t *get_vulkan_texture_data( const w_Texture_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->handle;
}
#if defined(__x86_64__) || defined(__aarch64__)
static w32_VRVulkanTextureData_t *get_vulkan_texture_data( const w32_Texture_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->handle;
}
#endif /* defined(__x86_64__) || defined(__aarch64__) */

template< typename WTexture >
static u_Texture_t unwrap_texture_data( const WTexture *w_texture, u_VRVulkanTextureData_t *u_vkdata )
{
    u_Texture_t u_texture = *w_texture;

    if (u_texture.eType == TextureType_Vulkan)
    {
        auto *w_vkdata = get_vulkan_texture_data( w_texture );

        *u_vkdata = *w_vkdata;
        u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
        u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
        u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
        u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

        u_texture.handle = u_vkdata;
    }

    return u_texture;
}

static u_Texture_t unwrap_texture_data( ptr32<const w32_Texture_t *>ptr, u_VRVulkanTextureData_t *u_vkdata )
{
    const w32_Texture_t *w_texture = ptr;
    return unwrap_texture_data( w_texture, u_vkdata );
}

template< typename Params >
static NTSTATUS IVROverlay_SetOverlayTexture( u_IVROverlay_IVROverlay_001 *iface, Params *params, bool wow64 )
{
    FIXME("unimplemented!\n");
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVROverlay_SetOverlayTexture( Iface *iface, Params *params, bool wow64, bool unimpl )
{
    FIXME("unimplemented!\n");
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
    return 0;
}

static NTSTATUS IVROverlay_SetOverlayTexture( u_IVROverlay_IVROverlay_006 *iface, IVROverlay_IVROverlay_006_SetOverlayTexture_params *params, bool wow64 )
{
    w_Texture_t texture =
    {
        .handle = params->pTexture,
        .eType = params->eTextureType,
    };
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( &texture, &u_vkdata );
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, host_texture.eType, host_texture.handle );
    return 0;
}

static NTSTATUS IVROverlay_SetOverlayTexture( u_IVROverlay_IVROverlay_006 *iface, wow64_IVROverlay_IVROverlay_006_SetOverlayTexture_params *params, bool wow64 )
{
    w32_Texture_t texture =
    {
        .handle = params->pTexture,
        .eType = params->eTextureType,
    };

    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( &texture, &u_vkdata );
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, host_texture.eType, host_texture.handle );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVROverlay_SetOverlayTexture( Iface *iface, Params *params, bool wow64 )
{
    u_VRVulkanTextureData_t u_vkdata;
    u_Texture_t host_texture = unwrap_texture_data( params->pTexture, &u_vkdata );

    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, &host_texture );
    return 0;
}

VRCLIENT_UNIX_IMPL( IVROverlay, 001, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 002, SetOverlayTexture, false );
VRCLIENT_UNIX_IMPL( IVROverlay, 003, SetOverlayTexture, false );
VRCLIENT_UNIX_IMPL( IVROverlay, 004, SetOverlayTexture, false );
VRCLIENT_UNIX_IMPL( IVROverlay, 005, SetOverlayTexture, false );
VRCLIENT_UNIX_IMPL( IVROverlay, 006, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 007, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 008, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 010, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 011, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 012, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 013, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 014, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 016, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 017, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 018, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 019, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 020, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 021, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 022, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 024, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 025, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 026, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 027, SetOverlayTexture );
VRCLIENT_UNIX_IMPL( IVROverlay, 028, SetOverlayTexture );
