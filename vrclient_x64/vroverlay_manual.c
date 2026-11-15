#include <stdarg.h>
#include <stddef.h>

#include "windef.h"
#include "winbase.h"

#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"
#include "vkd3d-proton-interop.h"
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
    ID3D12DXVKInteropDevice *d3d12_device;
    ID3D12DXVKInteropDevice2 *d3d12_device2;
    ID3D12CommandQueue *d3d12_queue;
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

static void load_overlay_texture_d3d12( const w_Texture_t *texture, struct set_overlay_texture_state *state )
{
    HRESULT hr;
    w_VRVulkanTextureData_t vkdata;
    VkImageCreateInfo image_info;
    ID3D12Resource *resource_iface;
    ID3D12CommandQueue *queue_iface;
    w_D3D12TextureData_t *texture_data = texture->handle;

    TRACE( "texture = %p\n", texture );

    if (!(resource_iface = texture_data->m_pResource) || !(queue_iface = texture_data->m_pCommandQueue))
    {
        WARN( "Invalid D3D12 texture %p.\n", texture );
        return;
    }

    state->d3d12_device2 = NULL;
    hr = queue_iface->lpVtbl->GetDevice( queue_iface, &IID_ID3D12DXVKInteropDevice2, (void **)&state->d3d12_device2 );
    if (SUCCEEDED(hr))
        state->d3d12_device = (ID3D12DXVKInteropDevice *)state->d3d12_device2;
    else
        hr = queue_iface->lpVtbl->GetDevice( queue_iface, &IID_ID3D12DXVKInteropDevice, (void **)&state->d3d12_device );
    if (FAILED(hr))
    {
        WARN( "Failed to get vkd3d-proton device.\n" );
        return;
    }

    state->texture = vrclient_translate_texture_d3d12( texture, &vkdata, state->d3d12_device, resource_iface, queue_iface, &state->image_layout,
                                                               &image_info );

    state->vkdata.m_nImage = vkdata.m_nImage;
    state->vkdata.m_pDevice = vkdata.m_pDevice;
    state->vkdata.m_pPhysicalDevice = vkdata.m_pPhysicalDevice;
    state->vkdata.m_pInstance = vkdata.m_pInstance;
    state->vkdata.m_pQueue = vkdata.m_pQueue;
    state->vkdata.m_nQueueFamilyIndex = vkdata.m_nQueueFamilyIndex;
    state->vkdata.m_nWidth = vkdata.m_nWidth;
    state->vkdata.m_nHeight = vkdata.m_nHeight;
    state->vkdata.m_nFormat = vkdata.m_nFormat;
    state->vkdata.m_nSampleCount = vkdata.m_nSampleCount;
    state->texture.handle = &state->vkdata;

    state->d3d12_queue = queue_iface;
    compositor_data_set_d3d12_device(state->d3d12_device, state->d3d12_device2, state->d3d12_queue, &vkdata);
    IUnknown_Release(state->d3d12_device);

    state->subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    state->subresources.baseMipLevel = 0;
    state->subresources.levelCount = image_info.mipLevels;
    state->subresources.baseArrayLayer = 0;
    state->subresources.layerCount = image_info.arrayLayers;

    state->d3d12_device->lpVtbl->LockCommandQueue( state->d3d12_device, queue_iface );
    transition_image_layout((VkImage)state->vkdata.m_nImage, &state->subresources, state->image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
}

static void free_unix_overlay_texture_d3d12( struct set_overlay_texture_state *state )
{
    if (!state->d3d12_device) return;

    transition_image_layout((VkImage)state->vkdata.m_nImage, &state->subresources, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout);
    state->d3d12_device->lpVtbl->UnlockCommandQueue( state->d3d12_device, state->d3d12_queue );
}

static void load_overlay_texture( const w_Texture_t *texture, struct set_overlay_texture_state *state )
{
    switch (texture->eType)
    {
    case TextureType_DirectX:
        load_overlay_texture_dxvk( texture, state );
        break;
    case TextureType_DirectX12:
        load_overlay_texture_d3d12( texture, state );
        break;
    }
}

static void free_unix_overlay_texture( uint32_t type, struct set_overlay_texture_state *state )
{
    if (type == TextureType_DirectX) free_unix_overlay_texture_dxvk( state );
    else if (type == TextureType_DirectX12) free_unix_overlay_texture_d3d12( state );
}

uint32_t __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture( struct w_iface *_this,
                                                                    uint64_t ulOverlayHandle, void *pTexture )
{
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

uint32_t __thiscall winIVROverlay_IVROverlay_006_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    uint32_t eTextureType, void *pTexture )
{
    w_Texture_t texture =
    {
        .handle = pTexture,
        .eType = eTextureType,
    };
    struct set_overlay_texture_state state = { .texture = texture };
    struct IVROverlay_IVROverlay_006_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
    };

    TRACE( "%p %#I64x %d %p.\n", _this, ulOverlayHandle, eTextureType, pTexture );

    load_overlay_texture( &texture, &state );
    params.eTextureType = state.texture.eType;
    params.pTexture = state.texture.handle;
    VRCLIENT_CALL( IVROverlay_IVROverlay_006_SetOverlayTexture, &params );
    free_unix_overlay_texture( state.texture.eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_007_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_007_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_008_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_008_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_010_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_010_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_011_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_011_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_012_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_012_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_013_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_013_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_014_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_014_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_016_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_016_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_017_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_017_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_018_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_018_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_019_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_019_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_020_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_020_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_021_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_021_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_022_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_022_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_024_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_024_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_025_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_025_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_026_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_026_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_027_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_027_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}

uint32_t __thiscall winIVROverlay_IVROverlay_028_SetOverlayTexture( struct w_iface *_this, uint64_t ulOverlayHandle,
                                                                    const w_Texture_t *pTexture )
{
    struct set_overlay_texture_state state = {.texture = *pTexture};
    struct IVROverlay_IVROverlay_028_SetOverlayTexture_params params =
    {
        .u_iface = _this->u_iface,
        .ulOverlayHandle = ulOverlayHandle,
        .pTexture = &state.texture,
    };

    TRACE( "%p\n", _this );

    load_overlay_texture( pTexture, &state );
    VRCLIENT_CALL( IVROverlay_IVROverlay_028_SetOverlayTexture, &params );
    free_unix_overlay_texture( pTexture->eType, &state );

    return params._ret;
}
