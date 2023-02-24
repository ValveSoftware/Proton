#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#define __USE_GNU
#include <dlfcn.h>
#include <limits.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "winternl.h"
#include "wine/debug.h"

#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "initguid.h"

#define COBJMACROS
#include "d3d11_4.h"

#include "dxvk-interop.h"

#include "flatapi.h"

#include "cppIVRClientCore_IVRClientCore_003.h"
#include "cppIVRCompositor_IVRCompositor_021.h"
#include "cppIVRCompositor_IVRCompositor_022.h"

/* 0918 is binary compatible with 1015 */
typedef struct winRenderModel_t_0918 winRenderModel_t_0918;
typedef struct winRenderModel_TextureMap_t_0918 winRenderModel_TextureMap_t_0918;
#include "cppIVRRenderModels_IVRRenderModels_004.h"

typedef struct winRenderModel_t_1015 winRenderModel_t_1015;
typedef struct winRenderModel_TextureMap_t_1015 winRenderModel_TextureMap_t_1015;
#include "cppIVRRenderModels_IVRRenderModels_005.h"

/* this is converted to 1237 during load_linux_texture_map, so ensure new
 * structure is compatible before updating this number */
typedef struct winRenderModel_t_1237 winRenderModel_t_1237;
typedef struct winRenderModel_TextureMap_t_1237 winRenderModel_TextureMap_t_1237;
#include "cppIVRRenderModels_IVRRenderModels_006.h"

#include "wine/unixlib.h"

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static void *vrclient_lib;
static struct
{
    ID3D11Device *d3d11_device;
    IDXGIVkInteropDevice *dxvk_device;
    BOOL d3d11_explicit_handoff, handoff_called;
    void *client_core_linux_side;

#ifndef __x86_64__
/* Digital action state change fixup hack. */
    struct
    {
        VRActionHandle_t action;
        VRInputValueHandle_t origin;
        LARGE_INTEGER update_qpf_time;
        BOOL previous_state;
    }
    digital_actions_state[128];
    unsigned int digital_action_count;
    LARGE_INTEGER qpf_freq;
#endif
}
compositor_data;

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;

        case DLL_PROCESS_DETACH:
            if (vrclient_lib)
            {
                if (compositor_data.client_core_linux_side)
                {
                    cppIVRClientCore_IVRClientCore_003_Cleanup(compositor_data.client_core_linux_side);
                    compositor_data.client_core_linux_side = NULL;
                }
                dlclose(vrclient_lib);
                vrclient_lib = NULL;
            }
            break;
    }

    return TRUE;
}

/* returns the number of bytes written to dst, not including the NUL terminator */
unsigned int vrclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32_t dst_bytes)
{
    WCHAR *dosW;
    uint32_t r;

    if(!dst || !dst_bytes)
        return 0;

    if(!src || !api_result){
        *dst = 0;
        return 0;
    }

    dosW = wine_get_dos_file_name(src);
    *dst = 0;

    if(!dosW){
        WARN("Unable to convert unix filename to DOS: %s\n", src);
        return 0;
    }

    r = WideCharToMultiByte(CP_ACP, 0, dosW, -1, dst, dst_bytes,
            NULL, NULL);

    HeapFree(GetProcessHeap(), 0, dosW);

    return r == 0 ? 0 : r - 1;
}

#define IS_ABSOLUTE(x) (*x == '/' || *x == '\\' || (*x && *(x + 1) == ':'))

/* returns non-zero on success, zero on failure */
bool vrclient_dos_path_to_unix_path(const char *src, char *dst)
{
    *dst = 0;

    if(!src || !*src)
        return 0;

    if(IS_ABSOLUTE(src)){
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX];
        char *unix_path;
        uint32_t r;

        r = MultiByteToWideChar(CP_UNIXCP, 0, src, -1, srcW, PATH_MAX);
        if(r == 0)
            return 0;

        unix_path = wine_get_unix_file_name(srcW);
        if(!unix_path){
            WARN("Unable to convert DOS filename to unix: %s\n", src);
            return 0;
        }

        if (!realpath(unix_path, dst))
        {
            ERR("Could not get real path for %s.\n", unix_path);
            strncpy(dst, unix_path, PATH_MAX);
        }

        HeapFree(GetProcessHeap(), 0, unix_path);
    }else{
        /* relative path, just fix up backslashes */
        const char *s;
        char *d;

        for(s = src, d = dst; *src; ++s, ++d){
            if(*s == '\\')
                *d = '/';
            else
                *d = *s;
        }

        *d = 0;
    }

    return 1;
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

static void *(*vrclient_HmdSystemFactory)(const char *name, int *return_code);
static void *(*vrclient_VRClientCoreFactory)(const char *name, int *return_code);

