#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
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
#include "vkd3d-proton-interop.h"
#include "dxvk-interop.h"

#include "vrclient_private.h"

#include "flatapi.h"

#include "wine/unixlib.h"

#define PATH_MAX 4096

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

CREATE_TYPE_INFO_VTABLE;

struct compositor_data compositor_data = {0};
static BOOL vrclient_loaded;

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %lu, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
#if defined(__x86_64__) || defined(__aarch64__)
            init_type_info_rtti( (char *)instance );
            init_rtti( (char *)instance );
#endif /* defined(__x86_64__) || defined(__aarch64__) */
            __wine_init_unix_call();
            break;

        case DLL_PROCESS_DETACH:
            if (compositor_data.u_client_core_iface.handle)
            {
                struct IVRClientCore_IVRClientCore_003_Cleanup_params params =
                {
                    .u_iface = compositor_data.u_client_core_iface,
                };
                VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Cleanup, &params );
                compositor_data.u_client_core_iface.handle = 0;
            }
            VRCLIENT_CALL( vrclient_unload, NULL );
            vrclient_loaded = FALSE;
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

struct w_iface *create_win_interface( const char *name, struct u_iface u_iface )
{
    iface_constructor constructor;

    TRACE("trying to create %s\n", name);

    if (!u_iface.handle) return NULL;
    if ((constructor = find_iface_constructor( name ))) return constructor( u_iface );

    ERR("Don't recognize interface name: %s\n", name);
    return NULL;
}

