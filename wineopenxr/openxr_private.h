#include "openxr_thunks.h"

#include "wine/list.h"

#define SESSION_TYPE_VULKAN 1
#define SESSION_TYPE_OPENGL 2
#define SESSION_TYPE_D3D11 3
#define SESSION_TYPE_D3D12 4

struct IDXGIVkInteropDevice2;
typedef struct IDXGIVkInteropDevice2 IDXGIVkInteropDevice2;

typedef struct wine_XrInstance {
    XrInstance instance;
    struct openxr_instance_funcs funcs;

    VkInstance vk_instance;
    VkPhysicalDevice vk_phys_dev;

    XrSystemId systemId;

    IDXGIVkInteropDevice2 *dxvk_device;
} wine_XrInstance;

union CompositionLayer;
typedef union CompositionLayer CompositionLayer;

typedef union
{
    XrCompositionLayerDepthInfoKHR depth_info;
    XrCompositionLayerSpaceWarpInfoFB space_warp_info;
} view_info;

typedef struct wine_XrSession {
    XrSession session;
    struct wine_XrInstance *wine_instance;

    uint32_t session_type;
    struct list entry;

    uint32_t composition_layer_count;
    CompositionLayer *composition_layers;
    XrCompositionLayerBaseHeader **composition_layer_ptrs;

    uint32_t projection_view_count, view_info_count;
    XrCompositionLayerProjectionView *projection_views;
    view_info *view_infos;
} wine_XrSession;

typedef struct wine_XrSwapchain{
    XrSwapchain swapchain;
    struct wine_XrSession *wine_session;

    XrSwapchainCreateInfo create_info;
} wine_XrSwapchain;

struct openxr_func {
    const char *name;
    void *func;
};

extern void *wine_xr_proc_addr(const char *name);

extern XrResult WINAPI wine_xrEnumerateInstanceExtensionProperties(const char *layerName,
        uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties);
extern XrResult WINAPI wine_xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance,
        XrTime time, LARGE_INTEGER *performanceCounter);
extern XrResult WINAPI wine_xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance,
        const LARGE_INTEGER *performanceCounter, XrTime *time);
extern XrResult WINAPI wine_xrGetD3D11GraphicsRequirementsKHR(XrInstance instance,
        XrSystemId systemId, XrGraphicsRequirementsD3D11KHR *graphicsRequirements);
extern XrResult WINAPI wine_xrGetD3D12GraphicsRequirementsKHR(XrInstance instance,
        XrSystemId systemId, XrGraphicsRequirementsD3D12KHR *graphicsRequirements);

extern VkDevice (*get_native_VkDevice)(VkDevice);
extern VkInstance (*get_native_VkInstance)(VkInstance);
extern VkPhysicalDevice (*get_native_VkPhysicalDevice)(VkPhysicalDevice);
extern VkPhysicalDevice (*get_wrapped_VkPhysicalDevice)(VkInstance, VkPhysicalDevice);
extern VkQueue (*get_native_VkQueue)(VkQueue);
extern XrResult load_host_openxr_loader(void);

extern void register_dispatchable_handle(uint64_t handle, struct openxr_instance_funcs *funcs);
extern void unregister_dispatchable_handle(uint64_t handle);
extern struct openxr_instance_funcs *get_dispatch_table(uint64_t handle);
