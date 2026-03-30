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

struct submit_state
{
    union
    {
        w_Texture_t texture;
        w_VRTextureWithPose_t texture_with_pose;
        w_VRTextureWithPoseAndDepth_t texture_with_pose_and_depth;
        w_VRTextureWithMotion_t texture_with_motion;
    } texture;
    w_VRVulkanTextureArrayData_t vkdata;
    w_VRVulkanTextureData_t vkdata_depth, vkdata_motion;
    VkImageLayout image_layout, depth_image_layout, motion_image_layout;
    VkImageSubresourceRange subresources, depth_subresources, motion_subresources;
    IDXGIVkInteropSurface *dxvk_surface, *depth_dxvk_surface, *motion_dxvk_surface;
    IDXGIVkInteropDevice *dxvk_device;
    ID3D12DXVKInteropDevice *d3d12_device;
    ID3D12DXVKInteropDevice2 *d3d12_device2;
    ID3D12CommandQueue *d3d12_queue;
};

static void dxvk_transition_image_layout( IDXGIVkInteropDevice *dxvk_device, IDXGIVkInteropSurface *dxvk_surface,
                                          VkImageLayout image_layout, VkImageSubresourceRange *subresources,
                                          VkImageCreateInfo *image_info )
{
    subresources->aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    subresources->baseMipLevel = 0;
    subresources->levelCount = image_info->mipLevels;
    subresources->baseArrayLayer = 0;
    subresources->layerCount = image_info->arrayLayers;

    dxvk_device->lpVtbl->TransitionSurfaceLayout( dxvk_device, dxvk_surface, subresources,
                                                  image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );
}

static const w_Texture_t *load_compositor_texture_dxvk( uint32_t eye, const w_Texture_t *texture, uint32_t *flags,
                                                        struct submit_state *state, uint32_t array_index )
{
    static const uint32_t supported_flags = Submit_LensDistortionAlreadyApplied | Submit_FrameDiscontinuty |
            Submit_TextureWithMotion;
    IDXGIVkInteropDevice *dxvk_device;
    w_VRVulkanTextureData_t vkdata;
    VkImageCreateInfo image_info;
    IUnknown *texture_iface;

    TRACE( "texture = %p\n", texture );

    if (!(texture_iface = texture->handle))
    {
        WARN( "No D3D11 texture %p.\n", texture );
        return texture;
    }

    if (FAILED(texture_iface->lpVtbl->QueryInterface( texture_iface, &IID_IDXGIVkInteropSurface,
                                                      (void **)&state->dxvk_surface )))
    {
        WARN( "Invalid D3D11 texture %p.\n", texture );
        return texture;
    }

    state->texture.texture = vrclient_translate_texture_dxvk( texture, &vkdata, state->dxvk_surface, &state->dxvk_device,
                                                              &state->image_layout, &image_info );

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
    state->texture.texture.handle = &state->vkdata;

    if (*flags & Submit_TextureWithPose)
        ((w_VRTextureWithPose_t *)&state->texture.texture)->mDeviceToAbsoluteTracking =
                ((w_VRTextureWithPose_t*)texture)->mDeviceToAbsoluteTracking;

    compositor_data.dxvk_device = state->dxvk_device;

    if (*flags & ~supported_flags) FIXME( "Unhandled flags %#x.\n", *flags );

    if (image_info.arrayLayers > 1 || array_index != ~0u)
    {
        TRACE( "arrayLayers %u.\n", image_info.arrayLayers );
        state->vkdata.m_unArrayIndex = array_index != ~0u ? array_index : eye;
        state->vkdata.m_unArraySize = image_info.arrayLayers;
        *flags = *flags | Submit_VulkanTextureWithArrayData;
    }

