#include <stdint.h>
#include <dlfcn.h>

#define COBJMACROS
#include "initguid.h"
#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "windows.h"
#include "wine/debug.h"
#include "dxgi.h"
#include "d3d11.h"
#include "d3d11_3.h"
#include "d3d12.h"

/* we want to use the native linux header */
#pragma push_macro("_WIN32")
#pragma push_macro("__cdecl")
#undef _WIN32
#undef __cdecl
#define XR_USE_GRAPHICS_API_OPENGL 1
#define XR_USE_GRAPHICS_API_VULKAN 1
#define WINE_VK_HOST
#include "wine/vulkan.h"
#define VULKAN_H_ 1// tell dxvk-interop not to include vulkan.h
#include "dxvk-interop.h"
#undef WINE_VK_HOST
#define XR_USE_GRAPHICS_API_D3D11 1
#define XR_USE_GRAPHICS_API_D3D12 1
#include <openxr/openxr_platform.h>
#pragma pop_macro("_WIN32")
#pragma pop_macro("__cdecl")

#include "openxr_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

union CompositionLayer {
    XrCompositionLayerProjection projection;
    XrCompositionLayerQuad quad;
    XrCompositionLayerCubeKHR cube;
    XrCompositionLayerDepthInfoKHR depth_info;
    XrCompositionLayerCylinderKHR cylinder;
    XrCompositionLayerEquirectKHR equirect;
    XrCompositionLayerEquirect2KHR equirect2;
};

#define heap_alloc(s) HeapAlloc(GetProcessHeap(), 0, s)
#define heap_alloc_zero(s) HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, s)
#define heap_free(p) HeapFree(GetProcessHeap(), 0, p)

static void *heap_realloc(void *p, size_t s)
{
    if(!p) return heap_alloc(s);
    return HeapReAlloc(GetProcessHeap(), 0, p, s);
}

static const char WINE_VULKAN_DEVICE_EXTENSION_NAME[] = "VK_WINE_openxr_device_extensions";
static const char WINE_VULKAN_DEVICE_VARIABLE[] = "__WINE_OPENXR_VK_DEVICE_EXTENSIONS";

static char *wineopenxr_strdup(const char *src)
{
    const size_t l = strlen(src) + 1;
    char *r = heap_alloc(l);
    strcpy(r, src);
    return r;
}

VkDevice(WINAPI *get_native_VkDevice)(VkDevice);
VkInstance(WINAPI *get_native_VkInstance)(VkInstance);
VkPhysicalDevice(WINAPI *get_native_VkPhysicalDevice)(VkPhysicalDevice);
VkPhysicalDevice(WINAPI *get_wrapped_VkPhysicalDevice)(VkInstance, VkPhysicalDevice);
VkQueue(WINAPI *get_native_VkQueue)(VkQueue);
VkResult (WINAPI *create_vk_instance_with_callback)(const VkInstanceCreateInfo *create_info,
        const VkAllocationCallbacks *allocator, VkInstance *instance,
        VkResult (WINAPI *native_vkCreateInstance)(const VkInstanceCreateInfo *, const VkAllocationCallbacks *,
        VkInstance *, void * (*)(VkInstance, const char *), void *),
        void *native_vkCreateInstance_context);
VkResult (WINAPI *create_vk_device_with_callback)(VkPhysicalDevice phys_dev,
        const VkDeviceCreateInfo *create_info,
        const VkAllocationCallbacks *allocator, VkDevice *device,
        VkResult (WINAPI *native_vkCreateDevice)(VkPhysicalDevice, const VkDeviceCreateInfo *, const VkAllocationCallbacks *,
        VkDevice *, void * (*)(VkInstance, const char *), void *),
        void *native_vkCreateDevice_context);

static void load_vk_unwrappers(void)
{
    static HMODULE h = NULL;

    if(h)
        /* already loaded */
        return;

    h = LoadLibraryA("winevulkan");
    if(!h){
        WINE_ERR("unable to load winevulkan\n");
        return;
    }

    get_native_VkDevice = (void*)GetProcAddress(h, "__wine_get_native_VkDevice");
    get_native_VkInstance = (void*)GetProcAddress(h, "__wine_get_native_VkInstance");
    get_native_VkPhysicalDevice = (void*)GetProcAddress(h, "__wine_get_native_VkPhysicalDevice");
    get_wrapped_VkPhysicalDevice = (void*)GetProcAddress(h, "__wine_get_wrapped_VkPhysicalDevice");
    get_native_VkQueue = (void*)GetProcAddress(h, "__wine_get_native_VkQueue");
    create_vk_instance_with_callback = (void*)GetProcAddress(h, "__wine_create_vk_instance_with_callback");
    create_vk_device_with_callback = (void*)GetProcAddress(h, "__wine_create_vk_device_with_callback");
}

#define XR_CURRENT_LOADER_API_LAYER_VERSION 1
#define XR_CURRENT_LOADER_RUNTIME_VERSION 1
#define XR_LOADER_INFO_STRUCT_VERSION 1
#define XR_RUNTIME_INFO_STRUCT_VERSION 1

typedef enum XrLoaderInterfaceStructs {
    XR_LOADER_INTERFACE_STRUCT_UNINTIALIZED = 0,
    XR_LOADER_INTERFACE_STRUCT_LOADER_INFO,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_REQUEST,
    XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_CREATE_INFO,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_NEXT_INFO,
} XrLoaderInterfaceStructs;

typedef struct XrApiLayerNextInfo XrApiLayerNextInfo;

#define XR_API_LAYER_MAX_SETTINGS_PATH_SIZE 512
#define XR_API_LAYER_CREATE_INFO_STRUCT_VERSION 1
typedef struct XrApiLayerCreateInfo {
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    void *loaderInstance;
    char settings_file_location[XR_API_LAYER_MAX_SETTINGS_PATH_SIZE];
    XrApiLayerNextInfo *nextInfo;
} XrApiLayerCreateInfo;

typedef XrResult(__stdcall *PFN_xrCreateApiLayerInstance)(const XrInstanceCreateInfo *info,
        const XrApiLayerCreateInfo *apiLayerInfo, XrInstance *instance);

#define XR_API_LAYER_NEXT_INFO_STRUCT_VERSION 1
struct XrApiLayerNextInfo {
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    char layerName[XR_MAX_API_LAYER_NAME_SIZE];
    PFN_xrGetInstanceProcAddr nextGetInstanceProcAddr;
    PFN_xrCreateApiLayerInstance nextCreateApiLayerInstance;
    XrApiLayerNextInfo *next;
};

#define WINE_XR_STRUCT_NAME(x) x##_win
#define WINE_XR_STRUCT_ATTR __attribute__((ms_struct))
#include "loader_structs.h"
#undef WINE_XR_STRUCT_ATTR
#undef WINE_XR_STRUCT_NAME

#define WINE_XR_STRUCT_NAME(x) x##_host
#define WINE_XR_STRUCT_ATTR
#include "loader_structs.h"
#undef WINE_XR_STRUCT_ATTR
#undef WINE_XR_STRUCT_NAME

static char *g_instance_extensions, *g_device_extensions;
static uint32_t g_physdev_vid, g_physdev_pid;

static char *strdupA(const char *s)
{
    size_t l = strlen(s) + 1;
    char *r = heap_alloc(l);
    memcpy(r, s, l);
    return r;
}

static CRITICAL_SECTION session_list_lock = { NULL, -1, 0, 0, 0, 0 };
static struct list session_list = LIST_INIT(session_list);

static wine_XrSession *get_wrapped_XrSession(XrSession native)
{
    wine_XrSession *cursor;

    EnterCriticalSection(&session_list_lock);

    LIST_FOR_EACH_ENTRY(cursor, &session_list, wine_XrSession, entry){
        if(cursor->session == native)
            break;
    }

    LeaveCriticalSection(&session_list_lock);

    if(&cursor->entry == &session_list)
        return NULL;

    return cursor;
}