static int load_vrclient(void)
{
    WCHAR pathW[PATH_MAX];
    char *pathU;
    DWORD sz;

#ifdef _WIN64
    static const char append_path[] = "/bin/linux64/vrclient.so";
#else
    static const char append_path[] = "/bin/vrclient.so";
#endif

    if(vrclient_lib)
        return 1;

    /* PROTON_VR_RUNTIME is provided by the proton setup script */
    if(!GetEnvironmentVariableW(L"PROTON_VR_RUNTIME", pathW, ARRAY_SIZE(pathW)))
    {
        DWORD type, size;
        LSTATUS status;
        HKEY vr_key;

        if ((status = RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Wine\\VR", 0, KEY_READ, &vr_key)))
        {
            WINE_WARN("Could not create key, status %#x.\n", status);
            return 0;
        }

        size = sizeof(pathW);
        if ((status = RegQueryValueExW(vr_key, L"PROTON_VR_RUNTIME", NULL, &type, (BYTE *)pathW, &size)))
        {
            WINE_WARN("Could not query value, status %#x.\n", status);
            RegCloseKey(vr_key);
            return 0;
        }
        if (type != REG_SZ)
        {
            WINE_ERR("Unexpected value type %#x.\n", type);
            RegCloseKey(vr_key);
            return 0;
        }
        RegCloseKey(vr_key);
    }

    sz = WideCharToMultiByte(CP_UNIXCP, 0, pathW, -1, NULL, 0, NULL, NULL);
    if(!sz)
    {
        ERR("Can't convert path to unixcp! %s\n", wine_dbgstr_w(pathW));
        return 0;
    }

    pathU = HeapAlloc(GetProcessHeap(), 0, sz + sizeof(append_path));

    sz = WideCharToMultiByte(CP_UNIXCP, 0, pathW, -1, pathU, sz, NULL, NULL);
    if(!sz)
    {
        ERR("Can't convert path to unixcp! %s\n", wine_dbgstr_w(pathW));
        HeapFree(GetProcessHeap(), 0, pathU);
        return 0;
    }

    strcat(pathU, append_path);

    TRACE("got openvr runtime path: %s\n", pathU);

    vrclient_lib = dlopen(pathU, RTLD_NOW);
    if(!vrclient_lib){
        TRACE("unable to load vrclient.so\n");
        HeapFree(GetProcessHeap(), 0, pathU);
        return 0;
    }

    vrclient_HmdSystemFactory = dlsym(vrclient_lib, "HmdSystemFactory");
    if(!vrclient_HmdSystemFactory){
        ERR("unable to load HmdSystemFactory method\n");
        HeapFree(GetProcessHeap(), 0, pathU);
        return 0;
    }

    vrclient_VRClientCoreFactory = dlsym(vrclient_lib, "VRClientCoreFactory");
    if(!vrclient_VRClientCoreFactory){
        ERR("unable to load VRClientCoreFactory method\n");
        HeapFree(GetProcessHeap(), 0, pathU);
        return 0;
    }

    HeapFree(GetProcessHeap(), 0, pathU);
    return 1;
}

void *CDECL HmdSystemFactory(const char *name, int *return_code)
{
    TRACE("name: %s, return_code: %p\n", name, return_code);

    if(!load_vrclient())
        return NULL;

    return create_win_interface(name, vrclient_HmdSystemFactory(name, return_code));
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

static void *get_winevulkan_unix_lib_handle(HMODULE hvulkan)
{
    unixlib_handle_t unix_funcs;
    NTSTATUS status;
    Dl_info info;

    status = NtQueryVirtualMemory(GetCurrentProcess(), hvulkan, (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/,
            &unix_funcs, sizeof(unix_funcs), NULL);
    if (status)
    {
        WINE_ERR("NtQueryVirtualMemory status %#x.\n", (int)status);
        return NULL;
    }
    if (!dladdr((void *)(ULONG_PTR)unix_funcs, &info))
    {
        WINE_ERR("dladdr failed.\n");
        return NULL;
    }
    WINE_TRACE("path %s.\n", info.dli_fname);
    return dlopen(info.dli_fname, RTLD_NOW);
}

static void load_vk_unwrappers(void)
{
    static HMODULE h = NULL;
    void *unix_handle;

    if(h)
        /* already loaded */
        return;

    h = LoadLibraryA("winevulkan");
    if(!h){
        ERR("unable to load winevulkan\n");
        return;
    }

    if (!(unix_handle = get_winevulkan_unix_lib_handle(h)))
    {
        ERR("Unable to open winevulkan.so.\n");
        return;
    }

#define L(name) \
    if (!(name = dlsym(unix_handle, "__wine_"#name))) \
    {\
        ERR("%s not found.\n", #name);\
        dlclose(unix_handle);\
        return;\
    }

    L(get_native_VkDevice);
    L(get_native_VkInstance);
    L(get_native_VkPhysicalDevice);
    L(get_wrapped_VkPhysicalDevice);
    L(get_native_VkQueue);
#undef L

    dlclose(unix_handle);
}

static bool is_hmd_present_reg(void)
{
    DWORD type, value, wait_status, size;
    DWORD is_hmd_present = 0;
    LSTATUS status;
    HANDLE event;
    HKEY vr_key;

    if ((status = RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Wine\\VR", 0, KEY_READ, &vr_key)))
    {
        WINE_ERR("Could not create key, status %#x.\n", status);
        return FALSE;
    }

    size = sizeof(value);
    if ((status = RegQueryValueExA(vr_key, "state", NULL, &type, (BYTE *)&value, &size)))
    {
        WINE_ERR("Could not query value, status %#x.\n", status);
        RegCloseKey(vr_key);
        return FALSE;
    }
    if (type != REG_DWORD)
    {
        WINE_ERR("Unexpected value type %#x.\n", type);
        RegCloseKey(vr_key);
        return FALSE;
    }

    if (value)
    {
        RegCloseKey(vr_key);
        return value == 1;
    }

    event = CreateEventA( NULL, FALSE, FALSE, NULL );
    while (1)
    {
        if (RegNotifyChangeKeyValue(vr_key, FALSE, REG_NOTIFY_CHANGE_LAST_SET, event, TRUE))
        {
            WINE_ERR("Error registering registry change notification.\n");
            goto done;
        }
        size = sizeof(value);
        if ((status = RegQueryValueExA(vr_key, "state", NULL, &type, (BYTE *)&value, &size)))
        {
            WINE_ERR("Could not query value, status %#x.\n", status);
            goto done;
        }
        if (value)
            break;
        while ((wait_status = WaitForSingleObject(event, 1000)) == WAIT_TIMEOUT)
            WINE_ERR("VR state wait timeout.\n");

        if (wait_status != WAIT_OBJECT_0)
        {
            WINE_ERR("Got unexpected wait status %#x.\n", wait_status);
            break;
        }
    }

    if (value != 1)
        goto done;

    size = sizeof(is_hmd_present);
    if ((status = RegQueryValueExA(vr_key, "is_hmd_present", NULL, &type, (BYTE *)&is_hmd_present, &size)))
        WINE_ERR("Could not query is_hmd_present value, status %#x.\n", status);

done:
    CloseHandle(event);
    RegCloseKey(vr_key);
    return is_hmd_present;
}

bool ivrclientcore_is_hmd_present(bool (*cpp_func)(void *), void *linux_side, unsigned int version,
        struct client_core_data *user_data)
{
    TRACE("linux_side %p, compositor_data.client_core_linux_side %p.\n",
            linux_side, compositor_data.client_core_linux_side);

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.client_core_linux_side || !is_hmd_present_reg())
        return cpp_func(linux_side);

    return TRUE;
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
        WARN("error %#x\n", error);
    return error;
}

EVRInitError ivrclientcore_init(EVRInitError (*cpp_func)(void *, EVRApplicationType, const char *),
        void *linux_side, EVRApplicationType application_type, const char *startup_info,
        unsigned int version, struct client_core_data *user_data)
{
    char *startup_info_converted;
    EVRInitError error;

    TRACE("%p, %#x, %p\n", linux_side, application_type, startup_info);

    startup_info_converted = json_convert_startup_info(startup_info);
    InitializeCriticalSection(&user_data->critical_section);

    error = cpp_func(linux_side, application_type, startup_info_converted
            ? startup_info_converted : startup_info);

    free(startup_info_converted);

    if (error)
        WARN("error %#x\n", error);
    else
        compositor_data.client_core_linux_side = linux_side;

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

static void destroy_compositor_data(void)
{
    TRACE("Destroying compositor data.\n");
    memset(&compositor_data, 0, sizeof(compositor_data));
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

    destroy_compositor_data();
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
        WARN("error %#x\n", error);
}

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, void *texture, Compositor_TextureBounds *bounds,
        unsigned int version)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, void *texture, VRTextureBounds_t *bounds,
        unsigned int version)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture, VRTextureBounds_t *bounds,
        unsigned int version)
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
        unsigned int version)
{
    TRACE("%p, %#x, %#x, %p, %p, %#x\n", linux_side, eye, api, texture, bounds, flags);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API!\n");

    return cpp_func(linux_side, eye, api, texture, bounds, flags);
}

static Texture_t vrclient_translate_texture_dxvk(Texture_t *texture, struct VRVulkanTextureData_t *vkdata,
        IDXGIVkInteropSurface *dxvk_surface, IDXGIVkInteropDevice **p_dxvk_device, VkImageLayout *image_layout,
        VkImageCreateInfo *image_info)
{
    struct Texture_t vktexture;
    VkImage image_handle;

    dxvk_surface->lpVtbl->GetDevice(dxvk_surface, p_dxvk_device);

    (*p_dxvk_device)->lpVtbl->GetVulkanHandles(*p_dxvk_device, &vkdata->m_pInstance,
            &vkdata->m_pPhysicalDevice, &vkdata->m_pDevice);

    (*p_dxvk_device)->lpVtbl->GetSubmissionQueue(*p_dxvk_device, &vkdata->m_pQueue, &vkdata->m_nQueueFamilyIndex);

    image_info->sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info->pNext = NULL;

    dxvk_surface->lpVtbl->GetVulkanImageInfo(dxvk_surface, &image_handle, image_layout, image_info);

    load_vk_unwrappers();

    vkdata->m_nImage = (uint64_t)image_handle;
    vkdata->m_pDevice = get_native_VkDevice(vkdata->m_pDevice);
    vkdata->m_pPhysicalDevice = get_native_VkPhysicalDevice(vkdata->m_pPhysicalDevice);
    vkdata->m_pInstance = get_native_VkInstance(vkdata->m_pInstance);
    vkdata->m_pQueue = get_native_VkQueue(vkdata->m_pQueue);
    vkdata->m_nWidth = image_info->extent.width;
    vkdata->m_nHeight = image_info->extent.height;
    vkdata->m_nFormat = image_info->format;
    vkdata->m_nSampleCount = image_info->samples;

    vktexture = *texture;
    vktexture.handle = vkdata;
    vktexture.eType = TextureType_Vulkan;

    return vktexture;
}

static EVROverlayError ivroverlay_set_overlay_texture_dxvk(
                EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, Texture_t *),
                void *linux_side, VROverlayHandle_t overlayHandle, Texture_t *texture,
                unsigned int version, IDXGIVkInteropSurface *dxvk_surface)
{
    struct VRVulkanTextureData_t vkdata;
    IDXGIVkInteropDevice *dxvk_device;
    struct Texture_t vktexture;

    VkImageLayout image_layout;
    VkImageCreateInfo image_info;
    VkImageSubresourceRange subresources;

    EVRCompositorError err;

    vktexture = vrclient_translate_texture_dxvk(texture, &vkdata, dxvk_surface, &dxvk_device, &image_layout, &image_info);

    subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    subresources.baseMipLevel = 0;
    subresources.levelCount = image_info.mipLevels;
    subresources.baseArrayLayer = 0;
    subresources.layerCount = image_info.arrayLayers;

    dxvk_device->lpVtbl->TransitionSurfaceLayout(dxvk_device, dxvk_surface, &subresources,
            image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    dxvk_device->lpVtbl->FlushRenderingCommands(dxvk_device);
    dxvk_device->lpVtbl->LockSubmissionQueue(dxvk_device);

    err = cpp_func(linux_side, overlayHandle, &vktexture);

    dxvk_device->lpVtbl->ReleaseSubmissionQueue(dxvk_device);
    dxvk_device->lpVtbl->TransitionSurfaceLayout(dxvk_device, dxvk_surface, &subresources,
            VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, image_layout);

    dxvk_device->lpVtbl->Release(dxvk_device);
    dxvk_surface->lpVtbl->Release(dxvk_surface);
    return err;
}

static EVRCompositorError ivrcompositor_submit_dxvk(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version, IDXGIVkInteropSurface *dxvk_surface)
{
    static const EVRSubmitFlags supported_flags = Submit_LensDistortionAlreadyApplied | Submit_FrameDiscontinuty;
    struct VRVulkanTextureArrayData_t vkdata;
    IDXGIVkInteropDevice *dxvk_device;
    struct Texture_t vktexture;

    VkImageLayout image_layout;
    VkImageCreateInfo image_info;
    VkImageSubresourceRange subresources;

    EVRCompositorError err;

    vktexture = vrclient_translate_texture_dxvk(texture, &vkdata.t, dxvk_surface, &dxvk_device, &image_layout, &image_info);

    compositor_data.dxvk_device = dxvk_device;

    if (flags & ~supported_flags)
        FIXME("Unhandled flags %#x.\n", flags);

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

static EVROverlayError ivroverlay_set_overlay_texture_vulkan(
                EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, Texture_t *),
                void *linux_side, VROverlayHandle_t overlay_handle, Texture_t *texture,
                unsigned int version)
{
    struct VRVulkanTextureData_t our_vkdata, *their_vkdata;
    Texture_t our_texture;

    load_vk_unwrappers();

    their_vkdata = texture->handle;

    our_vkdata = *their_vkdata;
    our_vkdata.m_pDevice = get_native_VkDevice(our_vkdata.m_pDevice);
    our_vkdata.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_vkdata.m_pPhysicalDevice);
    our_vkdata.m_pInstance = get_native_VkInstance(our_vkdata.m_pInstance);
    our_vkdata.m_pQueue = get_native_VkQueue(our_vkdata.m_pQueue);

    our_texture = *texture;
    our_texture.handle = &our_vkdata;

    return cpp_func(linux_side, overlay_handle, &our_texture);
}

static EVRCompositorError ivrcompositor_submit_vulkan(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version)
{
    struct VRVulkanTextureData_t our_depth_vkdata, *their_vkdata;
    struct VRVulkanTextureArrayData_t our_vkdata;
    VRTextureWithPoseAndDepth_t our_both;
    VRTextureWithDepth_t our_depth;
    VRTextureWithPose_t our_pose;
    Texture_t our_texture;
    void *tex;

    load_vk_unwrappers();

    their_vkdata = texture->handle;

    memcpy(&our_vkdata, their_vkdata, flags & Submit_VulkanTextureWithArrayData
            ? sizeof(struct VRVulkanTextureArrayData_t) : sizeof(struct VRVulkanTextureData_t));

    our_vkdata.t.m_pDevice = get_native_VkDevice(our_vkdata.t.m_pDevice);
    our_vkdata.t.m_pPhysicalDevice = get_native_VkPhysicalDevice(our_vkdata.t.m_pPhysicalDevice);
    our_vkdata.t.m_pInstance = get_native_VkInstance(our_vkdata.t.m_pInstance);
    our_vkdata.t.m_pQueue = get_native_VkQueue(our_vkdata.t.m_pQueue);

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

EVROverlayError ivroverlay_set_overlay_texture(
                EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, Texture_t *),
                void *linux_side, VROverlayHandle_t overlayHandle, Texture_t *texture,
                unsigned int version)
{
    IUnknown *texture_iface;
    HRESULT hr;

    TRACE("%p, overlayHandle = %#x, texture = %p\n", linux_side, overlayHandle, texture);

    switch (texture->eType)
    {
        case TextureType_DirectX:
            TRACE("D3D11\n");

            if (!texture->handle) {
                WARN("No D3D11 texture %p.\n", texture);
                return cpp_func(linux_side, overlayHandle, texture);
            }

            texture_iface = texture->handle;

            IDXGIVkInteropSurface *dxvk_surface;
            if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface(texture_iface, &IID_IDXGIVkInteropSurface, (void **)&dxvk_surface))) {
                return ivroverlay_set_overlay_texture_dxvk(cpp_func, linux_side, overlayHandle, texture, version, dxvk_surface);
            }

            WARN("Invalid D3D11 texture %p.\n", texture);
            return cpp_func(linux_side, overlayHandle, texture);
        case TextureType_Vulkan:
            TRACE("Vulkan\n");
            return ivroverlay_set_overlay_texture_vulkan(cpp_func, linux_side, overlayHandle, texture, version);
        default:
            return cpp_func(linux_side, overlayHandle, texture);
    }
}

EVROverlayError ivroverlay_005_set_overlay_texture(
                EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, GraphicsAPIConvention, void *),
                void *linux_side, VROverlayHandle_t overlayHandle, GraphicsAPIConvention api, void *texture,
                unsigned int version)
{
    /* hopefully no one actually uses this old interface... Vulkan support
     * wasn't added until later; how can we pass in a DirectX texture? */
    FIXME("unimplemented!\n");
    return VROverlayError_InvalidHandle;
}

EVROverlayError ivroverlay_001_set_overlay_texture(
                EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, void *),
                void *linux_side, VROverlayHandle_t overlayHandle, void *texture,
                unsigned int version)
{
    /* probably no one actually uses this old interface... */
    FIXME("unimplemented!\n");
    return VROverlayError_InvalidHandle;
}

EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version)
{
    IDXGIVkInteropSurface *dxvk_surface;
    IUnknown *texture_iface;
    HRESULT hr;

    TRACE("%p, %#x, %p, %p, %#x\n", linux_side, eye, texture, bounds, flags);

    compositor_data.handoff_called = FALSE;

    switch (texture->eType)
    {
        case TextureType_DirectX:
        {
            TRACE("D3D11\n");

            if (!texture->handle) {
                WARN("No D3D11 texture %p.\n", texture);
                return cpp_func(linux_side, eye, texture, bounds, flags);
            }

            texture_iface = texture->handle;

            if (SUCCEEDED(hr = texture_iface->lpVtbl->QueryInterface(texture_iface,
                    &IID_IDXGIVkInteropSurface, (void **)&dxvk_surface)))
            {
                return ivrcompositor_submit_dxvk(cpp_func, linux_side,
                        eye, texture, bounds, flags, version, dxvk_surface);
            }

            WARN("Invalid D3D11 texture %p.\n", texture);
            return cpp_func(linux_side, eye, texture, bounds, flags);
        }

        case TextureType_Vulkan:
            return ivrcompositor_submit_vulkan(cpp_func, linux_side,
                    eye, texture, bounds, flags, version);

        default:
            return cpp_func(linux_side, eye, texture, bounds, flags);
    }
}

