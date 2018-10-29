#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_140/steam_api.h"
#include "steamworks_sdk_140/isteamgameserver.h"
#include "steamworks_sdk_140/isteamgameserverstats.h"
#include "steamworks_sdk_140/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winValvePackingSentinel_t_140 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_140(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_140(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winCallbackMsg_t_140 {
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 * m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CallbackMsg_t_140(void *w, void *l)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_140 *win = (struct winCallbackMsg_t_140 *)w;
    lin->m_hSteamUser = win->m_hSteamUser;
    lin->m_iCallback = win->m_iCallback;
    lin->m_pubParam = win->m_pubParam;
    lin->m_cubParam = win->m_cubParam;
}

void lin_to_win_struct_CallbackMsg_t_140(void *l, void *w)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_140 *win = (struct winCallbackMsg_t_140 *)w;
    win->m_hSteamUser = lin->m_hSteamUser;
    win->m_iCallback = lin->m_iCallback;
    win->m_pubParam = lin->m_pubParam;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winFriendGameInfo_t_140 {
    CGameID m_gameID;
    uint32 m_unGameIP;
    uint16 m_usGamePort;
    uint16 m_usQueryPort;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendGameInfo_t_140(void *w, void *l)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_140 *win = (struct winFriendGameInfo_t_140 *)w;
    lin->m_gameID = win->m_gameID;
    lin->m_unGameIP = win->m_unGameIP;
    lin->m_usGamePort = win->m_usGamePort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_steamIDLobby = win->m_steamIDLobby;
}

void lin_to_win_struct_FriendGameInfo_t_140(void *l, void *w)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_140 *win = (struct winFriendGameInfo_t_140 *)w;
    win->m_gameID = lin->m_gameID;
    win->m_unGameIP = lin->m_unGameIP;
    win->m_usGamePort = lin->m_usGamePort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_steamIDLobby = lin->m_steamIDLobby;
}

#pragma pack( push, 8 )
struct winFriendSessionStateInfo_t_140 {
    uint32 m_uiOnlineSessionInstances;
    uint8 m_uiPublishedToFriendsSessionInstance;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendSessionStateInfo_t_140(void *w, void *l)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_140 *win = (struct winFriendSessionStateInfo_t_140 *)w;
    lin->m_uiOnlineSessionInstances = win->m_uiOnlineSessionInstances;
    lin->m_uiPublishedToFriendsSessionInstance = win->m_uiPublishedToFriendsSessionInstance;
}

void lin_to_win_struct_FriendSessionStateInfo_t_140(void *l, void *w)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_140 *win = (struct winFriendSessionStateInfo_t_140 *)w;
    win->m_uiOnlineSessionInstances = lin->m_uiOnlineSessionInstances;
    win->m_uiPublishedToFriendsSessionInstance = lin->m_uiPublishedToFriendsSessionInstance;
}

#pragma pack( push, 8 )
struct winservernetadr_t_140 {
    uint16 m_usConnectionPort;
    uint16 m_usQueryPort;
    uint32 m_unIP;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_servernetadr_t_140(void *w, void *l)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_140 *win = (struct winservernetadr_t_140 *)w;
    lin->m_usConnectionPort = win->m_usConnectionPort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_unIP = win->m_unIP;
}

void lin_to_win_struct_servernetadr_t_140(void *l, void *w)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_140 *win = (struct winservernetadr_t_140 *)w;
    win->m_usConnectionPort = lin->m_usConnectionPort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_unIP = lin->m_unIP;
}

