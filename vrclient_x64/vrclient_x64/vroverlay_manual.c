#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"

#include "wine/debug.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"

#include "cppIVROverlay_IVROverlay_001.h"
#include "cppIVROverlay_IVROverlay_002.h"
#include "cppIVROverlay_IVROverlay_003.h"
#include "cppIVROverlay_IVROverlay_004.h"
#include "cppIVROverlay_IVROverlay_005.h"
#include "cppIVROverlay_IVROverlay_007.h"
#include "cppIVROverlay_IVROverlay_008.h"
#include "cppIVROverlay_IVROverlay_010.h"
#include "cppIVROverlay_IVROverlay_011.h"
#include "cppIVROverlay_IVROverlay_012.h"
#include "cppIVROverlay_IVROverlay_013.h"
#include "cppIVROverlay_IVROverlay_014.h"
#include "cppIVROverlay_IVROverlay_016.h"
#include "cppIVROverlay_IVROverlay_017.h"
#include "cppIVROverlay_IVROverlay_018.h"
#include "cppIVROverlay_IVROverlay_019.h"
#include "cppIVROverlay_IVROverlay_020.h"
#include "cppIVROverlay_IVROverlay_021.h"
#include "cppIVROverlay_IVROverlay_022.h"
#include "cppIVROverlay_IVROverlay_024.h"
#include "cppIVROverlay_IVROverlay_025.h"
#include "cppIVROverlay_IVROverlay_026.h"
#include "cppIVROverlay_IVROverlay_027.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static EVROverlayError ivroverlay_set_overlay_texture_dxvk( EVROverlayError (*cpp_func)( void *, VROverlayHandle_t, const Texture_t * ),
                                                            void *linux_side, VROverlayHandle_t overlayHandle,
                                                            const Texture_t *texture, unsigned int version,
                                                            IDXGIVkInteropSurface *dxvk_surface )
{
    struct VRVulkanTextureData_t vkdata;
    IDXGIVkInteropDevice *dxvk_device;
    struct Texture_t vktexture;

    VkImageLayout image_layout;
    VkImageCreateInfo image_info;
    VkImageSubresourceRange subresources;

    EVRCompositorError err;

    vktexture = vrclient_translate_texture_dxvk( texture, &vkdata, dxvk_surface, &dxvk_device, &image_layout, &image_info );

    subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    subresources.baseMipLevel = 0;
    subresources.levelCount = image_info.mipLevels;
    subresources.baseArrayLayer = 0;
    subresources.layerCount = image_info.arrayLayers;

    dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, &subresources,
                                                  image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );
    dxvk_device->lpVtbl->FlushRenderingCommands( dxvk_device );
    dxvk_device->lpVtbl->LockSubmissionQueue( dxvk_device );

    err = cpp_func( linux_side, overlayHandle, &vktexture );

    dxvk_device->lpVtbl->ReleaseSubmissionQueue( dxvk_device );
    dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, &subresources,
                                                  VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, image_layout );

    dxvk_device->lpVtbl->Release( dxvk_device );
    dxvk_surface->lpVtbl->Release( dxvk_surface );
    return err;
}

static EVROverlayError ivroverlay_set_overlay_texture_vulkan( EVROverlayError (*cpp_func)( void *, VROverlayHandle_t, const Texture_t * ),
                                                              void *linux_side, VROverlayHandle_t overlay_handle,
                                                              const Texture_t *texture, unsigned int version )
{
    struct VRVulkanTextureData_t our_vkdata, *their_vkdata;
    Texture_t our_texture;

    their_vkdata = texture->handle;

    our_vkdata = *their_vkdata;
    our_vkdata.m_pDevice = get_native_VkDevice( our_vkdata.m_pDevice );
    our_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice( our_vkdata.m_pPhysicalDevice );
    our_vkdata.m_pInstance = get_native_VkInstance( our_vkdata.m_pInstance );
    our_vkdata.m_pQueue = get_native_VkQueue( our_vkdata.m_pQueue );

    our_texture = *texture;
    our_texture.handle = &our_vkdata;

    return cpp_func( linux_side, overlay_handle, &our_texture );
}

static EVROverlayError ivroverlay_set_overlay_texture( EVROverlayError (*cpp_func)( void *, VROverlayHandle_t, const Texture_t * ),
                                                       void *linux_side, VROverlayHandle_t overlayHandle,
                                                       const Texture_t *texture, unsigned int version )
{
    IUnknown *texture_iface;
    HRESULT hr;

    TRACE( "%p, overlayHandle = %s, texture = %p\n", linux_side, wine_dbgstr_longlong( overlayHandle ), texture );

    switch (texture->eType)
    {
    case TextureType_DirectX:
    {
        IDXGIVkInteropSurface *dxvk_surface;

        TRACE( "D3D11\n" );

        if (!texture->handle)
        {
            WARN( "No D3D11 texture %p.\n", texture );
            return cpp_func( linux_side, overlayHandle, texture );
        }

        texture_iface = texture->handle;

        if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                                  (void **)&dxvk_surface )))
        {
            return ivroverlay_set_overlay_texture_dxvk( cpp_func, linux_side, overlayHandle, texture, version, dxvk_surface );
        }

        WARN( "Invalid D3D11 texture %p.\n", texture );
        return cpp_func( linux_side, overlayHandle, texture );
    }

    case TextureType_Vulkan:
        TRACE( "Vulkan\n" );
        return ivroverlay_set_overlay_texture_vulkan( cpp_func, linux_side, overlayHandle, texture, version );

    default:
        return cpp_func( linux_side, overlayHandle, texture );
    }
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture( struct w_steam_iface *_this,
                                                                          VROverlayHandle_t ulOverlayHandle, void *pTexture )
{
    /* probably no one actually uses this old interface... */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                          GraphicsAPIConvention eTextureType, void *pTexture )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_007_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 7 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_008_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 8 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_010_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 10 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_011_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 11 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_012_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 12 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_013_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 13 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_014_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 14 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_016_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 16 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_017_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 17 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_018_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 18 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_019_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 19 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_020_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 20 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_021_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 21 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_022_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 22 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_024_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 24 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_025_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 25 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_026_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 26 );
    return _ret;
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexture( struct w_steam_iface *_this, VROverlayHandle_t ulOverlayHandle,
                                                                           const Texture_t *pTexture )
{
    EVROverlayError _ret;
    TRACE( "%p\n", _this );
    _ret = ivroverlay_set_overlay_texture( cppIVROverlay_IVROverlay_027_SetOverlayTexture,
                                           _this->u_iface, ulOverlayHandle, pTexture, 27 );
    return _ret;
}
