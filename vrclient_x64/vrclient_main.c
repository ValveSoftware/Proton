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
#include "dxvk-interop.h"

#include "vrclient_private.h"

#include "flatapi.h"

#include "wine/unixlib.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

CREATE_TYPE_INFO_VTABLE;

struct compositor_data compositor_data = {0};

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
#ifdef __x86_64__
            init_type_info_rtti( (char *)instance );
            init_rtti( (char *)instance );
#endif /* __x86_64__ */
            break;

        case DLL_PROCESS_DETACH:
            if (compositor_data.client_core_linux_side)
            {
                struct IVRClientCore_IVRClientCore_003_Cleanup_params params =
                {
                    .linux_side = compositor_data.client_core_linux_side,
                };
                VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Cleanup, &params );
                compositor_data.client_core_linux_side = NULL;
            }
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

struct w_steam_iface *create_win_interface(const char *name, void *linux_side)
{
    iface_constructor constructor;

    TRACE("trying to create %s\n", name);

    if (!linux_side) return NULL;
    if ((constructor = find_iface_constructor( name ))) return constructor( linux_side );

    ERR("Don't recognize interface name: %s\n", name);
    return NULL;
}

static int load_vrclient(void)
{
    static const WCHAR PROTON_VR_RUNTIME_W[] = {'P','R','O','T','O','N','_','V','R','_','R','U','N','T','I','M','E',0};
    static const WCHAR winevulkanW[] = {'w','i','n','e','v','u','l','k','a','n','.','d','l','l',0};
    static BOOL loaded;

    struct vrclient_init_params params = {.winevulkan = LoadLibraryW( winevulkanW )};
    WCHAR pathW[PATH_MAX];
    DWORD sz;

#ifdef _WIN64
    static const char append_path[] = "/bin/linux64/vrclient.so";
#else
    static const char append_path[] = "/bin/vrclient.so";
#endif

    if (loaded) return 1;

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
    if (params._ret) loaded = TRUE;

    HeapFree( GetProcessHeap(), 0, params.unix_path );
    return loaded;
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

static int8_t is_hmd_present_reg(void)
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
    iface_destructor destructor;

    TRACE( "%p %p\n", object, name_and_version );

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

uint32_t __thiscall winIVRClientCore_IVRClientCore_002_Init( struct w_steam_iface *_this, uint32_t eApplicationType )
{
    struct IVRClientCore_IVRClientCore_002_Init_params params =
    {
        .linux_side = _this->u_iface,
        .eApplicationType = eApplicationType,
    };

    TRACE( "%p\n", _this );

    InitializeCriticalSection( &_this->user_data.critical_section );

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_Init, &params );
    if (params._ret) WARN( "error %#x\n", params._ret );
    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_002_Cleanup( struct w_steam_iface *_this )
{
    struct IVRClientCore_IVRClientCore_002_Cleanup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_Cleanup, &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_002_GetGenericInterface( struct w_steam_iface *_this,
                                                                         const char *pchNameAndVersion, uint32_t *peError )
{
    struct IVRClientCore_IVRClientCore_002_GetGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_GetGenericInterface, &params );

    if (!params._ret)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    params._ret = ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
    return params._ret;
}

int8_t __thiscall winIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct w_steam_iface *_this )
{
    struct IVRClientCore_IVRClientCore_002_BIsHmdPresent_params params = {.linux_side = _this->u_iface};

    TRACE( "linux_side %p, compositor_data.client_core_linux_side %p.\n", _this->u_iface,
           compositor_data.client_core_linux_side );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.client_core_linux_side || !is_hmd_present_reg())
    {
        VRCLIENT_CALL( IVRClientCore_IVRClientCore_002_BIsHmdPresent, &params );
        return params._ret;
    }

    return TRUE;
}

uint32_t __thiscall winIVRClientCore_IVRClientCore_003_Init( struct w_steam_iface *_this,
                                                             uint32_t eApplicationType, const char *pStartupInfo )
{
    struct IVRClientCore_IVRClientCore_003_Init_params params =
    {
        .linux_side = _this->u_iface,
        .eApplicationType = eApplicationType,
        .pStartupInfo = pStartupInfo,
    };

    TRACE( "%p\n", _this );

    InitializeCriticalSection( &_this->user_data.critical_section );

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Init, &params );

    if (params._ret) WARN( "error %#x\n", params._ret );
    else compositor_data.client_core_linux_side = params.linux_side;

    return params._ret;
}

void __thiscall winIVRClientCore_IVRClientCore_003_Cleanup( struct w_steam_iface *_this )
{
    struct IVRClientCore_IVRClientCore_003_Cleanup_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE( "%p\n", _this );
    ivrclientcore_cleanup( &_this->user_data );
    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_Cleanup, &params );
    destroy_compositor_data();
}

void *__thiscall winIVRClientCore_IVRClientCore_003_GetGenericInterface( struct w_steam_iface *_this,
                                                                         const char *pchNameAndVersion, uint32_t *peError )
{
    struct IVRClientCore_IVRClientCore_003_GetGenericInterface_params params =
    {
        .linux_side = _this->u_iface,
        .pchNameAndVersion = pchNameAndVersion,
        .peError = peError,
    };

    TRACE( "%p\n", _this );

    /* In theory we could pass this along, but we'd have to generate a separate
     * set of thunks for it. Hopefully this will work as it is. */
    if (pchNameAndVersion && !strncmp( pchNameAndVersion, "FnTable:", 8 )) params.pchNameAndVersion += 8;

    VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_GetGenericInterface, &params );

    if (!params._ret)
    {
        WARN( "Failed to create %s.\n", pchNameAndVersion );
        return NULL;
    }

    params._ret = ivrclientcore_get_generic_interface( params._ret, pchNameAndVersion, &_this->user_data );
    return params._ret;
}

int8_t __thiscall winIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct w_steam_iface *_this )
{
    struct IVRClientCore_IVRClientCore_003_BIsHmdPresent_params params = {.linux_side = _this->u_iface};

    TRACE( "linux_side %p, compositor_data.client_core_linux_side %p.\n", _this->u_iface,
           compositor_data.client_core_linux_side );

    /* BIsHmdPresent() currently always returns FALSE on Linux if called before Init().
     * Return true if the value stored by steam.exe helper in registry says the HMD is presnt. */
    if (compositor_data.client_core_linux_side || !is_hmd_present_reg())
    {
        VRCLIENT_CALL( IVRClientCore_IVRClientCore_003_BIsHmdPresent, &params );
        return params._ret;
    }

    return TRUE;
}

const w_CameraVideoStreamFrame_t_0914 * __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    static w_CameraVideoStreamFrame_t_0914 w_frame;
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        ._ret = &w_frame,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame, &params );
    return params._ret;
}
