#include "unix_private.h"

#include <stdlib.h>

#define WINE_VK_HOST
#include <vulkan/vulkan.h>

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

extern PFN_vkGetPhysicalDeviceProperties p_vkGetPhysicalDeviceProperties;

static const w_VRTextureWithPose_t *get_texture_with_pose( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithPose_t *)w_texture;
}
static const w_VRTextureWithDepth_t *get_texture_with_depth( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithDepth_t *)w_texture;
}
static const w_VRTextureWithPoseAndDepth_t *get_texture_with_pose_and_depth( const w_Texture_t *w_texture )
{
    return (const w_VRTextureWithPoseAndDepth_t *)w_texture;
}

static w_VRVulkanTextureData_t *get_vulkan_texture_data( const w_Texture_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->handle;
}
static w_VRVulkanTextureArrayData_t *get_vulkan_texture_data_array( const w_Texture_t *w_texture )
{
    return (w_VRVulkanTextureArrayData_t *)w_texture->handle;
}
static w_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w_VRTextureWithDepth_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->depth.handle;
}
static w_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w_VRTextureWithPoseAndDepth_t *w_texture )
{
    return (w_VRVulkanTextureData_t *)w_texture->depth.handle;
}

#if defined(__x86_64__) || defined(__aarch64__)
static const w32_VRTextureWithPose_t *get_texture_with_pose( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithPose_t *)w_texture;
}
static const w32_VRTextureWithDepth_t *get_texture_with_depth( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithDepth_t *)w_texture;
}
static const w32_VRTextureWithPoseAndDepth_t *get_texture_with_pose_and_depth( const w32_Texture_t *w_texture )
{
    return (const w32_VRTextureWithPoseAndDepth_t *)w_texture;
}

static w32_VRVulkanTextureData_t *get_vulkan_texture_data( const w32_Texture_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->handle;
}
static w32_VRVulkanTextureArrayData_t *get_vulkan_texture_data_array( const w32_Texture_t *w_texture )
{
    return (w32_VRVulkanTextureArrayData_t *)(void *)w_texture->handle;
}
static w32_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w32_VRTextureWithDepth_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->depth.handle;
}
static w32_VRVulkanTextureData_t *get_vulkan_texture_depth_data( const w32_VRTextureWithPoseAndDepth_t *w_texture )
{
    return (w32_VRVulkanTextureData_t *)(void *)w_texture->depth.handle;
}
#endif /* defined(__x86_64__) || defined(__aarch64__) */

template< typename WVulkanTextureData >
static u_VRVulkanTextureData_t *unwrap_texture_vkdata( const WVulkanTextureData *w_vkdata, u_VRVulkanTextureData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

template< typename WVulkanTextureArrayData >
static u_VRVulkanTextureArrayData_t *unwrap_texture_vkdata_array( const WVulkanTextureArrayData *w_vkdata, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    if (!w_vkdata) return NULL;

    *u_vkdata = *w_vkdata;
    u_vkdata->m_pDevice = p_get_native_VkDevice( w_vkdata->m_pDevice );
    u_vkdata->m_pPhysicalDevice = p_get_native_VkPhysicalDevice( w_vkdata->m_pPhysicalDevice );
    u_vkdata->m_pInstance = p_get_native_VkInstance( w_vkdata->m_pInstance );
    u_vkdata->m_pQueue = p_get_native_VkQueue( w_vkdata->m_pQueue );

    return u_vkdata;
}

template< typename WTexture >
static void *unwrap_vulkan_texture_data( const WTexture *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    if (flags & Submit_VulkanTextureWithArrayData) return unwrap_texture_vkdata_array( get_vulkan_texture_data_array( w_texture ), u_vkdata );
    else return unwrap_texture_vkdata( get_vulkan_texture_data( w_texture ), (u_VRVulkanTextureData_t *)u_vkdata );
}

static int disable_depth_data(void)
{
    static int cached = -1;

    if (cached == -1)
    {
        const char *sgi = getenv( "SteamGameId" );

        cached = sgi && !strcmp( sgi, "275850" );
    }
    return cached;
}

template< typename WTexture >
static u_Texture_t *unwrap_submit_texture_data( const WTexture *w_texture, uint32_t flags, u_VRTextureWithPoseAndDepth_t *u_texture,
                                                u_VRVulkanTextureArrayData_t *u_vkdata, u_VRVulkanTextureData_t *u_depth_vkdata )
{
    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    default:
        *(u_Texture_t *)u_texture = *w_texture;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        break;
    case Submit_TextureWithPose:
    {
        auto u_texture_with_pose = (u_VRTextureWithPose_t *)u_texture;
        auto w_texture_with_pose = get_texture_with_pose( w_texture );
        *u_texture_with_pose = *w_texture_with_pose;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        break;
    }
    case Submit_TextureWithDepth:
    {
        auto u_texture_with_depth = (u_VRTextureWithDepth_t *)u_texture;
        auto w_texture_with_depth = get_texture_with_depth( w_texture );
        auto w_depth_data = get_vulkan_texture_depth_data( w_texture_with_depth );
        *u_texture_with_depth = *w_texture_with_depth;
        if (w_texture->eType == TextureType_Vulkan)
        {
            u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
            u_texture_with_depth->depth.handle = NULL;
            if (w_depth_data)
            {
                if (!disable_depth_data() && w_depth_data->m_nWidth && w_depth_data->m_nHeight && w_depth_data->m_nFormat
                    && w_depth_data->m_pDevice && w_depth_data->m_pPhysicalDevice && w_depth_data->m_pInstance && w_depth_data->m_pQueue)
                    u_texture_with_depth->depth.handle = unwrap_texture_vkdata( w_depth_data, u_depth_vkdata );
                else
                    WARN( "Invalid depth texture data.\n" );
            }
        }
        break;
    }
    case Submit_TextureWithPose | Submit_TextureWithDepth:
    {
        auto u_texture_with_pose_and_depth = (u_VRTextureWithPoseAndDepth_t *)u_texture;
        auto w_texture_with_pose_and_depth = get_texture_with_pose_and_depth( w_texture );
        auto w_depth_data = get_vulkan_texture_depth_data( w_texture_with_pose_and_depth );
        *u_texture_with_pose_and_depth = *w_texture_with_pose_and_depth;
        if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
        u_texture_with_pose_and_depth->depth.handle = unwrap_texture_vkdata( w_depth_data, u_depth_vkdata );
        break;
    }
    }

    return (u_Texture_t *)u_texture;
}

