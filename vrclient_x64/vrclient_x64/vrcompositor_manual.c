#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "dxvk-interop.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"
#include "cppIVRCompositor_IVRCompositor_005.h"
#include "cppIVRCompositor_IVRCompositor_006.h"
#include "cppIVRCompositor_IVRCompositor_007.h"
#include "cppIVRCompositor_IVRCompositor_008.h"
#include "cppIVRCompositor_IVRCompositor_009.h"
#include "cppIVRCompositor_IVRCompositor_010.h"
#include "cppIVRCompositor_IVRCompositor_011.h"
#include "cppIVRCompositor_IVRCompositor_012.h"
#include "cppIVRCompositor_IVRCompositor_013.h"
#include "cppIVRCompositor_IVRCompositor_014.h"
#include "cppIVRCompositor_IVRCompositor_015.h"
#include "cppIVRCompositor_IVRCompositor_016.h"
#include "cppIVRCompositor_IVRCompositor_017.h"
#include "cppIVRCompositor_IVRCompositor_018.h"
#include "cppIVRCompositor_IVRCompositor_019.h"
#include "cppIVRCompositor_IVRCompositor_020.h"
#include "cppIVRCompositor_IVRCompositor_021.h"
#include "cppIVRCompositor_IVRCompositor_022.h"
#include "cppIVRCompositor_IVRCompositor_024.h"
#include "cppIVRCompositor_IVRCompositor_026.h"
#include "cppIVRCompositor_IVRCompositor_027.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

struct submit_state
{
    void *submit;
    struct Texture_t texture;
    struct VRVulkanTextureArrayData_t vkdata;
    union
    {
        struct
        {
            struct VRVulkanTextureData_t depth_vkdata;
            VRTextureWithPoseAndDepth_t both;
            VRTextureWithDepth_t depth;
            VRTextureWithPose_t pose;
        };
        struct
        {
            VkImageLayout image_layout;
            VkImageSubresourceRange subresources;
            IDXGIVkInteropSurface *dxvk_surface;
            IDXGIVkInteropDevice *dxvk_device;
        };
    };
};

static void load_compositor_texture_dxvk( EVREye eye, const Texture_t *texture, EVRSubmitFlags *flags,
                                          struct submit_state *state )
{
    static const EVRSubmitFlags supported_flags = Submit_LensDistortionAlreadyApplied | Submit_FrameDiscontinuty;
    VkImageCreateInfo image_info;
    IUnknown *texture_iface;

    TRACE( "texture = %p\n", texture );

    if (!(texture_iface = texture->handle))
    {
        WARN( "No D3D11 texture %p.\n", texture );
        return;
    }

    if (FAILED(texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                      (void **)&state->dxvk_surface )))
    {
        WARN( "Invalid D3D11 texture %p.\n", texture );
        return;
    }

    state->texture = vrclient_translate_texture_dxvk( texture, &state->vkdata.t, state->dxvk_surface, &state->dxvk_device,
                                                      &state->image_layout, &image_info );

    compositor_data.dxvk_device = state->dxvk_device;

    if (*flags & ~supported_flags) FIXME( "Unhandled flags %#x.\n", *flags );

    if (image_info.arrayLayers > 1)
    {
        state->vkdata.m_unArrayIndex = eye;
        state->vkdata.m_unArraySize = image_info.arrayLayers;
        *flags = *flags | Submit_VulkanTextureWithArrayData;
    }

    state->subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    state->subresources.baseMipLevel = 0;
    state->subresources.levelCount = image_info.mipLevels;
    state->subresources.baseArrayLayer = 0;
    state->subresources.layerCount = image_info.arrayLayers;

    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         state->image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );
    state->dxvk_device->lpVtbl->FlushRenderingCommands( state->dxvk_device );
    state->dxvk_device->lpVtbl->LockSubmissionQueue( state->dxvk_device );
}

static void free_compositor_texture_dxvk( struct submit_state *state )
{
    if (!state->dxvk_device) return;

    state->dxvk_device->lpVtbl->ReleaseSubmissionQueue( state->dxvk_device );
    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout );
    state->dxvk_device->lpVtbl->Release( state->dxvk_device );
    state->dxvk_surface->lpVtbl->Release( state->dxvk_surface );
}

static void load_compositor_texture_vulkan( EVREye eye, const Texture_t *texture, EVRSubmitFlags flags,
                                            struct submit_state *state )
{
    struct VRVulkanTextureData_t *their_vkdata;

    their_vkdata = texture->handle;

    memcpy( &state->vkdata, their_vkdata, flags & Submit_VulkanTextureWithArrayData ? sizeof(struct VRVulkanTextureArrayData_t)
                                                                                    : sizeof(struct VRVulkanTextureData_t) );

    state->vkdata.t.m_pDevice = get_native_VkDevice( state->vkdata.t.m_pDevice );
    state->vkdata.t.m_pPhysicalDevice = get_native_VkPhysicalDevice( state->vkdata.t.m_pPhysicalDevice );
    state->vkdata.t.m_pInstance = get_native_VkInstance( state->vkdata.t.m_pInstance );
    state->vkdata.t.m_pQueue = get_native_VkQueue( state->vkdata.t.m_pQueue );

    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    case 0:
        state->texture = *texture;
        state->texture.handle = &state->vkdata;
        break;

