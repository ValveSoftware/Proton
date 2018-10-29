#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_126a/steam_api.h"
#include "steamworks_sdk_126a/isteamgameserver.h"
#include "steamworks_sdk_126a/isteamgameserverstats.h"
#include "steamworks_sdk_126a/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct win_126a {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct__126a(void *w, void *l)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct__126a(void *l, void *w)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winCallbackMsg_t_126a {
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 * m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CallbackMsg_t_126a(void *w, void *l)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_126a *win = (struct winCallbackMsg_t_126a *)w;
    lin->m_hSteamUser = win->m_hSteamUser;
    lin->m_iCallback = win->m_iCallback;
    lin->m_pubParam = win->m_pubParam;
    lin->m_cubParam = win->m_cubParam;
}

void lin_to_win_struct_CallbackMsg_t_126a(void *l, void *w)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_126a *win = (struct winCallbackMsg_t_126a *)w;
    win->m_hSteamUser = lin->m_hSteamUser;
    win->m_iCallback = lin->m_iCallback;
    win->m_pubParam = lin->m_pubParam;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winFriendGameInfo_t_126a {
    CGameID m_gameID;
    uint32 m_unGameIP;
    uint16 m_usGamePort;
    uint16 m_usQueryPort;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendGameInfo_t_126a(void *w, void *l)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_126a *win = (struct winFriendGameInfo_t_126a *)w;
    win_to_lin_struct_CGameID_126a(&win->m_gameID, &lin->m_gameID);
    lin->m_unGameIP = win->m_unGameIP;
    lin->m_usGamePort = win->m_usGamePort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_steamIDLobby = win->m_steamIDLobby;
}

void lin_to_win_struct_FriendGameInfo_t_126a(void *l, void *w)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_126a *win = (struct winFriendGameInfo_t_126a *)w;
    lin_to_win_struct_CGameID_126a(&lin->m_gameID, &win->m_gameID);
    win->m_unGameIP = lin->m_unGameIP;
    win->m_usGamePort = lin->m_usGamePort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_steamIDLobby = lin->m_steamIDLobby;
}

#pragma pack( push, 8 )
struct winFriendSessionStateInfo_t_126a {
    uint32 m_uiOnlineSessionInstances;
    uint8 m_uiPublishedToFriendsSessionInstance;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendSessionStateInfo_t_126a(void *w, void *l)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_126a *win = (struct winFriendSessionStateInfo_t_126a *)w;
    lin->m_uiOnlineSessionInstances = win->m_uiOnlineSessionInstances;
    lin->m_uiPublishedToFriendsSessionInstance = win->m_uiPublishedToFriendsSessionInstance;
}

void lin_to_win_struct_FriendSessionStateInfo_t_126a(void *l, void *w)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_126a *win = (struct winFriendSessionStateInfo_t_126a *)w;
    win->m_uiOnlineSessionInstances = lin->m_uiOnlineSessionInstances;
    win->m_uiPublishedToFriendsSessionInstance = lin->m_uiPublishedToFriendsSessionInstance;
}