    dxvk_transition_image_layout( state->dxvk_device, state->dxvk_surface, state->image_layout, &state->subresources,
                                  &image_info );
    if (*flags & Submit_TextureWithDepth)
    {
        state->texture.texture_with_pose_and_depth.depth.mProjection = ((w_VRTextureWithPoseAndDepth_t *)texture)->depth.mProjection;
        state->texture.texture_with_pose_and_depth.depth.vRange = ((w_VRTextureWithPoseAndDepth_t *)texture)->depth.vRange;
        if (((w_VRTextureWithPoseAndDepth_t*)texture)->depth.handle)
        {
            if (SUCCEEDED(texture_iface->lpVtbl->QueryInterface( ((w_VRTextureWithPoseAndDepth_t*)texture)->depth.handle,
                                                                 &IID_IDXGIVkInteropSurface, (void **)&state->depth_dxvk_surface )))
            {
                vrclient_translate_texture_dxvk( texture, &state->vkdata_depth, state->depth_dxvk_surface, &dxvk_device, &state->depth_image_layout, &image_info );
                state->texture.texture_with_pose_and_depth.depth.handle = &state->vkdata_depth;
                dxvk_transition_image_layout( dxvk_device, state->depth_dxvk_surface, state->depth_image_layout, &state->depth_subresources,
                                              &image_info );
                state->dxvk_device->lpVtbl->Release( dxvk_device );
            }
            else ERR( "Invalid D3D11 depth texture %p.\n", ((w_VRTextureWithPoseAndDepth_t*)texture)->depth.handle );
        }
    }
    if ((*flags & Submit_TextureWithMotion) == Submit_TextureWithMotion)
    {
        state->texture.texture_with_motion.motion.mDeltaPose = ((w_VRTextureWithMotion_t *)texture)->motion.mDeltaPose;
        if (((w_VRTextureWithMotion_t*)texture)->motion.handle)
        {
            if (SUCCEEDED(texture_iface->lpVtbl->QueryInterface( ((w_VRTextureWithMotion_t*)texture)->motion.handle,
                                                                 &IID_IDXGIVkInteropSurface, (void **)&state->motion_dxvk_surface )))
            {
                vrclient_translate_texture_dxvk( texture, &state->vkdata_motion, state->motion_dxvk_surface, &dxvk_device, &state->motion_image_layout, &image_info );
                state->texture.texture_with_motion.motion.handle = &state->vkdata_motion;
                dxvk_transition_image_layout( dxvk_device, state->motion_dxvk_surface, state->motion_image_layout, &state->motion_subresources,
                                              &image_info );
                state->dxvk_device->lpVtbl->Release( dxvk_device );
            }
            else ERR( "Invalid D3D11 motion texture %p.\n", ((w_VRTextureWithPoseAndDepth_t*)texture)->depth.handle );
        }
    }
    state->dxvk_device->lpVtbl->FlushRenderingCommands( state->dxvk_device );
    state->dxvk_device->lpVtbl->LockSubmissionQueue( state->dxvk_device );

    return &state->texture.texture;
}

static void free_compositor_texture_dxvk( struct submit_state *state )
{
    if (!state->dxvk_device) return;

    state->dxvk_device->lpVtbl->ReleaseSubmissionQueue( state->dxvk_device );
    state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->dxvk_surface, &state->subresources,
                                                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout );
    if (state->depth_dxvk_surface)
    {
        state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->depth_dxvk_surface, &state->depth_subresources,
                                                             VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->depth_image_layout );
        state->dxvk_surface->lpVtbl->Release( state->depth_dxvk_surface );
    }
    if (state->motion_dxvk_surface)
    {
        state->dxvk_device->lpVtbl->TransitionSurfaceLayout( state->dxvk_device, state->motion_dxvk_surface, &state->motion_subresources,
                                                             VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->motion_image_layout );
        state->dxvk_surface->lpVtbl->Release( state->motion_dxvk_surface );
    }
    state->dxvk_device->lpVtbl->Release( state->dxvk_device );
    state->dxvk_surface->lpVtbl->Release( state->dxvk_surface );
}

void free_compositor_data_d3d12_device(void)
{
    if (!compositor_data.vk_device) return;

    for (int i = 0; i < ARRAY_SIZE(compositor_data.vk_fences); i++)
    {
        if (compositor_data.vk_fences[i] == VK_NULL_HANDLE)
            continue;
        compositor_data.p_vkDestroyFence(compositor_data.vk_device, compositor_data.vk_fences[i], NULL);
    }
    compositor_data.p_vkFreeCommandBuffers(compositor_data.vk_device, compositor_data.vk_command_pool, 3, compositor_data.vk_command_buffers);
    compositor_data.p_vkDestroyCommandPool(compositor_data.vk_device, compositor_data.vk_command_pool, NULL);

    assert( !compositor_data.d3d12_device2 || (void *)compositor_data.d3d12_device2 == (void *)compositor_data.d3d12_device );
    IUnknown_Release(compositor_data.d3d12_device);
    IUnknown_Release(compositor_data.d3d12_queue);
    compositor_data.d3d12_device = NULL;
    compositor_data.d3d12_device2 = NULL;
    compositor_data.d3d12_queue = NULL;
    compositor_data.vk_device = VK_NULL_HANDLE;
    compositor_data.vk_queue = VK_NULL_HANDLE;
    compositor_data.command_buffer_index = 0;
    memset(compositor_data.vk_fences, 0, sizeof(compositor_data.vk_fences));
    memset(compositor_data.vk_command_buffers, 0, sizeof(compositor_data.vk_command_buffers));
}