void ivrcompositor_008_set_skybox_override(
        void (*cpp_func)(void *, GraphicsAPIConvention, void *, void *, void *, void *, void *, void *),
        void *linux_side, GraphicsAPIConvention api, void *front, void *back, void *left, void *right, void *top, void *bottom,
        unsigned int version)
{
    TRACE("%p, %#x, %p, %p, %p, %p, %p, %p.\n", linux_side, api, front, back, left, right, top, bottom);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API.\n");

    cpp_func(linux_side, api, front, back, left, right, top, bottom);
}

static EVRCompositorError ivrcompositor_set_skybox_override_d3d11(
        EVRCompositorError (*cpp_func)(void *, Texture_t *textures, uint32_t count),
        void *linux_side, Texture_t *textures, uint32_t count)
{
    struct VRVulkanTextureData_t vkdata[6];
    IDXGIVkInteropSurface *dxvk_surface;
    struct Texture_t vktexture[6];
    EVRCompositorError result;
    unsigned int i;

    for (i = 0; i < count; ++i)
    {
        Texture_t *texture = &textures[i];
        IUnknown *texture_iface;

        if (!texture->handle)
        {
            ERR("No D3D11 texture %p.\n", texture);
            return cpp_func(linux_side, textures, count);
        }
        if (textures[i].eType != TextureType_DirectX)
        {
            FIXME("Mixing texture types is not supported.\n");
            return 0;
        }

        texture_iface = texture->handle;

        if (SUCCEEDED(texture_iface->lpVtbl->QueryInterface(texture_iface,
                &IID_IDXGIVkInteropSurface, (void **)&dxvk_surface)))
        {
            VkImageSubresourceRange subresources;
            IDXGIVkInteropDevice *dxvk_device;
            VkImageCreateInfo image_info;
            VkImageLayout image_layout;

            vktexture[i] = vrclient_translate_texture_dxvk(texture, &vkdata[i], dxvk_surface, &dxvk_device, &image_layout, &image_info);

            if (compositor_data.dxvk_device && dxvk_device != compositor_data.dxvk_device)
            {
                ERR("Invalid dxvk_device %p, previous %p.\n", dxvk_device, compositor_data.dxvk_device);
                dxvk_surface->lpVtbl->Release(dxvk_surface);
                dxvk_device->lpVtbl->Release(dxvk_device);
                return 0;
            }

            compositor_data.dxvk_device = dxvk_device;

            subresources.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            subresources.baseMipLevel = 0;
            subresources.levelCount = image_info.mipLevels;
            subresources.baseArrayLayer = 0;
            subresources.layerCount = image_info.arrayLayers;

            dxvk_device->lpVtbl->TransitionSurfaceLayout(dxvk_device, dxvk_surface, &subresources,
                    image_layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);

            dxvk_surface->lpVtbl->Release(dxvk_surface);
            dxvk_device->lpVtbl->Release(dxvk_device);

            continue;
        }
        FIXME("Unsupported d3d11 texture %p, i %u.\n", texture, i);
        return 0;
    }
    compositor_data.dxvk_device->lpVtbl->FlushRenderingCommands(compositor_data.dxvk_device);
    compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue(compositor_data.dxvk_device);

    result = cpp_func(linux_side, vktexture, count);

    compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue(compositor_data.dxvk_device);

    TRACE("result %u.\n", result);
    return result;
}