static void parse_extensions(const char *in, uint32_t *out_count,
        char ***out_strs)
{
    char *iter, *start;
    char **list, *str = strdupA(in);
    uint32_t extension_count = 0, o = 0;

    iter = str;
    while(*iter){
        if(*iter++ == ' ')
            extension_count++;
    }
    /* count the one ending in NUL */
    if(iter != str)
        extension_count++;
    if(!extension_count){
        *out_count = 0;
        *out_strs = NULL;
        return;
    }

    list = heap_alloc(extension_count * sizeof(char *));

    start = iter = str;
    do{
        if(*iter == ' '){
            *iter = 0;
            list[o++] = strdupA(start);
            WINE_TRACE("added %s to list\n", list[o-1]);
            iter++;
            start = iter;
        }else if(*iter == 0){
            list[o++] = strdupA(start);
            WINE_TRACE("added %s to list\n", list[o-1]);
            break;
        }else{
            iter++;
        }
    }while(1);

    *out_count = extension_count;
    *out_strs = list;
}

static BOOL HACK_does_openvr_work(void)
{
    /* Linux SteamVR's xrCreateInstance will hang forever if SteamVR hasn't
     * already been launched by the user.  Since that's the only way to tell if
     * OpenXR is functioning, let's use OpenVR to tell whether SteamVR is
     * functioning before calling xrCreateInstance.
     *
     * This should be removed when SteamVR's bug is fixed. */
    DWORD type, value, wait_status, size;
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

done:
    CloseHandle(event);
    RegCloseKey(vr_key);
    return value == 1;
}

XrResult load_host_openxr_loader(void)
{
    PFN_xrGetVulkanInstanceExtensionsKHR pxrGetVulkanInstanceExtensionsKHR;
    PFN_xrGetSystem pxrGetSystem;
    PFN_xrGetVulkanDeviceExtensionsKHR pxrGetVulkanDeviceExtensionsKHR;
    PFN_xrGetVulkanGraphicsDeviceKHR pxrGetVulkanGraphicsDeviceKHR;
    PFN_xrGetVulkanGraphicsRequirementsKHR pxrGetVulkanGraphicsRequirementsKHR;
    PFN_xrGetInstanceProperties pxrGetInstanceProperties;
    PFN_xrEnumerateViewConfigurations pxrEnumerateViewConfigurations;
    uint32_t len, i;
    XrInstance instance;
    XrSystemId system;
    XrResult res;
    VkInstance vk_instance;
    VkResult vk_res;
    VkPhysicalDevice vk_physdev;
    VkPhysicalDeviceProperties vk_dev_props;

    static const char *xr_extensions[] = {
        "XR_KHR_vulkan_enable",
    };

    if(g_instance_extensions || g_device_extensions)
        /* already done */
        return XR_SUCCESS;

    if(!HACK_does_openvr_work()){
        return XR_ERROR_INITIALIZATION_FAILED;
    }

    load_vk_unwrappers();

    XrInstanceCreateInfo xrCreateInfo = {
        .type = XR_TYPE_INSTANCE_CREATE_INFO,
        .next = NULL,
        .createFlags = 0,
        .applicationInfo = {
            .applicationVersion = 0,
            .engineVersion = 0,
            .apiVersion = XR_CURRENT_API_VERSION,
        },
        .enabledApiLayerCount = 0,
        .enabledApiLayerNames = NULL,
        .enabledExtensionCount = ARRAY_SIZE(xr_extensions),
        .enabledExtensionNames = xr_extensions,
    };

    strcpy(xrCreateInfo.applicationInfo.applicationName, "wineopenxr test instance");
    strcpy(xrCreateInfo.applicationInfo.engineName, "wineopenxr test instance");

    res = xrCreateInstance(&xrCreateInfo, &instance);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateInstance failed: %d\n", res);
        return res;
    }

    xrGetInstanceProcAddr(instance, "xrGetVulkanInstanceExtensionsKHR", (PFN_xrVoidFunction *)&pxrGetVulkanInstanceExtensionsKHR);
    xrGetInstanceProcAddr(instance, "xrGetVulkanDeviceExtensionsKHR", (PFN_xrVoidFunction *)&pxrGetVulkanDeviceExtensionsKHR);
    xrGetInstanceProcAddr(instance, "xrGetSystem", (PFN_xrVoidFunction *)&pxrGetSystem);
    xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDeviceKHR", (PFN_xrVoidFunction *)&pxrGetVulkanGraphicsDeviceKHR);
    xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirementsKHR", (PFN_xrVoidFunction *)&pxrGetVulkanGraphicsRequirementsKHR);
    xrGetInstanceProcAddr(instance, "xrGetInstanceProperties", (PFN_xrVoidFunction *)&pxrGetInstanceProperties);
    xrGetInstanceProcAddr(instance, "xrEnumerateViewConfigurations", (PFN_xrVoidFunction *)&pxrEnumerateViewConfigurations);

    XrInstanceProperties inst_props = {
        .type = XR_TYPE_INSTANCE_PROPERTIES,
    };
    res = pxrGetInstanceProperties(instance, &inst_props);
    if(res != XR_SUCCESS)
        WINE_WARN("xrGetInstanceProperties failed: %d\n", res);

    XrSystemGetInfo system_info = {
        .type = XR_TYPE_SYSTEM_GET_INFO,
        .formFactor = XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY,
    };
    res = pxrGetSystem(instance, &system_info, &system);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetSystem failed: %d\n", res);
        xrDestroyInstance(instance);
        return res;
    }

    res = pxrEnumerateViewConfigurations(instance, system, 0, &len, NULL);
    if(res != XR_SUCCESS)
        WINE_WARN("xrEnumerateViewConfigurations failed: %d\n", res);
    XrViewConfigurationType *configs = heap_alloc(len * sizeof(*configs));
    res = pxrEnumerateViewConfigurations(instance, system, len, &len, configs);
    if(res != XR_SUCCESS)
        WINE_WARN("xrEnumerateViewConfigurations failed: %d\n", res);
    heap_free(configs);

    XrGraphicsRequirementsVulkanKHR reqs = {
        .type = XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR,
    };
    res = pxrGetVulkanGraphicsRequirementsKHR(instance, system, &reqs);
    if(res != XR_SUCCESS)
        WINE_WARN("xrGetVulkanGraphicsRequirementsKHR failed: %d\n", res);

    res = pxrGetVulkanInstanceExtensionsKHR(instance, system, 0, &len, NULL);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
        xrDestroyInstance(instance);
        return res;
    }
    g_instance_extensions = heap_alloc(len);
    res = pxrGetVulkanInstanceExtensionsKHR(instance, system, len, &len, g_instance_extensions);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
        xrDestroyInstance(instance);
        heap_free(g_instance_extensions);
        g_instance_extensions = NULL;
        return res;
    }

    VkApplicationInfo vk_appinfo = {
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pNext = NULL,
        .pApplicationName = "wineopenxr test instance",
        .applicationVersion = 0,
        .pEngineName = "wineopenxr test instance",
        .engineVersion = VK_MAKE_VERSION(1, 0, 0),
        .apiVersion = VK_MAKE_VERSION(1, 1, 0),
    };

    VkInstanceCreateInfo vk_createinfo = {
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pNext = NULL,
        .flags = 0,
        .pApplicationInfo = &vk_appinfo,
        .enabledLayerCount = 0,
        .ppEnabledLayerNames = NULL,
        .enabledExtensionCount = 0,
        .ppEnabledExtensionNames = NULL,
    };

    parse_extensions(g_instance_extensions,
            &vk_createinfo.enabledExtensionCount,
            (char ***)&vk_createinfo.ppEnabledExtensionNames);

    vk_res = vkCreateInstance(&vk_createinfo, NULL, &vk_instance);
    if(vk_res != VK_SUCCESS){
        WINE_WARN("vkCreateInstance failed: %d\n", vk_res);
        for(i = 0; i < vk_createinfo.enabledExtensionCount; ++i)
            heap_free((void*)vk_createinfo.ppEnabledExtensionNames[i]);
        heap_free((void*)vk_createinfo.ppEnabledExtensionNames);
        xrDestroyInstance(instance);
        heap_free(g_instance_extensions);
        g_instance_extensions = NULL;
        return XR_ERROR_INITIALIZATION_FAILED;
    }

    for(i = 0; i < vk_createinfo.enabledExtensionCount; ++i)
        heap_free((void*)vk_createinfo.ppEnabledExtensionNames[i]);
    heap_free((void*)vk_createinfo.ppEnabledExtensionNames);

    res = pxrGetVulkanGraphicsDeviceKHR(instance, system, vk_instance, &vk_physdev);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetVulkanGraphicsDeviceKHR failed: %d\n", res);
        vkDestroyInstance(vk_instance, NULL);
        xrDestroyInstance(instance);
        heap_free(g_instance_extensions);
        g_instance_extensions = NULL;
        return res;
    }

    vkGetPhysicalDeviceProperties(vk_physdev, &vk_dev_props);
    g_physdev_vid = vk_dev_props.vendorID;
    g_physdev_pid = vk_dev_props.deviceID;

    res = pxrGetVulkanDeviceExtensionsKHR(instance, system, 0, &len, NULL);
    if(res != XR_SUCCESS){
        WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
        vkDestroyInstance(vk_instance, NULL);
        xrDestroyInstance(instance);
        heap_free(g_instance_extensions);
        g_instance_extensions = NULL;
        return res;
    }
    g_device_extensions = heap_alloc(len);
    res = pxrGetVulkanDeviceExtensionsKHR(instance, system, len, &len, g_device_extensions);
    if(res != XR_SUCCESS){
        WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
        vkDestroyInstance(vk_instance, NULL);
        xrDestroyInstance(instance);
        heap_free(g_instance_extensions);
        g_instance_extensions = NULL;
        heap_free(g_device_extensions);
        g_device_extensions = NULL;
        return res;
    }

    vkDestroyInstance(vk_instance, NULL);
    xrDestroyInstance(instance);

    WINE_TRACE("Got required instance extensions: %s\n", g_instance_extensions);
    WINE_TRACE("Got required device extensions: %s\n", g_device_extensions);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrEnumerateInstanceExtensionProperties(const char *layerName,
        uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties)
{
    XrResult res;
    uint32_t i;

    static const char *extra_extensions[] = {
        "XR_KHR_D3D11_enable",
    };

    WINE_TRACE("\n");

    res = xrEnumerateInstanceExtensionProperties(layerName, propertyCapacityInput, propertyCountOutput, properties);

    if(res == XR_SUCCESS){
        if(properties){
            for(i = 0; i < ARRAY_SIZE(extra_extensions); ++i){
                strcpy(properties[*propertyCountOutput + i].extensionName, extra_extensions[i]);
            }
            *propertyCountOutput += ARRAY_SIZE(extra_extensions);
            WINE_TRACE("Returning extensions:\n");
            for(i = 0; i < *propertyCountOutput; ++i){
                WINE_TRACE("\t-%s\n", properties[i].extensionName);
            }
        }else{
            *propertyCountOutput += ARRAY_SIZE(extra_extensions);
        }
    }

    return res;
}

