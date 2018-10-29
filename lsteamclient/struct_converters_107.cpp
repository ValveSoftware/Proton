#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_107/steam_api.h"
#include "steamworks_sdk_107/isteamgameserver.h"
extern "C" {
#pragma pack( push, 8 )
struct winCallbackMsg_t_107 {
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 * m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CallbackMsg_t_107(const void *w, void *l)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_107 *win = (struct winCallbackMsg_t_107 *)w;
    lin->m_hSteamUser = win->m_hSteamUser;
    lin->m_iCallback = win->m_iCallback;
    lin->m_pubParam = win->m_pubParam;
    lin->m_cubParam = win->m_cubParam;
}

void lin_to_win_struct_CallbackMsg_t_107(const void *l, void *w)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_107 *win = (struct winCallbackMsg_t_107 *)w;
    win->m_hSteamUser = lin->m_hSteamUser;
    win->m_iCallback = lin->m_iCallback;
    win->m_pubParam = lin->m_pubParam;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winFriendGameInfo_t_107 {
    CGameID m_gameID;
    uint32 m_unGameIP;
    uint16 m_usGamePort;
    uint16 m_usQueryPort;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendGameInfo_t_107(const void *w, void *l)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_107 *win = (struct winFriendGameInfo_t_107 *)w;
    lin->m_gameID = win->m_gameID;
    lin->m_unGameIP = win->m_unGameIP;
    lin->m_usGamePort = win->m_usGamePort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_steamIDLobby = win->m_steamIDLobby;
}

void lin_to_win_struct_FriendGameInfo_t_107(const void *l, void *w)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_107 *win = (struct winFriendGameInfo_t_107 *)w;
    win->m_gameID = lin->m_gameID;
    win->m_unGameIP = lin->m_unGameIP;
    win->m_usGamePort = lin->m_usGamePort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_steamIDLobby = lin->m_steamIDLobby;
}

#pragma pack( push, 8 )
struct winservernetadr_t_107 {
    uint16 m_usConnectionPort;
    uint16 m_usQueryPort;
    uint32 m_unIP;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_servernetadr_t_107(const void *w, void *l)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_107 *win = (struct winservernetadr_t_107 *)w;
    lin->m_usConnectionPort = win->m_usConnectionPort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_unIP = win->m_unIP;
}

void lin_to_win_struct_servernetadr_t_107(const void *l, void *w)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_107 *win = (struct winservernetadr_t_107 *)w;
    win->m_usConnectionPort = lin->m_usConnectionPort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_unIP = lin->m_unIP;
}

#pragma pack( push, 8 )
struct wingameserveritem_t_107 {
    servernetadr_t m_NetAdr;
    int m_nPing;
    bool m_bHadSuccessfulResponse;
    bool m_bDoNotRefresh;
    char m_szGameDir[32];
    char m_szMap[32];
    char m_szGameDescription[64];
    int m_nAppID;
    int m_nPlayers;
    int m_nMaxPlayers;
    int m_nBotPlayers;
    bool m_bPassword;
    bool m_bSecure;
    uint32 m_ulTimeLastPlayed;
    int m_nServerVersion;
    char m_szServerName[64];
    char m_szGameTags[128];
    CSteamID m_steamID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_gameserveritem_t_107(const void *w, void *l)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_107 *win = (struct wingameserveritem_t_107 *)w;
    win_to_lin_struct_servernetadr_t_107(&win->m_NetAdr, &lin->m_NetAdr);
    lin->m_nPing = win->m_nPing;
    lin->m_bHadSuccessfulResponse = win->m_bHadSuccessfulResponse;
    lin->m_bDoNotRefresh = win->m_bDoNotRefresh;
    memcpy(lin->m_szGameDir, win->m_szGameDir, sizeof(lin->m_szGameDir));
    memcpy(lin->m_szMap, win->m_szMap, sizeof(lin->m_szMap));
    memcpy(lin->m_szGameDescription, win->m_szGameDescription, sizeof(lin->m_szGameDescription));
    lin->m_nAppID = win->m_nAppID;
    lin->m_nPlayers = win->m_nPlayers;
    lin->m_nMaxPlayers = win->m_nMaxPlayers;
    lin->m_nBotPlayers = win->m_nBotPlayers;
    lin->m_bPassword = win->m_bPassword;
    lin->m_bSecure = win->m_bSecure;
    lin->m_ulTimeLastPlayed = win->m_ulTimeLastPlayed;
    lin->m_nServerVersion = win->m_nServerVersion;
    memcpy(lin->m_szServerName, win->m_szServerName, sizeof(lin->m_szServerName));
    memcpy(lin->m_szGameTags, win->m_szGameTags, sizeof(lin->m_szGameTags));
    lin->m_steamID = win->m_steamID;
}

