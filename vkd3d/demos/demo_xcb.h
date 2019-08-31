/*
 * Copyright 2016 Józef Kucia for CodeWeavers
 * Copyright 2016 Henri Verbeet for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#define VK_USE_PLATFORM_XCB_KHR
#include <vkd3d.h>
#include <vkd3d_utils.h>
#include <xcb/xcb_event.h>
#include <xcb/xcb_icccm.h>
#include <xcb/xcb_keysyms.h>
#include <sys/stat.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

struct demo
{
    xcb_connection_t *connection;
    xcb_atom_t wm_protocols_atom;
    xcb_atom_t wm_delete_window_atom;
    xcb_key_symbols_t *xcb_keysyms;
    int screen;

    struct demo_window **windows;
    size_t windows_size;
    size_t window_count;

    void *user_data;
    void (*idle_func)(struct demo *demo, void *user_data);
};

struct demo_window
{
    xcb_window_t window;
    struct demo *demo;

    void *user_data;
    void (*expose_func)(struct demo_window *window, void *user_data);
    void (*key_press_func)(struct demo_window *window, demo_key key, void *user_data);
};

struct demo_swapchain
{
    VkSurfaceKHR vk_surface;
    VkSwapchainKHR vk_swapchain;
    VkFence vk_fence;

    VkInstance vk_instance;
    VkDevice vk_device;
    ID3D12CommandQueue *command_queue;

    uint32_t current_buffer;
    unsigned int buffer_count;
    ID3D12Resource *buffers[1];
};

static inline xcb_atom_t demo_get_atom(xcb_connection_t *c, const char *name)
{
    xcb_intern_atom_cookie_t cookie;
    xcb_intern_atom_reply_t *reply;
    xcb_atom_t atom = XCB_NONE;

    cookie = xcb_intern_atom(c, 0, strlen(name), name);
    if ((reply = xcb_intern_atom_reply(c, cookie, NULL)))
    {
        atom = reply->atom;
        free(reply);
    }

    return atom;
}

static inline bool demo_add_window(struct demo *demo, struct demo_window *window)
{
    if (demo->window_count == demo->windows_size)
    {
        size_t new_capacity;
        void *new_elements;

        new_capacity = max(demo->windows_size * 2, 4);
        if (!(new_elements = realloc(demo->windows, new_capacity * sizeof(*demo->windows))))
            return false;
        demo->windows = new_elements;
        demo->windows_size = new_capacity;
    }

    demo->windows[demo->window_count++] = window;

    return true;
}

static inline void demo_remove_window(struct demo *demo, const struct demo_window *window)
{
    size_t i;

    for (i = 0; i < demo->window_count; ++i)
    {
        if (demo->windows[i] != window)
            continue;

        --demo->window_count;
        memmove(&demo->windows[i], &demo->windows[i + 1], (demo->window_count - i) * sizeof(*demo->windows));
        break;
    }
}

static inline struct demo_window *demo_find_window(struct demo *demo, xcb_window_t window)
{
    size_t i;

    for (i = 0; i < demo->window_count; ++i)
    {
        if (demo->windows[i]->window == window)
            return demo->windows[i];
    }

    return NULL;
}

static inline xcb_screen_t *demo_get_screen(xcb_connection_t *c, int idx)
{
    xcb_screen_iterator_t iter;

    iter = xcb_setup_roots_iterator(xcb_get_setup(c));
    for (; iter.rem; xcb_screen_next(&iter), --idx)
    {
        if (!idx)
            return iter.data;
    }

    return NULL;
}

static inline struct demo_window *demo_window_create(struct demo *demo, const char *title,
        unsigned int width, unsigned int height, void *user_data)
{
    static const uint32_t window_events = XCB_EVENT_MASK_EXPOSURE | XCB_EVENT_MASK_KEY_PRESS;

    struct demo_window *window;
    xcb_size_hints_t hints;
    xcb_screen_t *screen;

    if (!(screen = demo_get_screen(demo->connection, demo->screen)))
        return NULL;

    if (!(window = malloc(sizeof(*window))))
        return NULL;

    if (!demo_add_window(demo, window))
    {
        free(window);
        return NULL;
    }

    window->window = xcb_generate_id(demo->connection);
    window->demo = demo;
    window->user_data = user_data;
    window->expose_func = NULL;
    window->key_press_func = NULL;
    xcb_create_window(demo->connection, XCB_COPY_FROM_PARENT, window->window, screen->root, 0, 0,
            width, height, 0, XCB_WINDOW_CLASS_INPUT_OUTPUT, screen->root_visual,
            XCB_CW_EVENT_MASK, &window_events);
    xcb_change_property(demo->connection, XCB_PROP_MODE_REPLACE, window->window, XCB_ATOM_WM_NAME,
            XCB_ATOM_STRING, 8, strlen(title), title);
    xcb_change_property(demo->connection, XCB_PROP_MODE_REPLACE, window->window, demo->wm_protocols_atom,
            XCB_ATOM_ATOM, 32, 1, &demo->wm_delete_window_atom);
    hints.flags = XCB_ICCCM_SIZE_HINT_P_MIN_SIZE | XCB_ICCCM_SIZE_HINT_P_MAX_SIZE;
    hints.min_width = width;
    hints.min_height = height;
    hints.max_width = width;
    hints.max_height = height;
    xcb_change_property(demo->connection, XCB_PROP_MODE_REPLACE, window->window, XCB_ATOM_WM_NORMAL_HINTS,
            XCB_ATOM_WM_SIZE_HINTS, 32, sizeof(hints) >> 2, &hints);

    xcb_map_window(demo->connection, window->window);

    xcb_flush(demo->connection);

    return window;
}

static inline void demo_window_destroy(struct demo_window *window)
{
    xcb_destroy_window(window->demo->connection, window->window);
    xcb_flush(window->demo->connection);
    demo_remove_window(window->demo, window);
    free(window);
}

static inline void demo_window_set_key_press_func(struct demo_window *window,
        void (*key_press_func)(struct demo_window *window, demo_key key, void *user_data))
{
    window->key_press_func = key_press_func;
}

static inline void demo_window_set_expose_func(struct demo_window *window,
        void (*expose_func)(struct demo_window *window, void *user_data))
{
    window->expose_func = expose_func;
}

static inline void demo_process_events(struct demo *demo)
{
    const struct xcb_client_message_event_t *client_message;
    struct xcb_key_press_event_t *key_press;
    xcb_generic_event_t *event;
    struct demo_window *window;
    xcb_keysym_t sym;

    xcb_flush(demo->connection);

    while (demo->window_count)
    {
        if (!demo->idle_func)
        {
            if (!(event = xcb_wait_for_event(demo->connection)))
                break;
        }
        else if (!(event = xcb_poll_for_event(demo->connection)))
        {
            demo->idle_func(demo, demo->user_data);
            continue;
        }

        switch (XCB_EVENT_RESPONSE_TYPE(event))
        {
            case XCB_EXPOSE:
                if ((window = demo_find_window(demo, ((struct xcb_expose_event_t *)event)->window))
                        && window->expose_func)
                    window->expose_func(window, window->user_data);
                break;

            case XCB_KEY_PRESS:
                key_press = (struct xcb_key_press_event_t *)event;
                if (!(window = demo_find_window(demo, key_press->event)) || !window->key_press_func)
                    break;
                sym = xcb_key_press_lookup_keysym(demo->xcb_keysyms, key_press, 0);
                window->key_press_func(window, sym, window->user_data);
                break;

            case XCB_CLIENT_MESSAGE:
                client_message = (xcb_client_message_event_t *)event;
                if (client_message->type == demo->wm_protocols_atom
                        && client_message->data.data32[0] == demo->wm_delete_window_atom
                        && (window = demo_find_window(demo, client_message->window)))
                    demo_window_destroy(window);
                break;
        }

        free(event);
    }
}

static inline bool demo_init(struct demo *demo, void *user_data)
{
    if (!(demo->connection = xcb_connect(NULL, &demo->screen)))
        return false;
    if (xcb_connection_has_error(demo->connection) > 0)
        goto fail;
    if ((demo->wm_delete_window_atom = demo_get_atom(demo->connection, "WM_DELETE_WINDOW")) == XCB_NONE)
        goto fail;
    if ((demo->wm_protocols_atom = demo_get_atom(demo->connection, "WM_PROTOCOLS")) == XCB_NONE)
        goto fail;
    if (!(demo->xcb_keysyms = xcb_key_symbols_alloc(demo->connection)))
        goto fail;

    demo->windows = NULL;
    demo->windows_size = 0;
    demo->window_count = 0;
    demo->user_data = user_data;
    demo->idle_func = NULL;

    return true;

fail:
    xcb_disconnect(demo->connection);
    return false;
}

static inline void demo_cleanup(struct demo *demo)
{
    free(demo->windows);
    xcb_key_symbols_free(demo->xcb_keysyms);
    xcb_disconnect(demo->connection);
}

static inline void demo_set_idle_func(struct demo *demo,
        void (*idle_func)(struct demo *demo, void *user_data))
{
    demo->idle_func = idle_func;
}

static inline struct demo_swapchain *demo_swapchain_create(ID3D12CommandQueue *command_queue,
        struct demo_window *window, const struct demo_swapchain_desc *desc)
{
    struct vkd3d_image_resource_create_info resource_create_info;
    struct VkSwapchainCreateInfoKHR vk_swapchain_desc;
    struct VkXcbSurfaceCreateInfoKHR surface_desc;
    VkSwapchainKHR vk_swapchain = VK_NULL_HANDLE;
    uint32_t format_count, queue_family_index;
    VkSurfaceCapabilitiesKHR surface_caps;
    VkPhysicalDevice vk_physical_device;
    VkFence vk_fence = VK_NULL_HANDLE;
    struct demo_swapchain *swapchain;
    unsigned int image_count, i, j;
    VkFenceCreateInfo fence_desc;
    VkSurfaceFormatKHR *formats;
    ID3D12Device *d3d12_device;
    VkSurfaceKHR vk_surface;
    VkInstance vk_instance;
    VkBool32 supported;
    VkDevice vk_device;
    VkImage *vk_images;
    VkFormat format;

    if ((format = vkd3d_get_vk_format(desc->format)) == VK_FORMAT_UNDEFINED)
        return NULL;

    if (FAILED(ID3D12CommandQueue_GetDevice(command_queue, &IID_ID3D12Device, (void **)&d3d12_device)))
        return NULL;

    vk_instance = vkd3d_instance_get_vk_instance(vkd3d_instance_from_device(d3d12_device));
    vk_physical_device = vkd3d_get_vk_physical_device(d3d12_device);
    vk_device = vkd3d_get_vk_device(d3d12_device);

    surface_desc.sType = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
    surface_desc.pNext = NULL;
    surface_desc.flags = 0;
    surface_desc.connection = window->demo->connection;
    surface_desc.window = window->window;
    if (vkCreateXcbSurfaceKHR(vk_instance, &surface_desc, NULL, &vk_surface) < 0)
    {
        ID3D12Device_Release(d3d12_device);
        return NULL;
    }

    queue_family_index = vkd3d_get_vk_queue_family_index(command_queue);
    if (vkGetPhysicalDeviceSurfaceSupportKHR(vk_physical_device,
            queue_family_index, vk_surface, &supported) < 0 || !supported)
        goto fail;

    if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(vk_physical_device, vk_surface, &surface_caps) < 0)
        goto fail;

    if ((surface_caps.maxImageCount && desc->buffer_count > surface_caps.maxImageCount)
            || desc->buffer_count < surface_caps.minImageCount
            || desc->width > surface_caps.maxImageExtent.width || desc->width < surface_caps.minImageExtent.width
            || desc->height > surface_caps.maxImageExtent.height || desc->height < surface_caps.minImageExtent.height
            || !(surface_caps.supportedCompositeAlpha & VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR))
        goto fail;

    if (vkGetPhysicalDeviceSurfaceFormatsKHR(vk_physical_device, vk_surface, &format_count, NULL) < 0
            || !format_count || !(formats = calloc(format_count, sizeof(*formats))))
        goto fail;

    if (vkGetPhysicalDeviceSurfaceFormatsKHR(vk_physical_device, vk_surface, &format_count, formats) < 0)
    {
        free(formats);
        goto fail;
    }

    if (format_count != 1 || formats->format != VK_FORMAT_UNDEFINED
            || formats->colorSpace != VK_COLOR_SPACE_SRGB_NONLINEAR_KHR)
    {
        for (i = 0; i < format_count; ++i)
        {
            if (formats[i].format == format && formats[i].colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR)
                break;
        }

        if (i == format_count)
        {
            free(formats);
            goto fail;
        }
    }

    free(formats);
    formats = NULL;

    vk_swapchain_desc.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    vk_swapchain_desc.pNext = NULL;
    vk_swapchain_desc.flags = 0;
    vk_swapchain_desc.surface = vk_surface;
    vk_swapchain_desc.minImageCount = desc->buffer_count;
    vk_swapchain_desc.imageFormat = format;
    vk_swapchain_desc.imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
    vk_swapchain_desc.imageExtent.width = desc->width;
    vk_swapchain_desc.imageExtent.height = desc->height;
    vk_swapchain_desc.imageArrayLayers = 1;
    vk_swapchain_desc.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    vk_swapchain_desc.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    vk_swapchain_desc.queueFamilyIndexCount = 0;
    vk_swapchain_desc.pQueueFamilyIndices = NULL;
    vk_swapchain_desc.preTransform = surface_caps.currentTransform;
    vk_swapchain_desc.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    vk_swapchain_desc.presentMode = VK_PRESENT_MODE_FIFO_KHR;
    vk_swapchain_desc.clipped = VK_TRUE;
    vk_swapchain_desc.oldSwapchain = VK_NULL_HANDLE;
    if (vkCreateSwapchainKHR(vk_device, &vk_swapchain_desc, NULL, &vk_swapchain) < 0)
        goto fail;

    fence_desc.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    fence_desc.pNext = NULL;
    fence_desc.flags = 0;
    if (vkCreateFence(vk_device, &fence_desc, NULL, &vk_fence) < 0)
        goto fail;

    if (vkGetSwapchainImagesKHR(vk_device, vk_swapchain, &image_count, NULL) < 0
            || !(vk_images = calloc(image_count, sizeof(*vk_images))))
        goto fail;

    if (vkGetSwapchainImagesKHR(vk_device, vk_swapchain, &image_count, vk_images) < 0)
    {
        free(vk_images);
        goto fail;
    }

    if (!(swapchain = malloc(offsetof(struct demo_swapchain, buffers[image_count]))))
    {
        free(vk_images);
        goto fail;
    }
    swapchain->vk_surface = vk_surface;
    swapchain->vk_swapchain = vk_swapchain;
    swapchain->vk_fence = vk_fence;
    swapchain->vk_instance = vk_instance;
    swapchain->vk_device = vk_device;

    vkAcquireNextImageKHR(vk_device, vk_swapchain, UINT64_MAX,
            VK_NULL_HANDLE, vk_fence, &swapchain->current_buffer);
    vkWaitForFences(vk_device, 1, &vk_fence, VK_TRUE, UINT64_MAX);
    vkResetFences(vk_device, 1, &vk_fence);

    resource_create_info.type = VKD3D_STRUCTURE_TYPE_IMAGE_RESOURCE_CREATE_INFO;
    resource_create_info.next = NULL;
    resource_create_info.desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    resource_create_info.desc.Alignment = 0;
    resource_create_info.desc.Width = desc->width;
    resource_create_info.desc.Height = desc->height;
    resource_create_info.desc.DepthOrArraySize = 1;
    resource_create_info.desc.MipLevels = 1;
    resource_create_info.desc.Format = desc->format;
    resource_create_info.desc.SampleDesc.Count = 1;
    resource_create_info.desc.SampleDesc.Quality = 0;
    resource_create_info.desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    resource_create_info.desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
    resource_create_info.flags = VKD3D_RESOURCE_INITIAL_STATE_TRANSITION | VKD3D_RESOURCE_PRESENT_STATE_TRANSITION;
    resource_create_info.present_state = D3D12_RESOURCE_STATE_PRESENT;
    for (i = 0; i < image_count; ++i)
    {
        resource_create_info.vk_image = vk_images[i];
        if (FAILED(vkd3d_create_image_resource(d3d12_device, &resource_create_info, &swapchain->buffers[i])))
        {
            for (j = 0; j < i; ++j)
            {
                ID3D12Resource_Release(swapchain->buffers[j]);
            }
            free(swapchain);
            free(vk_images);
            goto fail;
        }
    }
    swapchain->buffer_count = image_count;
    free(vk_images);
    ID3D12Device_Release(d3d12_device);

    ID3D12CommandQueue_AddRef(swapchain->command_queue = command_queue);

    return swapchain;

fail:
    if (vk_fence != VK_NULL_HANDLE)
        vkDestroyFence(vk_device, vk_fence, NULL);
    if (vk_swapchain != VK_NULL_HANDLE)
        vkDestroySwapchainKHR(vk_device, vk_swapchain, NULL);
    vkDestroySurfaceKHR(vk_instance, vk_surface, NULL);
    ID3D12Device_Release(d3d12_device);
    return NULL;
}

static inline unsigned int demo_swapchain_get_current_back_buffer_index(struct demo_swapchain *swapchain)
{
    return swapchain->current_buffer;
}

static inline ID3D12Resource *demo_swapchain_get_back_buffer(struct demo_swapchain *swapchain, unsigned int index)
{
    ID3D12Resource *resource = NULL;

    if (index < swapchain->buffer_count && (resource = swapchain->buffers[index]))
        ID3D12Resource_AddRef(resource);

    return resource;
}

static inline void demo_swapchain_present(struct demo_swapchain *swapchain)
{
    VkPresentInfoKHR present_desc;
    VkQueue vk_queue;

    present_desc.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    present_desc.pNext = NULL;
    present_desc.waitSemaphoreCount = 0;
    present_desc.pWaitSemaphores = NULL;
    present_desc.swapchainCount = 1;
    present_desc.pSwapchains = &swapchain->vk_swapchain;
    present_desc.pImageIndices = &swapchain->current_buffer;
    present_desc.pResults = NULL;

    vk_queue = vkd3d_acquire_vk_queue(swapchain->command_queue);
    vkQueuePresentKHR(vk_queue, &present_desc);
    vkd3d_release_vk_queue(swapchain->command_queue);

    vkAcquireNextImageKHR(swapchain->vk_device, swapchain->vk_swapchain, UINT64_MAX,
            VK_NULL_HANDLE, swapchain->vk_fence, &swapchain->current_buffer);
    vkWaitForFences(swapchain->vk_device, 1, &swapchain->vk_fence, VK_TRUE, UINT64_MAX);
    vkResetFences(swapchain->vk_device, 1, &swapchain->vk_fence);
}

static inline void demo_swapchain_destroy(struct demo_swapchain *swapchain)
{
    unsigned int i;

    ID3D12CommandQueue_Release(swapchain->command_queue);
    for (i = 0; i < swapchain->buffer_count; ++i)
    {
        ID3D12Resource_Release(swapchain->buffers[i]);
    }
    vkDestroyFence(swapchain->vk_device, swapchain->vk_fence, NULL);
    vkDestroySwapchainKHR(swapchain->vk_device, swapchain->vk_swapchain, NULL);
    vkDestroySurfaceKHR(swapchain->vk_instance, swapchain->vk_surface, NULL);
    free(swapchain);
}

static inline HANDLE demo_create_event(void)
{
    return vkd3d_create_event();
}

static inline unsigned int demo_wait_event(HANDLE event, unsigned int ms)
{
    return vkd3d_wait_event(event, ms);
}

static inline void demo_destroy_event(HANDLE event)
{
    vkd3d_destroy_event(event);
}