XrResult WINAPI wine_xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance,
        XrTime time, LARGE_INTEGER *performanceCounter)
{
    WINE_FIXME("unimplemented\n");
    /* FIXME */
    return XR_ERROR_INITIALIZATION_FAILED;
}

XrResult WINAPI wine_xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance,
        const LARGE_INTEGER *performanceCounter, XrTime *time)
{
    WINE_FIXME("unimplemented\n");
    /* FIXME */
    return XR_ERROR_INITIALIZATION_FAILED;
}

XrResult WINAPI wine_xrGetD3D11GraphicsRequirementsKHR(XrInstance instance,
        XrSystemId systemId, XrGraphicsRequirementsD3D11KHR *graphicsRequirements)
{
    IDXGIFactory1 *factory;
    IDXGIAdapter *adapter;
    DXGI_ADAPTER_DESC adapter_desc;
    HRESULT hr;
    DWORD i;

    WINE_TRACE("\n");

    hr = CreateDXGIFactory1(&IID_IDXGIFactory1, (void**)&factory);
    if(FAILED(hr)){
        WINE_WARN("CreateDXGIFactory1 failed: %08x\n", hr);
        return XR_ERROR_INITIALIZATION_FAILED;
    }

    i = 0;
    while((hr = IDXGIFactory1_EnumAdapters(factory, i++, &adapter)) == S_OK){
        hr = IDXGIAdapter_GetDesc(adapter, &adapter_desc);
        if(FAILED(hr)){
            WINE_WARN("GetDesc failed: %08x\n", hr);
            IDXGIAdapter_Release(adapter);
            continue;
        }

        IDXGIAdapter_Release(adapter);

        /* FIXME: what if we have two of the same adapters? */
        if(adapter_desc.VendorId == g_physdev_vid &&
                adapter_desc.DeviceId == g_physdev_pid){
            break;
        }
    }

    if(hr == S_OK){
        graphicsRequirements->adapterLuid = adapter_desc.AdapterLuid;
    }else{
        WINE_WARN("Couldn't find matching DXGI adapter for given VkPhysicalDevice! Choosing first one...\n");

        hr = IDXGIFactory1_EnumAdapters(factory, 0, &adapter);
        if(FAILED(hr)){
            WINE_WARN("EnumAdapters(0) failed: %08x\n", hr);
            IDXGIFactory1_Release(factory);
            return XR_ERROR_INITIALIZATION_FAILED;
        }

        hr = IDXGIAdapter_GetDesc(adapter, &adapter_desc);
        if(FAILED(hr)){
            WINE_WARN("GetDesc(0) failed: %08x\n", hr);
            IDXGIAdapter_Release(adapter);
            IDXGIFactory1_Release(factory);
            return XR_ERROR_INITIALIZATION_FAILED;
        }

        IDXGIAdapter_Release(adapter);

        graphicsRequirements->adapterLuid = adapter_desc.AdapterLuid;
    }

    IDXGIFactory1_Release(factory);

    /* XXX */
    graphicsRequirements->minFeatureLevel = D3D_FEATURE_LEVEL_10_0;

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrGetD3D12GraphicsRequirementsKHR(XrInstance instance,
        XrSystemId systemId, XrGraphicsRequirementsD3D12KHR *graphicsRequirements)
{
    WINE_FIXME("unimplemented\n");
    /* FIXME */
    return XR_ERROR_INITIALIZATION_FAILED;
}

XrResult WINAPI wine_xrGetInstanceProcAddr(XrInstance instance, const char *fn_name, PFN_xrVoidFunction *out_fn)
{
    WINE_TRACE("%s\n", fn_name);

    *out_fn = wine_xr_proc_addr(fn_name);
    if(!*out_fn){
        WINE_WARN("Unable to find requested function: %s\n", fn_name);
        return XR_ERROR_FUNCTION_UNSUPPORTED;
    }

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance)
{
    XrResult res;
    struct wine_XrInstance *wine_instance;
    uint32_t i, j, type = 0;
    XrInstanceCreateInfo our_createInfo;
    uint32_t dst = 0;
    char **new_list = NULL;

    WINE_TRACE("%p, %p\n", createInfo, instance);

    WINE_TRACE("Incoming extensions:\n");
    for(i = 0; i < createInfo->enabledExtensionCount; ++i){
        WINE_TRACE("  -%s\n", createInfo->enabledExtensionNames[i]);
        if(!strcmp(createInfo->enabledExtensionNames[i], "XR_KHR_D3D11_enable")){
            type = INSTANCE_TYPE_D3D11;
        }else if(!strcmp(createInfo->enabledExtensionNames[i], "XR_KHR_D3D12_enable")){
            type = INSTANCE_TYPE_D3D12;
        }else if(!strcmp(createInfo->enabledExtensionNames[i], "XR_KHR_vulkan_enable")){
            type = INSTANCE_TYPE_VULKAN;
        }else if(!strcmp(createInfo->enabledExtensionNames[i], "XR_KHR_opengl_enable")){
            type = INSTANCE_TYPE_OPENGL;
        }
    }

    /* remove win32 extensions */
    for(i = 0; i < createInfo->enabledExtensionCount; ++i){
        if(strcmp(createInfo->enabledExtensionNames[i], "XR_KHR_D3D11_enable") != 0){
            if(i != dst){
                new_list[dst] = wineopenxr_strdup(createInfo->enabledExtensionNames[i]);
            }
            dst++;
        }else{
            /* skip this one */
            if(!new_list){
                new_list = heap_alloc(createInfo->enabledExtensionCount * sizeof(char *));
                for(j = 0; j < i; ++j){
                    new_list[j] = wineopenxr_strdup(createInfo->enabledExtensionNames[j]);
                }
            }
        }
    }
    if(new_list){
        /* we must have removed a d3d thing, so put vulkan here */
        new_list[dst] = wineopenxr_strdup("XR_KHR_vulkan_enable");
        dst++;

        our_createInfo = *createInfo;
        our_createInfo.enabledExtensionNames = (const char * const*)new_list;
        our_createInfo.enabledExtensionCount = dst;
        createInfo = &our_createInfo;
    }

    WINE_TRACE("Enabled extensions:\n");
    for(i = 0; i < createInfo->enabledExtensionCount; ++i){
        WINE_TRACE("  -%s\n", createInfo->enabledExtensionNames[i]);
    }

    wine_instance = heap_alloc_zero(sizeof(wine_XrInstance));

    res = xrCreateInstance(createInfo, &wine_instance->instance);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateInstance failed: %d\n", res);
        heap_free(wine_instance);
        goto cleanup;
    }

    WINE_TRACE("allocated wine instance %p for native instance %p\n",
            wine_instance, wine_instance->instance);

#define USE_XR_FUNC(x) \
        xrGetInstanceProcAddr(wine_instance->instance, #x, (PFN_xrVoidFunction *)&wine_instance->funcs.p_##x);
    ALL_XR_INSTANCE_FUNCS()
#undef USE_XR_FUNC

    wine_instance->instance_type = type;
    *instance = (XrInstance)wine_instance;

cleanup:
    if(createInfo == &our_createInfo){
        for(i = 0; i < our_createInfo.enabledExtensionCount; ++i){
            heap_free((void*)our_createInfo.enabledExtensionNames[i]);
        }
        heap_free((void*)our_createInfo.enabledExtensionNames);
    }
    return res;
}

XrResult WINAPI wine_xrDestroyInstance(XrInstance instance)
{
    wine_XrInstance *wine_instance = (wine_XrInstance *)instance;
    XrResult res;

    WINE_TRACE("\n");

    res = xrDestroyInstance(wine_instance->instance);
    if(res != XR_SUCCESS){
        WINE_WARN("xrDestroyInstance failed: %d\n", res);
        return res;
    }

    if(wine_instance->dxvk_device)
        wine_instance->dxvk_device->lpVtbl->Release(wine_instance->dxvk_device);

    heap_free(wine_instance);

    return XR_SUCCESS;
}

/* SteamVR does some internal init during these functions. */
static XrResult do_vulkan_init(wine_XrInstance *wine_instance, VkInstance vk_instance)
{
    char *instance_extensions, *device_extensions;
    XrGraphicsRequirementsVulkanKHR vk_reqs;
    XrResult res;
    uint32_t len;

    vk_reqs.type = XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR;
    vk_reqs.next = NULL;
    res = wine_instance->funcs.p_xrGetVulkanGraphicsRequirementsKHR(wine_instance->instance,
            wine_instance->systemId, &vk_reqs);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("xrGetVulkanGraphicsRequirementsKHR failed: %d\n", res);
        return res;
    }

    res = wine_instance->funcs.p_xrGetVulkanInstanceExtensionsKHR(wine_instance->instance,
            wine_instance->systemId, 0, &len, NULL);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
        return res;
    }
    instance_extensions = heap_alloc(len);
    res = wine_instance->funcs.p_xrGetVulkanInstanceExtensionsKHR(wine_instance->instance, wine_instance->systemId,
            len, &len, instance_extensions);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
        heap_free(instance_extensions);
        return res;
    }

    res = wine_instance->funcs.p_xrGetVulkanGraphicsDeviceKHR(wine_instance->instance, wine_instance->systemId,
            vk_instance, &wine_instance->vk_phys_dev);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("xrGetVulkanGraphicsDeviceKHR failed: %d\n", res);
        return res;
    }

    res = wine_instance->funcs.p_xrGetVulkanDeviceExtensionsKHR(wine_instance->instance, wine_instance->systemId, 0, &len, NULL);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
        return res;
    }
    device_extensions = heap_alloc(len);
    res = wine_instance->funcs.p_xrGetVulkanDeviceExtensionsKHR(wine_instance->instance, wine_instance->systemId, len, &len, device_extensions);
    if(res != XR_SUCCESS)
    {
        WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
        heap_free(device_extensions);
        return res;
    }
    heap_free(device_extensions);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session)
{
    wine_XrInstance *wine_instance = (wine_XrInstance *)instance;
    wine_XrSession *wine_session;
    XrResult res;
    XrSessionCreateInfo our_create_info;
    XrGraphicsBindingVulkanKHR our_vk_binding;

    WINE_TRACE("%p, %p, %p\n", instance, createInfo, session);

    if(createInfo->next){
        switch(((XrBaseInStructure *)createInfo->next)->type){
            case XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR /* == XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR */:
            {
                const XrGraphicsBindingVulkanKHR *their_vk_binding = (const XrGraphicsBindingVulkanKHR *)createInfo->next;

                our_vk_binding = *their_vk_binding;
                our_vk_binding.instance = get_native_VkInstance(their_vk_binding->instance);
                our_vk_binding.physicalDevice = get_native_VkPhysicalDevice(their_vk_binding->physicalDevice);
                our_vk_binding.device = get_native_VkDevice(their_vk_binding->device);

                our_create_info = *createInfo;
                our_create_info.next = &our_vk_binding;
                createInfo = &our_create_info;

                break;
            }
            case XR_TYPE_GRAPHICS_BINDING_D3D11_KHR:
            {
                const XrGraphicsBindingD3D11KHR *their_d3d11_binding = (const XrGraphicsBindingD3D11KHR *)createInfo->next;
                HRESULT hr;

                hr = ID3D11Device_QueryInterface(their_d3d11_binding->device, &IID_IDXGIVkInteropDevice2, (void **)&wine_instance->dxvk_device);
                if(FAILED(hr)){
                    WINE_WARN("Given ID3D11Device doesn't support IDXGIVkInteropDevice. Only DXVK is supported.\n");
                    return XR_ERROR_VALIDATION_FAILURE;
                }

                our_vk_binding.type = XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR;
                our_vk_binding.next = NULL;

                wine_instance->dxvk_device->lpVtbl->GetVulkanHandles(wine_instance->dxvk_device,
                        &our_vk_binding.instance, &our_vk_binding.physicalDevice, &our_vk_binding.device);

                wine_instance->dxvk_device->lpVtbl->GetSubmissionQueue2(wine_instance->dxvk_device,
                        NULL, &our_vk_binding.queueIndex, &our_vk_binding.queueFamilyIndex);

                our_vk_binding.instance = get_native_VkInstance(our_vk_binding.instance);

                if ((res = do_vulkan_init(wine_instance, our_vk_binding.instance)) != XR_SUCCESS)
                    return res;

                if (wine_instance->vk_phys_dev != get_native_VkPhysicalDevice(our_vk_binding.physicalDevice))
                    WINE_WARN("VK physical device does not match that from xrGetVulkanGraphicsDeviceKHR.\n");

                our_vk_binding.physicalDevice = wine_instance->vk_phys_dev;
                our_vk_binding.device = get_native_VkDevice(our_vk_binding.device);

                our_create_info = *createInfo;
                our_create_info.next = &our_vk_binding;
                createInfo = &our_create_info;

                break;
            }
            default:
                WINE_WARN("Unhandled graphics binding type: %d\n", ((XrBaseInStructure *)createInfo->next)->type);
                break;
        }
    }

    wine_session = heap_alloc_zero(sizeof(*wine_session));

    res = xrCreateSession(wine_instance->instance, createInfo, &wine_session->session);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateSession failed: %d\n", res);
        heap_free(wine_session);
        return res;
    }

    wine_session->wine_instance = wine_instance;

    EnterCriticalSection(&session_list_lock);

    list_add_tail(&session_list, &wine_session->entry);

    LeaveCriticalSection(&session_list_lock);

    *session = (XrSession)wine_session;

    WINE_TRACE("allocated wine session %p for native session %p\n",
            wine_session, wine_session->session);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrDestroySession(XrSession session)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    XrResult res;

    WINE_TRACE("%p\n", session);

    res = xrDestroySession(wine_session->session);
    if(res != XR_SUCCESS){
        WINE_WARN("xrDestroySession failed: %d\n", res);
        return res;
    }

    heap_free(wine_session->projection_views);
    heap_free(wine_session->composition_layers);
    heap_free(wine_session);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo,
        XrHandTrackerEXT *handTracker)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    wine_XrHandTrackerEXT *wine_handTracker;
    XrResult res;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, handTracker);

    wine_handTracker = heap_alloc_zero(sizeof(*wine_handTracker));

    res = wine_session->wine_instance->funcs.p_xrCreateHandTrackerEXT(wine_session->session, createInfo, &wine_handTracker->hand_tracker);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateHandTrackerEXT failed: %d\n", res);
        heap_free(wine_handTracker);
        return res;
    }

    wine_handTracker->wine_session = wine_session;

    *handTracker = (XrHandTrackerEXT)wine_handTracker;

    WINE_TRACE("allocated wine handTracker %p for native handTracker %p\n",
            wine_handTracker, wine_handTracker->hand_tracker);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker)
{
    wine_XrHandTrackerEXT *wine_handTracker = (wine_XrHandTrackerEXT *)handTracker;
    XrResult res;

    WINE_TRACE("%p\n", handTracker);

    res = wine_handTracker->wine_session->wine_instance->funcs.p_xrDestroyHandTrackerEXT(wine_handTracker->hand_tracker);
    if(res != XR_SUCCESS){
        WINE_WARN("xrDestroyHandTrackerEXT failed: %d\n", res);
        return res;
    }

    heap_free(wine_handTracker);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrCreateSpatialAnchorMSFT(XrSession session,
        const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    wine_XrSpatialAnchorMSFT *wine_anchor;
    XrResult res;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, anchor);

    wine_anchor = heap_alloc_zero(sizeof(*wine_anchor));

    res = wine_session->wine_instance->funcs.p_xrCreateSpatialAnchorMSFT(wine_session->session, createInfo, &wine_anchor->spatial_anchor);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateSpatialAnchorMSFT failed: %d\n", res);
        heap_free(wine_anchor);
        return res;
    }

    wine_anchor->wine_session = wine_session;

    *anchor = (XrSpatialAnchorMSFT)wine_anchor;

    WINE_TRACE("allocated wine spatialAnchor %p for native spatialAnchor %p\n",
            wine_anchor, wine_anchor->spatial_anchor);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor)
{
    wine_XrSpatialAnchorMSFT *wine_anchor = (wine_XrSpatialAnchorMSFT *)anchor;
    XrResult res;

    WINE_TRACE("%p\n", anchor);

    res = wine_anchor->wine_session->wine_instance->funcs.p_xrDestroySpatialAnchorMSFT(wine_anchor->spatial_anchor);
    if(res != XR_SUCCESS){
        WINE_WARN("xrDestroySpatialAnchorMSFT failed: %d\n", res);
        return res;
    }

    heap_free(wine_anchor);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrNegotiateLoaderRuntimeInterface(
        const XrNegotiateLoaderInfo_win *loaderInfo,
        XrNegotiateRuntimeRequest_win *runtimeRequest)
{
    XrResult res;

    if(!loaderInfo || !runtimeRequest)
        return XR_ERROR_INITIALIZATION_FAILED;

    if((res = load_host_openxr_loader()) != XR_SUCCESS){
        WINE_TRACE("host openxr loader failed to load runtime: %d\n", res);
        return res;
    }

    if(loaderInfo->structType != XR_LOADER_INTERFACE_STRUCT_LOADER_INFO ||
            loaderInfo->structVersion != XR_LOADER_INFO_STRUCT_VERSION ||
            loaderInfo->structSize != sizeof(XrNegotiateLoaderInfo_win)){
        return XR_ERROR_VALIDATION_FAILURE;
    }

    if(loaderInfo->minInterfaceVersion > XR_CURRENT_LOADER_RUNTIME_VERSION ||
            loaderInfo->maxInterfaceVersion < XR_CURRENT_LOADER_RUNTIME_VERSION){
        return XR_ERROR_VALIDATION_FAILURE;
    }

    if(runtimeRequest->structType != XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST ||
            runtimeRequest->structVersion != XR_RUNTIME_INFO_STRUCT_VERSION ||
            runtimeRequest->structSize != sizeof(XrNegotiateRuntimeRequest_win)){
        return XR_ERROR_VALIDATION_FAILURE;
    }

    runtimeRequest->runtimeInterfaceVersion = XR_CURRENT_LOADER_RUNTIME_VERSION;
    runtimeRequest->getInstanceProcAddr = (PFN_xrGetInstanceProcAddr)&wine_xrGetInstanceProcAddr;
    runtimeRequest->runtimeApiVersion = XR_CURRENT_API_VERSION;

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrGetVulkanGraphicsDeviceKHR(XrInstance instance,
        XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice)
{
    XrResult res;
    WINE_TRACE("%p, 0x%s, %p, %p\n", instance, wine_dbgstr_longlong(systemId), vkInstance, vkPhysicalDevice);
    res = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsDeviceKHR(((wine_XrInstance *)instance)->instance, systemId, get_native_VkInstance(vkInstance), vkPhysicalDevice);
    *vkPhysicalDevice = get_wrapped_VkPhysicalDevice(vkInstance, *vkPhysicalDevice);
    return res;
}

XrResult WINAPI wine_xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice)
{
    XrVulkanGraphicsDeviceGetInfoKHR our_getinfo;
    XrResult res;

    WINE_TRACE("instance %p, getInfo %p, vulkanPhysicalDevice %p.\n", instance, getInfo, vulkanPhysicalDevice);

    if (getInfo->next)
        WINE_WARN("Unsupported chained structure %p.\n", getInfo->next);

    our_getinfo = *getInfo;
    our_getinfo.vulkanInstance = get_native_VkInstance(our_getinfo.vulkanInstance);

    res = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsDevice2KHR(((wine_XrInstance *)instance)->instance, &our_getinfo, vulkanPhysicalDevice);
    if (res == XR_SUCCESS)
        *vulkanPhysicalDevice = get_wrapped_VkPhysicalDevice(getInfo->vulkanInstance, *vulkanPhysicalDevice);
    return res;
}

XrResult WINAPI wine_xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    XrResult res;
    uint32_t buf_len = 0;
    char *buf;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), bufferCapacityInput, bufferCountOutput, buffer);

    if(bufferCapacityInput == 0){
        *bufferCountOutput = sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME);
        return XR_SUCCESS;
    }

    if(bufferCapacityInput < sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME)){
        *bufferCountOutput = sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME);
        return XR_ERROR_SIZE_INSUFFICIENT;
    }

    res = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanDeviceExtensionsKHR(
            ((wine_XrInstance *)instance)->instance, systemId,
            0, &buf_len, NULL);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetVulkanDeviceExtensionsKHR failed: %d\n", res);
        return res;
    }

    buf = heap_alloc(buf_len);

    res = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanDeviceExtensionsKHR(
            ((wine_XrInstance *)instance)->instance, systemId,
            buf_len, &buf_len, buf);
    if(res != XR_SUCCESS){
        WINE_WARN("xrGetVulkanDeviceExtensionsKHR failed: %d\n", res);
        heap_free(buf);
        return res;
    }

    WINE_TRACE("got device extensions: %s\n", buf);
    SetEnvironmentVariableA(WINE_VULKAN_DEVICE_VARIABLE, buf);

    heap_free(buf);

    memcpy(buffer, WINE_VULKAN_DEVICE_EXTENSION_NAME, sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME));
    *bufferCountOutput = sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrGetVulkanInstanceExtensionsKHR(XrInstance instance,
        XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput,
        char *buffer)
{
    static const char win32_surface[] = "VK_KHR_surface VK_KHR_win32_surface";

    XrResult res;
    uint32_t lin_len;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), bufferCapacityInput, bufferCountOutput, buffer);

    /* Linux SteamVR does not return xlib_surface, but Windows SteamVR _does_
     * return win32_surface. Some games (including hello_xr) depend on that, so
     * add it here. */

    res = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanInstanceExtensionsKHR(
            ((wine_XrInstance *)instance)->instance, systemId,
            bufferCapacityInput, bufferCountOutput, buffer);
    if(res == XR_SUCCESS){

        if(bufferCapacityInput > 0){
            /* *bufferCountOutput is not required to (and sometimes does not) contain the offset to the NUL byte */
            lin_len = strlen(buffer) + 1;

            if(bufferCapacityInput < lin_len + sizeof(win32_surface))
                return XR_ERROR_SIZE_INSUFFICIENT;

            buffer[lin_len - 1] = ' ';
            memcpy(&buffer[lin_len], win32_surface, sizeof(win32_surface));

            WINE_TRACE("returning: %s\n", buffer);
            *bufferCountOutput = lin_len + sizeof(win32_surface);
        }else{
            *bufferCountOutput += sizeof(win32_surface) /* NUL byte included for required ' ' */;
        }
    }

    return res;
}

