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

bool unix_vrclient_init( struct vrclient_init_params *params )
{
    static void *vrclient;

    if (vrclient) return true;

    if (!(vrclient = dlopen( params->unix_path, RTLD_NOW )))
    {
        TRACE( "unable to load %s\n", params->unix_path );
        return false;
    }

#define LOAD_FUNC( x )                                      \
    if (!(p_##x = (decltype(p_##x))dlsym( vrclient, #x )))  \
    {                                                       \
        ERR( "unable to load " #x "\n" );                   \
        return false;                                       \
    }

    LOAD_FUNC( HmdSystemFactory );
    LOAD_FUNC( VRClientCoreFactory );

#undef LOAD_FUNC

    load_vk_unwrappers( params->winevulkan );
    return true;
}

void *unix_HmdSystemFactory( const char *name, int *return_code )
{
    return p_HmdSystemFactory( name, return_code );
}

void *unix_VRClientCoreFactory( const char *name, int *return_code )
{
    return p_VRClientCoreFactory( name, return_code );
}