static int load_vrclient(void)
{
    struct vrclient_init_params params = {.winevulkan = LoadLibraryW( L"winevulkan.dll" )};
    WCHAR pathW[PATH_MAX];
    DWORD sz;

#if defined(__x86_64__) && !defined(__arm64ec__)
    static const char append_path[] = "/bin/linux64/vrclient.so";
#elif defined(__arm64ec__)
    static const char append_path[] = "/bin/linuxarm64/vrclient.so";
#else
    static const char append_path[] = "/bin/vrclient.so";
#endif

    if (vrclient_loaded) return 1;

    /* PROTON_VR_RUNTIME is provided by the proton setup script */
    if(!GetEnvironmentVariableW(L"PROTON_VR_RUNTIME", pathW, ARRAY_SIZE(pathW)))
    {
        DWORD type, size;
        LSTATUS status;
        HKEY vr_key;

        if ((status = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Wine\\VR", 0, KEY_READ, &vr_key)))
        {
            WINE_WARN("Could not create key, status %#lx.\n", status);
            return 0;
        }

        size = sizeof(pathW);
        if ((status = RegQueryValueExW(vr_key, L"PROTON_VR_RUNTIME", NULL, &type, (BYTE *)pathW, &size)))
        {
            WINE_WARN("Could not query value, status %#lx.\n", status);
            RegCloseKey(vr_key);
            return 0;
        }
        if (type != REG_SZ)
        {
            WINE_ERR("Unexpected value type %#lx.\n", type);
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

    params.unix_path = HeapAlloc( GetProcessHeap(), 0, sz + sizeof(append_path) );

    sz = WideCharToMultiByte( CP_UNIXCP, 0, pathW, -1, params.unix_path, sz, NULL, NULL );
    if(!sz)
    {
        ERR("Can't convert path to unixcp! %s\n", wine_dbgstr_w(pathW));
        HeapFree(GetProcessHeap(), 0, params.unix_path);
        return 0;
    }

    strcat( params.unix_path, append_path );

    TRACE( "got openvr runtime path: %s\n", params.unix_path );

    VRCLIENT_CALL( vrclient_init, &params );
    if (params._ret) vrclient_loaded = TRUE;

    HeapFree( GetProcessHeap(), 0, params.unix_path );
    return vrclient_loaded;
}

void *CDECL HmdSystemFactory(const char *name, int *return_code)
{
    struct vrclient_HmdSystemFactory_params params = {.name = name, .return_code = return_code};
    TRACE("name: %s, return_code: %p\n", name, return_code);
    if (!load_vrclient()) return NULL;
    VRCLIENT_CALL( vrclient_HmdSystemFactory, &params );
    return create_win_interface( name, params._ret );
}

void *CDECL VRClientCoreFactory(const char *name, int *return_code)
{
    struct vrclient_VRClientCoreFactory_params params = {.name = name, .return_code = return_code};
    TRACE("name: %s, return_code: %p\n", name, return_code);
    if (!load_vrclient()) return NULL;
    VRCLIENT_CALL( vrclient_VRClientCoreFactory, &params );
    return create_win_interface( name, params._ret );
}

static BOOL set_vr_status( HKEY key, DWORD value )
{
    LSTATUS status;

    if ((status = RegSetValueExW( key, L"state", 0, REG_DWORD, (BYTE *)&value, sizeof(value) )))
    {
        ERR( "Could not set state value, status %#lx.\n", status );
        return FALSE;
    }
    return TRUE;
}

static HMODULE vrclient;

static DWORD WINAPI initialize_vr_data( void *arg )
{
    struct vrclient_init_registry_params params = {.vr_key = arg};
    HKEY vr_key = arg;
    HMODULE openxr;

    VRCLIENT_CALL( vrclient_init_registry, &params );

    if (!params._ret)
    {
        ERR( "Failed to initialize VR info.\n" );
        set_vr_status( vr_key, -1 );
    }
    else
    {
        if (!(openxr = LoadLibraryW( L"wineopenxr" )))
            WARN( "Could not load wineopenxr, err %lu.\n", GetLastError() );
        else
        {
            BOOL (CDECL * init)(void);

            if ((init = (void *)GetProcAddress( openxr, "wineopenxr_init_registry" ))) init();
            else ERR( "Failed to find wineopenxr_init_registry export\n" );

            FreeLibrary( openxr );
        }

        set_vr_status( vr_key, 1 );
        WINE_TRACE( "Completed VR info initialization.\n" );
    }

    RegCloseKey( vr_key );

    FreeLibraryAndExitThread( vrclient, 0 );
}

BOOL CDECL vrclient_init_registry(void)
{
    WCHAR pathW[PATH_MAX];
    LSTATUS status;
    HANDLE thread;
    HKEY vr_key;
    DWORD disp;

    if ((status = RegCreateKeyExW( HKEY_CURRENT_USER, L"Software\\Wine\\VR", 0, NULL,
                                   REG_OPTION_VOLATILE, KEY_ALL_ACCESS, NULL, &vr_key, &disp )))
    {
        ERR( "Could not create key, status %#lx.\n", status );
        return FALSE;
    }
    if (disp != REG_CREATED_NEW_KEY)
    {
        TRACE( "Already initialized, returning.\n" );
        RegCloseKey( vr_key );
        return TRUE;
    }

    if (GetEnvironmentVariableW( L"PROTON_VR_RUNTIME", pathW, ARRAY_SIZE(pathW) ))
    {
        if ((status = RegSetValueExW( vr_key, L"PROTON_VR_RUNTIME", 0, REG_SZ, (BYTE *)pathW,
                                      (wcslen( pathW ) + 1) * sizeof(*pathW) )))
        {
            ERR( "Could not set PROTON_VR_RUNTIME value, status %#lx.\n", status );
            set_vr_status( vr_key, -1 );
            RegCloseKey( vr_key );
            return FALSE;
        }
    }
    else
    {
        TRACE( "Linux OpenVR runtime is not available\n" );
        set_vr_status( vr_key, -1 );
        RegCloseKey( vr_key );
        return FALSE;
    }

    if (!load_vrclient())
    {
        TRACE( "Failed to load vrclient\n" );
        set_vr_status( vr_key, -1 );
        RegCloseKey( vr_key );
        return FALSE;
    }

    if (!set_vr_status( vr_key, 0 ))
    {
        RegCloseKey( vr_key );
        return FALSE;
    }

    GetModuleHandleExA( GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (void *)initialize_vr_data, &vrclient );
    if (!(thread = CreateThread( NULL, 0, initialize_vr_data, vr_key, 0, NULL )))
    {
        WINE_ERR( "Could not create thread, error %lu.\n", GetLastError() );
        FreeLibrary( vrclient );
        RegCloseKey( vr_key );
        return FALSE;
    }
    CloseHandle( thread );

    TRACE( "Initialized OpenVR registry entries\n" );
    return TRUE;
}

void *get_unix_buffer( struct u_buffer buf )
{
    struct vrclient_get_unix_buffer_params params = {.buf = buf};
    void *ret;

    if ((UINT_PTR)buf.ptr == buf.ptr && (UINT_PTR)(buf.ptr + buf.len) == (buf.ptr + buf.len))
        return (void *)(UINT_PTR)buf.ptr;

    if (!(params.ptr = ret = HeapAlloc( GetProcessHeap(), 0, buf.len ))) return NULL;
    if (VRCLIENT_CALL( vrclient_get_unix_buffer, &params ) || (ret != params.ptr))
    {
        HeapFree( GetProcessHeap(), 0, ret );
        ret = params.ptr;
    }

    return ret;
}

static int8_t is_hmd_present_reg(void)
{
    DWORD type, value, wait_status, size;
    DWORD is_hmd_present = 0;
    LSTATUS status;
    HANDLE event;
    HKEY vr_key;

    if ((status = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Wine\\VR", 0, KEY_READ, &vr_key)))
    {
        WINE_ERR("Could not create key, status %#lx.\n", status);
        return FALSE;
    }

    size = sizeof(value);
    if ((status = RegQueryValueExW(vr_key, L"state", NULL, &type, (BYTE *)&value, &size)))
    {
        WINE_ERR("Could not query value, status %#lx.\n", status);
        RegCloseKey(vr_key);
        return FALSE;
    }
    if (type != REG_DWORD)
    {
        WINE_ERR("Unexpected value type %#lx.\n", type);
        RegCloseKey(vr_key);
        return FALSE;
    }

    if (value)
    {
        RegCloseKey(vr_key);
        return value == 1;
    }

    event = CreateEventW( NULL, FALSE, FALSE, NULL );
    while (1)
    {
        if (RegNotifyChangeKeyValue(vr_key, FALSE, REG_NOTIFY_CHANGE_LAST_SET, event, TRUE))
        {
            WINE_ERR("Error registering registry change notification.\n");
            goto done;
        }
        size = sizeof(value);
        if ((status = RegQueryValueExW(vr_key, L"state", NULL, &type, (BYTE *)&value, &size)))
        {
            WINE_ERR("Could not query value, status %#lx.\n", status);
            goto done;
        }
        if (value)
            break;
        while ((wait_status = WaitForSingleObject(event, 1000)) == WAIT_TIMEOUT)
            WINE_ERR("VR state wait timeout.\n");

        if (wait_status != WAIT_OBJECT_0)
        {
            WINE_ERR("Got unexpected wait status %#lx.\n", wait_status);
            break;
        }
    }

    if (value != 1)
        goto done;

    size = sizeof(is_hmd_present);
    if ((status = RegQueryValueExW(vr_key, L"is_hmd_present", NULL, &type, (BYTE *)&is_hmd_present, &size)))
        WINE_ERR("Could not query is_hmd_present value, status %#lx.\n", status);

done:
    CloseHandle(event);
    RegCloseKey(vr_key);
    return is_hmd_present;
}

static struct w_iface *ivrclientcore_get_generic_interface( struct u_iface object, const char *name_and_version, struct client_core_data *user_data )
{
    struct w_iface *win_object;
    struct generic_interface *iface;
    iface_destructor destructor;

    TRACE( "%#I64x %p\n", object.handle, name_and_version );

    if (!(win_object = create_win_interface(name_and_version, object)))
    {
        ERR("Failed to create win object %s.\n", name_and_version);
        return NULL;
    }

    if ((destructor = find_iface_destructor( name_and_version )))
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
    free_compositor_data_d3d12_device();
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

w_Texture_t vrclient_translate_texture_dxvk( const w_Texture_t *texture, w_VRVulkanTextureData_t *vkdata,
                                             IDXGIVkInteropSurface *dxvk_surface, IDXGIVkInteropDevice **p_dxvk_device,
                                             VkImageLayout *image_layout, VkImageCreateInfo *image_info )
{
    w_Texture_t vktexture;
    VkImage image_handle;

    dxvk_surface->lpVtbl->GetDevice(dxvk_surface, p_dxvk_device);

    (*p_dxvk_device)->lpVtbl->GetVulkanHandles(*p_dxvk_device, &vkdata->m_pInstance,
            &vkdata->m_pPhysicalDevice, &vkdata->m_pDevice);

    (*p_dxvk_device)->lpVtbl->GetSubmissionQueue(*p_dxvk_device, &vkdata->m_pQueue, &vkdata->m_nQueueFamilyIndex);

    image_info->sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info->pNext = NULL;

    dxvk_surface->lpVtbl->GetVulkanImageInfo(dxvk_surface, &image_handle, image_layout, image_info);

    vkdata->m_nImage = (uint64_t)image_handle;
    vkdata->m_nWidth = image_info->extent.width;
    vkdata->m_nHeight = image_info->extent.height;
    vkdata->m_nFormat = image_info->format;
    vkdata->m_nSampleCount = image_info->samples;

    vktexture = *texture;
    vktexture.handle = vkdata;
    vktexture.eType = TextureType_Vulkan;

    return vktexture;
}

w_Texture_t vrclient_translate_texture_d3d12( const w_Texture_t *texture, w_VRVulkanTextureData_t *vkdata,
                                              ID3D12DXVKInteropDevice *d3d12_device, ID3D12Resource *d3d12_resource,
                                              ID3D12CommandQueue *d3d12_queue, VkImageLayout *image_layout,
                                              VkImageCreateInfo *image_info )
{
    w_Texture_t vktexture;
    VkImage image_handle;
    UINT64 buffer_offset;
    D3D12_RESOURCE_DESC resource_desc;
    VkFormat vk_format = VK_FORMAT_UNDEFINED;
    TRACE("%p %p %p %p %p %p\n", texture, vkdata, d3d12_device, d3d12_resource, d3d12_queue, image_layout);
    d3d12_resource->lpVtbl->GetDesc(d3d12_resource, &resource_desc);
    switch (resource_desc.Format)
    {
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB: vk_format = VK_FORMAT_R8G8B8A8_SRGB; break;
    case DXGI_FORMAT_R8G8B8A8_UNORM: vk_format = VK_FORMAT_R8G8B8A8_UNORM; break;
    default:
        ERR("Unsupported DXGI format %#x.\n", resource_desc.Format);
        return *texture;
    }
    if (resource_desc.Dimension != D3D12_RESOURCE_DIMENSION_TEXTURE2D)
    {
        ERR("Unsupported resource dimension %#x.\n", resource_desc.Dimension);
        return *texture;
    }

    TRACE("DXGI format: %#x, width: %I64u, height: %u, mip levels: %u, array size: %u, sample count: %u, VkFormat %#x.\n",
            resource_desc.Format, resource_desc.Width, resource_desc.Height, resource_desc.MipLevels,
            resource_desc.DepthOrArraySize, resource_desc.SampleDesc.Count, vk_format);

    d3d12_device->lpVtbl->GetVulkanHandles(d3d12_device, &vkdata->m_pInstance, &vkdata->m_pPhysicalDevice, &vkdata->m_pDevice);
    d3d12_device->lpVtbl->GetVulkanQueueInfo(d3d12_device, d3d12_queue, &vkdata->m_pQueue, &vkdata->m_nQueueFamilyIndex);
    d3d12_device->lpVtbl->GetVulkanImageLayout(d3d12_device, d3d12_resource, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, image_layout);
    d3d12_device->lpVtbl->GetVulkanResourceInfo(d3d12_device, d3d12_resource, (UINT64*)&image_handle, &buffer_offset);

    /* For now, only these fields are used. */
    image_info->mipLevels = resource_desc.MipLevels;
    image_info->arrayLayers = resource_desc.DepthOrArraySize;

    vkdata->m_nImage = (uint64_t)image_handle;
    vkdata->m_nWidth = resource_desc.Width;
    vkdata->m_nHeight = resource_desc.Height;
    vkdata->m_nFormat = vk_format;
    vkdata->m_nSampleCount = resource_desc.SampleDesc.Count;

    vktexture = *texture;
    vktexture.handle = vkdata;
    vktexture.eType = TextureType_Vulkan;

    return vktexture;
}

uint32_t __thiscall winIVRClientCore_IVRClientCore_002_Init( struct w_iface *_this, uint32_t eApplicationType )
{
    struct IVRClientCore_IVRClientCore_002_Init_params params =
    {
        .u_iface = _this->u_iface,
        .eApplicationType = eApplicationType,
    };

    TRACE( "%p\n", _this );

    InitializeCriticalSection( &_this->user_data.critical_section );

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_Init, &params );
    if (params._ret) WARN( "error %#x\n", params._ret );
    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_002_Cleanup( struct w_iface *_this )
{
    struct IVRClientCore_IVRClientCore_002_Cleanup_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_Cleanup, &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_002_GetGenericInterface( struct w_iface *_this,
                                                                         const char *pchNameAndVersion, uint32_t *peError )
{
    struct IVRClientCore_IVRClientCore_002_GetGenericInterface_params params =
    {
        .u_iface = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_GetGenericInterface, &params );

    if (!params._ret.handle)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    return ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
}

int8_t __thiscall winIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct w_iface *_this )
{
    struct IVRClientCore_IVRClientCore_002_BIsHmdPresent_params params = {.u_iface = _this->u_iface};

    TRACE( "u_iface %#I64x, compositor_data.u_client_core_iface %#I64x.\n", _this->u_iface.handle,
           compositor_data.u_client_core_iface.handle );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.u_client_core_iface.handle || !is_hmd_present_reg())
    {
        VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_BIsHmdPresent, &params );
        return params._ret;
    }

    return TRUE;
}

uint32_t __thiscall winIVRClientCore_IVRClientCore_003_Init( struct w_iface *_this,
                                                             uint32_t eApplicationType, const char *pStartupInfo )
{
    struct IVRClientCore_IVRClientCore_003_Init_params params =
    {
        .u_iface = _this->u_iface,
        .eApplicationType = eApplicationType,
        .pStartupInfo = pStartupInfo,
    };

    TRACE( "%p\n", _this );

    InitializeCriticalSection( &_this->user_data.critical_section );

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Init, &params );

    if (params._ret) WARN( "error %#x\n", params._ret );
    else compositor_data.u_client_core_iface = params.u_iface;

    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_003_Cleanup( struct w_iface *_this )
{
    struct IVRClientCore_IVRClientCore_003_Cleanup_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Cleanup, &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_003_GetGenericInterface( struct w_iface *_this,
                                                                         const char *pchNameAndVersion, uint32_t *peError )
{
    struct IVRClientCore_IVRClientCore_003_GetGenericInterface_params params =
    {
        .u_iface = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_GetGenericInterface, &params );

    if (!params._ret.handle)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    return ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
}

int8_t __thiscall winIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct w_iface *_this )
{
    struct IVRClientCore_IVRClientCore_003_BIsHmdPresent_params params = {.u_iface = _this->u_iface};

    TRACE( "u_iface %#I64x, compositor_data.u_client_core_iface %#I64x.\n", _this->u_iface.handle,
           compositor_data.u_client_core_iface.handle );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.u_client_core_iface.handle || !is_hmd_present_reg())
    {
        VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_BIsHmdPresent, &params );
        return params._ret;
    }

    return TRUE;
}

const w_CameraVideoStreamFrame_t_0914 * __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(struct w_iface *_this, uint32_t nDeviceIndex)
{
    static w_CameraVideoStreamFrame_t_0914 w_frame;
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params params =
    {
        .u_iface = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        ._ret = &w_frame,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame, &params );
    return params._ret;
}