struct vk_create_instance_callback_context
{
    wine_XrInstance *wine_instance;
    const XrVulkanInstanceCreateInfoKHR *xr_create_info;
    XrResult ret;
};

static VkResult WINAPI vk_create_instance_callback(const VkInstanceCreateInfo *create_info, const VkAllocationCallbacks *allocator,
        VkInstance *vk_instance, void * (*pfnGetInstanceProcAddr)(VkInstance, const char *), void *context)
{
    struct vk_create_instance_callback_context *c = context;
    XrVulkanInstanceCreateInfoKHR our_create_info;
    VkInstanceCreateInfo our_vulkan_create_info;
    const char **enabled_extensions = NULL;
    unsigned int i;
    VkResult ret;

    WINE_TRACE("create_info %p, allocator %p, vk_instance %p, pfnGetInstanceProcAddr %p, context %p.\n",
            create_info, allocator, vk_instance, pfnGetInstanceProcAddr, context);

    our_create_info = *c->xr_create_info;
    our_create_info.pfnGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)pfnGetInstanceProcAddr;
    our_create_info.vulkanCreateInfo = create_info;
    our_create_info.vulkanAllocator = allocator;

    for (i = 0; i < create_info->enabledExtensionCount; ++i)
        if (!strcmp(create_info->ppEnabledExtensionNames[i], "VK_KHR_surface"))
            break;

    if (i == create_info->enabledExtensionCount)
    {
        our_vulkan_create_info = *create_info;
        our_create_info.vulkanCreateInfo = &our_vulkan_create_info;

        enabled_extensions = heap_alloc((create_info->enabledExtensionCount + 2) * sizeof(*enabled_extensions));
        memcpy(enabled_extensions, create_info->ppEnabledExtensionNames,
                create_info->enabledExtensionCount * sizeof(*enabled_extensions));
        enabled_extensions[our_vulkan_create_info.enabledExtensionCount++] = "VK_KHR_surface";
        enabled_extensions[our_vulkan_create_info.enabledExtensionCount++] = "VK_KHR_xlib_surface";
        our_vulkan_create_info.ppEnabledExtensionNames = enabled_extensions;

        for (i = create_info->enabledExtensionCount; i < our_vulkan_create_info.enabledExtensionCount; ++i)
            WINE_TRACE("Added extension %s.\n", enabled_extensions[i]);
    }

    c->ret = c->wine_instance->funcs.p_xrCreateVulkanInstanceKHR(c->wine_instance->instance, &our_create_info, vk_instance, &ret);
    heap_free(enabled_extensions);
    return ret;
}