static void compositor_data_set_d3d12_device( ID3D12DXVKInteropDevice *d3d12_device, ID3D12DXVKInteropDevice2 *d3d12_device2,
                                              ID3D12CommandQueue *d3d12_queue, const w_VRVulkanTextureData_t *vkdata)
{
        const WCHAR winevulkan_dll[] = L"winevulkan.dll";
        HMODULE winevulkan = NULL;
        PFN_vkGetDeviceProcAddr p_vkGetDeviceProcAddr = NULL;
        VkCommandPoolCreateInfo create_info = {
            .sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
            .flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
            .pNext = NULL,
            .queueFamilyIndex = vkdata->m_nQueueFamilyIndex,
        };
        VkCommandBufferAllocateInfo allocate_info = {
            .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
            .level = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
            .commandBufferCount = ARRAY_SIZE(compositor_data.vk_command_buffers),
        };

        if (compositor_data.d3d12_device == d3d12_device)
        {
            assert( compositor_data.d3d12_device2 == d3d12_device2 );
            if (compositor_data.d3d12_queue != d3d12_queue)
            {
                IUnknown_Release(compositor_data.d3d12_queue);
                compositor_data.d3d12_queue = d3d12_queue;
                IUnknown_AddRef(d3d12_queue);
                compositor_data.vk_queue = vkdata->m_pQueue;
            }
            return;
        }

        free_compositor_data_d3d12_device();
        compositor_data.d3d12_device = d3d12_device;
        compositor_data.d3d12_device2 = d3d12_device2;
        compositor_data.d3d12_queue = d3d12_queue;
        IUnknown_AddRef(compositor_data.d3d12_device);
        IUnknown_AddRef(compositor_data.d3d12_queue);

        compositor_data.vk_device = vkdata->m_pDevice;
        compositor_data.vk_queue = vkdata->m_pQueue;

        winevulkan = LoadLibraryW(winevulkan_dll);
        p_vkGetDeviceProcAddr = (void *)GetProcAddress(winevulkan, "vkGetDeviceProcAddr");
#define X(proc) compositor_data.p_##proc = (void *)p_vkGetDeviceProcAddr(compositor_data.vk_device, #proc);
        VK_PROCS
#undef X

        compositor_data.p_vkCreateCommandPool(compositor_data.vk_device, &create_info, NULL, &compositor_data.vk_command_pool);

        allocate_info.commandPool = compositor_data.vk_command_pool;
        compositor_data.p_vkAllocateCommandBuffers(compositor_data.vk_device, &allocate_info, compositor_data.vk_command_buffers);
}

static void transition_image_layout(VkImage image, const VkImageSubresourceRange *subres, VkImageLayout from_layout, VkImageLayout to_layout)
{
    VkCommandBufferBeginInfo begin_info = {
        .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
        .flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
    };
    VkImageMemoryBarrier barrier = {
        .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
        .oldLayout = from_layout,
        .newLayout = to_layout,
        .srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED,
        .dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED,
        .image = image,
        .subresourceRange = *subres,
        .srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT,
        .dstAccessMask = VK_ACCESS_MEMORY_READ_BIT,
    };
    VkCommandBuffer command_buffer = compositor_data.vk_command_buffers[compositor_data.command_buffer_index];
    VkFence *fence = &compositor_data.vk_fences[compositor_data.command_buffer_index];
    VkSubmitInfo submit_info = {
        .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO,
        .commandBufferCount = 1,
        .pCommandBuffers = &command_buffer,
    };

    if (from_layout == to_layout) return;

    if (*fence == VK_NULL_HANDLE)
    {
        VkFenceCreateInfo create_info = {
            .sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
            .pNext = NULL,
            .flags = 0
        };
        if (compositor_data.p_vkCreateFence(compositor_data.vk_device, &create_info, NULL, fence) != VK_SUCCESS)
        {
            ERR("Cannot create fence\n");
            return;
        }
    }
    else if (compositor_data.p_vkWaitForFences(compositor_data.vk_device, 1, fence, VK_FALSE, 1000000000) != VK_SUCCESS)
    {
        ERR("Failed to wait for fence\n");
        return;
    }

    compositor_data.p_vkResetFences(compositor_data.vk_device, 1, fence);
    compositor_data.p_vkBeginCommandBuffer(command_buffer, &begin_info);
    compositor_data.p_vkCmdPipelineBarrier(command_buffer, VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT, VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
            0, 0, NULL, 0, NULL, 1, &barrier);
    compositor_data.p_vkEndCommandBuffer(command_buffer);
    compositor_data.p_vkQueueSubmit(compositor_data.vk_queue, 1, &submit_info, *fence);
    compositor_data.command_buffer_index = (compositor_data.command_buffer_index + 1) % ARRAY_SIZE(compositor_data.vk_command_buffers);
}