#pragma pack( push, 8 )
struct winMatchMakingKeyValuePair_t_126a {
    char m_szKey[256];
    char m_szValue[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_MatchMakingKeyValuePair_t_126a(void *w, void *l)
{
    MatchMakingKeyValuePair_t *lin = (MatchMakingKeyValuePair_t *)l;
    struct winMatchMakingKeyValuePair_t_126a *win = (struct winMatchMakingKeyValuePair_t_126a *)w;
    memcpy(lin->m_szKey, win->m_szKey, sizeof(lin->m_szKey));
    memcpy(lin->m_szValue, win->m_szValue, sizeof(lin->m_szValue));
}

void lin_to_win_struct_MatchMakingKeyValuePair_t_126a(void *l, void *w)
{
    MatchMakingKeyValuePair_t *lin = (MatchMakingKeyValuePair_t *)l;
    struct winMatchMakingKeyValuePair_t_126a *win = (struct winMatchMakingKeyValuePair_t_126a *)w;
    memcpy(win->m_szKey, lin->m_szKey, sizeof(win->m_szKey));
    memcpy(win->m_szValue, lin->m_szValue, sizeof(win->m_szValue));
}

#pragma pack( push, 8 )
struct winservernetadr_t_126a {
    uint16 m_usConnectionPort;
    uint16 m_usQueryPort;
    uint32 m_unIP;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_servernetadr_t_126a(void *w, void *l)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_126a *win = (struct winservernetadr_t_126a *)w;
    lin->m_usConnectionPort = win->m_usConnectionPort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_unIP = win->m_unIP;
}

void lin_to_win_struct_servernetadr_t_126a(void *l, void *w)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_126a *win = (struct winservernetadr_t_126a *)w;
    win->m_usConnectionPort = lin->m_usConnectionPort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_unIP = lin->m_unIP;
}

#pragma pack( push, 8 )
struct wingameserveritem_t_126a {
    servernetadr_t m_NetAdr;
    int m_nPing;
    bool m_bHadSuccessfulResponse;
    bool m_bDoNotRefresh;
    char m_szGameDir[32];
    char m_szMap[32];
    char m_szGameDescription[64];
    uint32 m_nAppID;
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
void win_to_lin_struct_gameserveritem_t_126a(void *w, void *l)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_126a *win = (struct wingameserveritem_t_126a *)w;
    win_to_lin_struct_servernetadr_t_126a(&win->m_NetAdr, &lin->m_NetAdr);
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

void lin_to_win_struct_gameserveritem_t_126a(void *l, void *w)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_126a *win = (struct wingameserveritem_t_126a *)w;
    lin_to_win_struct_servernetadr_t_126a(&lin->m_NetAdr, &win->m_NetAdr);
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
struct winSteamParamStringArray_t_126a {
    const char ** m_ppStrings;
    int32 m_nNumStrings;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamParamStringArray_t_126a(void *w, void *l)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_126a *win = (struct winSteamParamStringArray_t_126a *)w;
    lin->m_ppStrings = win->m_ppStrings;
    lin->m_nNumStrings = win->m_nNumStrings;
}

void lin_to_win_struct_SteamParamStringArray_t_126a(void *l, void *w)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_126a *win = (struct winSteamParamStringArray_t_126a *)w;
    win->m_ppStrings = lin->m_ppStrings;
    win->m_nNumStrings = lin->m_nNumStrings;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_126a {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_126a(void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_126a *win = (struct winLeaderboardEntry_t_126a *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_126a(void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_126a *win = (struct winLeaderboardEntry_t_126a *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

#pragma pack( push, 8 )
struct winP2PSessionState_t_126a {
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
void win_to_lin_struct_P2PSessionState_t_126a(void *w, void *l)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_126a *win = (struct winP2PSessionState_t_126a *)w;
    lin->m_bConnectionActive = win->m_bConnectionActive;
    lin->m_bConnecting = win->m_bConnecting;
    lin->m_eP2PSessionError = win->m_eP2PSessionError;
    lin->m_bUsingRelay = win->m_bUsingRelay;
    lin->m_nBytesQueuedForSend = win->m_nBytesQueuedForSend;
    lin->m_nPacketsQueuedForSend = win->m_nPacketsQueuedForSend;
    lin->m_nRemoteIP = win->m_nRemoteIP;
    lin->m_nRemotePort = win->m_nRemotePort;
}

void lin_to_win_struct_P2PSessionState_t_126a(void *l, void *w)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_126a *win = (struct winP2PSessionState_t_126a *)w;
    win->m_bConnectionActive = lin->m_bConnectionActive;
    win->m_bConnecting = lin->m_bConnecting;
    win->m_eP2PSessionError = lin->m_eP2PSessionError;
    win->m_bUsingRelay = lin->m_bUsingRelay;
    win->m_nBytesQueuedForSend = lin->m_nBytesQueuedForSend;
    win->m_nPacketsQueuedForSend = lin->m_nPacketsQueuedForSend;
    win->m_nRemoteIP = lin->m_nRemoteIP;
    win->m_nRemotePort = lin->m_nRemotePort;
}

#pragma pack( push, 8 )
struct winSteamUGCDetails_t_126a {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    EWorkshopFileType m_eFileType;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    uint32 m_rtimeAddedToUserList;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    bool m_bAcceptedForUse;
    bool m_bTagsTruncated;
    char m_rgchTags[1025];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    uint32 m_unVotesUp;
    uint32 m_unVotesDown;
    float m_flScore;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamUGCDetails_t_126a(void *w, void *l)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_126a *win = (struct winSteamUGCDetails_t_126a *)w;
    lin->m_nPublishedFileId = win->m_nPublishedFileId;
    lin->m_eResult = win->m_eResult;
    lin->m_eFileType = win->m_eFileType;
    lin->m_nCreatorAppID = win->m_nCreatorAppID;
    lin->m_nConsumerAppID = win->m_nConsumerAppID;
    memcpy(lin->m_rgchTitle, win->m_rgchTitle, sizeof(lin->m_rgchTitle));
    memcpy(lin->m_rgchDescription, win->m_rgchDescription, sizeof(lin->m_rgchDescription));
    lin->m_ulSteamIDOwner = win->m_ulSteamIDOwner;
    lin->m_rtimeCreated = win->m_rtimeCreated;
    lin->m_rtimeUpdated = win->m_rtimeUpdated;
    lin->m_rtimeAddedToUserList = win->m_rtimeAddedToUserList;
    lin->m_eVisibility = win->m_eVisibility;
    lin->m_bBanned = win->m_bBanned;
    lin->m_bAcceptedForUse = win->m_bAcceptedForUse;
    lin->m_bTagsTruncated = win->m_bTagsTruncated;
    memcpy(lin->m_rgchTags, win->m_rgchTags, sizeof(lin->m_rgchTags));
    lin->m_hFile = win->m_hFile;
    lin->m_hPreviewFile = win->m_hPreviewFile;
    memcpy(lin->m_pchFileName, win->m_pchFileName, sizeof(lin->m_pchFileName));
    lin->m_nFileSize = win->m_nFileSize;
    lin->m_nPreviewFileSize = win->m_nPreviewFileSize;
    memcpy(lin->m_rgchURL, win->m_rgchURL, sizeof(lin->m_rgchURL));
    lin->m_unVotesUp = win->m_unVotesUp;
    lin->m_unVotesDown = win->m_unVotesDown;
    lin->m_flScore = win->m_flScore;
}

void lin_to_win_struct_SteamUGCDetails_t_126a(void *l, void *w)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_126a *win = (struct winSteamUGCDetails_t_126a *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
    win->m_eFileType = lin->m_eFileType;
    win->m_nCreatorAppID = lin->m_nCreatorAppID;
    win->m_nConsumerAppID = lin->m_nConsumerAppID;
    memcpy(win->m_rgchTitle, lin->m_rgchTitle, sizeof(win->m_rgchTitle));
    memcpy(win->m_rgchDescription, lin->m_rgchDescription, sizeof(win->m_rgchDescription));
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
    win->m_rtimeCreated = lin->m_rtimeCreated;
    win->m_rtimeUpdated = lin->m_rtimeUpdated;
    win->m_rtimeAddedToUserList = lin->m_rtimeAddedToUserList;
    win->m_eVisibility = lin->m_eVisibility;
    win->m_bBanned = lin->m_bBanned;
    win->m_bAcceptedForUse = lin->m_bAcceptedForUse;
    win->m_bTagsTruncated = lin->m_bTagsTruncated;
    memcpy(win->m_rgchTags, lin->m_rgchTags, sizeof(win->m_rgchTags));
    win->m_hFile = lin->m_hFile;
    win->m_hPreviewFile = lin->m_hPreviewFile;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_nFileSize = lin->m_nFileSize;
    win->m_nPreviewFileSize = lin->m_nPreviewFileSize;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
    win->m_unVotesUp = lin->m_unVotesUp;
    win->m_unVotesDown = lin->m_unVotesDown;
    win->m_flScore = lin->m_flScore;
}

#pragma pack( push, 8 )
struct winCCallbackBase_126a {
    uint8 m_nCallbackFlags;
    int m_iCallback;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CCallbackBase_126a(void *w, void *l)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_126a *win = (struct winCCallbackBase_126a *)w;
    lin->m_nCallbackFlags = win->m_nCallbackFlags;
    lin->m_iCallback = win->m_iCallback;
}

void lin_to_win_struct_CCallbackBase_126a(void *l, void *w)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_126a *win = (struct winCCallbackBase_126a *)w;
    win->m_nCallbackFlags = lin->m_nCallbackFlags;
    win->m_iCallback = lin->m_iCallback;
}

#pragma pack( push, 8 )
struct win_126a {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct__126a(void *w, void *l)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct__126a(void *l, void *w)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct win_126a {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct__126a(void *w, void *l)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct__126a(void *l, void *w)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct win_126a {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct__126a(void *w, void *l)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct__126a(void *l, void *w)
{
     *lin = ( *)l;
    struct win_126a *win = (struct win_126a *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}


}