XrResult WINAPI wine_xrCreateVulkanInstanceKHR(XrInstance instance, const XrVulkanInstanceCreateInfoKHR *createInfo,
        VkInstance *vulkanInstance, VkResult *vulkanResult)
{
    struct vk_create_instance_callback_context context;

    WINE_TRACE("instance %p, createInfo %p, vulkanInstance %p, vulkanResult %p.\n",
            instance, createInfo, vulkanInstance, vulkanResult);

    if (createInfo->createFlags)
        WINE_WARN("Unexpected flags %#x.\n", createInfo->createFlags);

    context.wine_instance = (wine_XrInstance *)instance;
    context.xr_create_info = createInfo;

    *vulkanResult = create_vk_instance_with_callback(createInfo->vulkanCreateInfo, createInfo->vulkanAllocator, vulkanInstance,
            vk_create_instance_callback, &context);

    if (context.ret == XR_SUCCESS && *vulkanResult != VK_SUCCESS)
        WINE_WARN("winevulkan instance creation failed after native xrCreateVulkanInstanceKHR() success.\n");

    WINE_TRACE("result %d, vk result %d.\n", context.ret, *vulkanResult);
    return context.ret;
}

struct vk_create_device_callback_context
{
    wine_XrInstance *wine_instance;
    const XrVulkanDeviceCreateInfoKHR *xr_create_info;
    XrResult ret;
};

