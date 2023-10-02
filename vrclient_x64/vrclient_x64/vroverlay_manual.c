#include <stdarg.h>
#include <stddef.h>

#include "windef.h"
#include "winbase.h"

#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"
#include "vrclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

struct set_overlay_texture_state
{
    w_Texture_t texture;
    w_VRVulkanTextureData_t vkdata;

    VkImageLayout image_layout;
    VkImageSubresourceRange subresources;
    IDXGIVkInteropSurface *dxvk_surface;
    IDXGIVkInteropDevice *dxvk_device;
};

static void load_overlay_texture_dxvk( const w_Texture_t *texture, struct set_overlay_texture_state *state )
{
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

    state->texture = vrclient_translate_texture_dxvk( texture, &state->vkdata, state->dxvk_surface, &state->dxvk_device,
                                                      &state->image_layout, &image_info );
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

static void free_unix_overlay_texture_dxvk( struct set_overlay_texture_state *state )
{
    if (!state->dxvk_device) return;

    state->dxvk_device->lpVtbl->ReleaseSubmissionQueue( state->dxvk_device );
    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout );
    state->dxvk_device->lpVtbl->Release( state->dxvk_device );
    state->dxvk_surface->lpVtbl->Release( state->dxvk_surface );
}

uint32_t __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture( struct w_steam_iface *_this,
                                                                    uint64_t ulOverlayHandle, void *pTexture )
{
    /* probably no one actually uses this old interface... */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_007_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_007_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_008_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_008_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_010_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_010_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_011_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_011_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_012_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_012_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_013_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_013_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_014_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_014_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_016_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_016_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_017_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_017_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_018_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_018_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_019_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_019_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_020_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_020_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_021_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_021_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_022_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_022_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_024_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_024_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_025_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_025_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_026_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_026_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexture( struct w_steam_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_027_SetOverlayTexture_params params =
    {
        .linux_side = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    if (pTexture->eType == TextureType_DirectX) load_overlay_texture_dxvk( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_027_SetOverlayTexture, &params );
    if (pTexture->eType == TextureType_DirectX) free_unix_overlay_texture_dxvk( &state );

    return params._ret;
}
