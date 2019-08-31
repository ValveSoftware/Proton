/*
 * Copyright 2016-2018 Józef Kucia for CodeWeavers
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

#ifndef __VKD3D_D3D12_CROSSTEST_H
#define __VKD3D_D3D12_CROSSTEST_H

/* Hack for MinGW-w64 headers.
 *
 * We want to use WIDL C inline wrappers because some methods
 * in D3D12 interfaces return aggregate objects. Unfortunately,
 * WIDL C inline wrappers are broken when used with MinGW-w64
 * headers because FORCEINLINE expands to extern inline
 * which leads to the "multiple storage classes in declaration
 * specifiers" compiler error.
 */
#ifdef __MINGW32__
# include <_mingw.h>
# ifdef __MINGW64_VERSION_MAJOR
#  undef __forceinline
#  define __forceinline __inline__ __attribute__((__always_inline__,__gnu_inline__))
# endif

# define _HRESULT_DEFINED
typedef int HRESULT;
#endif

#define COBJMACROS
#define INITGUID
#include "vkd3d_test.h"
#include "vkd3d_windows.h"
#define WIDL_C_INLINE_WRAPPERS
#include "vkd3d_d3d12.h"
#include "vkd3d_d3d12sdklayers.h"

#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <time.h>

#ifdef _WIN32
# include "vkd3d_dxgi1_4.h"
#else
# include <pthread.h>
# include "vkd3d.h"
# include "vkd3d_utils.h"
#endif

#include "d3d12_test_utils.h"

#ifdef _WIN32
static inline HANDLE create_event(void)
{
    return CreateEventA(NULL, FALSE, FALSE, NULL);
}

static inline void signal_event(HANDLE event)
{
    SetEvent(event);
}

static inline unsigned int wait_event(HANDLE event, unsigned int milliseconds)
{
    return WaitForSingleObject(event, milliseconds);
}

static inline void destroy_event(HANDLE event)
{
    CloseHandle(event);
}

#define get_d3d12_pfn(name) get_d3d12_pfn_(#name)
static inline void *get_d3d12_pfn_(const char *name)
{
    return GetProcAddress(GetModuleHandleA("d3d12.dll"), name);
}
#else
#define INFINITE VKD3D_INFINITE
#define WAIT_OBJECT_0 VKD3D_WAIT_OBJECT_0
#define WAIT_TIMEOUT VKD3D_WAIT_TIMEOUT

static inline HANDLE create_event(void)
{
    return vkd3d_create_event();
}

static inline void signal_event(HANDLE event)
{
    vkd3d_signal_event(event);
}

static inline unsigned int wait_event(HANDLE event, unsigned int milliseconds)
{
    return vkd3d_wait_event(event, milliseconds);
}

static inline void destroy_event(HANDLE event)
{
    vkd3d_destroy_event(event);
}

#define get_d3d12_pfn(name) (name)
#endif

typedef void (*thread_main_pfn)(void *data);

struct test_thread_data
{
    thread_main_pfn main_pfn;
    void *user_data;
};

#ifdef _WIN32
static inline DWORD WINAPI test_thread_main(void *untyped_data)
{
    struct test_thread_data *data = untyped_data;
    data->main_pfn(data->user_data);
    free(untyped_data);
    return 0;
}

static inline HANDLE create_thread(thread_main_pfn main_pfn, void *user_data)
{
    struct test_thread_data *data;

    if (!(data = malloc(sizeof(*data))))
        return NULL;
    data->main_pfn = main_pfn;
    data->user_data = user_data;

    return CreateThread(NULL, 0, test_thread_main, data, 0, NULL);
}

static inline bool join_thread(HANDLE thread)
{
    unsigned int ret;

    ret = WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);
    return ret == WAIT_OBJECT_0;
}
#else
static void *test_thread_main(void *untyped_data)
{
    struct test_thread_data *data = untyped_data;
    data->main_pfn(data->user_data);
    free(untyped_data);
    return NULL;
}