static VkResult WINAPI vk_create_device_callback(VkPhysicalDevice phys_dev, const VkDeviceCreateInfo *create_info, const VkAllocationCallbacks *allocator,
        VkDevice *vk_device, void * (*pfnGetInstanceProcAddr)(VkInstance, const char *), void *context)
{
    struct vk_create_device_callback_context *c = context;
    XrVulkanDeviceCreateInfoKHR our_create_info;
    VkResult ret;

    WINE_TRACE("phys_dev %p, create_info %p, allocator %p, vk_device %p, pfnGetInstanceProcAddr %p, context %p.\n",
            phys_dev, create_info, allocator, vk_device, pfnGetInstanceProcAddr, context);

    our_create_info = *c->xr_create_info;
    our_create_info.pfnGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)pfnGetInstanceProcAddr;
    our_create_info.vulkanPhysicalDevice = phys_dev;
    our_create_info.vulkanCreateInfo = create_info;
    our_create_info.vulkanAllocator = allocator;
    c->ret = c->wine_instance->funcs.p_xrCreateVulkanDeviceKHR(c->wine_instance->instance, &our_create_info, vk_device, &ret);
    return ret;
}

XrResult WINAPI wine_xrCreateVulkanDeviceKHR(XrInstance instance, const XrVulkanDeviceCreateInfoKHR *createInfo, VkDevice *vulkanDevice, VkResult *vulkanResult)
{
    struct vk_create_device_callback_context context;

    WINE_TRACE("instance %p, createInfo %p, vulkanDevice %p, vulkanResult %p.\n",
            instance, createInfo, vulkanDevice, vulkanResult);

    if (createInfo->createFlags)
        WINE_WARN("Unexpected flags %#x.\n", createInfo->createFlags);

    context.wine_instance = (wine_XrInstance *)instance;
    context.xr_create_info = createInfo;

    *vulkanResult = create_vk_device_with_callback(createInfo->vulkanPhysicalDevice, createInfo->vulkanCreateInfo,
            createInfo->vulkanAllocator, vulkanDevice, vk_create_device_callback, &context);

    if (context.ret == XR_SUCCESS && *vulkanResult != VK_SUCCESS)
        WINE_WARN("winevulkan instance creation failed after native xrCreateVulkanInstanceKHR() success.\n");

    WINE_TRACE("result %d, vk result %d.\n", context.ret, *vulkanResult);
    return context.ret;
}

XrResult WINAPI wine_xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData)
{
    XrResult res;

    WINE_TRACE("%p, %p\n", instance, eventData);

    res = xrPollEvent(((wine_XrInstance *)instance)->instance, eventData);

    if(res == XR_SUCCESS){
        switch(eventData->type){
            case XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED:
            {
                XrEventDataInteractionProfileChanged *evt = (XrEventDataInteractionProfileChanged *)eventData;
                evt->session = (XrSession)get_wrapped_XrSession(evt->session);
                break;
            }
            case XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED:
            {
                XrEventDataSessionStateChanged *evt = (XrEventDataSessionStateChanged *)eventData;
                evt->session = (XrSession)get_wrapped_XrSession(evt->session);
                break;
            }
            case XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR:
            {
                XrEventDataVisibilityMaskChangedKHR *evt = (XrEventDataVisibilityMaskChangedKHR *)eventData;
                evt->session = (XrSession)get_wrapped_XrSession(evt->session);
                break;
            }
            case XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING:
            {
                XrEventDataReferenceSpaceChangePending *evt = (XrEventDataReferenceSpaceChangePending *)eventData;
                evt->session = (XrSession)get_wrapped_XrSession(evt->session);
                break;
            }
            default:
                break;
        }
    }

    return res;
}

XrResult WINAPI wine_xrGetSystem(XrInstance instance, const XrSystemGetInfo *getInfo, XrSystemId *systemId)
{
    wine_XrInstance *wine_instance = (wine_XrInstance *)instance;
    XrResult res;

    WINE_TRACE("%p, %p, %p\n", instance, getInfo, systemId);

    res = wine_instance->funcs.p_xrGetSystem(wine_instance->instance, getInfo, systemId);
    if(res != XR_SUCCESS)
        return res;

    wine_instance->systemId = *systemId;
    return res;
}