#pragma pack( push, 8 )
struct wingameserveritem_t_140 {
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
void win_to_lin_struct_gameserveritem_t_140(void *w, void *l)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_140 *win = (struct wingameserveritem_t_140 *)w;
    win_to_lin_struct_servernetadr_t_140(&win->m_NetAdr, &lin->m_NetAdr);
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

void lin_to_win_struct_gameserveritem_t_140(void *l, void *w)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_140 *win = (struct wingameserveritem_t_140 *)w;
    lin_to_win_struct_servernetadr_t_140(&lin->m_NetAdr, &win->m_NetAdr);
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
struct winSteamParamStringArray_t_140 {
    const char ** m_ppStrings;
    int32 m_nNumStrings;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamParamStringArray_t_140(void *w, void *l)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_140 *win = (struct winSteamParamStringArray_t_140 *)w;
    lin->m_ppStrings = win->m_ppStrings;
    lin->m_nNumStrings = win->m_nNumStrings;
}

void lin_to_win_struct_SteamParamStringArray_t_140(void *l, void *w)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_140 *win = (struct winSteamParamStringArray_t_140 *)w;
    win->m_ppStrings = lin->m_ppStrings;
    win->m_nNumStrings = lin->m_nNumStrings;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_140 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_140(void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_140 *win = (struct winLeaderboardEntry_t_140 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_140(void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_140 *win = (struct winLeaderboardEntry_t_140 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

#pragma pack( push, 8 )
struct winP2PSessionState_t_140 {
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
void win_to_lin_struct_P2PSessionState_t_140(void *w, void *l)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_140 *win = (struct winP2PSessionState_t_140 *)w;
    lin->m_bConnectionActive = win->m_bConnectionActive;
    lin->m_bConnecting = win->m_bConnecting;
    lin->m_eP2PSessionError = win->m_eP2PSessionError;
    lin->m_bUsingRelay = win->m_bUsingRelay;
    lin->m_nBytesQueuedForSend = win->m_nBytesQueuedForSend;
    lin->m_nPacketsQueuedForSend = win->m_nPacketsQueuedForSend;
    lin->m_nRemoteIP = win->m_nRemoteIP;
    lin->m_nRemotePort = win->m_nRemotePort;
}

void lin_to_win_struct_P2PSessionState_t_140(void *l, void *w)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_140 *win = (struct winP2PSessionState_t_140 *)w;
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
struct winControllerAnalogActionData_t_140 {
    EControllerSourceMode eMode;
    float x;
    float y;
    bool bActive;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ControllerAnalogActionData_t_140(void *w, void *l)
{
    ControllerAnalogActionData_t *lin = (ControllerAnalogActionData_t *)l;
    struct winControllerAnalogActionData_t_140 *win = (struct winControllerAnalogActionData_t_140 *)w;
    lin->eMode = win->eMode;
    lin->x = win->x;
    lin->y = win->y;
    lin->bActive = win->bActive;
}

void lin_to_win_struct_ControllerAnalogActionData_t_140(void *l, void *w)
{
    ControllerAnalogActionData_t *lin = (ControllerAnalogActionData_t *)l;
    struct winControllerAnalogActionData_t_140 *win = (struct winControllerAnalogActionData_t_140 *)w;
    win->eMode = lin->eMode;
    win->x = lin->x;
    win->y = lin->y;
    win->bActive = lin->bActive;
}

#pragma pack( push, 8 )
struct winControllerDigitalActionData_t_140 {
    bool bState;
    bool bActive;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ControllerDigitalActionData_t_140(void *w, void *l)
{
    ControllerDigitalActionData_t *lin = (ControllerDigitalActionData_t *)l;
    struct winControllerDigitalActionData_t_140 *win = (struct winControllerDigitalActionData_t_140 *)w;
    lin->bState = win->bState;
    lin->bActive = win->bActive;
}

void lin_to_win_struct_ControllerDigitalActionData_t_140(void *l, void *w)
{
    ControllerDigitalActionData_t *lin = (ControllerDigitalActionData_t *)l;
    struct winControllerDigitalActionData_t_140 *win = (struct winControllerDigitalActionData_t_140 *)w;
    win->bState = lin->bState;
    win->bActive = lin->bActive;
}

#pragma pack( push, 8 )
struct winControllerMotionData_t_140 {
    float rotQuatX;
    float rotQuatY;
    float rotQuatZ;
    float rotQuatW;
    float posAccelX;
    float posAccelY;
    float posAccelZ;
    float rotVelX;
    float rotVelY;
    float rotVelZ;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ControllerMotionData_t_140(void *w, void *l)
{
    ControllerMotionData_t *lin = (ControllerMotionData_t *)l;
    struct winControllerMotionData_t_140 *win = (struct winControllerMotionData_t_140 *)w;
    lin->rotQuatX = win->rotQuatX;
    lin->rotQuatY = win->rotQuatY;
    lin->rotQuatZ = win->rotQuatZ;
    lin->rotQuatW = win->rotQuatW;
    lin->posAccelX = win->posAccelX;
    lin->posAccelY = win->posAccelY;
    lin->posAccelZ = win->posAccelZ;
    lin->rotVelX = win->rotVelX;
    lin->rotVelY = win->rotVelY;
    lin->rotVelZ = win->rotVelZ;
}

void lin_to_win_struct_ControllerMotionData_t_140(void *l, void *w)
{
    ControllerMotionData_t *lin = (ControllerMotionData_t *)l;
    struct winControllerMotionData_t_140 *win = (struct winControllerMotionData_t_140 *)w;
    win->rotQuatX = lin->rotQuatX;
    win->rotQuatY = lin->rotQuatY;
    win->rotQuatZ = lin->rotQuatZ;
    win->rotQuatW = lin->rotQuatW;
    win->posAccelX = lin->posAccelX;
    win->posAccelY = lin->posAccelY;
    win->posAccelZ = lin->posAccelZ;
    win->rotVelX = lin->rotVelX;
    win->rotVelY = lin->rotVelY;
    win->rotVelZ = lin->rotVelZ;
}

#pragma pack( push, 8 )
struct winSteamUGCDetails_t_140 {
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
    uint32 m_unNumChildren;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamUGCDetails_t_140(void *w, void *l)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_140 *win = (struct winSteamUGCDetails_t_140 *)w;
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
    lin->m_unNumChildren = win->m_unNumChildren;
}

void lin_to_win_struct_SteamUGCDetails_t_140(void *l, void *w)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_140 *win = (struct winSteamUGCDetails_t_140 *)w;
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
    win->m_unNumChildren = lin->m_unNumChildren;
}

#pragma pack( push, 8 )
struct winSubmitItemUpdateResult_t_8 {
    EResult m_eResult;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SubmitItemUpdateResult_t_8(void *l, void *w)
{
    SubmitItemUpdateResult_t *lin = (SubmitItemUpdateResult_t *)l;
    struct winSubmitItemUpdateResult_t_8 *win = (struct winSubmitItemUpdateResult_t_8 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winSteamItemDetails_t_140 {
    SteamItemInstanceID_t m_itemId;
    SteamItemDef_t m_iDefinition;
    uint16 m_unQuantity;
    uint16 m_unFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamItemDetails_t_140(void *w, void *l)
{
    SteamItemDetails_t *lin = (SteamItemDetails_t *)l;
    struct winSteamItemDetails_t_140 *win = (struct winSteamItemDetails_t_140 *)w;
    lin->m_itemId = win->m_itemId;
    lin->m_iDefinition = win->m_iDefinition;
    lin->m_unQuantity = win->m_unQuantity;
    lin->m_unFlags = win->m_unFlags;
}

void lin_to_win_struct_SteamItemDetails_t_140(void *l, void *w)
{
    SteamItemDetails_t *lin = (SteamItemDetails_t *)l;
    struct winSteamItemDetails_t_140 *win = (struct winSteamItemDetails_t_140 *)w;
    win->m_itemId = lin->m_itemId;
    win->m_iDefinition = lin->m_iDefinition;
    win->m_unQuantity = lin->m_unQuantity;
    win->m_unFlags = lin->m_unFlags;
}

#pragma pack( push, 8 )
struct winCSteamAPIContext_140 {
    ISteamClient * m_pSteamClient;
    ISteamUser * m_pSteamUser;
    ISteamFriends * m_pSteamFriends;
    ISteamUtils * m_pSteamUtils;
    ISteamMatchmaking * m_pSteamMatchmaking;
    ISteamUserStats * m_pSteamUserStats;
    ISteamApps * m_pSteamApps;
    ISteamMatchmakingServers * m_pSteamMatchmakingServers;
    ISteamNetworking * m_pSteamNetworking;
    ISteamRemoteStorage * m_pSteamRemoteStorage;
    ISteamScreenshots * m_pSteamScreenshots;
    ISteamHTTP * m_pSteamHTTP;
    ISteamUnifiedMessages * m_pSteamUnifiedMessages;
    ISteamController * m_pController;
    ISteamUGC * m_pSteamUGC;
    ISteamAppList * m_pSteamAppList;
    ISteamMusic * m_pSteamMusic;
    ISteamMusicRemote * m_pSteamMusicRemote;
    ISteamHTMLSurface * m_pSteamHTMLSurface;
    ISteamInventory * m_pSteamInventory;
    ISteamVideo * m_pSteamVideo;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CSteamAPIContext_140(void *w, void *l)
{
    CSteamAPIContext *lin = (CSteamAPIContext *)l;
    struct winCSteamAPIContext_140 *win = (struct winCSteamAPIContext_140 *)w;
    lin->m_pSteamClient = win->m_pSteamClient;
    lin->m_pSteamUser = win->m_pSteamUser;
    lin->m_pSteamFriends = win->m_pSteamFriends;
    lin->m_pSteamUtils = win->m_pSteamUtils;
    lin->m_pSteamMatchmaking = win->m_pSteamMatchmaking;
    lin->m_pSteamUserStats = win->m_pSteamUserStats;
    lin->m_pSteamApps = win->m_pSteamApps;
    lin->m_pSteamMatchmakingServers = win->m_pSteamMatchmakingServers;
    lin->m_pSteamNetworking = win->m_pSteamNetworking;
    lin->m_pSteamRemoteStorage = win->m_pSteamRemoteStorage;
    lin->m_pSteamScreenshots = win->m_pSteamScreenshots;
    lin->m_pSteamHTTP = win->m_pSteamHTTP;
    lin->m_pSteamUnifiedMessages = win->m_pSteamUnifiedMessages;
    lin->m_pController = win->m_pController;
    lin->m_pSteamUGC = win->m_pSteamUGC;
    lin->m_pSteamAppList = win->m_pSteamAppList;
    lin->m_pSteamMusic = win->m_pSteamMusic;
    lin->m_pSteamMusicRemote = win->m_pSteamMusicRemote;
    lin->m_pSteamHTMLSurface = win->m_pSteamHTMLSurface;
    lin->m_pSteamInventory = win->m_pSteamInventory;
    lin->m_pSteamVideo = win->m_pSteamVideo;
}

void lin_to_win_struct_CSteamAPIContext_140(void *l, void *w)
{
    CSteamAPIContext *lin = (CSteamAPIContext *)l;
    struct winCSteamAPIContext_140 *win = (struct winCSteamAPIContext_140 *)w;
    win->m_pSteamClient = lin->m_pSteamClient;
    win->m_pSteamUser = lin->m_pSteamUser;
    win->m_pSteamFriends = lin->m_pSteamFriends;
    win->m_pSteamUtils = lin->m_pSteamUtils;
    win->m_pSteamMatchmaking = lin->m_pSteamMatchmaking;
    win->m_pSteamUserStats = lin->m_pSteamUserStats;
    win->m_pSteamApps = lin->m_pSteamApps;
    win->m_pSteamMatchmakingServers = lin->m_pSteamMatchmakingServers;
    win->m_pSteamNetworking = lin->m_pSteamNetworking;
    win->m_pSteamRemoteStorage = lin->m_pSteamRemoteStorage;
    win->m_pSteamScreenshots = lin->m_pSteamScreenshots;
    win->m_pSteamHTTP = lin->m_pSteamHTTP;
    win->m_pSteamUnifiedMessages = lin->m_pSteamUnifiedMessages;
    win->m_pController = lin->m_pController;
    win->m_pSteamUGC = lin->m_pSteamUGC;
    win->m_pSteamAppList = lin->m_pSteamAppList;
    win->m_pSteamMusic = lin->m_pSteamMusic;
    win->m_pSteamMusicRemote = lin->m_pSteamMusicRemote;
    win->m_pSteamHTMLSurface = lin->m_pSteamHTMLSurface;
    win->m_pSteamInventory = lin->m_pSteamInventory;
    win->m_pSteamVideo = lin->m_pSteamVideo;
}

#pragma pack( push, 8 )
struct winCCallbackBase_140 {
    uint8 m_nCallbackFlags;
    int m_iCallback;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CCallbackBase_140(void *w, void *l)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_140 *win = (struct winCCallbackBase_140 *)w;
    lin->m_nCallbackFlags = win->m_nCallbackFlags;
    lin->m_iCallback = win->m_iCallback;
}

void lin_to_win_struct_CCallbackBase_140(void *l, void *w)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_140 *win = (struct winCCallbackBase_140 *)w;
    win->m_nCallbackFlags = lin->m_nCallbackFlags;
    win->m_iCallback = lin->m_iCallback;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_140 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_140(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_140(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_140 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_140(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_140(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_140 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_140(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_140(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_140 *win = (struct winValvePackingSentinel_t_140 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}


}