static inline HANDLE create_thread(thread_main_pfn main_pfn, void *user_data)
{
    struct test_thread_data *data;
    pthread_t *thread;

    if (!(thread = malloc(sizeof(*thread))))
        return NULL;

    if (!(data = malloc(sizeof(*data))))
    {
        free(thread);
        return NULL;
    }
    data->main_pfn = main_pfn;
    data->user_data = user_data;

    if (pthread_create(thread, NULL, test_thread_main, data))
    {
        free(data);
        free(thread);
        return NULL;
    }

    return thread;
}

static inline bool join_thread(HANDLE untyped_thread)
{
    pthread_t *thread = untyped_thread;
    int rc;

    rc = pthread_join(*thread, NULL);
    free(thread);
    return !rc;
}
#endif

static HRESULT wait_for_fence(ID3D12Fence *fence, uint64_t value)
{
    unsigned int ret;
    HANDLE event;
    HRESULT hr;

    if (ID3D12Fence_GetCompletedValue(fence) >= value)
        return S_OK;

    if (!(event = create_event()))
        return E_FAIL;

    if (FAILED(hr = ID3D12Fence_SetEventOnCompletion(fence, value, event)))
    {
        destroy_event(event);
        return hr;
    }

    ret = wait_event(event, INFINITE);
    destroy_event(event);
    return ret == WAIT_OBJECT_0 ? S_OK : E_FAIL;
}

static void wait_queue_idle_(unsigned int line, ID3D12Device *device, ID3D12CommandQueue *queue)
{
    ID3D12Fence *fence;
    HRESULT hr;

    hr = ID3D12Device_CreateFence(device, 0, D3D12_FENCE_FLAG_NONE,
            &IID_ID3D12Fence, (void **)&fence);
    assert_that_(line)(hr == S_OK, "Failed to create fence, hr %#x.\n", hr);

    hr = ID3D12CommandQueue_Signal(queue, fence, 1);
    assert_that_(line)(hr == S_OK, "Failed to signal fence, hr %#x.\n", hr);
    hr = wait_for_fence(fence, 1);
    assert_that_(line)(hr == S_OK, "Failed to wait for fence, hr %#x.\n", hr);

    ID3D12Fence_Release(fence);
}

static bool use_warp_device;
static unsigned int use_adapter_idx;

#ifdef _WIN32
static IUnknown *create_warp_adapter(IDXGIFactory4 *factory)
{
    IUnknown *adapter;
    HRESULT hr;

    adapter = NULL;
    hr = IDXGIFactory4_EnumWarpAdapter(factory, &IID_IUnknown, (void **)&adapter);
    if (FAILED(hr))
        trace("Failed to get WARP adapter, hr %#x.\n", hr);
    return adapter;
}

static IUnknown *create_adapter(void)
{
    IUnknown *adapter = NULL;
    IDXGIFactory4 *factory;
    HRESULT hr;

    hr = CreateDXGIFactory1(&IID_IDXGIFactory4, (void **)&factory);
    ok(hr == S_OK, "Failed to create IDXGIFactory4, hr %#x.\n", hr);

    if (use_warp_device && (adapter = create_warp_adapter(factory)))
    {
        IDXGIFactory4_Release(factory);
        return adapter;
    }

    hr = IDXGIFactory4_EnumAdapters(factory, use_adapter_idx, (IDXGIAdapter **)&adapter);
    IDXGIFactory4_Release(factory);
    if (FAILED(hr))
        trace("Failed to get adapter, hr %#x.\n", hr);
    return adapter;
}

static ID3D12Device *create_device(void)
{
    IUnknown *adapter = NULL;
    ID3D12Device *device;
    HRESULT hr;

    if ((use_warp_device || use_adapter_idx) && !(adapter = create_adapter()))
    {
        trace("Failed to create adapter.\n");
        return NULL;
    }

    hr = D3D12CreateDevice(adapter, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void **)&device);
    if (adapter)
        IUnknown_Release(adapter);

    return SUCCEEDED(hr) ? device : NULL;
}