EVRCompositorError ivrcompositor_set_skybox_override(
        EVRCompositorError (*cpp_func)(void *, Texture_t *textures, uint32_t count),
        void *linux_side, Texture_t *textures, uint32_t count,
        unsigned int version)
{
    TRACE("cpp_func %p, linux_side %p, textures %p, count %u, version %u.\n",
            cpp_func, linux_side, textures, count, version);

    if (!count || count > 6)
    {
        WARN("Invalid texture count %u.\n", count);
        return cpp_func(linux_side, textures, count);
    }

    if (textures[0].eType == TextureType_DirectX)
        return ivrcompositor_set_skybox_override_d3d11(cpp_func, linux_side, textures, count);

    FIXME("Conversion for type %u is not supported.\n", textures[0].eType);
    return 0;
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
        void *linux_side, unsigned int version)
{
    struct post_present_handoff_data data;

    TRACE("%p\n", linux_side);

    if (compositor_data.dxvk_device)
    {
        compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue(compositor_data.dxvk_device);

        if (!compositor_data.d3d11_explicit_handoff && version >= 21)
        {
            /* PostPresentHandoff can be used with d3d11 without SetExplicitTimingMode
             * (which is Vulkan / d3d12 only), but doing the same with Vulkan results
             * in lockups and crashes. */
            cppIVRCompositor_IVRCompositor_021_SetExplicitTimingMode(linux_side,
                    VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff);
            compositor_data.d3d11_explicit_handoff = TRUE;
        }
    }

    cpp_func(linux_side);

    compositor_data.handoff_called = TRUE;
    if (compositor_data.dxvk_device)
        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue(compositor_data.dxvk_device);
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
        WARN("error %#x\n", error);
}

