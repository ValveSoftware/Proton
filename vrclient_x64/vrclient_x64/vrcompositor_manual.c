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

static EVRCompositorError ivrcompositor_submit_dxvk( EVRCompositorError (*cpp_func)( void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags ),
                                                     void *linux_side, EVREye eye, const Texture_t *texture,
                                                     const VRTextureBounds_t *bounds, EVRSubmitFlags flags,
                                                     unsigned int version, IDXGIVkInteropSurface *dxvk_surface )
{
    static const EVRSubmitFlags supported_flags = Submit_LensDistortionAlreadyApplied | Submit_FrameDiscontinuty;
    struct VRVulkanTextureArrayData_t vkdata;
    IDXGIVkInteropDevice *dxvk_device;
    struct Texture_t vktexture;

    VkImageLayout image_layout;
    VkImageCreateInfo image_info;
    VkImageSubresourceRange subresources;

    EVRCompositorError err;

    vktexture = vrclient_translate_texture_dxvk( texture, &vkdata.t, dxvk_surface, &dxvk_device,
                                                 &image_layout, &image_info );

    compositor_data.dxvk_device = dxvk_device;

    if (flags & ~supported_flags) FIXME( "Unhandled flags %#x.\n", flags );

    if (image_info.arrayLayers > 1)
    {
        vkdata.m_unArrayIndex = eye;
        vkdata.m_unArraySize = image_info.arrayLayers;
        flags |= Submit_VulkanTextureWithArrayData;
    }

    subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    subresources.baseMipLevel = 0;
    subresources.levelCount = image_info.mipLevels;
    subresources.baseArrayLayer = 0;
    subresources.layerCount = image_info.arrayLayers;

    dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, &subresources,
                                                  image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );
    dxvk_device->lpVtbl->FlushRenderingCommands( dxvk_device );
    dxvk_device->lpVtbl->LockSubmissionQueue( dxvk_device );

    err = cpp_func( linux_side, eye, &vktexture, bounds, flags );

    dxvk_device->lpVtbl->ReleaseSubmissionQueue( dxvk_device );
    dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, &subresources,
                                                  VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, image_layout );

    dxvk_device->lpVtbl->Release( dxvk_device );
    dxvk_surface->lpVtbl->Release( dxvk_surface );
    return err;
}

static EVRCompositorError ivrcompositor_submit_vulkan( EVRCompositorError (*cpp_func)( void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags ),
                                                       void *linux_side, EVREye eye, const Texture_t *texture,
                                                       const VRTextureBounds_t *bounds,
                                                       EVRSubmitFlags flags, unsigned int version )
{
    struct VRVulkanTextureData_t our_depth_vkdata, *their_vkdata;
    struct VRVulkanTextureArrayData_t our_vkdata;
    VRTextureWithPoseAndDepth_t our_both;
    VRTextureWithDepth_t our_depth;
    VRTextureWithPose_t our_pose;
    Texture_t our_texture;
    const void *tex = texture;

    their_vkdata = texture->handle;

    memcpy( &our_vkdata, their_vkdata, flags & Submit_VulkanTextureWithArrayData ? sizeof(struct VRVulkanTextureArrayData_t)
                                                                                 : sizeof(struct VRVulkanTextureData_t) );

    our_vkdata.t.m_pDevice = get_native_VkDevice( our_vkdata.t.m_pDevice );
    our_vkdata.t.m_pPhysicalDevice = get_native_VkPhysicalDevice( our_vkdata.t.m_pPhysicalDevice );
    our_vkdata.t.m_pInstance = get_native_VkInstance( our_vkdata.t.m_pInstance );
    our_vkdata.t.m_pQueue = get_native_VkQueue( our_vkdata.t.m_pQueue );

    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    case 0:
        our_texture = *texture;
        our_texture.handle = &our_vkdata;
        tex = &our_texture;
        break;

    case Submit_TextureWithPose:
        our_pose = *(VRTextureWithPose_t *)texture;
        our_pose.texture.handle = &our_vkdata;
        tex = &our_pose;
        break;

    case Submit_TextureWithDepth:
        our_depth = *(VRTextureWithDepth_t *)texture;

        our_depth.texture.handle = &our_vkdata;

        tex = &our_depth;
        break;

    case Submit_TextureWithPose | Submit_TextureWithDepth:
        our_both = *(VRTextureWithPoseAndDepth_t *)texture;

        our_both.texture.handle = &our_vkdata;

        their_vkdata = our_both.depth.handle;
        our_depth_vkdata = *their_vkdata;
        our_depth_vkdata.m_pDevice = get_native_VkDevice( our_depth_vkdata.m_pDevice );
        our_depth_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice( our_depth_vkdata.m_pPhysicalDevice );
        our_depth_vkdata.m_pInstance = get_native_VkInstance( our_depth_vkdata.m_pInstance );
        our_depth_vkdata.m_pQueue = get_native_VkQueue( our_depth_vkdata.m_pQueue );

        our_both.depth.handle = &our_depth_vkdata;

        tex = &our_both;
        break;
    }

    return cpp_func( linux_side, eye, tex, bounds, flags );
}

