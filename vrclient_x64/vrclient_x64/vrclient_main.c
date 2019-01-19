#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <limits.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "wine/debug.h"
#include "wine/library.h"

#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "initguid.h"

#ifdef VRCLIENT_HAVE_DXVK
#include "dxvk-interop.h"
#endif

#include "wined3d-interop.h"

#include "flatapi.h"

#include "cppIVRClientCore_IVRClientCore_003.h"
#include "cppIVRCompositor_IVRCompositor_021.h"
#include "cppIVRCompositor_IVRCompositor_022.h"

typedef struct winRenderModel_t_1015 winRenderModel_t_1015;
typedef struct winRenderModel_TextureMap_t_1015 winRenderModel_TextureMap_t_1015;
#include "cppIVRRenderModels_IVRRenderModels_005.h"

typedef struct winRenderModel_t_113b winRenderModel_t_113b;
typedef struct winRenderModel_TextureMap_t_113b winRenderModel_TextureMap_t_113b;
#include "cppIVRRenderModels_IVRRenderModels_006.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}

static BOOL array_reserve(void **elements, SIZE_T *capacity, SIZE_T count, SIZE_T size)
{
    SIZE_T max_capacity, new_capacity;
    void *new_elements;

    if (count <= *capacity)
        return TRUE;

    max_capacity = ~(SIZE_T)0 / size;
    if (count > max_capacity)
        return FALSE;

    new_capacity = max(1, *capacity);
    while (new_capacity < count && new_capacity <= max_capacity / 2)
        new_capacity *= 2;
    if (new_capacity < count)
        new_capacity = count;

    if (!*elements)
        new_elements = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, new_capacity * size);
    else
        new_elements = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *elements, new_capacity * size);
    if (!new_elements)
        return FALSE;

    *elements = new_elements;
    *capacity = new_capacity;
    return TRUE;
}

#include "win_constructors.h"
#include "win_destructors.h"

typedef void (*pfn_dtor)(void *);

static const struct {
    const char *iface_version;
    void *(*ctor)(void *);
    void (*dtor)(void *);
} constructors[] = {
#include "win_constructors_table.dat"
};

void *create_win_interface(const char *name, void *linux_side)
{
    unsigned int i;

    TRACE("trying to create %s\n", name);

    if(!linux_side)
        return NULL;

    for(i = 0; i < sizeof(constructors) / sizeof(*constructors); ++i){
        if(!strcmp(name, constructors[i].iface_version))
            return constructors[i].ctor(linux_side);
    }

    ERR("Don't recognize interface name: %s\n", name);

    return NULL;
}

static pfn_dtor get_win_destructor(const char *name)
{
    unsigned int i;

    for(i = 0; i < sizeof(constructors) / sizeof(*constructors); ++i){
        if(!strcmp(name, constructors[i].iface_version))
            return constructors[i].dtor;
    }

    return NULL;
}

static void *vrclient_lib;
static void *(*vrclient_VRClientCoreFactory)(const char *name, int *return_code);

static int load_vrclient(void)
{
    char path[PATH_MAX];

    if(vrclient_lib)
        return 1;

    /* PROTON_VR_RUNTIME is provided by the proton setup script */
    if(!getenv("PROTON_VR_RUNTIME")){
        TRACE("Linux OpenVR runtime is not available\n");
        return 0;
    }

#ifdef _WIN64
    snprintf(path, PATH_MAX, "%s/bin/linux64/vrclient.so", getenv("PROTON_VR_RUNTIME"));
#else
    snprintf(path, PATH_MAX, "%s/bin/vrclient.so", getenv("PROTON_VR_RUNTIME"));
#endif
    TRACE("got openvr runtime path: %s\n", path);

    vrclient_lib = wine_dlopen(path, RTLD_NOW, NULL, 0);
    if(!vrclient_lib){
        ERR("unable to load vrclient.so\n");
        return 0;
    }

    vrclient_VRClientCoreFactory = wine_dlsym(vrclient_lib, "VRClientCoreFactory", NULL, 0);
    if(!vrclient_VRClientCoreFactory){
        ERR("unable to load VRClientCoreFactory method\n");
        return 0;
    }

    return 1;
}

void *CDECL VRClientCoreFactory(const char *name, int *return_code)
{
    TRACE("name: %s, return_code: %p\n", name, return_code);

    if(!load_vrclient())
        return NULL;

    return create_win_interface(name, vrclient_VRClientCoreFactory(name, return_code));
}

