#include <stdint.h>
#include <linux/limits.h>

#ifndef __cplusplus
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

#if __cplusplus
extern "C" {
#endif

char *json_convert_paths(const char *input);
char *json_convert_startup_info(const char *startup_info);

bool vrclient_dos_path_to_unix_path(const char *src, char *dst);

#if __cplusplus
}
#endif

/* TODO these should be generated */
typedef struct __winISteamClient winISteamClient;
typedef struct __winISteamUser winISteamUser;
typedef struct __winISteamGameServer winISteamGameServer;
typedef struct __winISteamFriends winISteamFriends;
typedef struct __winISteamUtils winISteamUtils;
typedef struct __winISteamMatchmaking winISteamMatchmaking;
typedef struct __winISteamMatchmakingServers winISteamMatchmakingServers;
typedef struct __winISteamUserStats winISteamUserStats;
typedef struct __winISteamGameServerStats winISteamGameServerStats;
typedef struct __winISteamApps winISteamApps;
typedef struct __winISteamNetworking winISteamNetworking;
typedef struct __winISteamRemoteStorage winISteamRemoteStorage;
typedef struct __winISteamRemoteScreenshots winISteamRemoteScreenshots;
typedef struct __winISteamScreenshots winISteamScreenshots;
typedef struct __winISteamHTTP winISteamHTTP;
typedef struct __winISteamUnifiedMessages winISteamUnifiedMessages;
typedef struct __winISteamController winISteamController;
typedef struct __winISteamUGC winISteamUGC;
typedef struct __winISteamAppList winISteamAppList;
typedef struct __winISteamMusic winISteamMusic;
typedef struct __winISteamMusicRemote winISteamMusicRemote;
typedef struct __winISteamHTMLSurface winISteamHTMLSurface;
typedef struct __winISteamInventory winISteamInventory;
typedef struct __winISteamVideo winISteamVideo;
typedef struct __winISteamMasterServerUpdater winISteamMasterServerUpdater;
typedef struct __winISteamContentServer winISteamContentServer;
typedef struct __winX winX;
typedef struct __winX winX;

unsigned int vrclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32_t dst_bytes);
void *create_LinuxMatchmakingServerListResponse(void *win);

#ifndef __cplusplus
typedef struct ID3D11Device ID3D11Device;
typedef struct IDXGIVkInteropDevice IDXGIVkInteropDevice;

struct client_core_data
{
    CRITICAL_SECTION critical_section;
    struct generic_interface *created_interfaces;
    SIZE_T created_interface_count;
    SIZE_T created_interfaces_size;
};

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
    union
    {
        struct client_core_data user_data; /* for IVRClientCore */
    };
};

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);

struct generic_interface
{
    struct w_steam_iface *object;
    void (*dtor)(struct w_steam_iface *);
};

bool ivrclientcore_is_hmd_present(bool (*cpp_func)(void *), void *linux_side, unsigned int version,
        struct client_core_data *user_data);
EVRInitError ivrclientcore_002_init(EVRInitError (*cpp_func)(void *, EVRApplicationType),
        void *linux_side, EVRApplicationType application_type,
        unsigned int version, struct client_core_data *user_data);
EVRInitError ivrclientcore_init(EVRInitError (*cpp_func)(void *, EVRApplicationType, const char *),
        void *linux_side, EVRApplicationType application_type, const char *startup_info,
        unsigned int version, struct client_core_data *user_data);

void *ivrclientcore_get_generic_interface(void *(*cpp_func)(void *, const char *, EVRInitError *),
        void *linux_side, const char *name_and_version, EVRInitError *error,
        unsigned int version, struct client_core_data *user_data);

void ivrclientcore_cleanup(void (*cpp_func)(void *), void *linux_side,
        unsigned int version, struct client_core_data *user_data);

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, const void *texture, Compositor_TextureBounds *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, const void *texture, const VRTextureBounds_t *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, const VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, const void *texture, const VRTextureBounds_t *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_008_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *,
        const VRTextureBounds_t *, VRSubmitFlags_t),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention texture_type, const void *texture,
        const VRTextureBounds_t *bounds, VRSubmitFlags_t submit_flags,
        unsigned int version);
EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, const Texture_t *, const VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, const Texture_t *texture, const VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version);

void ivrcompositor_008_set_skybox_override(
        void (*cpp_func)(void *, GraphicsAPIConvention, void *, void *, void *, void *, void *, void *),
        void *linux_side, GraphicsAPIConvention api, void *front, void *back, void *left, void *right, void *top, void *bottom,
        unsigned int version);
EVRCompositorError ivrcompositor_set_skybox_override(
        EVRCompositorError (*cpp_func)(void *, const Texture_t *textures, uint32_t count),
        void *linux_side, const Texture_t *textures, uint32_t count,
        unsigned int version);

void ivrcompositor_post_present_handoff(void (*cpp_func)(void *),
        void *linux_side, unsigned int version);

EVRCompositorError ivrcompositor_wait_get_poses(
        EVRCompositorError (cpp_func)(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t),
        void *linux_side, TrackedDevicePose_t *render_poses, uint32_t render_pose_count,
        TrackedDevicePose_t *game_poses, uint32_t game_pose_count,
        unsigned int version);

uint32_t ivrcompositor_get_vulkan_device_extensions_required(
        uint32_t (*cpp_func)(void *, VkPhysicalDevice_T *, char *, uint32_t),
        void *linux_side, VkPhysicalDevice_T *phys_dev, char *value, uint32_t bufsize,
        unsigned int version);

EVROverlayError ivroverlay_set_overlay_texture(
        EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, const Texture_t *),
        void *linux_side, VROverlayHandle_t overlayHandle, const Texture_t *texture,
        unsigned int version);

EVROverlayError ivroverlay_005_set_overlay_texture(
        VROverlayError (*cpp_func)(void *, VROverlayHandle_t, GraphicsAPIConvention, void *),
        void *linux_side, VROverlayHandle_t overlayHandle, GraphicsAPIConvention api, const void *texture,
        unsigned int version);

EVROverlayError ivroverlay_001_set_overlay_texture(
        VROverlayError (*cpp_func)(void *, VROverlayHandle_t, void *),
        void *linux_side, VROverlayHandle_t overlayHandle, const void *texture,
        unsigned int version);

EVRInputError ivrinput_get_digital_action_data(
        void *func,
        void *linux_side, VRActionHandle_t action_handle, void *action_data, uint32_t action_data_size,
        VRInputValueHandle_t restrict_to_device, unsigned int version);

extern VkDevice_T *get_native_VkDevice( VkDevice_T *device );
extern VkInstance_T *get_native_VkInstance( VkInstance_T *instance );
extern VkPhysicalDevice_T *get_native_VkPhysicalDevice( VkPhysicalDevice_T *device );
extern VkPhysicalDevice_T *get_wrapped_VkPhysicalDevice( VkInstance_T *instance, VkPhysicalDevice_T *device );
extern VkQueue_T *get_native_VkQueue( VkQueue_T *queue );

#endif  /* __cplusplus */