template< typename WTexture >
static void unwrap_texture( u_Texture_t *u_texture, const WTexture *w_texture, uint32_t flags, u_VRVulkanTextureArrayData_t *u_vkdata )
{
    *u_texture = *w_texture;
    if (w_texture->eType == TextureType_Vulkan) u_texture->handle = unwrap_vulkan_texture_data( w_texture, flags, u_vkdata );
}

#if defined(__x86_64__) || defined(__aarch64__)
static u_Texture_t *unwrap_submit_texture_data( const ptr32< const w32_Texture_t *> ptr, uint32_t flags, u_VRTextureWithPoseAndDepth_t *u_texture,
                                                u_VRVulkanTextureArrayData_t *u_vkdata, u_VRVulkanTextureData_t *u_depth_vkdata )
{
    const w32_Texture_t *w_texture = ptr;
    return unwrap_submit_texture_data( w_texture, flags, u_texture, u_vkdata, u_depth_vkdata );
}
#endif /* defined(__x86_64__) || defined(__aarch64__) */

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_GetVulkanDeviceExtensionsRequired( Iface *iface, Params *params, bool wow64 )
{
    const char vrext[] = "VK_WINE_openvr_device_extensions";
    VkPhysicalDevice_T *host_device = p_get_native_VkPhysicalDevice( params->pPhysicalDevice );
    VkPhysicalDeviceProperties prop;
    char buffer[2048], name[64];
    uint32_t i, len;

    len = iface->GetVulkanDeviceExtensionsRequired( host_device, buffer, sizeof(buffer) );
    if (!len || len > sizeof(buffer))
    {
        ERR( "len %u.\n", len );
        params->_ret = 0;
        return 0;
    }

    params->_ret = sizeof(vrext);
    if (params->pchValue && params->unBufferSize >= params->_ret)
        memcpy( params->pchValue, vrext, params->_ret );

    if (!load_vulkan())
    {
        ERR( "could not load Vulkan.\n" );
        return 0;
    }

    p_vkGetPhysicalDeviceProperties( host_device, &prop );
    sprintf( name, "VK_WINE_OPENVR_DEVICE_EXTS_PCIID_%04x_%04x", prop.vendorID, prop.deviceID );
    setenv( name, buffer, 1 );
    return 0;
}