static VkDevice_T *(WINAPI *get_native_VkDevice)(VkDevice_T *);
static VkInstance_T *(WINAPI *get_native_VkInstance)(VkInstance_T *);
static VkPhysicalDevice_T *(WINAPI *get_native_VkPhysicalDevice)(VkPhysicalDevice_T *);
static VkPhysicalDevice_T *(WINAPI *get_wrapped_VkPhysicalDevice)(VkInstance_T *, VkPhysicalDevice_T *);
static VkQueue_T *(WINAPI *get_native_VkQueue)(VkQueue_T *);

static void load_vk_unwrappers(void)
{
    static HMODULE h = NULL;

    if(h)
        /* already loaded */
        return;

    h = LoadLibraryA("winevulkan");
    if(!h){
        ERR("unable to load winevulkan\n");
        return;
    }

    get_native_VkDevice = (void*)GetProcAddress(h, "__wine_get_native_VkDevice");
    get_native_VkInstance = (void*)GetProcAddress(h, "__wine_get_native_VkInstance");
    get_native_VkPhysicalDevice = (void*)GetProcAddress(h, "__wine_get_native_VkPhysicalDevice");
    get_wrapped_VkPhysicalDevice = (void*)GetProcAddress(h, "__wine_get_wrapped_VkPhysicalDevice");
    get_native_VkQueue = (void*)GetProcAddress(h, "__wine_get_native_VkQueue");
}

EVRInitError ivrclientcore_002_init(EVRInitError (*cpp_func)(void *, EVRApplicationType),
        void *linux_side, EVRApplicationType application_type,
        unsigned int version, struct client_core_data *user_data)
{
    EVRInitError error;

    TRACE("%p, %#x\n", linux_side, application_type);

    InitializeCriticalSection(&user_data->critical_section);

    error = cpp_func(linux_side, application_type);
    if (error)
        ERR("error %#x\n", error);
    return error;
}

EVRInitError ivrclientcore_init(EVRInitError (*cpp_func)(void *, EVRApplicationType, const char *),
        void *linux_side, EVRApplicationType application_type, const char *startup_info,
        unsigned int version, struct client_core_data *user_data)
{
    EVRInitError error;

    TRACE("%p, %#x, %p\n", linux_side, application_type, startup_info);

    InitializeCriticalSection(&user_data->critical_section);

    error = cpp_func(linux_side, application_type, startup_info);
    if (error)
        ERR("error %#x\n", error);
    return error;
}

void *ivrclientcore_get_generic_interface(void *(*cpp_func)(void *, const char *, EVRInitError *),
        void *linux_side, const char *name_and_version, EVRInitError *error,
        unsigned int version, struct client_core_data *user_data)
{
    const char *cpp_name_and_version = name_and_version;
    struct generic_interface *iface;
    pfn_dtor destructor;
    void *win_object;
    void *object;

    TRACE("%p, %p, %p\n", linux_side, name_and_version, error);

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (name_and_version && !strncmp(name_and_version, "FnTable:", 8))
        cpp_name_and_version += 8;

    if (!(object = cpp_func(linux_side, cpp_name_and_version, error)))
    {
        WARN("Failed to create %s.\n", name_and_version);
        return NULL;
    }

    if (!(win_object = create_win_interface(name_and_version, object)))
    {
        ERR("Failed to create win object %s.\n", name_and_version);
        return NULL;
    }

    if ((destructor = get_win_destructor(name_and_version)))
    {
        EnterCriticalSection(&user_data->critical_section);
        if (array_reserve((void **)&user_data->created_interfaces,
                &user_data->created_interfaces_size, user_data->created_interface_count + 1,
                sizeof(*user_data->created_interfaces)))
        {
            iface = &user_data->created_interfaces[user_data->created_interface_count++];
            iface->object = win_object;
            iface->dtor = destructor;
        }
        else
        {
            ERR("Failed to add interface to array.\n");
        }
        LeaveCriticalSection(&user_data->critical_section);
    }

    if (name_and_version && !strncmp(name_and_version, "FnTable:", 8))
        return *((void **)win_object);
    return win_object;
}

