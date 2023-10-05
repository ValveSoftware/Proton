#include "unix_private.h"

#include <winternl.h>
#include <dlfcn.h>

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static void *(*p_HmdSystemFactory)( const char *name, int *return_code );
static void *(*p_VRClientCoreFactory)( const char *name, int *return_code );

VkDevice_T *(WINAPI *p_get_native_VkDevice)( VkDevice_T * );
VkInstance_T *(WINAPI *p_get_native_VkInstance)( VkInstance_T * );
VkPhysicalDevice_T *(WINAPI *p_get_native_VkPhysicalDevice)( VkPhysicalDevice_T * );
VkPhysicalDevice_T *(WINAPI *p_get_wrapped_VkPhysicalDevice)( VkInstance_T *, VkPhysicalDevice_T * );
VkQueue_T *(WINAPI *p_get_native_VkQueue)( VkQueue_T * );

static void *get_winevulkan_unixlib( HMODULE winevulkan )
{
    UINT64 unix_funcs;
    NTSTATUS status;
    Dl_info info;

    status = NtQueryVirtualMemory( GetCurrentProcess(), winevulkan, (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/,
                                   &unix_funcs, sizeof(unix_funcs), NULL );
    if (status)
    {
        WINE_ERR("NtQueryVirtualMemory status %#x.\n", (int)status);
        return NULL;
    }

    if (!dladdr( (void *)(ULONG_PTR)unix_funcs, &info ))
    {
        WINE_ERR("dladdr failed.\n");
        return NULL;
    }

    WINE_TRACE( "path %s.\n", info.dli_fname );
    return dlopen( info.dli_fname, RTLD_NOW );
}

static void load_vk_unwrappers( HMODULE winevulkan )
{
    static HMODULE h = NULL;
    void *unix_handle;

    if (!(unix_handle = get_winevulkan_unixlib( winevulkan )))
    {
        ERR("Unable to open winevulkan.so.\n");
        return;
    }

#define LOAD_FUNC( name )                                                        \
    if (!(p_##name = (decltype(p_##name))dlsym( unix_handle, "__wine_" #name ))) \
    {                                                                            \
        ERR( "%s not found.\n", #name );                                         \
        return;                                                                  \
    }

    LOAD_FUNC( get_native_VkDevice )
    LOAD_FUNC( get_native_VkInstance )
    LOAD_FUNC( get_native_VkPhysicalDevice )
    LOAD_FUNC( get_wrapped_VkPhysicalDevice )
    LOAD_FUNC( get_native_VkQueue )

#undef LOAD_FUNC

    dlclose(unix_handle);
}

NTSTATUS vrclient_init( void *args )
{
    struct vrclient_init_params *params = (struct vrclient_init_params *)args;
    static void *vrclient;

    if (vrclient)
    {
        params->_ret = true;
        return 0;
    }

    if (!(vrclient = dlopen( params->unix_path, RTLD_NOW )))
    {
        TRACE( "unable to load %s\n", params->unix_path );
        return -1;
    }

#define LOAD_FUNC( x )                                      \
    if (!(p_##x = (decltype(p_##x))dlsym( vrclient, #x )))  \
    {                                                       \
        ERR( "unable to load " #x "\n" );                   \
        return -1;                                          \
    }

    LOAD_FUNC( HmdSystemFactory );
    LOAD_FUNC( VRClientCoreFactory );

#undef LOAD_FUNC

    load_vk_unwrappers( params->winevulkan );
    params->_ret = true;
    return 0;
}

NTSTATUS vrclient_HmdSystemFactory( void *args )
{
    struct vrclient_HmdSystemFactory_params *params = (struct vrclient_HmdSystemFactory_params *)args;
    params->_ret = p_HmdSystemFactory( params->name, params->return_code );
    return 0;
}

NTSTATUS vrclient_VRClientCoreFactory( void *args )
{
    struct vrclient_VRClientCoreFactory_params *params = (struct vrclient_VRClientCoreFactory_params *)args;
    params->_ret = p_VRClientCoreFactory( params->name, params->return_code );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    *(w_CameraVideoStreamFrame_t_0914 *)params->_ret = *iface->GetVideoStreamFrame( params->nDeviceIndex );
    return 0;
}
