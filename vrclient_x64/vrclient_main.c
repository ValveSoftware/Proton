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
#include "wined3d-interop.h"

#include "cppIVRCompositor_IVRCompositor_021.h"
#include "cppIVRCompositor_IVRCompositor_022.h"

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


#if 0
uint32 vrclient_unix_path_to_dos_path(uint32 api_result, char *inout, uint32 inout_bytes)
{
    WCHAR *converted;
    uint32 r;

    if(api_result == 0)
        return 0;

    converted = wine_get_dos_file_name(inout);
    if(!converted){
        WARN("Unable to convert unix filename to DOS: %s\n", inout);
        *inout = 0;
        return 0;
    }

    r = WideCharToMultiByte(CP_ACP, 0, converted, -1, inout, inout_bytes,
            NULL, NULL);

    HeapFree(GetProcessHeap(), 0, converted);

    if(r > 0)
        return r - 1;

    return 0;
}
#endif

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
    TRACE("%p, %#x\n", linux_side, application_type);
    InitializeCriticalSection(&user_data->critical_section);
    return cpp_func(linux_side, application_type);
}

EVRInitError ivrclientcore_init(EVRInitError (*cpp_func)(void *, EVRApplicationType, const char *),
        void *linux_side, EVRApplicationType application_type, const char *startup_info,
        unsigned int version, struct client_core_data *user_data)
{
    TRACE("%p, %#x, %p\n", linux_side, application_type, startup_info);
    InitializeCriticalSection(&user_data->critical_section);
    return cpp_func(linux_side, application_type, startup_info);
}

void *ivrclientcore_get_generic_interface(void *(*cpp_func)(void *, const char *, EVRInitError *),
        void *linux_side, const char *name_and_version, EVRInitError *error,
        unsigned int version, struct client_core_data *user_data)
{
    struct generic_interface *iface;
    pfn_dtor destructor;
    void *win_object;
    void *object;

    TRACE("%p, %p, %p\n", linux_side, name_and_version, error);

    if (!(object = cpp_func(linux_side, name_and_version, error)))
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
    VRTextureBounds_t bounds;
    EVRSubmitFlags flags;
};

static CDECL void d3d11_texture_callback(unsigned int gl_texture, const void *data, unsigned int data_size)
{
    const struct submit_data *submit_data = data;
    VRCompositorError error = 0;
    VRTextureBounds_t bounds;
    Texture_t texture;

    TRACE("texture %u, data {%p, %u}\n", gl_texture, data, data_size);

    texture = submit_data->texture;
    texture.handle = (void *)(UINT_PTR)gl_texture;
    texture.eType = TextureType_OpenGL;

    /* Textures are upside-down in wined3d. */
    bounds = submit_data->bounds;
    bounds.vMin = submit_data->bounds.vMax;
    bounds.vMax = submit_data->bounds.vMin;

    error = submit_data->submit(submit_data->linux_side, submit_data->eye,
            &texture, &bounds, submit_data->flags);
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

EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, struct compositor_data *user_data)
{
    IWineD3D11Texture2D *wine_texture;
    IWineD3D11Device *wined3d_device;
    struct submit_data submit_data;
    IUnknown *texture_iface;
    ID3D11Device *device;
    HRESULT hr;

    TRACE("%p, %#x, %p, %p, %#x\n", linux_side, eye, texture, bounds, flags);

    switch (texture->eType)
    {
        case TextureType_DirectX:
            TRACE("D3D11\n");

            if (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
            {
                FIXME("Submit with pose or depth is not supported.\n");
                flags &= ~(Submit_TextureWithPose | Submit_TextureWithDepth);
            }

            texture_iface = texture->handle;
            hr = texture_iface->lpVtbl->QueryInterface(texture_iface,
                    &IID_IWineD3D11Texture2D, (void **)&wine_texture);
            if (FAILED(hr))
            {
                ERR("Invalid D3D11 texture %p.\n", texture);
                return cpp_func(linux_side, eye, texture, bounds, flags);
            }

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

                TRACE("Enabling explicit timing mode.\n");
                switch (version)
                {
                    case 21:
                        cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(linux_side,
                                VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff);
                        break;
                    case 22:
                        cppIVRCompositor_IVRCompositor_022_SetExplicitTimingMode(linux_side,
                                VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff);
                        break;
                    default:
                        FIXME("Version %u not supported.\n", version);
                        user_data->wined3d_device = NULL;
                        break;
                }
            }
            device->lpVtbl->Release(device);

            submit_data.linux_side = linux_side;
            submit_data.submit = cpp_func;
            submit_data.eye = eye;
            submit_data.texture = *texture;
            submit_data.bounds = *bounds;
            submit_data.flags = flags;
            wine_texture->lpVtbl->access_gl_texture(wine_texture,
                    d3d11_texture_callback, &submit_data, sizeof(submit_data));

            wine_texture->lpVtbl->Release(wine_texture);

            return 0;

        case TextureType_Vulkan:
        {
            struct VRVulkanTextureData_t our_vkdata, *their_vkdata;
            Texture_t our_texture;

            if (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
            {
                FIXME("Submit with pose or depth is not supported.\n");
                flags &= ~(Submit_TextureWithPose | Submit_TextureWithDepth);
            }

            load_vk_unwrappers();

            their_vkdata = (struct VRVulkanTextureData_t*)texture->handle;

            our_vkdata = *their_vkdata;
            our_vkdata.m_pDevice = get_native_VkDevice(our_vkdata.m_pDevice);
            our_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_vkdata.m_pPhysicalDevice);
            our_vkdata.m_pInstance = get_native_VkInstance(our_vkdata.m_pInstance);
            our_vkdata.m_pQueue = get_native_VkQueue(our_vkdata.m_pQueue);

            our_texture = *texture;
            our_texture.handle = &our_vkdata;

            return cpp_func(linux_side, eye, &our_texture, bounds, flags);
        }

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

    cpp_func(linux_side);
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
            ERR("Unexpected version %#x\n", callback_data->version);
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

    r = cpp_func(linux_side, render_poses, render_pose_count, game_poses, game_pose_count);

    if ((wined3d_device = user_data->wined3d_device))
    {
        TRACE("wined3d device %p\n", wined3d_device);

        /* We need to call IVRCompositor::SubmitExplicitTimingData() before the
         * first flush of the frame.
         *
         * Sending IVRCompositor::SubmitExplicitTimingData() to the command
         * stream immediately after IVRCompositor::WaitGetPoses() seems
         * reasonable.
         */
        data.linux_side = linux_side;
        data.version = version;
        wined3d_device->lpVtbl->run_on_command_stream(wined3d_device,
                d3d11_explicit_timing_callback, &data, sizeof(data));
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