EVRCompositorError ivrcompositor_wait_get_poses(
        EVRCompositorError (cpp_func)(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t),
        void *linux_side, TrackedDevicePose_t *render_poses, uint32_t render_pose_count,
        TrackedDevicePose_t *game_poses, uint32_t game_pose_count,
        unsigned int version)
{
    struct explicit_timing_data data;
    EVRCompositorError r;

    TRACE("%p, %p, %u, %p, %u\n", linux_side, render_poses, render_pose_count, game_poses, game_pose_count);

    if (compositor_data.dxvk_device)
    {
        compositor_data.dxvk_device->lpVtbl->LockSubmissionQueue(compositor_data.dxvk_device);
        if (compositor_data.d3d11_explicit_handoff && !compositor_data.handoff_called)
        {
            /* Calling handoff after submit is optional for d3d11 but mandatory for Vulkan
             * if explicit timing mode is set. */
            cppIVRCompositor_IVRCompositor_022_PostPresentHandoff(linux_side);
        }
    }

    r = cpp_func(linux_side, render_poses, render_pose_count, game_poses, game_pose_count);

    if (compositor_data.dxvk_device)
    {
        if (compositor_data.d3d11_explicit_handoff)
            cppIVRCompositor_IVRCompositor_022_SubmitExplicitTimingData(linux_side);

        compositor_data.dxvk_device->lpVtbl->ReleaseSubmissionQueue(compositor_data.dxvk_device);
    }

    return r;
}

