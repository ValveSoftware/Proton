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
typedef struct __winISteamParentalSettings winISteamParentalSettings;
typedef struct __winX winX;

void *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path(unsigned int api_result, char *inout, unsigned int inout_bytes);
void *create_LinuxISteamMatchmakingServerListResponse(void *win);
void *create_LinuxISteamMatchmakingPingResponse(void *win);
void *create_LinuxISteamMatchmakingPlayersResponse(void *win);
void *create_LinuxISteamMatchmakingRulesResponse(void *win);

typedef uint64 SteamAPICall_t; //for ancient SDKs
bool do_cb_wrap(HSteamPipe pipe, void *linux_side, bool (*cpp_func)(void *, SteamAPICall_t, void *, int, int, bool *), SteamAPICall_t call, void *callback, int callback_len, int cb_expected, bool *failed);

#define TRACE WINE_TRACE
#define ERR WINE_ERR
#define WARN WINE_WARN