void ivrclientcore_cleanup(void (*cpp_func)(void *), void *linux_side,
        unsigned int version, struct client_core_data *user_data)
{
    struct generic_interface *iface;
    SIZE_T i;

    TRACE("%p\n", linux_side);

    EnterCriticalSection(&user_data->critical_section);
    for (i = 0; i < user_data->created_interface_count; ++i)
    {
        iface = &user_data->created_interfaces[i];

        iface->dtor(iface->object);
    }
    HeapFree(GetProcessHeap(), 0, user_data->created_interfaces);
    user_data->created_interfaces = NULL;
    user_data->created_interfaces_size = 0;
    user_data->created_interface_count = 0;
    LeaveCriticalSection(&user_data->critical_section);

    DeleteCriticalSection(&user_data->critical_section);
    cpp_func(linux_side);
}

void get_dxgi_output_info(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, unsigned int version)
{
    TRACE("%p\n", adapter_idx);
    *adapter_idx = 0;
}

void get_dxgi_output_info2(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, int32_t *output_idx, unsigned int version)
{
    TRACE("%p, %p\n", adapter_idx, output_idx);
    *adapter_idx = 0;
    *output_idx = 0;
}

void ivrsystem_016_get_output_device(
        void (*cpp_func)(void *, uint64_t *, ETextureType),
        void *linux_side, uint64_t *out_device, ETextureType type,
        unsigned int version)
{
    cpp_func(linux_side, out_device, type);
}

void ivrsystem_get_output_device(
        void (*cpp_func)(void *, uint64_t *, ETextureType, VkInstance_T *),
        void *linux_side, uint64_t *out_device, ETextureType type,
        VkInstance_T *wrapped_instance, unsigned int version)
{
    switch(type){
        case TextureType_Vulkan:
        {
            VkInstance_T *native_instance;

            load_vk_unwrappers();

            native_instance = get_native_VkInstance(wrapped_instance);

            cpp_func(linux_side, out_device, type, native_instance);

            *out_device = (uint64_t)(intptr_t)get_wrapped_VkPhysicalDevice(wrapped_instance,
                    (VkPhysicalDevice_T *)(intptr_t)*out_device);

            return;
        }
        default:
            cpp_func(linux_side, out_device, type, wrapped_instance);
            return;
    }
}

struct submit_data
{
    void *linux_side;

    EVRCompositorError (*submit)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);

    EVREye eye;
    Texture_t texture;
    VRTextureWithPose_t texture_pose;
    VRTextureWithDepth_t texture_depth;
    VRTextureWithPoseAndDepth_t texture_both;
    VRTextureBounds_t bounds;
    EVRSubmitFlags flags;
};

static CDECL void d3d11_texture_callback(unsigned int gl_texture, unsigned int gl_depth_texture,
        const void *data, unsigned int data_size)
{
    const struct submit_data *submit_data = data;
    VRTextureBounds_t bounds = submit_data->bounds;
    VRTextureWithPoseAndDepth_t texture_both;
    VRTextureWithDepth_t texture_depth;
    VRTextureWithPose_t texture_pose;
    VRCompositorError error = 0;
    Texture_t texture;
    void *tex;

    TRACE("texture %u, depth_texture %u, data {%p, %u}\n",
            gl_texture, gl_depth_texture, data, data_size);

    switch (submit_data->flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
    case 0:
        texture = submit_data->texture;
        texture.handle = (void *)(UINT_PTR)gl_texture;
        texture.eType = TextureType_OpenGL;
        tex = &texture;
        break;
    case Submit_TextureWithPose:
        texture_pose = submit_data->texture_pose;
        texture_pose.texture.handle = (void *)(UINT_PTR)gl_texture;
        texture_pose.texture.eType = TextureType_OpenGL;
        tex = &texture_pose;
        break;
    case Submit_TextureWithDepth:
        texture_depth = submit_data->texture_depth;
        texture_depth.texture.handle = (void *)(UINT_PTR)gl_texture;
        texture_depth.texture.eType = TextureType_OpenGL;
        texture_depth.depth.handle = (void *)(UINT_PTR)gl_depth_texture;
        tex = &texture_depth;
        break;
    case Submit_TextureWithPose | Submit_TextureWithDepth:
        texture_both = submit_data->texture_both;
        texture_both.texture.handle = (void *)(UINT_PTR)gl_texture;
        texture_both.texture.eType = TextureType_OpenGL;
        texture_both.depth.handle = (void *)(UINT_PTR)gl_depth_texture;
        tex = &texture_both;
        break;
    }

    error = submit_data->submit(submit_data->linux_side, submit_data->eye,
            tex, &bounds, submit_data->flags);
    if (error)
        ERR("error %#x\n", error);
}

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, void *texture, Compositor_TextureBounds *bounds,
        unsigned int version, struct compositor_data *user_data)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, void *texture, VRTextureBounds_t *bounds,
        unsigned int version, struct compositor_data *user_data)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture, VRTextureBounds_t *bounds,
        unsigned int version, struct compositor_data *user_data)
{
    TRACE("%p, %#x, %#x, %p, %p\n", linux_side, eye, api, texture, bounds);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API!\n");

    return cpp_func(linux_side, eye, api, texture, bounds);
}