static EVRCompositorError ivrcompositor_submit( EVRCompositorError (*cpp_func)( void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags ),
                                                void *linux_side, EVREye eye, const Texture_t *texture,
                                                const VRTextureBounds_t *bounds, EVRSubmitFlags flags, unsigned int version )
{
    IDXGIVkInteropSurface *dxvk_surface;
    IUnknown *texture_iface;
    HRESULT hr;

    TRACE( "%p, %#x, %p, %p, %#x\n", linux_side, eye, texture, bounds, flags );

    compositor_data.handoff_called = FALSE;

    switch (texture->eType)
    {
    case TextureType_DirectX:
    {
        TRACE( "D3D11\n" );

        if (!texture->handle)
        {
            WARN( "No D3D11 texture %p.\n", texture );
            return cpp_func( linux_side, eye, texture, bounds, flags );
        }

        texture_iface = texture->handle;

        if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                                  (void **)&dxvk_surface )))
        {
            return ivrcompositor_submit_dxvk( cpp_func, linux_side, eye, texture, bounds, flags, version, dxvk_surface );
        }

        WARN( "Invalid D3D11 texture %p.\n", texture );
        return cpp_func( linux_side, eye, texture, bounds, flags );
    }

    case TextureType_Vulkan:
        return ivrcompositor_submit_vulkan( cpp_func, linux_side, eye, texture, bounds, flags, version );

    default:
        return cpp_func( linux_side, eye, texture, bounds, flags );
    }
}

static EVRCompositorError ivrcompositor_set_skybox_override_d3d11( EVRCompositorError (*cpp_func)( void *, const Texture_t *textures, uint32_t count ),
                                                                   void *linux_side, const Texture_t *textures, uint32_t count )
{
    struct VRVulkanTextureData_t vkdata[6];
    IDXGIVkInteropSurface *dxvk_surface;
    struct Texture_t vktexture[6];
    EVRCompositorError result;
    unsigned int i;

    for (i = 0; i < count; ++i)
    {
        const Texture_t *texture = &textures[i];
        IUnknown *texture_iface;

        if (!texture->handle)
        {
            ERR( "No D3D11 texture %p.\n", texture );
            return cpp_func( linux_side, textures, count );
        }
        if (textures[i].eType != TextureType_DirectX)
        {
            FIXME( "Mixing texture types is not supported.\n" );
            return 0;
        }

        texture_iface = texture->handle;

        if (SUCCEEDED(texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                             (void **)&dxvk_surface )))
        {
            VkImageSubresourceRange subresources;
            IDXGIVkInteropDevice *dxvk_device;
            VkImageCreateInfo image_info;
            VkImageLayout image_layout;

            vktexture[i] = vrclient_translate_texture_dxvk( texture, &vkdata[i], dxvk_surface,
                                                            &dxvk_device, &image_layout, &image_info );

            if (compositor_data.dxvk_device && dxvk_device != compositor_data.dxvk_device)
            {
                ERR( "Invalid dxvk_device %p, previous %p.\n", dxvk_device, compositor_data.dxvk_device );
                dxvk_surface->lpVtbl->Release( dxvk_surface );
                dxvk_device->lpVtbl->Release( dxvk_device );
                return 0;
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

            continue;
        }
        FIXME( "Unsupported d3d11 texture %p, i %u.\n", texture, i );
        return 0;
    }

    compositor_data.dxvk_device->lpVtbl->FlushRenderingCommands( compositor_data.dxvk_device );
    compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );

    result = cpp_func( linux_side, vktexture, count );

    compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );

    TRACE( "result %u.\n", result );
    return result;
}