uint32_t ivrcompositor_get_vulkan_device_extensions_required(
        uint32_t (*cpp_func)(void *, VkPhysicalDevice_T *, char *, uint32_t),
        void *linux_side, VkPhysicalDevice_T *phys_dev, char *value, uint32_t bufsize,
        unsigned int version)
{
    uint32_t ret;

    load_vk_unwrappers();

    phys_dev = get_native_VkPhysicalDevice(phys_dev);

    ret = cpp_func(linux_side, phys_dev, value, bufsize);
    TRACE("ret %u, value %s.\n", ret, value);
    return ret;
}

#pragma pack( push, 8 )
struct winRenderModel_TextureMap_t_0918 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;
}   __attribute__ ((ms_struct));;

struct winRenderModel_TextureMap_t_1015 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;
}  __attribute__ ((ms_struct));

struct winRenderModel_TextureMap_t_1237 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t *rubTextureMapData;
    EVRRenderModelTextureFormat format;
    uint16_t unMipLevels;
}  __attribute__ ((ms_struct));
#pragma pack( pop )

static EVRRenderModelError load_into_texture_d3d11(ID3D11Texture2D *texture,
        const struct winRenderModel_TextureMap_t_1237 *data)
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
    if (data->format)
        FIXME("Unsupported texture map format %d.\n", data->format);
    if (data->unMipLevels)
        FIXME("Unsupported unMipLevels %u.\n", data->unMipLevels);

    texture->lpVtbl->GetDevice(texture, &device);
    device->lpVtbl->GetImmediateContext(device, &context);
    device->lpVtbl->Release(device);

    context->lpVtbl->UpdateSubresource(context, (ID3D11Resource *)texture,
            0, NULL, data->rubTextureMapData, data->unWidth * 4 * sizeof(uint8_t), 0);

    context->lpVtbl->Release(context);
    return VRRenderModelError_None;
}