int64_t map_format_dxgi_to_vulkan(int64_t format)
{
    switch(format){
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
        return VK_FORMAT_B8G8R8A8_SRGB;

    case DXGI_FORMAT_B8G8R8A8_UNORM:
        return VK_FORMAT_B8G8R8A8_UNORM;

    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        return VK_FORMAT_R8G8B8A8_SRGB;

    case DXGI_FORMAT_R8G8B8A8_UNORM:
        return VK_FORMAT_R8G8B8A8_UNORM;

    case DXGI_FORMAT_R32G32B32A32_FLOAT:
        return VK_FORMAT_R32G32B32A32_SFLOAT;

    case DXGI_FORMAT_R32G32B32_FLOAT:
        return VK_FORMAT_R32G32B32_SFLOAT;

    case DXGI_FORMAT_R16G16B16A16_FLOAT:
        return VK_FORMAT_R16G16B16A16_SFLOAT;

    case DXGI_FORMAT_D32_FLOAT:
        return VK_FORMAT_D32_SFLOAT;

    case DXGI_FORMAT_D16_UNORM:
        return VK_FORMAT_D16_UNORM;

    case DXGI_FORMAT_D24_UNORM_S8_UINT:
        return VK_FORMAT_D24_UNORM_S8_UINT;

    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
        return VK_FORMAT_D32_SFLOAT_S8_UINT;

    default:
        WINE_WARN("Unable to map DXGI format (%lu) to Vulkan format\n", format);
        return VK_FORMAT_UNDEFINED;
    }
}

int64_t map_format_vulkan_to_dxgi(int64_t format)
{
    switch(format){
    case VK_FORMAT_B8G8R8A8_SRGB:
        return DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;

    case VK_FORMAT_B8G8R8A8_UNORM:
        return DXGI_FORMAT_B8G8R8A8_UNORM;

    case VK_FORMAT_R8G8B8A8_SRGB:
        return DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;

    case VK_FORMAT_R8G8B8A8_UNORM:
        return DXGI_FORMAT_R8G8B8A8_UNORM;

    case VK_FORMAT_R32G32B32A32_SFLOAT:
        return DXGI_FORMAT_R32G32B32A32_FLOAT;

    case VK_FORMAT_R32G32B32_SFLOAT:
        return DXGI_FORMAT_R32G32B32_FLOAT;

    case VK_FORMAT_R16G16B16A16_SFLOAT:
        return DXGI_FORMAT_R16G16B16A16_FLOAT;

    case VK_FORMAT_D32_SFLOAT:
        return DXGI_FORMAT_D32_FLOAT;

    case VK_FORMAT_D16_UNORM:
        return DXGI_FORMAT_D16_UNORM;

    case VK_FORMAT_D24_UNORM_S8_UINT:
        return DXGI_FORMAT_D24_UNORM_S8_UINT;

    case VK_FORMAT_D32_SFLOAT_S8_UINT:
        return DXGI_FORMAT_D32_FLOAT_S8X24_UINT;

    default:
        WINE_WARN("Unable to map Vulkan format (%lu) to DXGI format\n", format);
        return DXGI_FORMAT_UNKNOWN;
    }
}

XrResult WINAPI wine_xrEnumerateSwapchainFormats(XrSession session, uint32_t formatCapacityInput, uint32_t *formatCountOutput, int64_t *formats)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    XrResult res;
    uint32_t i, o;

    WINE_TRACE("%p, %u, %p, %p\n", session, formatCapacityInput, formatCountOutput, formats);

    res = xrEnumerateSwapchainFormats(wine_session->session, formatCapacityInput, formatCountOutput, formats);

    if(wine_session->wine_instance->instance_type == INSTANCE_TYPE_D3D11){
        if(res == XR_SUCCESS && formatCapacityInput && formats){
            o = 0;
            for(i = 0; i < *formatCountOutput; ++i){
                int64_t mapped = map_format_vulkan_to_dxgi(formats[i]);
                if(mapped != DXGI_FORMAT_UNKNOWN){
                    formats[o++] = mapped;
                }
            }
            *formatCountOutput = o;
        }
    }

    return res;
}

XrResult WINAPI wine_xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo *createInfo, XrSwapchain *swapchain)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    wine_XrSwapchain *wine_swapchain;
    XrSwapchainCreateInfo our_createInfo;
    XrResult res;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, swapchain);

    wine_swapchain = heap_alloc_zero(sizeof(*wine_swapchain));
    wine_swapchain->create_info = *createInfo;

    if(wine_session->wine_instance->instance_type == INSTANCE_TYPE_D3D11){
        our_createInfo = *createInfo;
        our_createInfo.format = map_format_dxgi_to_vulkan(createInfo->format);
        if(our_createInfo.format == VK_FORMAT_UNDEFINED){
            WINE_ERR("unable to set Vulkan format\n");
            heap_free(wine_swapchain);
            return XR_ERROR_SWAPCHAIN_FORMAT_UNSUPPORTED;
        }
        createInfo = &our_createInfo;
    }

    res = xrCreateSwapchain(((wine_XrSession *)session)->session, createInfo, &wine_swapchain->swapchain);
    if(res != XR_SUCCESS){
        WINE_WARN("xrCreateSwapchain failed: %d\n", res);
        heap_free(wine_swapchain);
        return res;
    }

    wine_swapchain->wine_session = wine_session;
    *swapchain = (XrSwapchain)wine_swapchain;

    WINE_TRACE("allocated wine swapchain %p for native swapchain %p\n",
            wine_swapchain, wine_swapchain->swapchain);

    return XR_SUCCESS;
}

XrResult WINAPI wine_xrDestroySwapchain(XrSwapchain swapchain)
{
    wine_XrSwapchain *wine_swapchain = (wine_XrSwapchain *)swapchain;
    XrResult res;

    WINE_TRACE("%p\n", swapchain);

    res = xrDestroySwapchain(wine_swapchain->swapchain);
    if(res != XR_SUCCESS){
        WINE_WARN("xrDestroySwapchain failed: %d\n", res);
        return res;
    }

    heap_free(wine_swapchain);

    return XR_SUCCESS;
}

static D3D11_USAGE d3d11usage_from_XrSwapchainUsageFlags(XrSwapchainUsageFlags flags)
{
    static const D3D11_USAGE supported_flags = XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT | XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT
            | XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT | XR_SWAPCHAIN_USAGE_SAMPLED_BIT;
    D3D11_USAGE ret = 0;

    if (flags & ~supported_flags)
        WINE_FIXME("Unhandled flags %#x.\n", flags);

    if (flags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT)
        ret |= D3D11_BIND_RENDER_TARGET;
    if (flags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT)
        ret |= D3D11_BIND_DEPTH_STENCIL;
    if (flags & XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT)
        ret |= D3D11_BIND_UNORDERED_ACCESS;
    if (flags & XR_SWAPCHAIN_USAGE_SAMPLED_BIT)
        ret |= D3D11_BIND_SHADER_RESOURCE;

    return ret;
}