void lin_to_win_struct_gameserveritem_t_107(const void *l, void *w)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_107 *win = (struct wingameserveritem_t_107 *)w;
    lin_to_win_struct_servernetadr_t_107(&lin->m_NetAdr, &win->m_NetAdr);
    win->m_nPing = lin->m_nPing;
    win->m_bHadSuccessfulResponse = lin->m_bHadSuccessfulResponse;
    win->m_bDoNotRefresh = lin->m_bDoNotRefresh;
    memcpy(win->m_szGameDir, lin->m_szGameDir, sizeof(win->m_szGameDir));
    memcpy(win->m_szMap, lin->m_szMap, sizeof(win->m_szMap));
    memcpy(win->m_szGameDescription, lin->m_szGameDescription, sizeof(win->m_szGameDescription));
    win->m_nAppID = lin->m_nAppID;
    win->m_nPlayers = lin->m_nPlayers;
    win->m_nMaxPlayers = lin->m_nMaxPlayers;
    win->m_nBotPlayers = lin->m_nBotPlayers;
    win->m_bPassword = lin->m_bPassword;
    win->m_bSecure = lin->m_bSecure;
    win->m_ulTimeLastPlayed = lin->m_ulTimeLastPlayed;
    win->m_nServerVersion = lin->m_nServerVersion;
    memcpy(win->m_szServerName, lin->m_szServerName, sizeof(win->m_szServerName));
    memcpy(win->m_szGameTags, lin->m_szGameTags, sizeof(win->m_szGameTags));
    win->m_steamID = lin->m_steamID;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_107 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_107(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_107 *win = (struct winLeaderboardEntry_t_107 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
}

void lin_to_win_struct_LeaderboardEntry_t_107(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_107 *win = (struct winLeaderboardEntry_t_107 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
}

#pragma pack( push, 8 )
struct winP2PSessionState_t_107 {
    uint8 m_bConnectionActive;
    uint8 m_bConnecting;
    uint8 m_eP2PSessionError;
    uint8 m_bUsingRelay;
    int32 m_nBytesQueuedForSend;
    int32 m_nPacketsQueuedForSend;
    uint32 m_nRemoteIP;
    uint16 m_nRemotePort;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_P2PSessionState_t_107(const void *w, void *l)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_107 *win = (struct winP2PSessionState_t_107 *)w;
    lin->m_bConnectionActive = win->m_bConnectionActive;
    lin->m_bConnecting = win->m_bConnecting;
    lin->m_eP2PSessionError = win->m_eP2PSessionError;
    lin->m_bUsingRelay = win->m_bUsingRelay;
    lin->m_nBytesQueuedForSend = win->m_nBytesQueuedForSend;
    lin->m_nPacketsQueuedForSend = win->m_nPacketsQueuedForSend;
    lin->m_nRemoteIP = win->m_nRemoteIP;
    lin->m_nRemotePort = win->m_nRemotePort;
}

void lin_to_win_struct_P2PSessionState_t_107(const void *l, void *w)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_107 *win = (struct winP2PSessionState_t_107 *)w;
    win->m_bConnectionActive = lin->m_bConnectionActive;
    win->m_bConnecting = lin->m_bConnecting;
    win->m_eP2PSessionError = lin->m_eP2PSessionError;
    win->m_bUsingRelay = lin->m_bUsingRelay;
    win->m_nBytesQueuedForSend = lin->m_nBytesQueuedForSend;
    win->m_nPacketsQueuedForSend = lin->m_nPacketsQueuedForSend;
    win->m_nRemoteIP = lin->m_nRemoteIP;
    win->m_nRemotePort = lin->m_nRemotePort;
}


}