static const w_Texture_t *load_compositor_texture_d3d12( uint32_t eye, const w_Texture_t *texture, uint32_t *flags,
                                                         struct submit_state *state, uint32_t array_index )
{
    static const uint32_t supported_flags = Submit_LensDistortionAlreadyApplied | Submit_FrameDiscontinuty |
            Submit_TextureWithMotion;
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
        return texture;
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
        return texture;
    }

    state->texture.texture = vrclient_translate_texture_d3d12( texture, &vkdata, state->d3d12_device, resource_iface, queue_iface, &state->image_layout,
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
    state->texture.texture.handle = &state->vkdata;

    if (*flags & Submit_TextureWithPose)
        ((w_VRTextureWithPose_t *)&state->texture.texture)->mDeviceToAbsoluteTracking =
                ((w_VRTextureWithPose_t*)texture)->mDeviceToAbsoluteTracking;

    if (*flags & ~supported_flags) FIXME( "Unhandled flags %#x.\n", *flags );

    state->d3d12_queue = queue_iface;
    compositor_data_set_d3d12_device(state->d3d12_device, state->d3d12_device2, state->d3d12_queue, &vkdata);
    IUnknown_Release(state->d3d12_device);

    if (image_info.arrayLayers > 1 || array_index != ~0u)
    {
        TRACE( "arrayLayers %u.\n", image_info.arrayLayers );
        state->vkdata.m_unArrayIndex = array_index != ~0u ? array_index : eye;
        state->vkdata.m_unArraySize = image_info.arrayLayers;
        *flags = *flags | Submit_VulkanTextureWithArrayData;
    }

    state->subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    state->subresources.baseMipLevel = 0;
    state->subresources.levelCount = image_info.mipLevels;
    state->subresources.baseArrayLayer = 0;
    state->subresources.layerCount = image_info.arrayLayers;

    state->d3d12_device->lpVtbl->LockCommandQueue( state->d3d12_device, queue_iface );
    transition_image_layout((VkImage)state->vkdata.m_nImage, &state->subresources, state->image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    if (*flags & Submit_TextureWithDepth)
    {
        w_D3D12TextureData_t *texture_data = ((w_VRTextureWithPoseAndDepth_t*)texture)->depth.handle;

        state->texture.texture_with_pose_and_depth.depth.mProjection = ((w_VRTextureWithPoseAndDepth_t *)texture)->depth.mProjection;
        state->texture.texture_with_pose_and_depth.depth.vRange = ((w_VRTextureWithPoseAndDepth_t *)texture)->depth.vRange;
        if (texture_data)
        {
            if ((resource_iface = texture_data->m_pResource))
            {
                if (texture_data->m_pCommandQueue && texture_data->m_pCommandQueue != state->d3d12_queue)
                    FIXME( "Separate queue for depth texture is not supported.\n" );
                vrclient_translate_texture_d3d12( texture, &state->vkdata_depth, state->d3d12_device, resource_iface, queue_iface, &state->depth_image_layout,
                                                  &image_info );
                state->texture.texture_with_pose_and_depth.depth.handle = &state->vkdata_depth;
                state->depth_subresources = state->subresources;
                state->depth_subresources.levelCount = image_info.mipLevels;
                state->depth_subresources.layerCount = image_info.arrayLayers;
                transition_image_layout((VkImage)state->vkdata_depth.m_nImage, &state->depth_subresources, state->depth_image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
            }
            else ERR( "Invalid D3D12 depth texture %p.\n", texture_data );
        }
    }
    if ((*flags & Submit_TextureWithMotion) == Submit_TextureWithMotion)
    {
        w_D3D12TextureData_t *texture_data = ((w_VRTextureWithMotion_t*)texture)->motion.handle;

        state->texture.texture_with_motion.motion.mDeltaPose = ((w_VRTextureWithMotion_t *)texture)->motion.mDeltaPose;
        if (texture_data)
        {
            if ((resource_iface = texture_data->m_pResource))
            {
                if (texture_data->m_pCommandQueue && texture_data->m_pCommandQueue != state->d3d12_queue)
                    FIXME( "Separate queue for motion texture is not supported.\n" );
                vrclient_translate_texture_d3d12( texture, &state->vkdata_motion, state->d3d12_device, resource_iface, queue_iface, &state->motion_image_layout,
                                                  &image_info );
                state->texture.texture_with_motion.motion.handle = &state->vkdata_motion;
                state->motion_subresources = state->subresources;
                state->motion_subresources.levelCount = image_info.mipLevels;
                state->motion_subresources.layerCount = image_info.arrayLayers;
                transition_image_layout((VkImage)state->vkdata_motion.m_nImage, &state->motion_subresources, state->motion_image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
            }
            else ERR( "Invalid D3D12 motion texture %p.\n", texture_data );
        }
    }

    return &state->texture.texture;
}

static void free_compositor_texture_d3d12( struct submit_state *state )
{
    if (!state->d3d12_device) return;

    transition_image_layout((VkImage)state->vkdata.m_nImage, &state->subresources, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->image_layout);
    if (state->vkdata_depth.m_nImage) transition_image_layout((VkImage)state->vkdata_depth.m_nImage, &state->depth_subresources,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->depth_image_layout);
    if (state->vkdata_motion.m_nImage) transition_image_layout((VkImage)state->vkdata_motion.m_nImage, &state->motion_subresources,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->motion_image_layout);
    state->d3d12_device->lpVtbl->UnlockCommandQueue( state->d3d12_device, state->d3d12_queue );
}

static const w_Texture_t *load_compositor_texture( uint32_t eye, const w_Texture_t *texture, uint32_t *flags,
                                                   struct submit_state *state, uint32_t array_index )
{
    switch (texture->eType)
    {
    case TextureType_DirectX:
        return load_compositor_texture_dxvk( eye, texture, flags, state, array_index );
    case TextureType_DirectX12:
        return load_compositor_texture_d3d12( eye, texture, flags, state, array_index );
    default: return texture;
    }
}

static void free_compositor_texture( uint32_t type, struct submit_state *state )
{
    if (type == TextureType_DirectX) free_compositor_texture_dxvk( state );
    else if (type == TextureType_DirectX12) free_compositor_texture_d3d12( state );
}

struct set_skybox_override_state
{
    int texture_type;
    w_Texture_t textures[6];
    w_VRVulkanTextureData_t vkdata[6];
    ID3D12DXVKInteropDevice *d3d12_device; /* reference counted. */
    ID3D12CommandQueue *d3d12_queue;       /* app provided for call, not reference counted. */
    struct
    {
        uint64_t image;
        VkImageSubresourceRange subresources;
        VkImageLayout layout;
    }
    images[6];
    unsigned int image_count;
};

static const w_Texture_t *set_skybox_override_d3d11_init( const w_Texture_t *textures, uint32_t count, struct set_skybox_override_state *state )
{
    IDXGIVkInteropSurface *dxvk_surface;
    unsigned int i;

    for (i = 0; i < count; ++i)
    {
        const w_Texture_t *texture = &textures[i];
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

    state->texture_type = TextureType_DirectX;
    return state->textures;
}

static const w_Texture_t *set_skybox_override_d3d12_init( const w_Texture_t *textures, uint32_t count, struct set_skybox_override_state *state )
{
    ID3D12DXVKInteropDevice2 *d3d12_device2;
    ID3D12DXVKInteropDevice *d3d12_device;
    w_D3D12TextureData_t *texture_data;
    ID3D12CommandQueue *d3d12_queue;
    ID3D12Resource *d3d12_resource;
    VkImageSubresourceRange *range;
    VkImageCreateInfo image_info;
    VkImageLayout image_layout;
    unsigned int i, j;
    HRESULT hr;

    for (i = 0; i < count; ++i)
    {
        const w_Texture_t *texture = &textures[i];

        if (!texture->handle)
        {
            ERR( "No D3D11 texture %p.\n", texture );
            return textures;
        }
        if (textures[i].eType != TextureType_DirectX12)
        {
            FIXME( "Mixing texture types is not supported.\n" );
            return textures;
        }
        texture_data = texture->handle;
        if (!(d3d12_resource = texture_data->m_pResource) || !(d3d12_queue = texture_data->m_pCommandQueue))
        {
            ERR( "Invalid D3D12 texture %p.\n", texture );
            return texture;
        }
        d3d12_device2 = NULL;
        hr = d3d12_queue->lpVtbl->GetDevice( d3d12_queue, &IID_ID3D12DXVKInteropDevice2, (void **)&d3d12_device2 );
        if (SUCCEEDED(hr))
            d3d12_device = (ID3D12DXVKInteropDevice *)d3d12_device2;
        else
            hr = d3d12_queue->lpVtbl->GetDevice( d3d12_queue, &IID_ID3D12DXVKInteropDevice, (void **)&d3d12_device );
        if (FAILED(hr))
        {
            ERR( "Failed to get vkd3d-proton device.\n" );
            return texture;
        }
        if ((state->d3d12_queue && state->d3d12_queue != d3d12_queue)
             || (state->d3d12_device && state->d3d12_device != d3d12_device))
        {
            FIXME( "Varying queues or devices are not supported.\n" );
            return textures;
        }
        state->textures[i] = vrclient_translate_texture_d3d12( texture, &state->vkdata[i], d3d12_device, d3d12_resource,
                                                               d3d12_queue, &image_layout, &image_info );
        state->d3d12_device = d3d12_device;
        state->d3d12_queue = d3d12_queue;
        compositor_data_set_d3d12_device( d3d12_device, d3d12_device2, d3d12_queue, &state->vkdata[i] );

        for (j = 0; j < state->image_count; ++j)
        {
            if (state->images[j].image == state->vkdata[i].m_nImage)
            {
                WARN( "Duplicate image index %u.\n", i );
                break;
            }
        }
        if (j < state->image_count) continue;
        state->images[j].image = state->vkdata[i].m_nImage;
        range = &state->images[j].subresources;
        range->aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        range->baseMipLevel = 0;
        range->levelCount = image_info.mipLevels;
        range->baseArrayLayer = 0;
        range->layerCount = image_info.arrayLayers;
        state->images[j].layout = image_layout;
        ++state->image_count;
    }
    state->d3d12_device->lpVtbl->LockCommandQueue( state->d3d12_device, state->d3d12_queue );
    for (i = 0; i < state->image_count; ++i)
        transition_image_layout( (VkImage)state->images[i].image, &state->images[i].subresources,
                                 state->images[i].layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL );

    state->texture_type = TextureType_DirectX12;
    return state->textures;
}

static const w_Texture_t *set_skybox_override_init( const w_Texture_t *textures, uint32_t count, struct set_skybox_override_state *state )
{
    state->texture_type = -1;
    if (!count || count > 6)
    {
        WARN( "Invalid texture count %u.\n", count );
        return textures;
    }

    if (textures[0].eType == TextureType_DirectX)
        return set_skybox_override_d3d11_init( textures, count, state );
    if (textures[0].eType == TextureType_DirectX12)
        return set_skybox_override_d3d12_init( textures, count, state );

    if (textures[0].eType != TextureType_Vulkan)
        FIXME( "Conversion for type %u is not supported.\n", textures[0].eType );
    return textures;
}

static void set_skybox_override_done( struct set_skybox_override_state *state )
{
    unsigned int i;

    if (state->texture_type == TextureType_DirectX)
    {
        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );
    }
    else if (state->texture_type == TextureType_DirectX12)
    {
        for (i = 0; i < state->image_count; ++i)
        {
            transition_image_layout( (VkImage)state->images[i].image, &state->images[i].subresources,
                                     VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, state->images[i].layout);
        }
        state->d3d12_device->lpVtbl->UnlockCommandQueue( state->d3d12_device, state->d3d12_queue );
        state->d3d12_device->lpVtbl->Release( state->d3d12_device );
    }
}

static void lock_queue(void)
{
    if (compositor_data.dxvk_device)
        compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue( compositor_data.dxvk_device );

    if (compositor_data.d3d12_device2)
        compositor_data.d3d12_device2->lpVtbl->LockVulkanQueue( compositor_data.d3d12_device2, compositor_data.d3d12_queue );
    else if (compositor_data.d3d12_device)
        compositor_data.d3d12_device->lpVtbl->LockCommandQueue( compositor_data.d3d12_device, compositor_data.d3d12_queue );
}

static void unlock_queue(void)
{
    if (compositor_data.dxvk_device)
        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue( compositor_data.dxvk_device );

    if (compositor_data.d3d12_device2)
        compositor_data.d3d12_device2->lpVtbl->UnlockVulkanQueue( compositor_data.d3d12_device2, compositor_data.d3d12_queue );
    else if (compositor_data.d3d12_device)
        compositor_data.d3d12_device->lpVtbl->UnlockCommandQueue( compositor_data.d3d12_device, compositor_data.d3d12_queue );
}

static void post_present_handoff_init( struct u_iface u_iface, unsigned int version )
{
    lock_queue();
}

static void post_present_handoff_done(void)
{
    compositor_data.handoff_called = TRUE;
    unlock_queue();
}

static BOOL need_lock_for_wait_get_poses(void)
{
    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff) return TRUE;
    if (compositor_data.explicit_timing_mode == 2 && compositor_data.handoff_called) return FALSE;
    return TRUE;
}

static BOOL wait_get_poses_locked_queue;

static void wait_get_poses_init( struct u_iface u_iface )
{
    if ((wait_get_poses_locked_queue = need_lock_for_wait_get_poses())) lock_queue();
}

static void wait_get_poses_done( struct u_iface u_iface )
{
    if (wait_get_poses_locked_queue) unlock_queue();
}

void __thiscall winIVRCompositor_IVRCompositor_005_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pPoseArray, uint32_t unPoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_005_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pPoseArray = pPoseArray,
        .unPoseArrayCount = unPoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_005_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_006_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_006_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_006_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_007_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_007_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_007_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_008_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_008_Submit( struct w_iface *_this,
                                                               uint32_t eEye, int32_t eTextureType, void *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_008_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    w_Texture_t texture =
    {
        .handle = pTexture,
        .eType = eTextureType,
    };
    const w_Texture_t *conv_texture;
    TRACE( "_this %p, eEye %u, eTextureType %d, pTexture %p, pBounds %p, nSubmitFlags %#x\n", _this, eEye, eTextureType, pTexture, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    conv_texture = load_compositor_texture( eEye, &texture, &params.nSubmitFlags, &state, ~0u );
    params.eTextureType = conv_texture->eType;
    params.pTexture = conv_texture->handle;
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_Submit, &params );
    free_compositor_texture( texture.eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_008_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_008_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 8 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_008_SetSkyboxOverride( struct w_iface *_this, int32_t eTextureType,
        void *pFront, void *pBack, void *pLeft, void *pRight, void *pTop, void *pBottom )
{
    struct set_skybox_override_state state = {0};
    w_Texture_t textures[6] =
    {
        { .handle = pFront, .eType = eTextureType, },
        { .handle = pBack, .eType = eTextureType, },
        { .handle = pLeft, .eType = eTextureType, },
        { .handle = pRight, .eType = eTextureType, },
        { .handle = pTop, .eType = eTextureType, },
        { .handle = pBottom, .eType = eTextureType, },
    };
    const w_Texture_t *conv_textures = set_skybox_override_init( textures, 6, &state );
    struct IVRCompositor_IVRCompositor_008_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .eTextureType = conv_textures[0].eType,
        .pFront = conv_textures[0].handle,
        .pBack = conv_textures[1].handle,
        .pLeft = conv_textures[2].handle,
        .pRight = conv_textures[3].handle,
        .pTop = conv_textures[4].handle,
        .pBottom = conv_textures[5].handle,
    };

    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_008_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_009_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_009_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_009_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_009_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 9 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_009_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_009_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_009_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_010_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_010_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_010_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 10 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_010_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_010_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_011_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_011_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_011_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_011_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 11 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_011_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_011_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_011_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_012_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_012_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_012_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_012_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 12 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_012_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_012_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_012_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_013_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_013_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_013_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_013_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 13 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_013_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_013_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_013_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_014_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_014_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_014_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_014_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 14 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_014_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_014_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_014_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_015_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_015_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_015_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_015_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 15 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_015_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_015_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_015_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_016_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_016_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_016_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_016_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 16 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_016_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_016_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_016_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_017_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_017_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_017_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_017_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 17 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_017_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_017_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_017_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_018_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_018_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_018_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_018_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 18 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_018_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_018_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_018_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_019_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_019_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_019_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_019_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 19 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_019_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_019_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_019_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_020_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_WaitGetPoses, &params );
    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_020_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_020_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_020_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 20 );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_PostPresentHandoff, &params );
    post_present_handoff_done();
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_020_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_020_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_020_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_021_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_021_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_021_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_021_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_021_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 21 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .bExplicitTimingMode = TRUE,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = TRUE;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(struct w_iface *_this, int8_t bExplicitTimingMode)
{
    struct IVRCompositor_IVRCompositor_021_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .bExplicitTimingMode = bExplicitTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = bExplicitTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_021_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_021_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_021_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_022_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_022_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_022_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_022_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_022_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 22 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_022_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_022_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_022_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_022_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_024_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_024_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_024_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_024_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_024_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 24 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_024_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_024_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_024_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_024_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_024_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_026_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_026_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_026_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_026_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_026_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 26 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_026_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_026_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_026_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_026_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_026_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_027_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_027_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_027_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

void __thiscall winIVRCompositor_IVRCompositor_027_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_027_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 27 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_027_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_027_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_027_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_027_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_027_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_028_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_028_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_028_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_028_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_028_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_028_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_028_SubmitWithArrayIndex( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture, uint32_t unTextureArrayIndex,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    uint32_t ret;

    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), unTextureArrayIndex %u, pBounds %p, nSubmitFlags %#x\n",
            _this, eEye, pTexture, pTexture->eType, unTextureArrayIndex, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX)
    {
        struct IVRCompositor_IVRCompositor_028_Submit_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        params.pTexture = load_compositor_texture_dxvk( eEye, pTexture, &params.nSubmitFlags, &state, unTextureArrayIndex );
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_Submit, &params );
        ret = params._ret;
    }
    else if (pTexture->eType == TextureType_DirectX12)
    {
        struct IVRCompositor_IVRCompositor_028_Submit_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        params.pTexture = load_compositor_texture_d3d12( eEye, pTexture, &params.nSubmitFlags, &state, unTextureArrayIndex );
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_Submit, &params );
        ret = params._ret;
    }
    else
    {
        struct IVRCompositor_IVRCompositor_028_SubmitWithArrayIndex_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .unTextureArrayIndex = unTextureArrayIndex,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SubmitWithArrayIndex, &params );
        ret = params._ret;
    }
    free_compositor_texture( pTexture->eType, &state );
    return ret;
}

