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
#include "cppIVRCompositor_IVRCompositor_021.h"
#include "cppIVRCompositor_IVRCompositor_022.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

void ivrcompositor_005_submit( void (*cpp_func)( void *, Hmd_Eye, void *, Compositor_TextureBounds * ),
                               void *linux_side, Hmd_Eye eye, const void *texture,
                               Compositor_TextureBounds *bounds, unsigned int version )
{
    TRACE( "%p, %#x, %p, %p\n", linux_side, eye, texture, bounds );

    return cpp_func( linux_side, eye, texture, bounds );
}

VRCompositorError ivrcompositor_006_submit( VRCompositorError (*cpp_func)( void *, Hmd_Eye, void *, VRTextureBounds_t * ),
                                            void *linux_side, Hmd_Eye eye, const void *texture,
                                            const VRTextureBounds_t *bounds, unsigned int version )
{
    TRACE( "%p, %#x, %p, %p\n", linux_side, eye, texture, bounds );

    return cpp_func( linux_side, eye, texture, bounds );
}

VRCompositorError ivrcompositor_007_submit( VRCompositorError (*cpp_func)( void *, Hmd_Eye, GraphicsAPIConvention, void *, const VRTextureBounds_t * ),
                                            void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api,
                                            const void *texture, const VRTextureBounds_t *bounds, unsigned int version )
{
    TRACE( "%p, %#x, %#x, %p, %p\n", linux_side, eye, api, texture, bounds );

    if (api == API_DirectX) FIXME( "Not implemented Direct3D API!\n" );

    return cpp_func( linux_side, eye, api, texture, bounds );
}

VRCompositorError ivrcompositor_008_submit( VRCompositorError (*cpp_func)( void *, Hmd_Eye, GraphicsAPIConvention, void *, const VRTextureBounds_t *, VRSubmitFlags_t ),
                                            void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api,
                                            const void *texture, const VRTextureBounds_t *bounds,
                                            VRSubmitFlags_t flags, unsigned int version )
{
    TRACE( "%p, %#x, %#x, %p, %p, %#x\n", linux_side, eye, api, texture, bounds, flags );

    if (api == API_DirectX) FIXME( "Not implemented Direct3D API!\n" );

    return cpp_func( linux_side, eye, api, texture, bounds, flags );
}

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

EVRCompositorError ivrcompositor_submit( EVRCompositorError (*cpp_func)( void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags ),
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

void ivrcompositor_008_set_skybox_override( void (*cpp_func)( void *, GraphicsAPIConvention, void *, void *, void *, void *, void *, void * ),
                                            void *linux_side, GraphicsAPIConvention api, void *front, void *back,
                                            void *left, void *right, void *top, void *bottom, unsigned int version )
{
    TRACE( "%p, %#x, %p, %p, %p, %p, %p, %p.\n", linux_side, api, front, back, left, right, top, bottom );

    if (api == API_DirectX) FIXME( "Not implemented Direct3D API.\n" );

    cpp_func( linux_side, api, front, back, left, right, top, bottom );
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

EVRCompositorError ivrcompositor_set_skybox_override( EVRCompositorError (*cpp_func)( void *, const Texture_t *textures, uint32_t count ),
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

void ivrcompositor_post_present_handoff( void (*cpp_func)( void * ), void *linux_side, unsigned int version )
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

EVRCompositorError ivrcompositor_wait_get_poses( EVRCompositorError (cpp_func)( void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ),
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

uint32_t ivrcompositor_get_vulkan_device_extensions_required( uint32_t (*cpp_func)( void *, VkPhysicalDevice_T *, char *, uint32_t ),
                                                              void *linux_side, VkPhysicalDevice_T *phys_dev,
                                                              char *value, uint32_t bufsize, unsigned int version )
{
    uint32_t ret;

    phys_dev = get_native_VkPhysicalDevice( phys_dev );

    ret = cpp_func( linux_side, phys_dev, value, bufsize );
    TRACE( "ret %u, value %s.\n", ret, value );
    return ret;
}