VRCompositorError ivrcompositor_008_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *,
        VRTextureBounds_t *, VRSubmitFlags_t),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture,
        VRTextureBounds_t *bounds, VRSubmitFlags_t flags,
        unsigned int version, struct compositor_data *user_data)
{
    TRACE("%p, %#x, %#x, %p, %p, %#x\n", linux_side, eye, api, texture, bounds, flags);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API!\n");

    return cpp_func(linux_side, eye, api, texture, bounds, flags);
}

static EVRCompositorError ivrcompositor_submit_wined3d(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, struct compositor_data *user_data, IWineD3D11Texture2D *wine_texture)
{
    IWineD3D11Texture2D *depth_texture = NULL;
    IUnknown *depth_texture_unk = NULL;
    IWineD3D11Device *wined3d_device;
    struct submit_data submit_data;
    EVRCompositorError error = 0;
    ID3D11Device *device;
    BOOL async = FALSE;
    HRESULT hr;

    wine_texture->lpVtbl->GetDevice(wine_texture, &device);
    if (user_data->d3d11_device != device)
    {
        if (user_data->d3d11_device)
            FIXME("Previous submit was from different D3D11 device.\n");

        user_data->d3d11_device = device;

        if (SUCCEEDED(hr = device->lpVtbl->QueryInterface(device,
                &IID_IWineD3D11Device, (void **)&wined3d_device)))
        {
            user_data->wined3d_device = wined3d_device;
            wined3d_device->lpVtbl->Release(wined3d_device);
        }
        else
        {
            ERR("Failed to get device, hr %#x.\n", hr);
            user_data->wined3d_device = NULL;
        }

        switch (version)
        {
            /* older versions */
            default:
                TRACE("Using synchronous mode.\n");
                break;
            case 21:
                TRACE("Enabling explicit timing mode.\n");
                async = TRUE;
                cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(linux_side,
                        VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff);
                break;
            case 22:
                TRACE("Enabling explicit timing mode.\n");
                async = TRUE;
                cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(linux_side,
                        VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff);
                break;
        }
    }
    device->lpVtbl->Release(device);

    submit_data.linux_side = linux_side;
    submit_data.submit = cpp_func;
    submit_data.eye = eye;
    submit_data.flags = flags;
    /* Textures are upside-down in wined3d. */
    submit_data.bounds = *bounds;
    submit_data.bounds.vMin = bounds->vMax;
    submit_data.bounds.vMax = bounds->vMin;

    switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
    {
        case 0:
            submit_data.texture = *texture;
            break;
        case Submit_TextureWithPose:
            submit_data.texture_pose = *(VRTextureWithPose_t *)texture;
            break;
        case Submit_TextureWithDepth:
            submit_data.texture_depth = *(VRTextureWithDepth_t *)texture;
            depth_texture_unk = submit_data.texture_depth.depth.handle;
            break;
        case Submit_TextureWithPose | Submit_TextureWithDepth:
            submit_data.texture_both = *(VRTextureWithPoseAndDepth_t *)texture;
            depth_texture_unk = submit_data.texture_both.depth.handle;
            break;
    }

    if (depth_texture_unk)
    {
        if (FAILED(hr = depth_texture_unk->lpVtbl->QueryInterface(depth_texture_unk,
                &IID_IWineD3D11Texture2D, (void **)&depth_texture)))
            ERR("Failed to get IWineD3D11Texture2D from depth texture.\n");
    }

    if (async)
    {
        wine_texture->lpVtbl->access_gl_texture(wine_texture,
                d3d11_texture_callback, depth_texture, &submit_data, sizeof(submit_data));
    }
    else
    {
        unsigned int gl_texture, gl_depth_texture = 0;
        void *linux_texture;

        gl_texture = wine_texture->lpVtbl->get_gl_texture(wine_texture);
        if (depth_texture)
        {
            gl_depth_texture = depth_texture->lpVtbl->get_gl_texture(depth_texture);
            TRACE("Depth texture %u.\n", gl_depth_texture);
        }

        switch (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
        {
            case 0:
                submit_data.texture.handle = (void *)(UINT_PTR)gl_texture;
                submit_data.texture.eType = TextureType_OpenGL;
                linux_texture = &submit_data.texture;
                break;
            case Submit_TextureWithPose:
                submit_data.texture_pose.texture.handle = (void *)(UINT_PTR)gl_texture;
                submit_data.texture_pose.texture.eType = TextureType_OpenGL;
                linux_texture = &submit_data.texture_pose;
                break;
            case Submit_TextureWithDepth:
                submit_data.texture_depth.texture.handle = (void *)(UINT_PTR)gl_texture;
                submit_data.texture_depth.texture.eType = TextureType_OpenGL;
                submit_data.texture_depth.depth.handle = (void *)(UINT_PTR)gl_depth_texture;
                linux_texture = &submit_data.texture_depth;
                break;
            case Submit_TextureWithPose | Submit_TextureWithDepth:
                submit_data.texture_both.texture.handle = (void *)(UINT_PTR)gl_texture;
                submit_data.texture_both.texture.eType = TextureType_OpenGL;
                submit_data.texture_both.depth.handle = (void *)(UINT_PTR)gl_depth_texture;
                linux_texture = &submit_data.texture_both;
                break;
        }

        error = cpp_func(linux_side, eye, linux_texture, &submit_data.bounds, flags);
    }

    if (depth_texture)
        depth_texture->lpVtbl->Release(depth_texture);

    wine_texture->lpVtbl->Release(wine_texture);

    return error;
}

#ifdef VRCLIENT_HAVE_DXVK
static EVRCompositorError ivrcompositor_submit_dxvk(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, struct compositor_data *user_data, IDXGIVkInteropSurface *dxvk_surface)
{
    struct VRVulkanTextureData_t vkdata;
    IDXGIVkInteropDevice *dxvk_device;
    struct Texture_t vktexture;

    VkImage image_handle;
    VkImageLayout image_layout;
    VkImageCreateInfo image_info;
    VkImageSubresourceRange subresources;

    EVRCompositorError err;

    dxvk_surface->lpVtbl->GetDevice(dxvk_surface, &dxvk_device);

    user_data->dxvk_device = dxvk_device;

    dxvk_device->lpVtbl->GetVulkanHandles(dxvk_device, &vkdata.m_pInstance,
            &vkdata.m_pPhysicalDevice, &vkdata.m_pDevice);

    dxvk_device->lpVtbl->GetSubmissionQueue(dxvk_device, &vkdata.m_pQueue, &vkdata.m_nQueueFamilyIndex);

    /* DXVK needs this to be initialized correctly */
    image_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info.pNext = NULL;

    dxvk_surface->lpVtbl->GetVulkanImageInfo(dxvk_surface, &image_handle, &image_layout, &image_info);

    load_vk_unwrappers();

    vkdata.m_nImage = (uint64_t)image_handle;
    vkdata.m_pDevice = get_native_VkDevice(vkdata.m_pDevice);
    vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(vkdata.m_pPhysicalDevice);
    vkdata.m_pInstance = get_native_VkInstance(vkdata.m_pInstance);
    vkdata.m_pQueue = get_native_VkQueue(vkdata.m_pQueue);
    vkdata.m_nWidth = image_info.extent.width;
    vkdata.m_nHeight = image_info.extent.height;
    vkdata.m_nFormat = image_info.format;
    vkdata.m_nSampleCount = image_info.samples;

    if (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
        FIXME("Unhandled flags %#x.\n", flags & (Submit_TextureWithPose | Submit_TextureWithDepth));

    vktexture = *texture;
    vktexture.handle = &vkdata;
    vktexture.eType = TextureType_Vulkan;

    subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    subresources.baseMipLevel = 0;
    subresources.levelCount = image_info.mipLevels;
    subresources.baseArrayLayer = 0;
    subresources.layerCount = image_info.arrayLayers;

    dxvk_device->lpVtbl->TransitionSurfaceLayout(dxvk_device, dxvk_surface, &subresources,
            image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    dxvk_device->lpVtbl->FlushRenderingCommands(dxvk_device);
    dxvk_device->lpVtbl->LockSubmissionQueue(dxvk_device);

    err = cpp_func(linux_side, eye, &vktexture, bounds, flags);

    dxvk_device->lpVtbl->ReleaseSubmissionQueue(dxvk_device);
    dxvk_device->lpVtbl->TransitionSurfaceLayout(dxvk_device, dxvk_surface, &subresources,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, image_layout);

    dxvk_device->lpVtbl->Release(dxvk_device);
    dxvk_surface->lpVtbl->Release(dxvk_surface);
    return err;
}
#endif

static EVRCompositorError ivrcompositor_submit_vulkan(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, struct compositor_data *user_data)
{
    struct VRVulkanTextureData_t our_vkdata, our_depth_vkdata, *their_vkdata;
    VRTextureWithPoseAndDepth_t our_both;
    VRTextureWithDepth_t our_depth;
    VRTextureWithPose_t our_pose;
    Texture_t our_texture;
    void *tex;

    load_vk_unwrappers();

    their_vkdata = texture->handle;

    our_vkdata = *their_vkdata;
    our_vkdata.m_pDevice = get_native_VkDevice(our_vkdata.m_pDevice);
    our_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_vkdata.m_pPhysicalDevice);
    our_vkdata.m_pInstance = get_native_VkInstance(our_vkdata.m_pInstance);
    our_vkdata.m_pQueue = get_native_VkQueue(our_vkdata.m_pQueue);

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

            their_vkdata = (struct VRVulkanTextureData_t *)our_depth.depth.handle;
            our_depth_vkdata = *their_vkdata;
            our_depth_vkdata.m_pDevice = get_native_VkDevice(our_depth_vkdata.m_pDevice);
            our_depth_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_depth_vkdata.m_pPhysicalDevice);
            our_depth_vkdata.m_pInstance = get_native_VkInstance(our_depth_vkdata.m_pInstance);
            our_depth_vkdata.m_pQueue = get_native_VkQueue(our_depth_vkdata.m_pQueue);

            our_depth.depth.handle = &our_depth_vkdata;

            tex = &our_depth;
            break;

        case Submit_TextureWithPose | Submit_TextureWithDepth:
            our_both = *(VRTextureWithPoseAndDepth_t *)texture;

            our_both.texture.handle = &our_vkdata;

            their_vkdata = our_both.depth.handle;
            our_depth_vkdata = *their_vkdata;
            our_depth_vkdata.m_pDevice = get_native_VkDevice(our_depth_vkdata.m_pDevice);
            our_depth_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_depth_vkdata.m_pPhysicalDevice);
            our_depth_vkdata.m_pInstance = get_native_VkInstance(our_depth_vkdata.m_pInstance);
            our_depth_vkdata.m_pQueue = get_native_VkQueue(our_depth_vkdata.m_pQueue);

            our_both.depth.handle = &our_depth_vkdata;

            tex = &our_both;
            break;
    }

    return cpp_func(linux_side, eye, tex, bounds, flags);
}

EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, struct compositor_data *user_data)
{
    IWineD3D11Texture2D *wine_texture;
    IUnknown *texture_iface;
    HRESULT hr;

    TRACE("%p, %#x, %p, %p, %#x\n", linux_side, eye, texture, bounds, flags);

    switch (texture->eType)
    {
        case TextureType_DirectX:
        {
            TRACE("D3D11\n");

            texture_iface = texture->handle;

            if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface(texture_iface,
                    &IID_IWineD3D11Texture2D, (void **)&wine_texture)))
            {
                return ivrcompositor_submit_wined3d(cpp_func, linux_side,
                        eye, texture, bounds, flags, version, user_data, wine_texture);
            }

#ifdef VRCLIENT_HAVE_DXVK
            {
                IDXGIVkInteropSurface *dxvk_surface;

                if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface(texture_iface,
                        &IID_IDXGIVkInteropSurface, (void **)&dxvk_surface)))
                {
                    return ivrcompositor_submit_dxvk(cpp_func, linux_side,
                            eye, texture, bounds, flags, version, user_data, dxvk_surface);
                }
            }
#endif

            ERR("Invalid D3D11 texture %p.\n", texture);
            return cpp_func(linux_side, eye, texture, bounds, flags);
        }

        case TextureType_Vulkan:
            return ivrcompositor_submit_vulkan(cpp_func, linux_side,
                    eye, texture, bounds, flags, version, user_data);

        default:
            return cpp_func(linux_side, eye, texture, bounds, flags);
    }
}