static void init_adapter_info(void)
{
    char name[MEMBER_SIZE(DXGI_ADAPTER_DESC, Description)];
    IDXGIAdapter *dxgi_adapter;
    DXGI_ADAPTER_DESC desc;
    IUnknown *adapter;
    unsigned int i;
    HRESULT hr;

    if (!(adapter = create_adapter()))
        return;

    hr = IUnknown_QueryInterface(adapter, &IID_IDXGIAdapter, (void **)&dxgi_adapter);
    ok(hr == S_OK, "Failed to query IDXGIAdapter, hr %#x.\n", hr);
    IUnknown_Release(adapter);

    hr = IDXGIAdapter_GetDesc(dxgi_adapter, &desc);
    ok(hr == S_OK, "Failed to get adapter desc, hr %#x.\n", hr);

    /* FIXME: Use debugstr_w(). */
    for (i = 0; i < ARRAY_SIZE(desc.Description) && isprint(desc.Description[i]); ++i)
        name[i] = desc.Description[i];
    name[min(i, ARRAY_SIZE(name) - 1)] = '\0';

    trace("Adapter: %s, %04x:%04x.\n", name, desc.VendorId, desc.DeviceId);

    if (desc.VendorId == 0x1414 && desc.DeviceId == 0x008c)
    {
        trace("Using WARP device.\n");
        use_warp_device = true;
    }

    IDXGIAdapter_Release(dxgi_adapter);
}

static inline bool get_adapter_desc(ID3D12Device *device, DXGI_ADAPTER_DESC *desc)
{
    IDXGIFactory4 *factory;
    IDXGIAdapter *adapter;
    HRESULT hr;
    LUID luid;

    memset(desc, 0, sizeof(*desc));

    if (!vkd3d_test_platform_is_windows())
        return false;

    luid = ID3D12Device_GetAdapterLuid(device);

    hr = CreateDXGIFactory1(&IID_IDXGIFactory4, (void **)&factory);
    ok(hr == S_OK, "Failed to create IDXGIFactory4, hr %#x.\n", hr);

    hr = IDXGIFactory4_EnumAdapterByLuid(factory, luid, &IID_IDXGIAdapter, (void **)&adapter);
    if (SUCCEEDED(hr))
    {
        hr = IDXGIAdapter_GetDesc(adapter, desc);
        ok(hr == S_OK, "Failed to get adapter desc, hr %#x.\n", hr);
        IDXGIAdapter_Release(adapter);
    }

    IDXGIFactory4_Release(factory);
    return SUCCEEDED(hr);
}

static inline bool is_amd_windows_device(ID3D12Device *device)
{
    DXGI_ADAPTER_DESC desc;

    return get_adapter_desc(device, &desc) && desc.VendorId == 0x1002;
}

static inline bool is_intel_windows_device(ID3D12Device *device)
{
    DXGI_ADAPTER_DESC desc;

    return get_adapter_desc(device, &desc) && desc.VendorId == 0x8086;
}

static inline bool is_mesa_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_mesa_intel_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_nvidia_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_radv_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_depth_clip_enable_supported(ID3D12Device *device)
{
    return true;
}

#else

static bool check_device_extension(VkPhysicalDevice vk_physical_device, const char *name)
{
    VkExtensionProperties *properties;
    bool ret = false;
    unsigned int i;
    uint32_t count;
    VkResult vr;

    vr = vkEnumerateDeviceExtensionProperties(vk_physical_device, NULL, &count, NULL);
    ok(vr == VK_SUCCESS, "Got unexpected VkResult %d.\n", vr);
    if (!count)
        return false;

    properties = calloc(count, sizeof(*properties));
    ok(properties, "Failed to allocate memory.\n");

    vr = vkEnumerateDeviceExtensionProperties(vk_physical_device, NULL, &count, properties);
    ok(vr == VK_SUCCESS, "Got unexpected VkResult %d.\n", vr);
    for (i = 0; i < count; ++i)
    {
        if (!strcmp(properties[i].extensionName, name))
        {
            ret = true;
            break;
        }
    }

    free(properties);
    return ret;
}

