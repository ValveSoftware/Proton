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

EVROverlayError ivroverlay_set_overlay_texture( EVROverlayError (*cpp_func)( void *, VROverlayHandle_t, const Texture_t * ),
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

EVROverlayError ivroverlay_005_set_overlay_texture( VROverlayError (*cpp_func)( void *, VROverlayHandle_t, GraphicsAPIConvention, void * ),
                                                    void *linux_side, VROverlayHandle_t overlayHandle,
                                                    GraphicsAPIConvention api, const void *texture, unsigned int version )
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}

EVROverlayError ivroverlay_001_set_overlay_texture( VROverlayError (*cpp_func)( void *, VROverlayHandle_t, void * ),
                                                    void *linux_side, VROverlayHandle_t overlayHandle,
                                                    const void *texture, unsigned int version )
{
    /* probably no one actually uses this old interface... */
    FIXME( "unimplemented!\n" );
    return VROverlayError_InvalidHandle;
}