struct post_present_handoff_data
{
    void *linux_side;
    void (*post_present_handoff)(void *linux_side);
};

static CDECL void d3d11_post_present_handoff_callback(const void *data, unsigned int data_size)
{
    const struct post_present_handoff_data *callback_data = data;

    TRACE("data {%p, %u}\n", data, data_size);

    callback_data->post_present_handoff(callback_data->linux_side);
}

void ivrcompositor_post_present_handoff(void (*cpp_func)(void *),
        void *linux_side, unsigned int version, struct compositor_data *user_data)
{
    struct post_present_handoff_data data;
    IWineD3D11Device *wined3d_device;

    TRACE("%p\n", linux_side);

    if ((wined3d_device = user_data->wined3d_device))
    {
        TRACE("wined3d device %p\n", wined3d_device);

        data.linux_side = linux_side;
        data.post_present_handoff = cpp_func;
        wined3d_device->lpVtbl->run_on_command_stream(wined3d_device,
                d3d11_post_present_handoff_callback, &data, sizeof(data));
        return;
    }

#ifdef VRCLIENT_HAVE_DXVK
    if (user_data->dxvk_device)
        user_data->dxvk_device->lpVtbl->LockSubmissionQueue(user_data->dxvk_device);
#endif

    cpp_func(linux_side);

#ifdef VRCLIENT_HAVE_DXVK
    if (user_data->dxvk_device)
        user_data->dxvk_device->lpVtbl->ReleaseSubmissionQueue(user_data->dxvk_device);
#endif
}