static EVRRenderModelError load_linux_texture_map(void *linux_side, TextureID_t texture_id,
        struct winRenderModel_TextureMap_t_1237 **texture_map, unsigned int version)
{
    EVRRenderModelError ret;

    switch(version){
    case 4:
    {
        struct winRenderModel_TextureMap_t_0918 *orig_map;
        if ((ret = cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(linux_side, texture_id, &orig_map)))
            return ret;
        *texture_map = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map));
        memcpy(*texture_map, orig_map, sizeof(*orig_map));
        cppIVRRenderModels_IVRRenderModels_004_FreeTexture(linux_side, orig_map);
        return 0;
    }
    case 5:
    {
        struct winRenderModel_TextureMap_t_1015 *orig_map;
        if ((ret = cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(linux_side, texture_id, &orig_map)))
            return ret;
        *texture_map = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map));
        memcpy(*texture_map, orig_map, sizeof(*orig_map));
        cppIVRRenderModels_IVRRenderModels_005_FreeTexture(linux_side, orig_map);
        return 0;
    }
    case 6:
        return cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async(linux_side, texture_id, texture_map);
    }
    FIXME("Unsupported IVRRenderModels version! %u\n", version);
    return VRRenderModelError_NotSupported;
}

static void free_linux_texture_map(void *linux_side,
        struct winRenderModel_TextureMap_t_1237 *texture_map, unsigned int version)
{
    switch(version){
    case 4:
        HeapFree(GetProcessHeap(), 0, texture_map);
        break;
    case 5:
        HeapFree(GetProcessHeap(), 0, texture_map);
        break;
    case 6:
        cppIVRRenderModels_IVRRenderModels_006_FreeTexture(linux_side, texture_map);
        break;
    default:
        FIXME("Unsupported IVRRenderModels version! %u\n", version);
        break;
    }
}

EVRRenderModelError ivrrendermodels_load_texture_d3d11_async(
        EVRRenderModelError (*cpp_func)(void *, TextureID_t, void *, void **),
        void *linux_side, TextureID_t texture_id, void *device,
        void **dst_texture, unsigned int version)
{
    struct winRenderModel_TextureMap_t_1237 *texture_map;
    EVRRenderModelError error;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Device *d3d11_device = device;
    ID3D11Texture2D *texture;
    HRESULT hr;

    error = load_linux_texture_map(linux_side, texture_id, &texture_map, version);
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

    desc.Width = texture_map->unWidth;
    desc.Height = texture_map->unHeight;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
    desc.SampleDesc.Count = 1;
    desc.SampleDesc.Quality = 0;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    desc.CPUAccessFlags = 0;
    desc.MiscFlags = 0;

    hr = d3d11_device->lpVtbl->CreateTexture2D(d3d11_device, &desc, NULL, &texture);
    if (FAILED(hr))
    {
        WARN("Failed to create D3D11 texture %#x\n", hr);
        free_linux_texture_map(linux_side, texture_map, version);
        return VRRenderModelError_InvalidTexture;
    }

    error = load_into_texture_d3d11(texture, texture_map);
    if (error == VRRenderModelError_None)
    {
        *dst_texture = texture;
    }
    else
    {
        texture->lpVtbl->Release(texture);
        *dst_texture = NULL;
    }

    free_linux_texture_map(linux_side, texture_map, version);

    return error;
}