static HRESULT create_vkd3d_instance(struct vkd3d_instance **instance)
{
    struct vkd3d_optional_instance_extensions_info optional_extensions_info;
    struct vkd3d_instance_create_info instance_create_info;

    static const char * const optional_instance_extensions[] =
    {
        VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME,
    };

    memset(&optional_extensions_info, 0, sizeof(optional_extensions_info));
    optional_extensions_info.type = VKD3D_STRUCTURE_TYPE_OPTIONAL_INSTANCE_EXTENSIONS_INFO;
    optional_extensions_info.extensions = optional_instance_extensions;
    optional_extensions_info.extension_count = ARRAY_SIZE(optional_instance_extensions);

    memset(&instance_create_info, 0, sizeof(instance_create_info));
    instance_create_info.type = VKD3D_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.next = &optional_extensions_info;
    instance_create_info.pfn_signal_event = vkd3d_signal_event;
    instance_create_info.wchar_size = sizeof(WCHAR);

    return vkd3d_create_instance(&instance_create_info, instance);
}

static VkPhysicalDevice select_physical_device(struct vkd3d_instance *instance)
{
    VkPhysicalDevice *vk_physical_devices;
    VkPhysicalDevice vk_physical_device;
    VkInstance vk_instance;
    uint32_t count;
    VkResult vr;

    vk_instance = vkd3d_instance_get_vk_instance(instance);

    vr = vkEnumeratePhysicalDevices(vk_instance, &count, NULL);
    ok(vr == VK_SUCCESS, "Got unexpected VkResult %d.\n", vr);

    if (use_adapter_idx >= count)
    {
        trace("Invalid physical device index %u.\n", use_adapter_idx);
        return VK_NULL_HANDLE;
    }

    vk_physical_devices = calloc(count, sizeof(*vk_physical_devices));
    ok(vk_physical_devices, "Failed to allocate memory.\n");
    vr = vkEnumeratePhysicalDevices(vk_instance, &count, vk_physical_devices);
    ok(vr == VK_SUCCESS, "Got unexpected VkResult %d.\n", vr);

    vk_physical_device = vk_physical_devices[use_adapter_idx];

    free(vk_physical_devices);

    return vk_physical_device;
}

static HRESULT create_vkd3d_device(struct vkd3d_instance *instance,
        D3D_FEATURE_LEVEL minimum_feature_level, REFIID iid, void **device)
{
    static const char * const device_extensions[] =
    {
        VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME,
    };
    static const struct vkd3d_optional_device_extensions_info optional_extensions =
    {
        .type = VKD3D_STRUCTURE_TYPE_OPTIONAL_DEVICE_EXTENSIONS_INFO,
        .extensions = device_extensions,
        .extension_count = ARRAY_SIZE(device_extensions),
    };

    struct vkd3d_device_create_info device_create_info;
    VkPhysicalDevice vk_physical_device;

    if (!(vk_physical_device = select_physical_device(instance)))
        return E_INVALIDARG;

    memset(&device_create_info, 0, sizeof(device_create_info));
    device_create_info.type = VKD3D_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_create_info.next = &optional_extensions;
    device_create_info.minimum_feature_level = minimum_feature_level;
    device_create_info.instance = instance;
    device_create_info.vk_physical_device = vk_physical_device;

    return vkd3d_create_device(&device_create_info, iid, device);
}

static ID3D12Device *create_device(void)
{
    struct vkd3d_instance *instance;
    ID3D12Device *device;
    HRESULT hr;

    if (SUCCEEDED(hr = create_vkd3d_instance(&instance)))
    {
        hr = create_vkd3d_device(instance, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void **)&device);
        vkd3d_instance_decref(instance);
    }

    return SUCCEEDED(hr) ? device : NULL;
}

static bool get_driver_properties(ID3D12Device *device, VkPhysicalDeviceDriverPropertiesKHR *driver_properties)
{
    PFN_vkGetPhysicalDeviceProperties2KHR pfn_vkGetPhysicalDeviceProperties2KHR;
    VkPhysicalDeviceProperties2 device_properties2;
    VkPhysicalDevice vk_physical_device;

    memset(driver_properties, 0, sizeof(*driver_properties));
    driver_properties->sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;

    vk_physical_device = vkd3d_get_vk_physical_device(device);

    if (check_device_extension(vk_physical_device, VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME))
    {
        struct vkd3d_instance *instance = vkd3d_instance_from_device(device);
        VkInstance vk_instance = vkd3d_instance_get_vk_instance(instance);

        pfn_vkGetPhysicalDeviceProperties2KHR
                = (void *)vkGetInstanceProcAddr(vk_instance, "vkGetPhysicalDeviceProperties2KHR");
        ok(pfn_vkGetPhysicalDeviceProperties2KHR, "vkGetPhysicalDeviceProperties2KHR is NULL.\n");

        memset(&device_properties2, 0, sizeof(device_properties2));
        device_properties2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
        device_properties2.pNext = driver_properties;
        pfn_vkGetPhysicalDeviceProperties2KHR(vk_physical_device, &device_properties2);
        return true;
    }

    return false;
}

