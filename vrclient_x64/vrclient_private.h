#include <stdint.h>

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

void *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path(unsigned int api_result, char *inout, unsigned int inout_bytes);
void *create_LinuxMatchmakingServerListResponse(void *win);

#ifndef __cplusplus
typedef struct ID3D11Device ID3D11Device;
typedef struct IWineD3D11Device IWineD3D11Device;

struct compositor_data
{
    ID3D11Device *d3d11_device;
    IWineD3D11Device *wined3d_device;
};

void get_dxgi_output_info(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, unsigned int version);
void get_dxgi_output_info2(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, int32_t *output_idx, unsigned int version);

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, void *texture, Compositor_TextureBounds *bounds,
        unsigned int version, struct compositor_data *user_data);
VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, void *texture, VRTextureBounds_t *bounds,
        unsigned int version, struct compositor_data *user_data);
VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture, VRTextureBounds_t *bounds,
        unsigned int version, struct compositor_data *user_data);
VRCompositorError ivrcompositor_008_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *,
        VRTextureBounds_t *, VRSubmitFlags_t),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention texture_type, void *texture,
        VRTextureBounds_t *bounds, VRSubmitFlags_t submit_flags,
        unsigned int version, struct compositor_data *user_data);
EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags submit_flags,
        unsigned int version, struct compositor_data *user_data);

void ivrcompositor_post_present_handoff(void (*cpp_func)(void *),
        void *linux_side, unsigned int version, struct compositor_data *user_data);
#endif  /* __cplusplus */

#define TRACE WINE_TRACE
#define ERR WINE_ERR
#define WARN WINE_WARN
#define FIXME WINE_FIXME