void ivrrendermodels_free_texture_d3d11(
        void (*cpp_func)(void *, void *),
        void *linux_side, void *dst_texture, unsigned int version)
{
    ID3D11Texture2D *d3d11_texture = dst_texture;
    d3d11_texture->lpVtbl->Release(d3d11_texture);
}

EVRRenderModelError ivrrendermodels_load_into_texture_d3d11_async(
        EVRRenderModelError (*cpp_func)(void *, TextureID_t, void *),
        void *linux_side, TextureID_t texture_id, void *dst_texture, unsigned int version)
{
    struct winRenderModel_TextureMap_t_1237 *texture_map;
    IUnknown *unk = dst_texture;
    EVRRenderModelError error;
    ID3D11Texture2D *texture;

    if (!dst_texture)
        return VRRenderModelError_InvalidArg;

    error = load_linux_texture_map(linux_side, texture_id, &texture_map, version);
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

    free_linux_texture_map(linux_side, texture_map, version);

    return error;
}

vrmb_typeb ivrmailbox_undoc3(
        vrmb_typeb (*cpp_func)(void *, vrmb_typea, const char *, const char *),
        void *linux_side, vrmb_typea a, const char *b, const char *c, unsigned int version)
{
    vrmb_typeb r;
    char *converted = json_convert_paths(c);

    r = cpp_func(linux_side, a, b, converted ? converted : c);

    free(converted);

    return r;
}

#pragma pack(push, 8)
struct winInputDigitalActionData_t {
    bool bActive;
    VRInputValueHandle_t activeOrigin;
    bool bState;
    bool bChanged;
    float fUpdateTime;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

EVRInputError ivrinput_get_digital_action_data(
        void *func,
        void *linux_side, VRActionHandle_t action_handle, void *action_data, uint32_t action_data_size,
        VRInputValueHandle_t restrict_to_device, unsigned int version)
{
    EVRInputError (*cpp_func)(void *, VRActionHandle_t, struct winInputDigitalActionData_t *, uint32_t, VRInputValueHandle_t) = func;

#ifdef __x86_64__
    return cpp_func(linux_side, action_handle, action_data, action_data_size, restrict_to_device);
#else
    /* Digital action state change fixup hack. */
    struct winInputDigitalActionData_t *data = action_data;
    LARGE_INTEGER qpf;
    EVRInputError ret;
    unsigned int i;

    ret = cpp_func(linux_side, action_handle, action_data, action_data_size, restrict_to_device);

    TRACE("handle %s, data %p, data_size %u, restrict %s, origin %s, state %#x, changed %#x, ret %u, active %#x.\n",
            wine_dbgstr_longlong(action_handle), action_data, action_data_size,
            wine_dbgstr_longlong(restrict_to_device), wine_dbgstr_longlong(data->activeOrigin),
            data->bState, data->bChanged, ret, data->bActive);

    if (ret)
        return ret;

    if (action_data_size != sizeof(*data))
    {
        WARN("Unexpected action_data_size %u.\n", action_data_size);
        return 0;
    }

    if (!data->bActive)
        return 0;

    if (!compositor_data.qpf_freq.QuadPart)
        QueryPerformanceFrequency(&compositor_data.qpf_freq);
    QueryPerformanceCounter(&qpf);

    for (i = 0; i < compositor_data.digital_action_count; ++i)
    {
        if (compositor_data.digital_actions_state[i].action == action_handle
                && compositor_data.digital_actions_state[i].origin == data->activeOrigin)
        {
            if ((data->bChanged = (!compositor_data.digital_actions_state[i].previous_state != !data->bState)))
            {
                TRACE("action %s (%s) changed to %#x, data->fUpdateTime %f.\n", wine_dbgstr_longlong(action_handle),
                        wine_dbgstr_longlong(restrict_to_device), data->bState, data->fUpdateTime);

                compositor_data.digital_actions_state[i].update_qpf_time = qpf;
                compositor_data.digital_actions_state[i].previous_state = data->bState;
            }
            if (compositor_data.digital_actions_state[i].update_qpf_time.QuadPart)
                data->fUpdateTime = -(float)(qpf.QuadPart
                        - compositor_data.digital_actions_state[i].update_qpf_time.QuadPart)
                        / compositor_data.qpf_freq.QuadPart;

            return 0;
        }
    }

    if (i == ARRAY_SIZE(compositor_data.digital_actions_state))
    {
        static unsigned int once;
        if (!once++)
            WARN("Too many actions.\n");

        return 0;
    }

    compositor_data.digital_actions_state[i].action = action_handle;
    compositor_data.digital_actions_state[i].origin = data->activeOrigin;
    compositor_data.digital_actions_state[i].previous_state = data->bState;
    compositor_data.digital_actions_state[i].update_qpf_time = qpf;
    ++compositor_data.digital_action_count;

    return 0;
#endif
}