void __thiscall winIVRCompositor_IVRCompositor_028_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_028_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 28 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_028_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_028_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_028_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_028_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_028_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_028_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_028_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_028_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}


uint32_t __thiscall winIVRCompositor_IVRCompositor_029_WaitGetPoses( struct w_iface *_this,
                                                                     TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                                     TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount )
{
    struct IVRCompositor_IVRCompositor_029_WaitGetPoses_params params =
    {
        .u_iface = _this->u_iface,
        .pRenderPoseArray = pRenderPoseArray,
        .unRenderPoseArrayCount = unRenderPoseArrayCount,
        .pGamePoseArray = pGamePoseArray,
        .unGamePoseArrayCount = unGamePoseArrayCount,
    };
    TRACE( "%p\n", _this );
    wait_get_poses_init( _this->u_iface );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
    {
        struct IVRCompositor_IVRCompositor_029_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
        /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
         * if explicit timing mode is set. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_PostPresentHandoff, &params );
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_WaitGetPoses, &params );

    if (compositor_data.dxvk_device && compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_029_SubmitExplicitTimingData_params params = {.u_iface = _this->u_iface};
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SubmitExplicitTimingData, &params );
    }

    wait_get_poses_done( _this->u_iface );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_029_Submit( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    struct IVRCompositor_IVRCompositor_029_Submit_params params =
    {
        .u_iface = _this->u_iface,
        .eEye = eEye,
        .pTexture = pTexture,
        .pBounds = pBounds,
        .nSubmitFlags = nSubmitFlags,
    };
    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), pBounds %p, nSubmitFlags %#x\n", _this, eEye, pTexture, pTexture->eType, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    params.pTexture = load_compositor_texture( eEye, pTexture, &params.nSubmitFlags, &state, ~0u );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_Submit, &params );
    free_compositor_texture( pTexture->eType, &state );
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_029_SubmitWithArrayIndex( struct w_iface *_this,
                                                               uint32_t eEye, const w_Texture_t *pTexture, uint32_t unTextureArrayIndex,
                                                               const VRTextureBounds_t *pBounds, uint32_t nSubmitFlags )
{
    struct submit_state state = {0};
    uint32_t ret;

    TRACE( "_this %p, eEye %u, pTexture %p (eType %u), unTextureArrayIndex %u, pBounds %p, nSubmitFlags %#x\n",
            _this, eEye, pTexture, pTexture->eType, unTextureArrayIndex, pBounds, nSubmitFlags );

    compositor_data.handoff_called = FALSE;
    if (pTexture->eType == TextureType_DirectX)
    {
        struct IVRCompositor_IVRCompositor_029_Submit_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        params.pTexture = load_compositor_texture_dxvk( eEye, pTexture, &params.nSubmitFlags, &state, unTextureArrayIndex );
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_Submit, &params );
        ret = params._ret;
    }
    else if (pTexture->eType == TextureType_DirectX12)
    {
        struct IVRCompositor_IVRCompositor_029_Submit_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        params.pTexture = load_compositor_texture_d3d12( eEye, pTexture, &params.nSubmitFlags, &state, unTextureArrayIndex );
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_Submit, &params );
        ret = params._ret;
    }
    else
    {
        struct IVRCompositor_IVRCompositor_029_SubmitWithArrayIndex_params params =
        {
            .u_iface = _this->u_iface,
            .eEye = eEye,
            .pTexture = pTexture,
            .unTextureArrayIndex = unTextureArrayIndex,
            .pBounds = pBounds,
            .nSubmitFlags = nSubmitFlags,
        };

        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SubmitWithArrayIndex, &params );
        ret = params._ret;
    }
    free_compositor_texture( pTexture->eType, &state );
    return ret;
}

