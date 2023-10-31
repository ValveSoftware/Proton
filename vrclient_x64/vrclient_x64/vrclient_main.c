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

#include "initguid.h"
#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"

#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"
#include "cppIVRClientCore_IVRClientCore_002.h"
#include "cppIVRClientCore_IVRClientCore_003.h"
#include "cppIVRMailbox_IVRMailbox_001.h"

#include "wine/unixlib.h"

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static void *vrclient_lib;
struct compositor_data compositor_data;

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

char *vrclient_dos_to_unix_path( const char *src )
{
    char buffer[4096], *dst = buffer;
    uint32_t len;

    if (!src) return NULL;

    *dst = 0;
    if (!*src) goto done;

    if(IS_ABSOLUTE(src)){
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX];
        char *unix_path;
        uint32_t r;

        r = MultiByteToWideChar(CP_UNIXCP, 0, src, -1, srcW, PATH_MAX);
        if(r == 0)
            return NULL;

        unix_path = wine_get_unix_file_name(srcW);
        if(!unix_path){
            WARN("Unable to convert DOS filename to unix: %s\n", src);
            return NULL;
        }

        if (!realpath(unix_path, dst))
        {
            ERR("Could not get real path for %s.\n", unix_path);
            lstrcpynA(dst, unix_path, PATH_MAX);
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

done:
    len = strlen( buffer );
    if (!(dst = HeapAlloc( GetProcessHeap(), 0, len + 1 ))) return NULL;
    memcpy( dst, buffer, len + 1 );
    return dst;
}

void vrclient_free_path( const char *path )
{
    HeapFree( GetProcessHeap(), 0, (char *)path );
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

typedef void (*pfn_dtor)(struct w_steam_iface *);

static const struct {
    const char *iface_version;
    struct w_steam_iface *(*ctor)(void *);
    void (*dtor)(struct w_steam_iface *);
} constructors[] = {
#include "win_constructors_table.dat"
};

struct w_steam_iface *create_win_interface(const char *name, void *linux_side)
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
    static const WCHAR PROTON_VR_RUNTIME_W[] = {'P','R','O','T','O','N','_','V','R','_','R','U','N','T','I','M','E',0};
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
    if(!GetEnvironmentVariableW(PROTON_VR_RUNTIME_W, pathW, ARRAY_SIZE(pathW)))
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
        if ((status = RegQueryValueExW(vr_key, PROTON_VR_RUNTIME_W, NULL, &type, (BYTE *)pathW, &size)))
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

static VkDevice_T *(WINAPI *p_get_native_VkDevice)( VkDevice_T * );
static VkInstance_T *(WINAPI *p_get_native_VkInstance)( VkInstance_T * );
static VkPhysicalDevice_T *(WINAPI *p_get_native_VkPhysicalDevice)( VkPhysicalDevice_T * );
static VkPhysicalDevice_T *(WINAPI *p_get_wrapped_VkPhysicalDevice)( VkInstance_T *, VkPhysicalDevice_T * );
static VkQueue_T *(WINAPI *p_get_native_VkQueue)( VkQueue_T * );

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

#define L( name )                                                                                  \
    if (!(p_##name = dlsym( unix_handle, "__wine_" #name )))                                       \
    {                                                                                              \
        ERR( "%s not found.\n", #name );                                                           \
        dlclose( unix_handle );                                                                    \
        return;                                                                                    \
    }

    L(get_native_VkDevice);
    L(get_native_VkInstance);
    L(get_native_VkPhysicalDevice);
    L(get_wrapped_VkPhysicalDevice);
    L(get_native_VkQueue);
#undef L

    dlclose(unix_handle);
}

VkDevice_T *get_native_VkDevice( VkDevice_T *device )
{
    load_vk_unwrappers();
    return p_get_native_VkDevice( device );
}

VkInstance_T *get_native_VkInstance( VkInstance_T *instance )
{
    load_vk_unwrappers();
    return p_get_native_VkInstance( instance );
}

VkPhysicalDevice_T *get_native_VkPhysicalDevice( VkPhysicalDevice_T *device )
{
    load_vk_unwrappers();
    return p_get_native_VkPhysicalDevice( device );
}

VkPhysicalDevice_T *get_wrapped_VkPhysicalDevice( VkInstance_T *instance, VkPhysicalDevice_T *device )
{
    load_vk_unwrappers();
    return p_get_wrapped_VkPhysicalDevice( instance, device );
}

VkQueue_T *get_native_VkQueue( VkQueue_T *queue )
{
    load_vk_unwrappers();
    return p_get_native_VkQueue( queue );
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

static void *ivrclientcore_get_generic_interface( void *object, const char *name_and_version, struct client_core_data *user_data )
{
    struct w_steam_iface *win_object;
    struct generic_interface *iface;
    pfn_dtor destructor;

    TRACE( "%p %p\n", object, name_and_version );

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

static void ivrclientcore_cleanup( struct client_core_data *user_data )
{
    struct generic_interface *iface;
    SIZE_T i;

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
}

Texture_t vrclient_translate_texture_dxvk( const Texture_t *texture, struct VRVulkanTextureData_t *vkdata,
                                           IDXGIVkInteropSurface *dxvk_surface, IDXGIVkInteropDevice **p_dxvk_device,
                                           VkImageLayout *image_layout, VkImageCreateInfo *image_info )
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

EVRInitError __thiscall winIVRClientCore_IVRClientCore_002_Init( struct w_steam_iface *_this, EVRApplicationType eApplicationType )
{
    struct cppIVRClientCore_IVRClientCore_002_Init_params params =
    {
        .linux_side = _this->u_iface,
        .eApplicationType = eApplicationType,
    };

    TRACE( "%p\n", _this );

    InitializeCriticalSection( &_this->user_data.critical_section );

    cppIVRClientCore_IVRClientCore_002_Init( &params );
    if (params._ret) WARN( "error %#x\n", params._ret );
    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_002_Cleanup( struct w_steam_iface *_this )
{
    struct cppIVRClientCore_IVRClientCore_002_Cleanup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    cppIVRClientCore_IVRClientCore_002_Cleanup( &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_002_GetGenericInterface( struct w_steam_iface *_this,
                                                                         const char *pchNameAndVersion, EVRInitError *peError )
{
    struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    cppIVRClientCore_IVRClientCore_002_GetGenericInterface( &params );

    if (!params._ret)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    params._ret = ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
    return params._ret;
}

bool __thiscall winIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct w_steam_iface *_this )
{
    struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params params = {.linux_side = _this->u_iface};

    TRACE( "linux_side %p, compositor_data.client_core_linux_side %p.\n", _this->u_iface,
           compositor_data.client_core_linux_side );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.client_core_linux_side || !is_hmd_present_reg())
    {
        cppIVRClientCore_IVRClientCore_002_BIsHmdPresent( &params );
        return params._ret;
    }

    return TRUE;
}

EVRInitError __thiscall winIVRClientCore_IVRClientCore_003_Init( struct w_steam_iface *_this, EVRApplicationType eApplicationType,
                                                                 const char *pStartupInfo )
{
    struct cppIVRClientCore_IVRClientCore_003_Init_params params =
    {
        .linux_side = _this->u_iface,
        .eApplicationType = eApplicationType,
        .pStartupInfo = pStartupInfo,
    };
    char *startup_info_converted;

    TRACE( "%p\n", _this );

    startup_info_converted = json_convert_startup_info( pStartupInfo );
    if (startup_info_converted) params.pStartupInfo = startup_info_converted;
    InitializeCriticalSection( &_this->user_data.critical_section );

    cppIVRClientCore_IVRClientCore_003_Init( &params );

    free( startup_info_converted );

    if (params._ret) WARN( "error %#x\n", params._ret );
    else compositor_data.client_core_linux_side = params.linux_side;

    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_003_Cleanup( struct w_steam_iface *_this )
{
    struct cppIVRClientCore_IVRClientCore_003_Cleanup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    cppIVRClientCore_IVRClientCore_003_Cleanup( &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_003_GetGenericInterface( struct w_steam_iface *_this,
                                                                         const char *pchNameAndVersion, EVRInitError *peError )
{
    struct cppIVRClientCore_IVRClientCore_003_GetGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    cppIVRClientCore_IVRClientCore_003_GetGenericInterface( &params );

    if (!params._ret)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    params._ret = ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
    return params._ret;
}

bool __thiscall winIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct w_steam_iface *_this )
{
    struct cppIVRClientCore_IVRClientCore_003_BIsHmdPresent_params params = {.linux_side = _this->u_iface};

    TRACE( "linux_side %p, compositor_data.client_core_linux_side %p.\n", _this->u_iface,
           compositor_data.client_core_linux_side );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.client_core_linux_side || !is_hmd_present_reg())
    {
        cppIVRClientCore_IVRClientCore_003_BIsHmdPresent( &params );
        return params._ret;
    }

    return TRUE;
}

vrmb_typeb __thiscall winIVRMailbox_IVRMailbox_001_undoc3( struct w_steam_iface *_this, vrmb_typea a,
                                                           const char *b, const char *c )
{
    struct cppIVRMailbox_IVRMailbox_001_undoc3_params params =
    {
        .linux_side = _this->u_iface,
        .a = a,
        .b = b,
        .c = json_convert_paths(c),
    };

    TRACE( "%p\n", _this );

    cppIVRMailbox_IVRMailbox_001_undoc3( &params );
    free( (char *)params.c );

    return params._ret;
}
