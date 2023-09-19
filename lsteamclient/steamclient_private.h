/* TODO these should be generated */

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include "windef.h"

#ifndef __cplusplus
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif

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
typedef struct __winISteamParentalSettings winISteamParentalSettings;
typedef struct __winISteamGameSearch winISteamGameSearch;
typedef struct __winISteamInput winISteamInput;
typedef struct __winISteamParties winISteamParties;
typedef struct __winISteamRemotePlay winISteamRemotePlay;
typedef struct __winISteamNetworkingFakeUDPPort winISteamNetworkingFakeUDPPort;
typedef struct __winX winX;

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
};

struct SteamInputActionEvent_t;
typedef void (*CDECL win_SteamInputActionEventCallbackPointer)(SteamInputActionEvent_t *);
void lin_SteamInputActionEventCallbackPointer(SteamInputActionEvent_t *dat);

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                uint32_t dst_bytes, int is_url );

extern const char *steamclient_dos_to_unix_path( const char *src, int is_url );
extern void steamclient_free_path( const char *path_array );
extern const char **steamclient_dos_to_unix_path_array( const char **src_array );
extern void steamclient_free_path_array( const char **path_array );

const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph_xbox(int origin, const char *lin_path);
const char *steamclient_isteaminput_getglyph_png(int origin, int size, int flags, const char *lin_path);
const char *steamclient_isteaminput_getglyph_svg(int origin, int flags, const char *lin_path);
uint32_t manual_convert_nNativeKeyCode( uint32_t win_vk );
void *create_LinuxISteamMatchmakingServerListResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPingResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPlayersResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingRulesResponse(void *win, const char *version);
void *manual_convert_SteamAPIWarningMessageHook_t(void *win_func);
void *manual_convert_FSteamNetworkingSocketsDebugOutput(void *win_func);
void *manual_convert_SteamAPI_CheckCallbackRegistered_t(void *win_func);

extern char g_tmppath[PATH_MAX];

void *alloc_callback_wtou( int id, void *callback, int *callback_len );
void convert_callback_utow( int id, void *lin_callback, int lin_callback_len, void *callback, int callback_len );

void *alloc_mem_for_iface(size_t size, const char *iface_version);
void *alloc_vtable(void *vtable, unsigned int method_count, const char *iface_version);

enum callback_type
{
    SOCKET_DEBUG_OUTPUT = 1,
    STEAM_API_WARNING_HOOK,
    STEAM_API_CALLBACK_ONE_PARAM,
};

struct callback_data
{
    enum callback_type type;
    void *func;
    int complete;
    union
    {
        struct
        {
            unsigned int type;
            const char *msg;
        }
        sockets_debug_output;
        struct
        {
            int severity;
            const char *msg;
        }
        steam_api_warning_hook;
        struct
        {
            void *param;
        }
        steam_api_callback_one_param;
    };
};

void execute_callback(struct callback_data *cb_data);
bool is_native_thread(void);
bool after_shutdown(bool);
int32_t after_steam_pipe_create( int32_t pipe );

#ifdef __cplusplus
}
#endif