template< typename Params >
static NTSTATUS IVRCompositor_SetSkyboxOverride( struct u_IVRCompositor_IVRCompositor_008 *iface, Params *params, bool wow64 )
{
    u_VRVulkanTextureArrayData_t d_front, d_back, d_left, d_right, d_top, d_bottom;
    u_Texture_t front, back, left, right, top, bottom;
    w_Texture_t w_front =  { .handle = params->pFront,  .eType = params->eTextureType };
    w_Texture_t w_back =   { .handle = params->pBack,   .eType = params->eTextureType };
    w_Texture_t w_left =   { .handle = params->pLeft,   .eType = params->eTextureType };
    w_Texture_t w_right =  { .handle = params->pRight,  .eType = params->eTextureType };
    w_Texture_t w_top =    { .handle = params->pTop,    .eType = params->eTextureType };
    w_Texture_t w_bottom = { .handle = params->pBottom, .eType = params->eTextureType };

    unwrap_texture( &front, &w_front, 0, &d_front );
    unwrap_texture( &back, &w_back, 0, &d_back );
    unwrap_texture( &left, &w_left, 0, &d_left );
    unwrap_texture( &right, &w_right, 0, &d_right );
    unwrap_texture( &top, &w_top, 0, &d_top );
    unwrap_texture( &bottom, &w_bottom, 0, &d_bottom );

    iface->SetSkyboxOverride( params->eTextureType, front.handle, back.handle, left.handle, right.handle,
                              top.handle, bottom.handle );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_SetSkyboxOverride( Iface *iface, Params *params, bool wow64 )
{
    u_VRVulkanTextureArrayData_t *vkdata = new u_VRVulkanTextureArrayData_t[params->unTextureCount];
    u_Texture_t *textures = new u_Texture_t[params->unTextureCount];
    uint32_t i;

    for (i = 0; i < params->unTextureCount; i++) unwrap_texture( textures + i, params->pTextures + i, 0, &vkdata[i] );
    params->_ret = (uint32_t)iface->SetSkyboxOverride( textures, params->unTextureCount );

    delete[] textures;
    delete[] vkdata;
    return 0;
}

static NTSTATUS IVRCompositor_Submit( struct u_IVRCompositor_IVRCompositor_008 *iface, struct IVRCompositor_IVRCompositor_008_Submit_params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    w_Texture_t texture =
    {
        .handle = params->pTexture,
        .eType = params->eTextureType,
    };
    u_Texture_t *submit = unwrap_submit_texture_data( &texture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit->eType, submit->handle, params->pBounds, params->nSubmitFlags );
    return 0;
}

static NTSTATUS IVRCompositor_Submit( struct u_IVRCompositor_IVRCompositor_008 *iface, struct wow64_IVRCompositor_IVRCompositor_008_Submit_params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    w32_Texture_t texture =
    {
        .handle = params->pTexture,
        .eType = params->eTextureType,
    };
    u_Texture_t *submit = unwrap_submit_texture_data( &texture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit->eType, submit->handle, params->pBounds, params->nSubmitFlags );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_Submit( Iface *iface, Params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->Submit( params->eEye, submit, params->pBounds, params->nSubmitFlags );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_SubmitWithArrayIndex( Iface *iface, Params *params, bool wow64 )
{
    u_VRTextureWithPoseAndDepth_t u_texture;
    u_VRVulkanTextureData_t u_depth_vkdata;
    u_VRVulkanTextureArrayData_t u_vkdata;
    u_Texture_t *submit = unwrap_submit_texture_data( params->pTexture, params->nSubmitFlags,
                                                      &u_texture, &u_vkdata, &u_depth_vkdata );
    params->_ret = (uint32_t)iface->SubmitWithArrayIndex( params->eEye, submit, params->unTextureArrayIndex, params->pBounds, params->nSubmitFlags );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRCompositor_GetSubmitTexture( Iface *iface, Params *params, bool wow64 )
{
    FIXME( "Not implemented.\n" );
    params->_ret = 1; /* VRCompositorError_RequestFailed */;
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRCompositor, 008, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 008, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 009, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 009, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 010, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 010, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 011, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 011, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 012, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 012, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 013, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 013, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 014, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 014, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 015, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 015, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 016, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 016, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 017, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 017, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 018, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 018, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 019, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 020, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 021, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 022, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 024, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 026, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 027, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 028, SubmitWithArrayIndex );
VRCLIENT_UNIX_IMPL( IVRCompositor, 029, GetVulkanDeviceExtensionsRequired );
VRCLIENT_UNIX_IMPL( IVRCompositor, 029, SetSkyboxOverride );
VRCLIENT_UNIX_IMPL( IVRCompositor, 029, Submit );
VRCLIENT_UNIX_IMPL( IVRCompositor, 029, SubmitWithArrayIndex );
VRCLIENT_UNIX_IMPL( IVRCompositor, 029, GetSubmitTexture );
