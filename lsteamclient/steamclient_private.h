/* TODO these should be generated */

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
typedef struct __winX winX;

void *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32 dst_bytes, int is_url);
bool steamclient_dos_path_to_unix_path(const char *src, char *dst, int is_url);
const char **steamclient_dos_to_unix_stringlist(const char **src);
void steamclient_free_stringlist(const char **out);
const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path);
uint32 manual_convert_nNativeKeyCode(uint32 win_vk);
void *create_LinuxISteamMatchmakingServerListResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPingResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingPlayersResponse(void *win, const char *version);
void *create_LinuxISteamMatchmakingRulesResponse(void *win, const char *version);
void *manual_convert_FSteamNetworkingSocketsDebugOutput(void *win_func);
void *manual_convert_SteamAPI_CheckCallbackRegistered_t(void *win_func);

extern char g_tmppath[PATH_MAX];

typedef uint64 SteamAPICall_t; //for ancient SDKs
bool do_cb_wrap(HSteamPipe pipe, void *linux_side, bool (*cpp_func)(void *, SteamAPICall_t, void *, int, int, bool *), SteamAPICall_t call, void *callback, int callback_len, int cb_expected, bool *failed);

#ifdef __cplusplus
}
#endif

#define TRACE WINE_TRACE
#define ERR WINE_ERR
#define WARN WINE_WARN
#define FIXME WINE_FIXME