static void init_adapter_info(void)
{
    VkPhysicalDeviceDriverPropertiesKHR driver_properties;
    struct vkd3d_instance *instance;
    ID3D12Device *device;
    HRESULT hr;

    if (FAILED(hr = create_vkd3d_instance(&instance)))
        return;

    if (SUCCEEDED(hr = create_vkd3d_device(instance, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void **)&device)))
    {
        if (get_driver_properties(device, &driver_properties))
            trace("Driver name: %s, driver info: %s.\n", driver_properties.driverName, driver_properties.driverInfo);

        ID3D12Device_Release(device);
    }

    vkd3d_instance_decref(instance);
}

static inline bool is_amd_windows_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_intel_windows_device(ID3D12Device *device)
{
    return false;
}

static inline bool is_mesa_device(ID3D12Device *device)
{
    VkPhysicalDeviceDriverPropertiesKHR properties;

    get_driver_properties(device, &properties);
    return properties.driverID == VK_DRIVER_ID_MESA_RADV_KHR
            || properties.driverID == VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR;
}

static inline bool is_mesa_intel_device(ID3D12Device *device)
{
    VkPhysicalDeviceDriverPropertiesKHR properties;

    get_driver_properties(device, &properties);
    return properties.driverID == VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR;
}

static inline bool is_nvidia_device(ID3D12Device *device)
{
    VkPhysicalDeviceDriverPropertiesKHR properties;

    get_driver_properties(device, &properties);
    return properties.driverID == VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR;
}

static inline bool is_radv_device(ID3D12Device *device)
{
    VkPhysicalDeviceDriverPropertiesKHR properties;

    get_driver_properties(device, &properties);
    return properties.driverID == VK_DRIVER_ID_MESA_RADV_KHR;
}

static inline bool is_depth_clip_enable_supported(ID3D12Device *device)
{
    VkPhysicalDevice vk_physical_device = vkd3d_get_vk_physical_device(device);
    return check_device_extension(vk_physical_device, VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME);
}
#endif

static void parse_args(int argc, char **argv)
{
    unsigned int i;

    for (i = 1; i < argc; ++i)
    {
        if (!strcmp(argv[i], "--warp"))
            use_warp_device = true;
        else if (!strcmp(argv[i], "--adapter") && i + 1 < argc)
            use_adapter_idx = atoi(argv[++i]);
    }
}

static void enable_d3d12_debug_layer(int argc, char **argv)
{
    bool enable_debug_layer = false, enable_gpu_based_validation = false;
    ID3D12Debug1 *debug1;
    ID3D12Debug *debug;
    unsigned int i;

    for (i = 1; i < argc; ++i)
    {
        if (!strcmp(argv[i], "--validate"))
            enable_debug_layer = true;
        else if (!strcmp(argv[i], "--gbv"))
            enable_gpu_based_validation = true;
    }

    if (enable_gpu_based_validation)
    {
        if (SUCCEEDED(D3D12GetDebugInterface(&IID_ID3D12Debug1, (void **)&debug1)))
        {
            ID3D12Debug1_SetEnableGPUBasedValidation(debug1, true);
            ID3D12Debug1_Release(debug1);
            enable_debug_layer = true;
        }
        else
        {
            trace("Failed to enable GPU-based validation.\n");
        }
    }

    if (enable_debug_layer && SUCCEEDED(D3D12GetDebugInterface(&IID_ID3D12Debug, (void **)&debug)))
    {
        ID3D12Debug_EnableDebugLayer(debug);
        ID3D12Debug_Release(debug);
    }
}

#endif  /* __VKD3D_D3D12_CROSSTEST_H */