void __thiscall winIVRCompositor_IVRCompositor_029_PostPresentHandoff( struct w_iface *_this )
{
    struct IVRCompositor_IVRCompositor_029_PostPresentHandoff_params params = {.u_iface = _this->u_iface};
    TRACE( "%p\n", _this );
    post_present_handoff_init( _this->u_iface, 28 );

    if (compositor_data.dxvk_device && !compositor_data.d3d11_explicit_handoff)
    {
        struct IVRCompositor_IVRCompositor_029_SetExplicitTimingMode_params params =
        {
            .u_iface = _this->u_iface,
            .eTimingMode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff,
        };

        /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
         * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
         * in lockups and crashes. */
        VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SetExplicitTimingMode, &params );
        compositor_data.d3d11_explicit_handoff = TRUE;
        compositor_data.explicit_timing_mode = VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff;
    }

    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_PostPresentHandoff, &params );
    post_present_handoff_done();
}

void __thiscall winIVRCompositor_IVRCompositor_029_SetExplicitTimingMode(struct w_iface *_this, uint32_t eTimingMode)
{
    struct IVRCompositor_IVRCompositor_029_SetExplicitTimingMode_params params =
    {
        .u_iface = _this->u_iface,
        .eTimingMode = eTimingMode,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SetExplicitTimingMode, &params );
    compositor_data.explicit_timing_mode = eTimingMode;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_029_SubmitExplicitTimingData(struct w_iface *_this)
{
    struct IVRCompositor_IVRCompositor_029_SubmitExplicitTimingData_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    lock_queue();
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SubmitExplicitTimingData, &params );
    unlock_queue();
    return params._ret;
}

uint32_t __thiscall winIVRCompositor_IVRCompositor_029_SetSkyboxOverride( struct w_iface *_this,
                                                                          const w_Texture_t *pTextures, uint32_t unTextureCount )
{
    struct set_skybox_override_state state = {0};
    struct IVRCompositor_IVRCompositor_029_SetSkyboxOverride_params params =
    {
        .u_iface = _this->u_iface,
        .pTextures = set_skybox_override_init( pTextures, unTextureCount, &state ),
        .unTextureCount = unTextureCount,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRCompositor_IVRCompositor_029_SetSkyboxOverride, &params );
    set_skybox_override_done( &state );
    return params._ret;
}