    case Submit_TextureWithPose:
        state->pose = *(VRTextureWithPose_t *)texture;
        state->pose.texture.handle = &state->vkdata;
        state->submit = &state->pose;
        break;

    case Submit_TextureWithDepth:
        state->depth = *(VRTextureWithDepth_t *)texture;
        state->depth.texture.handle = &state->vkdata;
        state->submit = &state->depth;
        break;

    case Submit_TextureWithPose | Submit_TextureWithDepth:
        state->both = *(VRTextureWithPoseAndDepth_t *)texture;
        state->both.texture.handle = &state->vkdata;

        their_vkdata = state->both.depth.handle;
        state->depth_vkdata = *their_vkdata;
        state->depth_vkdata.m_pDevice = get_native_VkDevice( state->depth_vkdata.m_pDevice );
        state->depth_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice( state->depth_vkdata.m_pPhysicalDevice );
        state->depth_vkdata.m_pInstance = get_native_VkInstance( state->depth_vkdata.m_pInstance );
        state->depth_vkdata.m_pQueue = get_native_VkQueue( state->depth_vkdata.m_pQueue );
        state->both.depth.handle = &state->depth_vkdata;

        state->submit = &state->both;
        break;
    }
}

struct set_skybox_override_state
{
    Texture_t textures[6];
    struct VRVulkanTextureData_t vkdata[6];
};

static const Texture_t *set_skybox_override_d3d11_init( const Texture_t *textures, uint32_t count, struct set_skybox_override_state *state )
{
    IDXGIVkInteropSurface *dxvk_surface;
    unsigned int i;

    for (i = 0; i < count; ++i)
    {
        const Texture_t *texture = &textures[i];
        VkImageSubresourceRange subresources;
        IDXGIVkInteropDevice *dxvk_device;
        VkImageCreateInfo image_info;
        VkImageLayout image_layout;
        IUnknown *texture_iface;

        if (!texture->handle)
        {
            ERR( "No D3D11 texture %p.\n", texture );
            return textures;
        }
        if (textures[i].eType != TextureType_DirectX)
        {
            FIXME( "Mixing texture types is not supported.\n" );
            return textures;
        }

        texture_iface = texture->handle;

        if (FAILED(texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                          (void **)&dxvk_surface )))
        {
            FIXME( "Unsupported d3d11 texture %p, i %u.\n", texture, i );
            return textures;
        }

        state->textures[i] = vrclient_translate_texture_dxvk( texture, &state->vkdata[i], dxvk_surface,
                                                              &dxvk_device, &image_layout, &image_info );

        if (compositor_data.dxvk_device && dxvk_device != compositor_data.dxvk_device)
        {
            ERR( "Invalid dxvk_device %p, previous %p.\n", dxvk_device, compositor_data.dxvk_device );
            dxvk_surface->lpVtbl->Release( dxvk_surface );
            dxvk_device->lpVtbl->Release( dxvk_device );
            return textures;
        }

        compositor_data.dxvk_device = dxvk_device;

        subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        subresources.baseMipLevel = 0;
        subresources.levelCount = image_info.mipLevels;
        subresources.baseArrayLayer = 0;
        subresources.layerCount = image_info.arrayLayers;

        dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, &subresources, image_layout,
                                                      VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );

        dxvk_surface->lpVtbl->Release( dxvk_surface );
        dxvk_device->lpVtbl->Release( dxvk_device );
    }

    compositor_data.dxvk_device->lpVtbl->FlushRenderingCommands( compositor_data.dxvk_device );
    compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );

    return state->textures;
}

static const Texture_t *set_skybox_override_init( const Texture_t *textures, uint32_t count, struct set_skybox_override_state *state )
{
    if (!count || count > 6)
    {
        WARN( "Invalid texture count %u.\n", count );
        return textures;
    }

    if (textures[0].eType == TextureType_DirectX)
        return set_skybox_override_d3d11_init( textures, count, state );

    FIXME( "Conversion for type %u is not supported.\n", textures[0].eType );
    return textures;
}

static void set_skybox_override_done( const Texture_t *textures, uint32_t count )
{
    if (!count || count > 6) return;
    while (count--) if (!textures[count].handle || textures[count].eType != TextureType_DirectX) return;
    compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
}

static void post_present_handoff_init( void *linux_side, unsigned int version )
{
    if (!compositor_data.dxvk_device) return;
    compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );
}

static void post_present_handoff_done(void)
{
    compositor_data.handoff_called = TRUE;
    if (!compositor_data.dxvk_device) return;
    compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
}

static void wait_get_poses_init( void *linux_side )
{
    if (!compositor_data.dxvk_device) return;
    compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );
}