static EVRCompositorError ivrcompositor_set_skybox_override( EVRCompositorError (*cpp_func)( void *, const Texture_t *textures, uint32_t count ),
                                                             void *linux_side, const Texture_t *textures,
                                                             uint32_t count, unsigned int version )
{
    TRACE( "cpp_func %p, linux_side %p, textures %p, count %u, version %u.\n", cpp_func, linux_side,
           textures, count, version );

    if (!count || count > 6)
    {
        WARN( "Invalid texture count %u.\n", count );
        return cpp_func( linux_side, textures, count );
    }

    if (textures[0].eType == TextureType_DirectX)
        return ivrcompositor_set_skybox_override_d3d11( cpp_func, linux_side, textures, count );

    FIXME( "Conversion for type %u is not supported.\n", textures[0].eType );
    return 0;
}

static void ivrcompositor_post_present_handoff( void (*cpp_func)( void * ), void *linux_side, unsigned int version )
{
    TRACE( "%p\n", linux_side );

    if (compositor_data.dxvk_device)
    {
        compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );

        if (!compositor_data.d3d11_explicit_handoff && version >= 21)
        {
            /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
             * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
             * in lockups and crashes. */
            cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode( linux_side, VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff );
            compositor_data.d3d11_explicit_handoff = TRUE;
        }
    }

    cpp_func( linux_side );

    compositor_data.handoff_called = TRUE;
    if (compositor_data.dxvk_device)
        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
}

static EVRCompositorError ivrcompositor_wait_get_poses( EVRCompositorError (cpp_func)( void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ),
                                                        void *linux_side, TrackedDevicePose_t *render_poses,
                                                        uint32_t render_pose_count, TrackedDevicePose_t *game_poses,
                                                        uint32_t game_pose_count, unsigned int version )
{
    EVRCompositorError r;

    TRACE( "%p, %p, %u, %p, %u\n", linux_side, render_poses, render_pose_count, game_poses, game_pose_count );

    if (compositor_data.dxvk_device)
    {
        compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );
        if (compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
        {
            /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
             * if explicit timing mode is set. */
            cppIVRCompositor_IVRCompositor_022_PostPresentHandoff( linux_side );
        }
    }

    r = cpp_func( linux_side, render_poses, render_pose_count, game_poses, game_pose_count );

    if (compositor_data.dxvk_device)
    {
        if (compositor_data.d3d11_explicit_handoff)
            cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData( linux_side );

        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
    }

    return r;
}