struct explicit_timing_data
{
    void *linux_side;
    unsigned int version;
};

static CDECL void d3d11_explicit_timing_callback(const void *data, unsigned int data_size)
{
    const struct explicit_timing_data *callback_data = data;
    EVRCompositorError error;

    TRACE("data {%p, %u}\n", data, data_size);

    switch (callback_data->version)
    {
        case 21:
            error = cppIVRCompositor_IVRCompositor_021_SubmitExplicitTimingData(callback_data->linux_side);
            break;
        case 22:
            error = cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(callback_data->linux_side);
            break;
        default:
            FIXME("Unhandled version %u.\n", callback_data->version);
            break;
    }

    if (error)
        ERR("error %#x\n", error);
}

EVRCompositorError ivrcompositor_wait_get_poses(
        EVRCompositorError (cpp_func)(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t),
        void *linux_side, TrackedDevicePose_t *render_poses, uint32_t render_pose_count,
        TrackedDevicePose_t *game_poses, uint32_t game_pose_count,
        unsigned int version, struct compositor_data *user_data)
{
    struct explicit_timing_data data;
    IWineD3D11Device *wined3d_device;
    EVRCompositorError r;

    TRACE("%p, %p, %u, %p, %u\n", linux_side, render_poses, render_pose_count, game_poses, game_pose_count);

#ifdef VRCLIENT_HAVE_DXVK
    if (user_data->dxvk_device)
        user_data->dxvk_device->lpVtbl->LockSubmissionQueue(user_data->dxvk_device);
#endif

    r = cpp_func(linux_side, render_poses, render_pose_count, game_poses, game_pose_count);

#ifdef VRCLIENT_HAVE_DXVK
    if (user_data->dxvk_device)
        user_data->dxvk_device->lpVtbl->ReleaseSubmissionQueue(user_data->dxvk_device);
#endif

    if ((wined3d_device = user_data->wined3d_device))
    {
        TRACE("wined3d device %p.\n", wined3d_device);

        /* We need to call IVRCompositor::SubmitExplicitTimingData() before the
         * first flush of the frame.
         *
         * Sending IVRCompositor::SubmitExplicitTimingData() to the command
         * stream immediately after IVRCompositor::WaitGetPoses() seems
         * reasonable.
         */
        if (version == 21 || version == 22)
        {
            data.linux_side = linux_side;
            data.version = version;
            wined3d_device->lpVtbl->run_on_command_stream(wined3d_device,
                    d3d11_explicit_timing_callback, &data, sizeof(data));
        }
    }

    return r;
}

