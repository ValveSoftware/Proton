#include "openxr_thunks.h"

#include "wine/list.h"

#define INSTANCE_TYPE_VULKAN 1
#define INSTANCE_TYPE_OPENGL 2
#define INSTANCE_TYPE_D3D11 3
#define INSTANCE_TYPE_D3D12 4

struct IDXGIVkInteropDevice2;
typedef struct IDXGIVkInteropDevice2 IDXGIVkInteropDevice2;

typedef struct wine_XrInstance {
    XrInstance instance;
    struct openxr_instance_funcs funcs;

    VkInstance vk_instance;
    VkPhysicalDevice vk_phys_dev;

    uint32_t instance_type;
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

    struct list entry;

    uint32_t composition_layer_count;
    CompositionLayer *composition_layers;
    XrCompositionLayerBaseHeader **composition_layer_ptrs;

    uint32_t projection_view_count, view_info_count;
    XrCompositionLayerProjectionView *projection_views;
    view_info *view_infos;
} wine_XrSession;

typedef struct wine_XrHandTrackerEXT {
    XrHandTrackerEXT hand_tracker;
    struct wine_XrSession *wine_session;
} wine_XrHandTrackerEXT;

typedef struct wine_XrSpatialAnchorMSFT {
    XrSpatialAnchorMSFT spatial_anchor;
    struct wine_XrSession *wine_session;
} wine_XrSpatialAnchorMSFT;

typedef struct XrSpatialAnchorStoreConnectionMSFT {
    XrSpatialAnchorStoreConnectionMSFT spatial_anchor_store_connection;
    struct wine_XrSession *wine_session;
} wine_XrSpatialAnchorStoreConnectionMSFT;

typedef struct wine_XrSceneObserverMSFT {
    XrSceneObserverMSFT scene_observer_msft;
    struct wine_XrSession *wine_session;
} wine_XrSceneObserverMSFT;

typedef struct wine_XrSceneMSFT {
    XrSceneMSFT scene_msft;
    struct wine_XrSceneObserverMSFT *wine_scene_observer_msft;
} wine_XrSceneMSFT;

typedef struct wine_XrPassthroughFB {
    XrPassthroughFB passthrough;
    struct wine_XrSession *wine_session;
} wine_XrPassthroughFB;

typedef struct wine_XrPassthroughLayerFB {
    XrPassthroughLayerFB layer;
    struct wine_XrSession *wine_session;
} wine_XrPassthroughLayerFB;

typedef struct wine_XrTriangleMeshFB {
    XrTriangleMeshFB mesh;
    struct wine_XrSession *wine_session;
} wine_XrTriangleMeshFB;

typedef struct wine_XrGeometryInstanceFB {
    XrGeometryInstanceFB instance;
    struct wine_XrSession *wine_session;
} wine_XrGeometryInstanceFB;

typedef struct wine_XrFoveationProfileFB {
    XrFoveationProfileFB foveation_profile;
    struct wine_XrSession *wine_session;
} wine_XrFoveationProfileFB;

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

extern VkDevice (WINAPI *get_native_VkDevice)(VkDevice);
extern VkInstance (WINAPI *get_native_VkInstance)(VkInstance);
extern VkPhysicalDevice (WINAPI *get_native_VkPhysicalDevice)(VkPhysicalDevice);
extern VkPhysicalDevice (WINAPI *get_wrapped_VkPhysicalDevice)(VkInstance, VkPhysicalDevice);
extern VkQueue (WINAPI *get_native_VkQueue)(VkQueue);
extern XrResult load_host_openxr_loader(void);