static uint32_t ivrcompositor_get_vulkan_device_extensions_required( uint32_t (*cpp_func)( void *, VkPhysicalDevice_T *, char *, uint32_t ),
                                                                     void *linux_side, VkPhysicalDevice_T *phys_dev,
                                                                     char *value, uint32_t bufsize, unsigned int version )
{
    uint32_t ret;

    phys_dev = get_native_VkPhysicalDevice( phys_dev );

    ret = cpp_func( linux_side, phys_dev, value, bufsize );
    TRACE( "ret %u, value %s.\n", ret, value );
    return ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_009_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 9 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_009_PostPresentHandoff, _this->u_iface, 9 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_009_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_009_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 9 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_010_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 10 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_010_PostPresentHandoff, _this->u_iface, 10 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 10 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_011_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 11 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_011_PostPresentHandoff, _this->u_iface, 11 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_011_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 11 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_012_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 12 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_012_PostPresentHandoff, _this->u_iface, 12 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_012_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_012_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 12 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_013_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 13 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_013_PostPresentHandoff, _this->u_iface, 13 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_013_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_013_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 13 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_014_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 14 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_014_PostPresentHandoff, _this->u_iface, 14 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_014_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_014_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 14 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_015_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 15 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_015_PostPresentHandoff, _this->u_iface, 15 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_015_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 15 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_016_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 16 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_016_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 16 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_016_PostPresentHandoff, _this->u_iface, 16 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_016_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_016_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 16 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_017_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 17 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_017_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 17 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_017_PostPresentHandoff, _this->u_iface, 17 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_017_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_017_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 17 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_018_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 18 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_018_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 18 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_018_PostPresentHandoff, _this->u_iface, 18 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_018_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_018_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 18 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_019_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 19 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_019_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 19 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_019_PostPresentHandoff, _this->u_iface, 19 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_019_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_019_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 19 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_019_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 19 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_020_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 20 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_020_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 20 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_020_PostPresentHandoff, _this->u_iface, 20 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_020_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_020_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 20 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_020_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 20 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_021_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 21 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_021_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 21 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_021_PostPresentHandoff, _this->u_iface, 21 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_021_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_021_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 21 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_021_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 21 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_022_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 22 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_022_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 22 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_022_PostPresentHandoff, _this->u_iface, 22 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_022_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_022_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 22 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_022_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 22 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_024_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 24 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_024_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 24 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_024_PostPresentHandoff, _this->u_iface, 24 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_024_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_024_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 24 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_024_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 24 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_WaitGetPoses( struct w_steam_iface *_this,
                                                                               TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                               TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_wait_get_poses( cppIVRCompositor_IVRCompositor_026_WaitGetPoses, _this->u_iface, pRenderPoseArray,
                                         unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, 26 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_026_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 26 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_026_PostPresentHandoff, _this->u_iface, 26 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_026_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_026_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 26 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_026_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 26 );
    return _ret;
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_027_Submit( struct w_steam_iface *_this,
                                                                         EVREye eEye, const Texture_t *pTexture,
                                                                         const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_submit( cppIVRCompositor_IVRCompositor_027_Submit, _this->u_iface, eEye,
                                 pTexture, pBounds, nSubmitFlags, 27 );
    return _ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct w_steam_iface *_this )
{
    TRACE( "%p\n", _this );
    ivrcompositor_post_present_handoff( cppIVRCompositor_IVRCompositor_027_PostPresentHandoff, _this->u_iface, 27 );
}

EVRCompositorError __thiscall winIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct w_steam_iface *_this,
                                                                                    const Texture_t *pTextures, uint32_t unTextureCount )
{
    EVRCompositorError _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_set_skybox_override( cppIVRCompositor_IVRCompositor_027_SetSkyboxOverride,
                                              _this->u_iface, pTextures, unTextureCount, 27 );
    return _ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired( struct w_steam_iface *_this, VkPhysicalDevice_T *pPhysicalDevice,
                                                                                          char *pchValue, uint32_t unBufferSize )
{
    uint32_t _ret;
    TRACE( "%p\n", _this );
    _ret = ivrcompositor_get_vulkan_device_extensions_required( cppIVRCompositor_IVRCompositor_027_GetVulkanDeviceExtensionsRequired,
                                                                _this->u_iface, pPhysicalDevice,
                                                                pchValue, unBufferSize, 27 );
    return _ret;
}