uint32_t ivrcompositor_get_vulkan_device_extensions_required(
        uint32_t (*cpp_func)(void *, VkPhysicalDevice_T *, char *, uint32_t),
        void *linux_side, VkPhysicalDevice_T *phys_dev, char *value, uint32_t bufsize,
        unsigned int version, struct compositor_data *user_data)
{
    load_vk_unwrappers();

    phys_dev = get_native_VkPhysicalDevice(phys_dev);

    return cpp_func(linux_side, phys_dev, value, bufsize);
}

struct winRenderModel_TextureMap_t_1015 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t *rubTextureMapData;
}  __attribute__ ((ms_struct));

static EVRRenderModelError load_into_texture_d3d11(ID3D11Texture2D *texture,
        const struct winRenderModel_TextureMap_t_1015 *data)
{
    D3D11_TEXTURE2D_DESC texture_desc;
    ID3D11DeviceContext *context;
    ID3D11Device *device;

    texture->lpVtbl->GetDesc(texture, &texture_desc);

    TRACE("Format %#x, width %u, height %u.\n",
            texture_desc.Format, texture_desc.Width, texture_desc.Height);
    TRACE("Array size %u, miplevels %u.\n",
            texture_desc.ArraySize, texture_desc.MipLevels);

    if (texture_desc.Format != DXGI_FORMAT_R8G8B8A8_UNORM_SRGB)
    {
        FIXME("Unexpected format %#x.\n", texture_desc.Format);
        return VRRenderModelError_NotSupported;
    }
    if (texture_desc.Width != data->unWidth)
    {
        FIXME("Unexpected width %u.\n", texture_desc.Width);
        return VRRenderModelError_NotSupported;
    }
    if (texture_desc.Height != data->unHeight)
    {
        FIXME("Unexpected height %u.\n", texture_desc.Height);
        return VRRenderModelError_NotSupported;
    }

    texture->lpVtbl->GetDevice(texture, &device);
    device->lpVtbl->GetImmediateContext(device, &context);
    device->lpVtbl->Release(device);

    context->lpVtbl->UpdateSubresource(context, (ID3D11Resource *)texture,
            0, NULL, data->rubTextureMapData, data->unWidth * 4 * sizeof(uint8_t), 0);

    context->lpVtbl->Release(context);
    return VRRenderModelError_None;
}

EVRRenderModelError ivrrendermodels_load_into_texture_d3d11_async(
        EVRRenderModelError (*cpp_func)(void *, TextureID_t, void *),
        void *linux_side, TextureID_t texture_id, void *dst_texture, unsigned int version)
{
    struct winRenderModel_TextureMap_t_1015 *texture_map;
    IUnknown *unk = dst_texture;
    EVRRenderModelError error;
    ID3D11Texture2D *texture;

    switch(version){
    case 5:
        error = cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(linux_side, texture_id, &texture_map);
        break;
    case 6:
        error = cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async(linux_side, texture_id, (struct winRenderModel_TextureMap_t_1017 **)&texture_map);
        break;
    }
    if (error == VRRenderModelError_Loading)
    {
        TRACE("Loading.\n");
        return error;
    }
    if (error != VRRenderModelError_None)
    {
        WARN("Failed to load texture %#x.\n", error);
        return error;
    }

    if (SUCCEEDED(unk->lpVtbl->QueryInterface(unk, &IID_ID3D11Texture2D, (void **)&texture)))
    {
        error = load_into_texture_d3d11(texture, texture_map);
        texture->lpVtbl->Release(texture);
    }
    else
    {
        FIXME("Expected 2D texture.\n");
        error = VRRenderModelError_NotSupported;
    }

    switch(version){
    case 5:
        cppIVRRenderModels_IVRRenderModels_005_FreeTexture(linux_side, texture_map);
        break;
    case 6:
        cppIVRRenderModels_IVRRenderModels_006_FreeTexture(linux_side, (struct winRenderModel_TextureMap_t_1017 *)texture_map);
        break;
    }
    return error;
}

void destroy_compositor_data(struct compositor_data *data)
{
    IWineD3D11Device *wined3d_device;

    TRACE("%p\n", data);

    if ((wined3d_device = data->wined3d_device))
    {
        TRACE("Waiting for device %p\n", wined3d_device);

        wined3d_device->lpVtbl->wait_idle(wined3d_device);
    }
}