static void wait_get_poses_done( void *linux_side )
{
    if (!compositor_data.dxvk_device) return;
    compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_009_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_009_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_009_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 9 );
    cppIVRCompositor_IVRCompositor_009_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_010_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_010_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_010_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 10 );
    cppIVRCompositor_IVRCompositor_010_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_011_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_011_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_011_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 11 );
    cppIVRCompositor_IVRCompositor_011_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_012_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_012_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_012_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 12 );
    cppIVRCompositor_IVRCompositor_012_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_013_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_013_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_013_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 13 );
    cppIVRCompositor_IVRCompositor_013_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_014_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_014_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_014_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 14 );
    cppIVRCompositor_IVRCompositor_014_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_015_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_015_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_015_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 15 );
    cppIVRCompositor_IVRCompositor_015_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_016_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    cppIVRCompositor_IVRCompositor_016_WaitGetPoses( &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_016_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_016_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_016_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 16 );
    cppIVRCompositor_IVRCompositor_016_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_017_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    cppIVRCompositor_IVRCompositor_017_WaitGetPoses( &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_017_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_017_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_017_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 17 );
    cppIVRCompositor_IVRCompositor_017_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_018_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    cppIVRCompositor_IVRCompositor_018_WaitGetPoses( &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_018_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_018_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_018_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 18 );
    cppIVRCompositor_IVRCompositor_018_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_019_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    cppIVRCompositor_IVRCompositor_019_WaitGetPoses( &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_019_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_019_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_019_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 19 );
    cppIVRCompositor_IVRCompositor_019_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_020_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    cppIVRCompositor_IVRCompositor_020_WaitGetPoses( &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_020_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_020_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_020_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 20 );
    cppIVRCompositor_IVRCompositor_020_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_021_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct cppIVRCompositor_IVRCompositor_021_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        cppIVRCompositor_IVRCompositor_021_PostPresentHandoff( &params );
    }

    cppIVRCompositor_IVRCompositor_021_WaitGetPoses( &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params params = {.linux_side = _this->u_iface};
        cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData( &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_021_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_021_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_021_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 21 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params params =
        {
            .linux_side = _this->u_iface,
            .bExplicitTimingMode = TRUE,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode( &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
    }

    cppIVRCompositor_IVRCompositor_021_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_022_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct cppIVRCompositor_IVRCompositor_022_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        cppIVRCompositor_IVRCompositor_022_PostPresentHandoff( &params );
    }

    cppIVRCompositor_IVRCompositor_022_WaitGetPoses( &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params params = {.linux_side = _this->u_iface};
        cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData( &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_022_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_022_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_022_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 22 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params params =
        {
            .linux_side = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode( &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
    }

    cppIVRCompositor_IVRCompositor_022_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_024_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct cppIVRCompositor_IVRCompositor_024_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        cppIVRCompositor_IVRCompositor_024_PostPresentHandoff( &params );
    }

    cppIVRCompositor_IVRCompositor_024_WaitGetPoses( &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params params = {.linux_side = _this->u_iface};
        cppIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData( &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_024_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_024_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_024_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 24 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params params =
        {
            .linux_side = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        cppIVRCompositor_IVRCompositor_024_SetExplicitTimingMode( &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
    }

    cppIVRCompositor_IVRCompositor_024_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct cppIVRCompositor_IVRCompositor_026_WaitGetPoses_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct cppIVRCompositor_IVRCompositor_026_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        cppIVRCompositor_IVRCompositor_026_PostPresentHandoff( &params );
    }

    cppIVRCompositor_IVRCompositor_026_WaitGetPoses( &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params params = {.linux_side = _this->u_iface};
        cppIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData( &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_026_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_026_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_026_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 26 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params params =
        {
            .linux_side = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        cppIVRCompositor_IVRCompositor_026_SetExplicitTimingMode( &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
    }

    cppIVRCompositor_IVRCompositor_026_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_027_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    struct submit_state state = {.texture = *pTexture, .submit = &state.texture};
    struct cppIVRCompositor_IVRCompositor_027_Submit_params params =
    {
        .linux_side = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "%p\n", _this );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX) load_compositor_texture_dxvk( eEye, pTexture, &nSubmitFlags, &state );
    if (pTexture->eType == TextureType_Vulkan) load_compositor_texture_vulkan( eEye, pTexture, nSubmitFlags, &state );
    params.pTexture = state.submit;
    cppIVRCompositor_IVRCompositor_027_Submit( &params );
    if (pTexture->eType == TextureType_DirectX) free_compositor_texture_dxvk( &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct w_steam_iface *_this )
{
    struct cppIVRCompositor_IVRCompositor_027_PostPresentHandoff_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 27 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params params =
        {
            .linux_side = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        cppIVRCompositor_IVRCompositor_027_SetExplicitTimingMode( &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
    }

    cppIVRCompositor_IVRCompositor_027_PostPresentHandoff( &params );
    post_present_handoff_done();
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride_params params =
    {
        .linux_side = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride( &params );
    set_skybox_override_done( pTextures, unTextureCount );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    struct cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired_params params =
    {
        .linux_side = _this->u_iface,
        .pPhysicalDevice = get_native_VkPhysicalDevice( pPhysicalDevice ),
        .pchValue = pchValue,
        .unBufferSize = unBufferSize,
    };
    TRACE( "%p\n", _this );
    cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( &params );
    return params._ret;
}