XrResult WINAPI wine_xrEnumerateSwapchainImages(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images)
{
    wine_XrSwapchain *wine_swapchain = (wine_XrSwapchain *)swapchain;
    wine_XrInstance *wine_instance = wine_swapchain->wine_session->wine_instance;
    XrResult res;
    XrSwapchainImageVulkanKHR *our_images = NULL;
    XrSwapchainImageBaseHeader *their_images = images;
    HRESULT hr;
    uint32_t i;

    WINE_TRACE("%p, %u, %p, %p\n", swapchain, imageCapacityInput, imageCountOutput, images);

    if(images){
        if(wine_instance->instance_type == INSTANCE_TYPE_D3D11){
            our_images = heap_alloc(sizeof(*our_images) * imageCapacityInput);
            for(i = 0; i < imageCapacityInput; ++i){
                our_images[i].type = XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR;
            }
            images = (XrSwapchainImageBaseHeader *)our_images;
        }
    }

    res = xrEnumerateSwapchainImages(wine_swapchain->swapchain, imageCapacityInput, imageCountOutput, images);

    if(images && res == XR_SUCCESS){
        if(wine_instance->instance_type == INSTANCE_TYPE_D3D11){
            D3D11_TEXTURE2D_DESC1 desc;

            desc.Width = wine_swapchain->create_info.width;
            desc.Height = wine_swapchain->create_info.height;
            desc.MipLevels = wine_swapchain->create_info.mipCount;
            desc.ArraySize = wine_swapchain->create_info.arraySize;
            desc.Format = wine_swapchain->create_info.format;
            WINE_TRACE("creating dxvk texture with dxgi format %d (%x)\n",
                    desc.Format, desc.Format);
            desc.SampleDesc.Count = wine_swapchain->create_info.sampleCount;
            desc.SampleDesc.Quality = 0;
            desc.Usage = D3D11_USAGE_DEFAULT;
            desc.BindFlags = d3d11usage_from_XrSwapchainUsageFlags(wine_swapchain->create_info.usageFlags);
            desc.CPUAccessFlags = 0;
            desc.MiscFlags = 0;
            desc.TextureLayout = D3D11_TEXTURE_LAYOUT_UNDEFINED;

            XrSwapchainImageD3D11KHR *their_d3d11 = (XrSwapchainImageD3D11KHR *)their_images;
            for(i = 0; i < *imageCountOutput; ++i){
                hr = wine_instance->dxvk_device->lpVtbl->CreateTexture2DFromVkImage(wine_instance->dxvk_device,
                        &desc, our_images[i].image, &their_d3d11[i].texture);
                if(FAILED(hr)){
                    WINE_WARN("Failed to create DXVK texture from VkImage: %08x\n", hr);
                    return XR_ERROR_INSTANCE_LOST;
                }
                WINE_TRACE("Successfully allocated texture %p\n", their_d3d11[i].texture);
            }
        }
    }
    heap_free(our_images);

    return res;
}

static XrCompositionLayerBaseHeader *convert_XrCompositionLayer(wine_XrSession *wine_session,
        const XrCompositionLayerBaseHeader *in_layer, CompositionLayer *out_layer,
        uint32_t *view_idx)
{
    uint32_t i;

    switch(in_layer->type){
    case XR_TYPE_COMPOSITION_LAYER_CUBE_KHR: {
        out_layer->cube = *(const XrCompositionLayerCubeKHR *)in_layer;
        out_layer->cube.swapchain = ((wine_XrSwapchain *)out_layer->cube.swapchain)->swapchain;
        break;
    }

    case XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR:
        out_layer->cylinder = *(const XrCompositionLayerCylinderKHR *)in_layer;
        out_layer->cylinder.subImage.swapchain = ((wine_XrSwapchain *)out_layer->cylinder.subImage.swapchain)->swapchain;
        break;

    case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR:
        out_layer->depth_info = *(const XrCompositionLayerDepthInfoKHR *)in_layer;
        out_layer->depth_info.subImage.swapchain = ((wine_XrSwapchain *)out_layer->depth_info.subImage.swapchain)->swapchain;
        break;

    case XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR:
        out_layer->equirect = *(const XrCompositionLayerEquirectKHR *)in_layer;
        out_layer->equirect.subImage.swapchain = ((wine_XrSwapchain *)out_layer->equirect.subImage.swapchain)->swapchain;
        break;

    case XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR:
        out_layer->equirect2 = *(const XrCompositionLayerEquirect2KHR *)in_layer;
        out_layer->equirect2.subImage.swapchain = ((wine_XrSwapchain *)out_layer->equirect2.subImage.swapchain)->swapchain;
        break;

    case XR_TYPE_COMPOSITION_LAYER_PROJECTION:
        out_layer->projection = *(const XrCompositionLayerProjection *)in_layer;

        if(out_layer->projection.viewCount + *view_idx > wine_session->projection_view_count){
            wine_session->projection_view_count = out_layer->projection.viewCount + *view_idx;
            wine_session->projection_views = heap_realloc(wine_session->projection_views,
                    sizeof(XrCompositionLayerProjectionView) * wine_session->projection_view_count);
        }

        out_layer->projection.views = &wine_session->projection_views[*view_idx];
        memcpy((void*)out_layer->projection.views, ((const XrCompositionLayerProjection *)in_layer)->views,
                sizeof(XrCompositionLayerProjectionView) * out_layer->projection.viewCount);
        for(i = 0; i < out_layer->projection.viewCount; ++i){
            ((XrCompositionLayerProjectionView *)&out_layer->projection.views[i])->subImage.swapchain =
                ((wine_XrSwapchain *)out_layer->projection.views[i].subImage.swapchain)->swapchain;
        }

        *view_idx += out_layer->projection.viewCount;
        break;

    case XR_TYPE_COMPOSITION_LAYER_QUAD:
        out_layer->quad = *(const XrCompositionLayerQuad *)in_layer;
        out_layer->quad.subImage.swapchain = ((wine_XrSwapchain *)out_layer->quad.subImage.swapchain)->swapchain;
        break;

    default:
        WINE_WARN("Unknown composition in_layer type: %d\n", in_layer->type);
        return (XrCompositionLayerBaseHeader *)in_layer;
    }

    return (XrCompositionLayerBaseHeader *)out_layer;
}

XrResult WINAPI wine_xrEndFrame(XrSession session, const XrFrameEndInfo *frameEndInfo)
{
    wine_XrSession *wine_session = (wine_XrSession *)session;
    IDXGIVkInteropDevice2 *dxvk_device;
    XrFrameEndInfo our_frameEndInfo;
    uint32_t i, view_idx = 0;
    XrResult res;

    WINE_TRACE("%p, %p\n", session, frameEndInfo);

    if(frameEndInfo->layerCount > wine_session->composition_layer_count){
        heap_free(wine_session->composition_layers);
        wine_session->composition_layers = heap_alloc(frameEndInfo->layerCount * sizeof(*wine_session->composition_layers));
        heap_free(wine_session->composition_layer_ptrs);
        wine_session->composition_layer_ptrs = heap_alloc(frameEndInfo->layerCount * sizeof(*wine_session->composition_layer_ptrs));
        wine_session->composition_layer_count = frameEndInfo->layerCount;
    }

    for(i = 0; i < frameEndInfo->layerCount; ++i){
        wine_session->composition_layer_ptrs[i] =
            convert_XrCompositionLayer(wine_session,
                    frameEndInfo->layers[i], &wine_session->composition_layers[i],
                    &view_idx);
    }

    our_frameEndInfo = *frameEndInfo;
    our_frameEndInfo.layers = (const XrCompositionLayerBaseHeader *const *)wine_session->composition_layer_ptrs;

    if ((dxvk_device = wine_session->wine_instance->dxvk_device))
    {
        WINE_TRACE("Locking submission queue.\n");
        dxvk_device->lpVtbl->FlushRenderingCommands(dxvk_device);
        dxvk_device->lpVtbl->LockSubmissionQueue(dxvk_device);
    }
    res = xrEndFrame(((wine_XrSession *)session)->session, &our_frameEndInfo);
    if (dxvk_device)
        dxvk_device->lpVtbl->ReleaseSubmissionQueue(dxvk_device);

    return res;
}

/* wineopenxr API */
XrResult WINAPI __wineopenxr_GetVulkanInstanceExtensions(uint32_t buflen, uint32_t *outlen, char *buf)
{
    XrResult res;

    WINE_TRACE("\n");

    if((res = load_host_openxr_loader()) != XR_SUCCESS){
        WINE_TRACE("host openxr loader failed to load runtime: %d\n", res);
        return res;
    }

    if(buflen < strlen(g_instance_extensions) + 1 || !buf){
        *outlen = strlen(g_instance_extensions) + 1;
        return XR_SUCCESS;
    }

    *outlen = strlen(g_instance_extensions) + 1;
    strcpy(buf, g_instance_extensions);

    return XR_SUCCESS;
}

/* wineopenxr API */
XrResult WINAPI __wineopenxr_GetVulkanDeviceExtensions(uint32_t buflen, uint32_t *outlen, char *buf)
{
    XrResult res;

    WINE_TRACE("\n");

    if((res = load_host_openxr_loader()) != XR_SUCCESS){
        WINE_TRACE("host openxr loader failed to load runtime: %d\n", res);
        return res;
    }

    if(buflen < strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1 || !buf){
        *outlen = strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1;
        return XR_SUCCESS;
    }

    SetEnvironmentVariableA(WINE_VULKAN_DEVICE_VARIABLE, g_device_extensions);
    *outlen = strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1;
    strcpy(buf, WINE_VULKAN_DEVICE_EXTENSION_NAME);

    return XR_SUCCESS;
}
