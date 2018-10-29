#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "steamworks_sdk_142/isteamgameserver.h"
#include "steamworks_sdk_142/isteamgameserverstats.h"
#include "steamworks_sdk_142/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winValvePackingSentinel_t_142 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_142(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_142(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winCallbackMsg_t_142 {
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 * m_pubParam;
    int m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CallbackMsg_t_142(void *w, void *l)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_142 *win = (struct winCallbackMsg_t_142 *)w;
    lin->m_hSteamUser = win->m_hSteamUser;
    lin->m_iCallback = win->m_iCallback;
    lin->m_pubParam = win->m_pubParam;
    lin->m_cubParam = win->m_cubParam;
}

void lin_to_win_struct_CallbackMsg_t_142(void *l, void *w)
{
    CallbackMsg_t *lin = (CallbackMsg_t *)l;
    struct winCallbackMsg_t_142 *win = (struct winCallbackMsg_t_142 *)w;
    win->m_hSteamUser = lin->m_hSteamUser;
    win->m_iCallback = lin->m_iCallback;
    win->m_pubParam = lin->m_pubParam;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winSteamServersConnected_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamServersConnected_t_1(void *l, void *w)
{
    SteamServersConnected_t *lin = (SteamServersConnected_t *)l;
    struct winSteamServersConnected_t_1 *win = (struct winSteamServersConnected_t_1 *)w;
}

#pragma pack( push, 8 )
struct winSteamServerConnectFailure_t_8 {
    EResult m_eResult;
    bool m_bStillRetrying;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamServerConnectFailure_t_8(void *l, void *w)
{
    SteamServerConnectFailure_t *lin = (SteamServerConnectFailure_t *)l;
    struct winSteamServerConnectFailure_t_8 *win = (struct winSteamServerConnectFailure_t_8 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_bStillRetrying = lin->m_bStillRetrying;
}

#pragma pack( push, 8 )
struct winSteamServersDisconnected_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamServersDisconnected_t_4(void *l, void *w)
{
    SteamServersDisconnected_t *lin = (SteamServersDisconnected_t *)l;
    struct winSteamServersDisconnected_t_4 *win = (struct winSteamServersDisconnected_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winClientGameServerDeny_t_16 {
    uint32 m_uAppID;
    uint32 m_unGameServerIP;
    uint16 m_usGameServerPort;
    uint16 m_bSecure;
    uint32 m_uReason;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ClientGameServerDeny_t_16(void *l, void *w)
{
    ClientGameServerDeny_t *lin = (ClientGameServerDeny_t *)l;
    struct winClientGameServerDeny_t_16 *win = (struct winClientGameServerDeny_t_16 *)w;
    win->m_uAppID = lin->m_uAppID;
    win->m_unGameServerIP = lin->m_unGameServerIP;
    win->m_usGameServerPort = lin->m_usGameServerPort;
    win->m_bSecure = lin->m_bSecure;
    win->m_uReason = lin->m_uReason;
}

#pragma pack( push, 8 )
struct winIPCFailure_t_1 {
    uint8 m_eFailureType;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_IPCFailure_t_1(void *l, void *w)
{
    IPCFailure_t *lin = (IPCFailure_t *)l;
    struct winIPCFailure_t_1 *win = (struct winIPCFailure_t_1 *)w;
    win->m_eFailureType = lin->m_eFailureType;
}

#pragma pack( push, 8 )
struct winLicensesUpdated_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LicensesUpdated_t_1(void *l, void *w)
{
    LicensesUpdated_t *lin = (LicensesUpdated_t *)l;
    struct winLicensesUpdated_t_1 *win = (struct winLicensesUpdated_t_1 *)w;
}

#pragma pack( push, 8 )
struct winValidateAuthTicketResponse_t_20 {
    CSteamID m_SteamID;
    EAuthSessionResponse m_eAuthSessionResponse;
    CSteamID m_OwnerSteamID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ValidateAuthTicketResponse_t_20(void *l, void *w)
{
    ValidateAuthTicketResponse_t *lin = (ValidateAuthTicketResponse_t *)l;
    struct winValidateAuthTicketResponse_t_20 *win = (struct winValidateAuthTicketResponse_t_20 *)w;
    win->m_SteamID = lin->m_SteamID;
    win->m_eAuthSessionResponse = lin->m_eAuthSessionResponse;
    win->m_OwnerSteamID = lin->m_OwnerSteamID;
}

#pragma pack( push, 8 )
struct winMicroTxnAuthorizationResponse_t_16 {
    uint32 m_unAppID;
    uint64 m_ulOrderID;
    uint8 m_bAuthorized;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MicroTxnAuthorizationResponse_t_16(void *l, void *w)
{
    MicroTxnAuthorizationResponse_t *lin = (MicroTxnAuthorizationResponse_t *)l;
    struct winMicroTxnAuthorizationResponse_t_16 *win = (struct winMicroTxnAuthorizationResponse_t_16 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_ulOrderID = lin->m_ulOrderID;
    win->m_bAuthorized = lin->m_bAuthorized;
}

#pragma pack( push, 8 )
struct winEncryptedAppTicketResponse_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_EncryptedAppTicketResponse_t_4(void *l, void *w)
{
    EncryptedAppTicketResponse_t *lin = (EncryptedAppTicketResponse_t *)l;
    struct winEncryptedAppTicketResponse_t_4 *win = (struct winEncryptedAppTicketResponse_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winGetAuthSessionTicketResponse_t_8 {
    HAuthTicket m_hAuthTicket;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetAuthSessionTicketResponse_t_8(void *l, void *w)
{
    GetAuthSessionTicketResponse_t *lin = (GetAuthSessionTicketResponse_t *)l;
    struct winGetAuthSessionTicketResponse_t_8 *win = (struct winGetAuthSessionTicketResponse_t_8 *)w;
    win->m_hAuthTicket = lin->m_hAuthTicket;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winGameWebCallback_t_256 {
    char m_szURL[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameWebCallback_t_256(void *l, void *w)
{
    GameWebCallback_t *lin = (GameWebCallback_t *)l;
    struct winGameWebCallback_t_256 *win = (struct winGameWebCallback_t_256 *)w;
    memcpy(win->m_szURL, lin->m_szURL, sizeof(win->m_szURL));
}

#pragma pack( push, 8 )
struct winStoreAuthURLResponse_t_512 {
    char m_szURL[512];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_StoreAuthURLResponse_t_512(void *l, void *w)
{
    StoreAuthURLResponse_t *lin = (StoreAuthURLResponse_t *)l;
    struct winStoreAuthURLResponse_t_512 *win = (struct winStoreAuthURLResponse_t_512 *)w;
    memcpy(win->m_szURL, lin->m_szURL, sizeof(win->m_szURL));
}

#pragma pack( push, 8 )
struct winFriendGameInfo_t_142 {
    CGameID m_gameID;
    uint32 m_unGameIP;
    uint16 m_usGamePort;
    uint16 m_usQueryPort;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendGameInfo_t_142(void *w, void *l)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_142 *win = (struct winFriendGameInfo_t_142 *)w;
    lin->m_gameID = win->m_gameID;
    lin->m_unGameIP = win->m_unGameIP;
    lin->m_usGamePort = win->m_usGamePort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_steamIDLobby = win->m_steamIDLobby;
}

void lin_to_win_struct_FriendGameInfo_t_142(void *l, void *w)
{
    FriendGameInfo_t *lin = (FriendGameInfo_t *)l;
    struct winFriendGameInfo_t_142 *win = (struct winFriendGameInfo_t_142 *)w;
    win->m_gameID = lin->m_gameID;
    win->m_unGameIP = lin->m_unGameIP;
    win->m_usGamePort = lin->m_usGamePort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_steamIDLobby = lin->m_steamIDLobby;
}

#pragma pack( push, 8 )
struct winFriendSessionStateInfo_t_142 {
    uint32 m_uiOnlineSessionInstances;
    uint8 m_uiPublishedToFriendsSessionInstance;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_FriendSessionStateInfo_t_142(void *w, void *l)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_142 *win = (struct winFriendSessionStateInfo_t_142 *)w;
    lin->m_uiOnlineSessionInstances = win->m_uiOnlineSessionInstances;
    lin->m_uiPublishedToFriendsSessionInstance = win->m_uiPublishedToFriendsSessionInstance;
}

void lin_to_win_struct_FriendSessionStateInfo_t_142(void *l, void *w)
{
    FriendSessionStateInfo_t *lin = (FriendSessionStateInfo_t *)l;
    struct winFriendSessionStateInfo_t_142 *win = (struct winFriendSessionStateInfo_t_142 *)w;
    win->m_uiOnlineSessionInstances = lin->m_uiOnlineSessionInstances;
    win->m_uiPublishedToFriendsSessionInstance = lin->m_uiPublishedToFriendsSessionInstance;
}

#pragma pack( push, 8 )
struct winPersonaStateChange_t_12 {
    uint64 m_ulSteamID;
    int m_nChangeFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_PersonaStateChange_t_12(void *l, void *w)
{
    PersonaStateChange_t *lin = (PersonaStateChange_t *)l;
    struct winPersonaStateChange_t_12 *win = (struct winPersonaStateChange_t_12 *)w;
    win->m_ulSteamID = lin->m_ulSteamID;
    win->m_nChangeFlags = lin->m_nChangeFlags;
}

#pragma pack( push, 8 )
struct winGameOverlayActivated_t_1 {
    uint8 m_bActive;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameOverlayActivated_t_1(void *l, void *w)
{
    GameOverlayActivated_t *lin = (GameOverlayActivated_t *)l;
    struct winGameOverlayActivated_t_1 *win = (struct winGameOverlayActivated_t_1 *)w;
    win->m_bActive = lin->m_bActive;
}

#pragma pack( push, 8 )
struct winGameServerChangeRequested_t_128 {
    char m_rgchServer[64];
    char m_rgchPassword[64];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameServerChangeRequested_t_128(void *l, void *w)
{
    GameServerChangeRequested_t *lin = (GameServerChangeRequested_t *)l;
    struct winGameServerChangeRequested_t_128 *win = (struct winGameServerChangeRequested_t_128 *)w;
    memcpy(win->m_rgchServer, lin->m_rgchServer, sizeof(win->m_rgchServer));
    memcpy(win->m_rgchPassword, lin->m_rgchPassword, sizeof(win->m_rgchPassword));
}

#pragma pack( push, 8 )
struct winGameLobbyJoinRequested_t_16 {
    CSteamID m_steamIDLobby;
    CSteamID m_steamIDFriend;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameLobbyJoinRequested_t_16(void *l, void *w)
{
    GameLobbyJoinRequested_t *lin = (GameLobbyJoinRequested_t *)l;
    struct winGameLobbyJoinRequested_t_16 *win = (struct winGameLobbyJoinRequested_t_16 *)w;
    win->m_steamIDLobby = lin->m_steamIDLobby;
    win->m_steamIDFriend = lin->m_steamIDFriend;
}

#pragma pack( push, 8 )
struct winAvatarImageLoaded_t_20 {
    CSteamID m_steamID;
    int m_iImage;
    int m_iWide;
    int m_iTall;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AvatarImageLoaded_t_20(void *l, void *w)
{
    AvatarImageLoaded_t *lin = (AvatarImageLoaded_t *)l;
    struct winAvatarImageLoaded_t_20 *win = (struct winAvatarImageLoaded_t_20 *)w;
    win->m_steamID = lin->m_steamID;
    win->m_iImage = lin->m_iImage;
    win->m_iWide = lin->m_iWide;
    win->m_iTall = lin->m_iTall;
}

#pragma pack( push, 8 )
struct winClanOfficerListResponse_t_16 {
    CSteamID m_steamIDClan;
    int m_cOfficers;
    uint8 m_bSuccess;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ClanOfficerListResponse_t_16(void *l, void *w)
{
    ClanOfficerListResponse_t *lin = (ClanOfficerListResponse_t *)l;
    struct winClanOfficerListResponse_t_16 *win = (struct winClanOfficerListResponse_t_16 *)w;
    win->m_steamIDClan = lin->m_steamIDClan;
    win->m_cOfficers = lin->m_cOfficers;
    win->m_bSuccess = lin->m_bSuccess;
}

#pragma pack( push, 8 )
struct winFriendRichPresenceUpdate_t_12 {
    CSteamID m_steamIDFriend;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FriendRichPresenceUpdate_t_12(void *l, void *w)
{
    FriendRichPresenceUpdate_t *lin = (FriendRichPresenceUpdate_t *)l;
    struct winFriendRichPresenceUpdate_t_12 *win = (struct winFriendRichPresenceUpdate_t_12 *)w;
    win->m_steamIDFriend = lin->m_steamIDFriend;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winGameRichPresenceJoinRequested_t_264 {
    CSteamID m_steamIDFriend;
    char m_rgchConnect[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameRichPresenceJoinRequested_t_264(void *l, void *w)
{
    GameRichPresenceJoinRequested_t *lin = (GameRichPresenceJoinRequested_t *)l;
    struct winGameRichPresenceJoinRequested_t_264 *win = (struct winGameRichPresenceJoinRequested_t_264 *)w;
    win->m_steamIDFriend = lin->m_steamIDFriend;
    memcpy(win->m_rgchConnect, lin->m_rgchConnect, sizeof(win->m_rgchConnect));
}

#pragma pack( push, 8 )
struct winGameConnectedClanChatMsg_t_20 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    int m_iMessageID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameConnectedClanChatMsg_t_20(void *l, void *w)
{
    GameConnectedClanChatMsg_t *lin = (GameConnectedClanChatMsg_t *)l;
    struct winGameConnectedClanChatMsg_t_20 *win = (struct winGameConnectedClanChatMsg_t_20 *)w;
    win->m_steamIDClanChat = lin->m_steamIDClanChat;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_iMessageID = lin->m_iMessageID;
}

#pragma pack( push, 8 )
struct winGameConnectedChatJoin_t_16 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameConnectedChatJoin_t_16(void *l, void *w)
{
    GameConnectedChatJoin_t *lin = (GameConnectedChatJoin_t *)l;
    struct winGameConnectedChatJoin_t_16 *win = (struct winGameConnectedChatJoin_t_16 *)w;
    win->m_steamIDClanChat = lin->m_steamIDClanChat;
    win->m_steamIDUser = lin->m_steamIDUser;
}

#pragma pack( push, 8 )
struct winGameConnectedChatLeave_t_18 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    bool m_bKicked;
    bool m_bDropped;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameConnectedChatLeave_t_18(void *l, void *w)
{
    GameConnectedChatLeave_t *lin = (GameConnectedChatLeave_t *)l;
    struct winGameConnectedChatLeave_t_18 *win = (struct winGameConnectedChatLeave_t_18 *)w;
    win->m_steamIDClanChat = lin->m_steamIDClanChat;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_bKicked = lin->m_bKicked;
    win->m_bDropped = lin->m_bDropped;
}

#pragma pack( push, 8 )
struct winDownloadClanActivityCountsResult_t_1 {
    bool m_bSuccess;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DownloadClanActivityCountsResult_t_1(void *l, void *w)
{
    DownloadClanActivityCountsResult_t *lin = (DownloadClanActivityCountsResult_t *)l;
    struct winDownloadClanActivityCountsResult_t_1 *win = (struct winDownloadClanActivityCountsResult_t_1 *)w;
    win->m_bSuccess = lin->m_bSuccess;
}

#pragma pack( push, 8 )
struct winJoinClanChatRoomCompletionResult_t_12 {
    CSteamID m_steamIDClanChat;
    EChatRoomEnterResponse m_eChatRoomEnterResponse;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_JoinClanChatRoomCompletionResult_t_12(void *l, void *w)
{
    JoinClanChatRoomCompletionResult_t *lin = (JoinClanChatRoomCompletionResult_t *)l;
    struct winJoinClanChatRoomCompletionResult_t_12 *win = (struct winJoinClanChatRoomCompletionResult_t_12 *)w;
    win->m_steamIDClanChat = lin->m_steamIDClanChat;
    win->m_eChatRoomEnterResponse = lin->m_eChatRoomEnterResponse;
}

#pragma pack( push, 8 )
struct winGameConnectedFriendChatMsg_t_12 {
    CSteamID m_steamIDUser;
    int m_iMessageID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GameConnectedFriendChatMsg_t_12(void *l, void *w)
{
    GameConnectedFriendChatMsg_t *lin = (GameConnectedFriendChatMsg_t *)l;
    struct winGameConnectedFriendChatMsg_t_12 *win = (struct winGameConnectedFriendChatMsg_t_12 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_iMessageID = lin->m_iMessageID;
}

#pragma pack( push, 8 )
struct winFriendsGetFollowerCount_t_16 {
    EResult m_eResult;
    CSteamID m_steamID;
    int m_nCount;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FriendsGetFollowerCount_t_16(void *l, void *w)
{
    FriendsGetFollowerCount_t *lin = (FriendsGetFollowerCount_t *)l;
    struct winFriendsGetFollowerCount_t_16 *win = (struct winFriendsGetFollowerCount_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_steamID = lin->m_steamID;
    win->m_nCount = lin->m_nCount;
}

#pragma pack( push, 8 )
struct winFriendsIsFollowing_t_16 {
    EResult m_eResult;
    CSteamID m_steamID;
    bool m_bIsFollowing;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FriendsIsFollowing_t_16(void *l, void *w)
{
    FriendsIsFollowing_t *lin = (FriendsIsFollowing_t *)l;
    struct winFriendsIsFollowing_t_16 *win = (struct winFriendsIsFollowing_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_steamID = lin->m_steamID;
    win->m_bIsFollowing = lin->m_bIsFollowing;
}

#pragma pack( push, 8 )
struct winFriendsEnumerateFollowingList_t_412 {
    EResult m_eResult;
    CSteamID m_rgSteamID[50];
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FriendsEnumerateFollowingList_t_412(void *l, void *w)
{
    FriendsEnumerateFollowingList_t *lin = (FriendsEnumerateFollowingList_t *)l;
    struct winFriendsEnumerateFollowingList_t_412 *win = (struct winFriendsEnumerateFollowingList_t_412 *)w;
    win->m_eResult = lin->m_eResult;
    memcpy(win->m_rgSteamID, lin->m_rgSteamID, sizeof(win->m_rgSteamID));
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
}

#pragma pack( push, 8 )
struct winSetPersonaNameResponse_t_8 {
    bool m_bSuccess;
    bool m_bLocalSuccess;
    EResult m_result;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SetPersonaNameResponse_t_8(void *l, void *w)
{
    SetPersonaNameResponse_t *lin = (SetPersonaNameResponse_t *)l;
    struct winSetPersonaNameResponse_t_8 *win = (struct winSetPersonaNameResponse_t_8 *)w;
    win->m_bSuccess = lin->m_bSuccess;
    win->m_bLocalSuccess = lin->m_bLocalSuccess;
    win->m_result = lin->m_result;
}

#pragma pack( push, 8 )
struct winIPCountry_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_IPCountry_t_1(void *l, void *w)
{
    IPCountry_t *lin = (IPCountry_t *)l;
    struct winIPCountry_t_1 *win = (struct winIPCountry_t_1 *)w;
}

#pragma pack( push, 8 )
struct winLowBatteryPower_t_1 {
    uint8 m_nMinutesBatteryLeft;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LowBatteryPower_t_1(void *l, void *w)
{
    LowBatteryPower_t *lin = (LowBatteryPower_t *)l;
    struct winLowBatteryPower_t_1 *win = (struct winLowBatteryPower_t_1 *)w;
    win->m_nMinutesBatteryLeft = lin->m_nMinutesBatteryLeft;
}

#pragma pack( push, 8 )
struct winSteamAPICallCompleted_t_16 {
    SteamAPICall_t m_hAsyncCall;
    int m_iCallback;
    uint32 m_cubParam;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamAPICallCompleted_t_16(void *l, void *w)
{
    SteamAPICallCompleted_t *lin = (SteamAPICallCompleted_t *)l;
    struct winSteamAPICallCompleted_t_16 *win = (struct winSteamAPICallCompleted_t_16 *)w;
    win->m_hAsyncCall = lin->m_hAsyncCall;
    win->m_iCallback = lin->m_iCallback;
    win->m_cubParam = lin->m_cubParam;
}

#pragma pack( push, 8 )
struct winSteamShutdown_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamShutdown_t_1(void *l, void *w)
{
    SteamShutdown_t *lin = (SteamShutdown_t *)l;
    struct winSteamShutdown_t_1 *win = (struct winSteamShutdown_t_1 *)w;
}

#pragma pack( push, 8 )
struct winCheckFileSignature_t_4 {
    ECheckFileSignature m_eCheckFileSignature;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_CheckFileSignature_t_4(void *l, void *w)
{
    CheckFileSignature_t *lin = (CheckFileSignature_t *)l;
    struct winCheckFileSignature_t_4 *win = (struct winCheckFileSignature_t_4 *)w;
    win->m_eCheckFileSignature = lin->m_eCheckFileSignature;
}

#pragma pack( push, 8 )
struct winGamepadTextInputDismissed_t_8 {
    bool m_bSubmitted;
    uint32 m_unSubmittedText;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GamepadTextInputDismissed_t_8(void *l, void *w)
{
    GamepadTextInputDismissed_t *lin = (GamepadTextInputDismissed_t *)l;
    struct winGamepadTextInputDismissed_t_8 *win = (struct winGamepadTextInputDismissed_t_8 *)w;
    win->m_bSubmitted = lin->m_bSubmitted;
    win->m_unSubmittedText = lin->m_unSubmittedText;
}

#pragma pack( push, 8 )
struct winservernetadr_t_142 {
    uint16 m_usConnectionPort;
    uint16 m_usQueryPort;
    uint32 m_unIP;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_servernetadr_t_142(void *w, void *l)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_142 *win = (struct winservernetadr_t_142 *)w;
    lin->m_usConnectionPort = win->m_usConnectionPort;
    lin->m_usQueryPort = win->m_usQueryPort;
    lin->m_unIP = win->m_unIP;
}

void lin_to_win_struct_servernetadr_t_142(void *l, void *w)
{
    servernetadr_t *lin = (servernetadr_t *)l;
    struct winservernetadr_t_142 *win = (struct winservernetadr_t_142 *)w;
    win->m_usConnectionPort = lin->m_usConnectionPort;
    win->m_usQueryPort = lin->m_usQueryPort;
    win->m_unIP = lin->m_unIP;
}

#pragma pack( push, 8 )
struct wingameserveritem_t_142 {
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
void win_to_lin_struct_gameserveritem_t_142(void *w, void *l)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_142 *win = (struct wingameserveritem_t_142 *)w;
    win_to_lin_struct_servernetadr_t_142(&win->m_NetAdr, &lin->m_NetAdr);
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

void lin_to_win_struct_gameserveritem_t_142(void *l, void *w)
{
    gameserveritem_t *lin = (gameserveritem_t *)l;
    struct wingameserveritem_t_142 *win = (struct wingameserveritem_t_142 *)w;
    lin_to_win_struct_servernetadr_t_142(&lin->m_NetAdr, &win->m_NetAdr);
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
struct winFavoritesListChanged_t_28 {
    uint32 m_nIP;
    uint32 m_nQueryPort;
    uint32 m_nConnPort;
    uint32 m_nAppID;
    uint32 m_nFlags;
    bool m_bAdd;
    AccountID_t m_unAccountId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FavoritesListChanged_t_28(void *l, void *w)
{
    FavoritesListChanged_t *lin = (FavoritesListChanged_t *)l;
    struct winFavoritesListChanged_t_28 *win = (struct winFavoritesListChanged_t_28 *)w;
    win->m_nIP = lin->m_nIP;
    win->m_nQueryPort = lin->m_nQueryPort;
    win->m_nConnPort = lin->m_nConnPort;
    win->m_nAppID = lin->m_nAppID;
    win->m_nFlags = lin->m_nFlags;
    win->m_bAdd = lin->m_bAdd;
    win->m_unAccountId = lin->m_unAccountId;
}

#pragma pack( push, 8 )
struct winLobbyInvite_t_24 {
    uint64 m_ulSteamIDUser;
    uint64 m_ulSteamIDLobby;
    uint64 m_ulGameID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyInvite_t_24(void *l, void *w)
{
    LobbyInvite_t *lin = (LobbyInvite_t *)l;
    struct winLobbyInvite_t_24 *win = (struct winLobbyInvite_t_24 *)w;
    win->m_ulSteamIDUser = lin->m_ulSteamIDUser;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulGameID = lin->m_ulGameID;
}

#pragma pack( push, 8 )
struct winLobbyEnter_t_20 {
    uint64 m_ulSteamIDLobby;
    uint32 m_rgfChatPermissions;
    bool m_bLocked;
    uint32 m_EChatRoomEnterResponse;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyEnter_t_20(void *l, void *w)
{
    LobbyEnter_t *lin = (LobbyEnter_t *)l;
    struct winLobbyEnter_t_20 *win = (struct winLobbyEnter_t_20 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_rgfChatPermissions = lin->m_rgfChatPermissions;
    win->m_bLocked = lin->m_bLocked;
    win->m_EChatRoomEnterResponse = lin->m_EChatRoomEnterResponse;
}

#pragma pack( push, 8 )
struct winLobbyDataUpdate_t_20 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDMember;
    uint8 m_bSuccess;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyDataUpdate_t_20(void *l, void *w)
{
    LobbyDataUpdate_t *lin = (LobbyDataUpdate_t *)l;
    struct winLobbyDataUpdate_t_20 *win = (struct winLobbyDataUpdate_t_20 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDMember = lin->m_ulSteamIDMember;
    win->m_bSuccess = lin->m_bSuccess;
}

#pragma pack( push, 8 )
struct winLobbyChatUpdate_t_28 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDUserChanged;
    uint64 m_ulSteamIDMakingChange;
    uint32 m_rgfChatMemberStateChange;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyChatUpdate_t_28(void *l, void *w)
{
    LobbyChatUpdate_t *lin = (LobbyChatUpdate_t *)l;
    struct winLobbyChatUpdate_t_28 *win = (struct winLobbyChatUpdate_t_28 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDUserChanged = lin->m_ulSteamIDUserChanged;
    win->m_ulSteamIDMakingChange = lin->m_ulSteamIDMakingChange;
    win->m_rgfChatMemberStateChange = lin->m_rgfChatMemberStateChange;
}

#pragma pack( push, 8 )
struct winLobbyChatMsg_t_24 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDUser;
    uint8 m_eChatEntryType;
    uint32 m_iChatID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyChatMsg_t_24(void *l, void *w)
{
    LobbyChatMsg_t *lin = (LobbyChatMsg_t *)l;
    struct winLobbyChatMsg_t_24 *win = (struct winLobbyChatMsg_t_24 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDUser = lin->m_ulSteamIDUser;
    win->m_eChatEntryType = lin->m_eChatEntryType;
    win->m_iChatID = lin->m_iChatID;
}

#pragma pack( push, 8 )
struct winLobbyGameCreated_t_24 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDGameServer;
    uint32 m_unIP;
    uint16 m_usPort;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyGameCreated_t_24(void *l, void *w)
{
    LobbyGameCreated_t *lin = (LobbyGameCreated_t *)l;
    struct winLobbyGameCreated_t_24 *win = (struct winLobbyGameCreated_t_24 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDGameServer = lin->m_ulSteamIDGameServer;
    win->m_unIP = lin->m_unIP;
    win->m_usPort = lin->m_usPort;
}

#pragma pack( push, 8 )
struct winLobbyMatchList_t_4 {
    uint32 m_nLobbiesMatching;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyMatchList_t_4(void *l, void *w)
{
    LobbyMatchList_t *lin = (LobbyMatchList_t *)l;
    struct winLobbyMatchList_t_4 *win = (struct winLobbyMatchList_t_4 *)w;
    win->m_nLobbiesMatching = lin->m_nLobbiesMatching;
}

#pragma pack( push, 8 )
struct winLobbyKicked_t_20 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDAdmin;
    uint8 m_bKickedDueToDisconnect;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyKicked_t_20(void *l, void *w)
{
    LobbyKicked_t *lin = (LobbyKicked_t *)l;
    struct winLobbyKicked_t_20 *win = (struct winLobbyKicked_t_20 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDAdmin = lin->m_ulSteamIDAdmin;
    win->m_bKickedDueToDisconnect = lin->m_bKickedDueToDisconnect;
}

#pragma pack( push, 8 )
struct winLobbyCreated_t_12 {
    EResult m_eResult;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyCreated_t_12(void *l, void *w)
{
    LobbyCreated_t *lin = (LobbyCreated_t *)l;
    struct winLobbyCreated_t_12 *win = (struct winLobbyCreated_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
}

#pragma pack( push, 8 )
struct winPSNGameBootInviteResult_t_9 {
    bool m_bGameBootInviteExists;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_PSNGameBootInviteResult_t_9(void *l, void *w)
{
    PSNGameBootInviteResult_t *lin = (PSNGameBootInviteResult_t *)l;
    struct winPSNGameBootInviteResult_t_9 *win = (struct winPSNGameBootInviteResult_t_9 *)w;
    win->m_bGameBootInviteExists = lin->m_bGameBootInviteExists;
    win->m_steamIDLobby = lin->m_steamIDLobby;
}

#pragma pack( push, 8 )
struct winFavoritesListAccountsUpdated_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FavoritesListAccountsUpdated_t_4(void *l, void *w)
{
    FavoritesListAccountsUpdated_t *lin = (FavoritesListAccountsUpdated_t *)l;
    struct winFavoritesListAccountsUpdated_t_4 *win = (struct winFavoritesListAccountsUpdated_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winSteamParamStringArray_t_142 {
    const char ** m_ppStrings;
    int32 m_nNumStrings;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamParamStringArray_t_142(void *w, void *l)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_142 *win = (struct winSteamParamStringArray_t_142 *)w;
    lin->m_ppStrings = win->m_ppStrings;
    lin->m_nNumStrings = win->m_nNumStrings;
}

void lin_to_win_struct_SteamParamStringArray_t_142(void *l, void *w)
{
    SteamParamStringArray_t *lin = (SteamParamStringArray_t *)l;
    struct winSteamParamStringArray_t_142 *win = (struct winSteamParamStringArray_t_142 *)w;
    win->m_ppStrings = lin->m_ppStrings;
    win->m_nNumStrings = lin->m_nNumStrings;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncedClient_t_12 {
    AppId_t m_nAppID;
    EResult m_eResult;
    int m_unNumDownloads;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncedClient_t_12(void *l, void *w)
{
    RemoteStorageAppSyncedClient_t *lin = (RemoteStorageAppSyncedClient_t *)l;
    struct winRemoteStorageAppSyncedClient_t_12 *win = (struct winRemoteStorageAppSyncedClient_t_12 *)w;
    win->m_nAppID = lin->m_nAppID;
    win->m_eResult = lin->m_eResult;
    win->m_unNumDownloads = lin->m_unNumDownloads;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncedServer_t_12 {
    AppId_t m_nAppID;
    EResult m_eResult;
    int m_unNumUploads;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncedServer_t_12(void *l, void *w)
{
    RemoteStorageAppSyncedServer_t *lin = (RemoteStorageAppSyncedServer_t *)l;
    struct winRemoteStorageAppSyncedServer_t_12 *win = (struct winRemoteStorageAppSyncedServer_t_12 *)w;
    win->m_nAppID = lin->m_nAppID;
    win->m_eResult = lin->m_eResult;
    win->m_unNumUploads = lin->m_unNumUploads;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncProgress_t_280 {
    char m_rgchCurrentFile[260];
    AppId_t m_nAppID;
    uint32 m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncProgress_t_280(void *l, void *w)
{
    RemoteStorageAppSyncProgress_t *lin = (RemoteStorageAppSyncProgress_t *)l;
    struct winRemoteStorageAppSyncProgress_t_280 *win = (struct winRemoteStorageAppSyncProgress_t_280 *)w;
    memcpy(win->m_rgchCurrentFile, lin->m_rgchCurrentFile, sizeof(win->m_rgchCurrentFile));
    win->m_nAppID = lin->m_nAppID;
    win->m_uBytesTransferredThisChunk = lin->m_uBytesTransferredThisChunk;
    win->m_dAppPercentComplete = lin->m_dAppPercentComplete;
    win->m_bUploading = lin->m_bUploading;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncStatusCheck_t_8 {
    AppId_t m_nAppID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncStatusCheck_t_8(void *l, void *w)
{
    RemoteStorageAppSyncStatusCheck_t *lin = (RemoteStorageAppSyncStatusCheck_t *)l;
    struct winRemoteStorageAppSyncStatusCheck_t_8 *win = (struct winRemoteStorageAppSyncStatusCheck_t_8 *)w;
    win->m_nAppID = lin->m_nAppID;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winRemoteStorageFileShareResult_t_272 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    char m_rgchFilename[260];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageFileShareResult_t_272(void *l, void *w)
{
    RemoteStorageFileShareResult_t *lin = (RemoteStorageFileShareResult_t *)l;
    struct winRemoteStorageFileShareResult_t_272 *win = (struct winRemoteStorageFileShareResult_t_272 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    memcpy(win->m_rgchFilename, lin->m_rgchFilename, sizeof(win->m_rgchFilename));
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishFileResult_t_16(void *l, void *w)
{
    RemoteStoragePublishFileResult_t *lin = (RemoteStoragePublishFileResult_t *)l;
    struct winRemoteStoragePublishFileResult_t_16 *win = (struct winRemoteStoragePublishFileResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winRemoteStorageDeletePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageDeletePublishedFileResult_t_12(void *l, void *w)
{
    RemoteStorageDeletePublishedFileResult_t *lin = (RemoteStorageDeletePublishedFileResult_t *)l;
    struct winRemoteStorageDeletePublishedFileResult_t_12 *win = (struct winRemoteStorageDeletePublishedFileResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserPublishedFilesResult_t_412 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserPublishedFilesResult_t_412(void *l, void *w)
{
    RemoteStorageEnumerateUserPublishedFilesResult_t *lin = (RemoteStorageEnumerateUserPublishedFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserPublishedFilesResult_t_412 *win = (struct winRemoteStorageEnumerateUserPublishedFilesResult_t_412 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
}

#pragma pack( push, 8 )
struct winRemoteStorageSubscribePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSubscribePublishedFileResult_t_12(void *l, void *w)
{
    RemoteStorageSubscribePublishedFileResult_t *lin = (RemoteStorageSubscribePublishedFileResult_t *)l;
    struct winRemoteStorageSubscribePublishedFileResult_t_12 *win = (struct winRemoteStorageSubscribePublishedFileResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_612 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeSubscribed[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserSubscribedFilesResult_t_612(void *l, void *w)
{
    RemoteStorageEnumerateUserSubscribedFilesResult_t *lin = (RemoteStorageEnumerateUserSubscribedFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_612 *win = (struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_612 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgRTimeSubscribed, lin->m_rgRTimeSubscribed, sizeof(win->m_rgRTimeSubscribed));
}

#pragma pack( push, 8 )
struct winRemoteStorageUnsubscribePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUnsubscribePublishedFileResult_t_12(void *l, void *w)
{
    RemoteStorageUnsubscribePublishedFileResult_t *lin = (RemoteStorageUnsubscribePublishedFileResult_t *)l;
    struct winRemoteStorageUnsubscribePublishedFileResult_t_12 *win = (struct winRemoteStorageUnsubscribePublishedFileResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageUpdatePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUpdatePublishedFileResult_t_16(void *l, void *w)
{
    RemoteStorageUpdatePublishedFileResult_t *lin = (RemoteStorageUpdatePublishedFileResult_t *)l;
    struct winRemoteStorageUpdatePublishedFileResult_t_16 *win = (struct winRemoteStorageUpdatePublishedFileResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winRemoteStorageDownloadUGCResult_t_288 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char m_pchFileName[260];
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageDownloadUGCResult_t_288(void *l, void *w)
{
    RemoteStorageDownloadUGCResult_t *lin = (RemoteStorageDownloadUGCResult_t *)l;
    struct winRemoteStorageDownloadUGCResult_t_288 *win = (struct winRemoteStorageDownloadUGCResult_t_288 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    win->m_nAppID = lin->m_nAppID;
    win->m_nSizeInBytes = lin->m_nSizeInBytes;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
}

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedFileDetailsResult_t_9748 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    EWorkshopFileType m_eFileType;
    bool m_bAcceptedForUse;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageGetPublishedFileDetailsResult_t_9748(void *l, void *w)
{
    RemoteStorageGetPublishedFileDetailsResult_t *lin = (RemoteStorageGetPublishedFileDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedFileDetailsResult_t_9748 *win = (struct winRemoteStorageGetPublishedFileDetailsResult_t_9748 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nCreatorAppID = lin->m_nCreatorAppID;
    win->m_nConsumerAppID = lin->m_nConsumerAppID;
    memcpy(win->m_rgchTitle, lin->m_rgchTitle, sizeof(win->m_rgchTitle));
    memcpy(win->m_rgchDescription, lin->m_rgchDescription, sizeof(win->m_rgchDescription));
    win->m_hFile = lin->m_hFile;
    win->m_hPreviewFile = lin->m_hPreviewFile;
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
    win->m_rtimeCreated = lin->m_rtimeCreated;
    win->m_rtimeUpdated = lin->m_rtimeUpdated;
    win->m_eVisibility = lin->m_eVisibility;
    win->m_bBanned = lin->m_bBanned;
    memcpy(win->m_rgchTags, lin->m_rgchTags, sizeof(win->m_rgchTags));
    win->m_bTagsTruncated = lin->m_bTagsTruncated;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_nFileSize = lin->m_nFileSize;
    win->m_nPreviewFileSize = lin->m_nPreviewFileSize;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
    win->m_eFileType = lin->m_eFileType;
    win->m_bAcceptedForUse = lin->m_bAcceptedForUse;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateWorkshopFilesResult_t_620 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
    AppId_t m_nAppId;
    uint32 m_unStartIndex;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateWorkshopFilesResult_t_620(void *l, void *w)
{
    RemoteStorageEnumerateWorkshopFilesResult_t *lin = (RemoteStorageEnumerateWorkshopFilesResult_t *)l;
    struct winRemoteStorageEnumerateWorkshopFilesResult_t_620 *win = (struct winRemoteStorageEnumerateWorkshopFilesResult_t_620 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgScore, lin->m_rgScore, sizeof(win->m_rgScore));
    win->m_nAppId = lin->m_nAppId;
    win->m_unStartIndex = lin->m_unStartIndex;
}

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_28 {
    EResult m_eResult;
    PublishedFileId_t m_unPublishedFileId;
    int32 m_nVotesFor;
    int32 m_nVotesAgainst;
    int32 m_nReports;
    float m_fScore;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageGetPublishedItemVoteDetailsResult_t_28(void *l, void *w)
{
    RemoteStorageGetPublishedItemVoteDetailsResult_t *lin = (RemoteStorageGetPublishedItemVoteDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_28 *win = (struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_28 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unPublishedFileId = lin->m_unPublishedFileId;
    win->m_nVotesFor = lin->m_nVotesFor;
    win->m_nVotesAgainst = lin->m_nVotesAgainst;
    win->m_nReports = lin->m_nReports;
    win->m_fScore = lin->m_fScore;
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileSubscribed_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishedFileSubscribed_t_12(void *l, void *w)
{
    RemoteStoragePublishedFileSubscribed_t *lin = (RemoteStoragePublishedFileSubscribed_t *)l;
    struct winRemoteStoragePublishedFileSubscribed_t_12 *win = (struct winRemoteStoragePublishedFileSubscribed_t_12 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileUnsubscribed_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishedFileUnsubscribed_t_12(void *l, void *w)
{
    RemoteStoragePublishedFileUnsubscribed_t *lin = (RemoteStoragePublishedFileUnsubscribed_t *)l;
    struct winRemoteStoragePublishedFileUnsubscribed_t_12 *win = (struct winRemoteStoragePublishedFileUnsubscribed_t_12 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileDeleted_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishedFileDeleted_t_12(void *l, void *w)
{
    RemoteStoragePublishedFileDeleted_t *lin = (RemoteStoragePublishedFileDeleted_t *)l;
    struct winRemoteStoragePublishedFileDeleted_t_12 *win = (struct winRemoteStoragePublishedFileDeleted_t_12 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUpdateUserPublishedItemVoteResult_t_12(void *l, void *w)
{
    RemoteStorageUpdateUserPublishedItemVoteResult_t *lin = (RemoteStorageUpdateUserPublishedItemVoteResult_t *)l;
    struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_12 *win = (struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageUserVoteDetails_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopVote m_eVote;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUserVoteDetails_t_16(void *l, void *w)
{
    RemoteStorageUserVoteDetails_t *lin = (RemoteStorageUserVoteDetails_t *)l;
    struct winRemoteStorageUserVoteDetails_t_16 *win = (struct winRemoteStorageUserVoteDetails_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eVote = lin->m_eVote;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412(void *l, void *w)
{
    RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *lin = (RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412 *win = (struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
}

#pragma pack( push, 8 )
struct winRemoteStorageSetUserPublishedFileActionResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopFileAction m_eAction;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSetUserPublishedFileActionResult_t_16(void *l, void *w)
{
    RemoteStorageSetUserPublishedFileActionResult_t *lin = (RemoteStorageSetUserPublishedFileActionResult_t *)l;
    struct winRemoteStorageSetUserPublishedFileActionResult_t_16 *win = (struct winRemoteStorageSetUserPublishedFileActionResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eAction = lin->m_eAction;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumeratePublishedFilesByUserActionResult_t_616 {
    EResult m_eResult;
    EWorkshopFileAction m_eAction;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeUpdated[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_616(void *l, void *w)
{
    RemoteStorageEnumeratePublishedFilesByUserActionResult_t *lin = (RemoteStorageEnumeratePublishedFilesByUserActionResult_t *)l;
    struct winRemoteStorageEnumeratePublishedFilesByUserActionResult_t_616 *win = (struct winRemoteStorageEnumeratePublishedFilesByUserActionResult_t_616 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_eAction = lin->m_eAction;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgRTimeUpdated, lin->m_rgRTimeUpdated, sizeof(win->m_rgRTimeUpdated));
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishFileProgress_t_12 {
    double m_dPercentFile;
    bool m_bPreview;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishFileProgress_t_12(void *l, void *w)
{
    RemoteStoragePublishFileProgress_t *lin = (RemoteStoragePublishFileProgress_t *)l;
    struct winRemoteStoragePublishFileProgress_t_12 *win = (struct winRemoteStoragePublishFileProgress_t_12 *)w;
    win->m_dPercentFile = lin->m_dPercentFile;
    win->m_bPreview = lin->m_bPreview;
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileUpdated_t_20 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
    uint64 m_ulUnused;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishedFileUpdated_t_20(void *l, void *w)
{
    RemoteStoragePublishedFileUpdated_t *lin = (RemoteStoragePublishedFileUpdated_t *)l;
    struct winRemoteStoragePublishedFileUpdated_t_20 *win = (struct winRemoteStoragePublishedFileUpdated_t_20 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
    win->m_ulUnused = lin->m_ulUnused;
}

#pragma pack( push, 8 )
struct winRemoteStorageFileWriteAsyncComplete_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageFileWriteAsyncComplete_t_4(void *l, void *w)
{
    RemoteStorageFileWriteAsyncComplete_t *lin = (RemoteStorageFileWriteAsyncComplete_t *)l;
    struct winRemoteStorageFileWriteAsyncComplete_t_4 *win = (struct winRemoteStorageFileWriteAsyncComplete_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winRemoteStorageFileReadAsyncComplete_t_20 {
    SteamAPICall_t m_hFileReadAsync;
    EResult m_eResult;
    uint32 m_nOffset;
    uint32 m_cubRead;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageFileReadAsyncComplete_t_20(void *l, void *w)
{
    RemoteStorageFileReadAsyncComplete_t *lin = (RemoteStorageFileReadAsyncComplete_t *)l;
    struct winRemoteStorageFileReadAsyncComplete_t_20 *win = (struct winRemoteStorageFileReadAsyncComplete_t_20 *)w;
    win->m_hFileReadAsync = lin->m_hFileReadAsync;
    win->m_eResult = lin->m_eResult;
    win->m_nOffset = lin->m_nOffset;
    win->m_cubRead = lin->m_cubRead;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_142 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_142(void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_142 *win = (struct winLeaderboardEntry_t_142 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_142(void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_142 *win = (struct winLeaderboardEntry_t_142 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

#pragma pack( push, 8 )
struct winUserStatsReceived_t_20 {
    uint64 m_nGameID;
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserStatsReceived_t_20(void *l, void *w)
{
    UserStatsReceived_t *lin = (UserStatsReceived_t *)l;
    struct winUserStatsReceived_t_20 *win = (struct winUserStatsReceived_t_20 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
    win->m_steamIDUser = lin->m_steamIDUser;
}

#pragma pack( push, 8 )
struct winUserStatsStored_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserStatsStored_t_12(void *l, void *w)
{
    UserStatsStored_t *lin = (UserStatsStored_t *)l;
    struct winUserStatsStored_t_12 *win = (struct winUserStatsStored_t_12 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winUserAchievementStored_t_148 {
    uint64 m_nGameID;
    bool m_bGroupAchievement;
    char m_rgchAchievementName[128];
    uint32 m_nCurProgress;
    uint32 m_nMaxProgress;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserAchievementStored_t_148(void *l, void *w)
{
    UserAchievementStored_t *lin = (UserAchievementStored_t *)l;
    struct winUserAchievementStored_t_148 *win = (struct winUserAchievementStored_t_148 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_bGroupAchievement = lin->m_bGroupAchievement;
    memcpy(win->m_rgchAchievementName, lin->m_rgchAchievementName, sizeof(win->m_rgchAchievementName));
    win->m_nCurProgress = lin->m_nCurProgress;
    win->m_nMaxProgress = lin->m_nMaxProgress;
}

#pragma pack( push, 8 )
struct winLeaderboardFindResult_t_12 {
    SteamLeaderboard_t m_hSteamLeaderboard;
    uint8 m_bLeaderboardFound;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LeaderboardFindResult_t_12(void *l, void *w)
{
    LeaderboardFindResult_t *lin = (LeaderboardFindResult_t *)l;
    struct winLeaderboardFindResult_t_12 *win = (struct winLeaderboardFindResult_t_12 *)w;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
    win->m_bLeaderboardFound = lin->m_bLeaderboardFound;
}

#pragma pack( push, 8 )
struct winLeaderboardScoresDownloaded_t_20 {
    SteamLeaderboard_t m_hSteamLeaderboard;
    SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
    int m_cEntryCount;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LeaderboardScoresDownloaded_t_20(void *l, void *w)
{
    LeaderboardScoresDownloaded_t *lin = (LeaderboardScoresDownloaded_t *)l;
    struct winLeaderboardScoresDownloaded_t_20 *win = (struct winLeaderboardScoresDownloaded_t_20 *)w;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
    win->m_hSteamLeaderboardEntries = lin->m_hSteamLeaderboardEntries;
    win->m_cEntryCount = lin->m_cEntryCount;
}

#pragma pack( push, 8 )
struct winLeaderboardScoreUploaded_t_28 {
    uint8 m_bSuccess;
    SteamLeaderboard_t m_hSteamLeaderboard;
    int32 m_nScore;
    uint8 m_bScoreChanged;
    int m_nGlobalRankNew;
    int m_nGlobalRankPrevious;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LeaderboardScoreUploaded_t_28(void *l, void *w)
{
    LeaderboardScoreUploaded_t *lin = (LeaderboardScoreUploaded_t *)l;
    struct winLeaderboardScoreUploaded_t_28 *win = (struct winLeaderboardScoreUploaded_t_28 *)w;
    win->m_bSuccess = lin->m_bSuccess;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
    win->m_nScore = lin->m_nScore;
    win->m_bScoreChanged = lin->m_bScoreChanged;
    win->m_nGlobalRankNew = lin->m_nGlobalRankNew;
    win->m_nGlobalRankPrevious = lin->m_nGlobalRankPrevious;
}

#pragma pack( push, 8 )
struct winNumberOfCurrentPlayers_t_8 {
    uint8 m_bSuccess;
    int32 m_cPlayers;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_NumberOfCurrentPlayers_t_8(void *l, void *w)
{
    NumberOfCurrentPlayers_t *lin = (NumberOfCurrentPlayers_t *)l;
    struct winNumberOfCurrentPlayers_t_8 *win = (struct winNumberOfCurrentPlayers_t_8 *)w;
    win->m_bSuccess = lin->m_bSuccess;
    win->m_cPlayers = lin->m_cPlayers;
}

#pragma pack( push, 8 )
struct winUserStatsUnloaded_t_8 {
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserStatsUnloaded_t_8(void *l, void *w)
{
    UserStatsUnloaded_t *lin = (UserStatsUnloaded_t *)l;
    struct winUserStatsUnloaded_t_8 *win = (struct winUserStatsUnloaded_t_8 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
}

#pragma pack( push, 8 )
struct winUserAchievementIconFetched_t_144 {
    CGameID m_nGameID;
    char m_rgchAchievementName[128];
    bool m_bAchieved;
    int m_nIconHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserAchievementIconFetched_t_144(void *l, void *w)
{
    UserAchievementIconFetched_t *lin = (UserAchievementIconFetched_t *)l;
    struct winUserAchievementIconFetched_t_144 *win = (struct winUserAchievementIconFetched_t_144 *)w;
    win->m_nGameID = lin->m_nGameID;
    memcpy(win->m_rgchAchievementName, lin->m_rgchAchievementName, sizeof(win->m_rgchAchievementName));
    win->m_bAchieved = lin->m_bAchieved;
    win->m_nIconHandle = lin->m_nIconHandle;
}

#pragma pack( push, 8 )
struct winGlobalAchievementPercentagesReady_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GlobalAchievementPercentagesReady_t_12(void *l, void *w)
{
    GlobalAchievementPercentagesReady_t *lin = (GlobalAchievementPercentagesReady_t *)l;
    struct winGlobalAchievementPercentagesReady_t_12 *win = (struct winGlobalAchievementPercentagesReady_t_12 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winLeaderboardUGCSet_t_12 {
    EResult m_eResult;
    SteamLeaderboard_t m_hSteamLeaderboard;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LeaderboardUGCSet_t_12(void *l, void *w)
{
    LeaderboardUGCSet_t *lin = (LeaderboardUGCSet_t *)l;
    struct winLeaderboardUGCSet_t_12 *win = (struct winLeaderboardUGCSet_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
}

#pragma pack( push, 8 )
struct winPS3TrophiesInstalled_t_20 {
    uint64 m_nGameID;
    EResult m_eResult;
    uint64 m_ulRequiredDiskSpace;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_PS3TrophiesInstalled_t_20(void *l, void *w)
{
    PS3TrophiesInstalled_t *lin = (PS3TrophiesInstalled_t *)l;
    struct winPS3TrophiesInstalled_t_20 *win = (struct winPS3TrophiesInstalled_t_20 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
    win->m_ulRequiredDiskSpace = lin->m_ulRequiredDiskSpace;
}

#pragma pack( push, 8 )
struct winGlobalStatsReceived_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GlobalStatsReceived_t_12(void *l, void *w)
{
    GlobalStatsReceived_t *lin = (GlobalStatsReceived_t *)l;
    struct winGlobalStatsReceived_t_12 *win = (struct winGlobalStatsReceived_t_12 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winDlcInstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DlcInstalled_t_4(void *l, void *w)
{
    DlcInstalled_t *lin = (DlcInstalled_t *)l;
    struct winDlcInstalled_t_4 *win = (struct winDlcInstalled_t_4 *)w;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRegisterActivationCodeResponse_t_8 {
    ERegisterActivationCodeResult m_eResult;
    uint32 m_unPackageRegistered;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RegisterActivationCodeResponse_t_8(void *l, void *w)
{
    RegisterActivationCodeResponse_t *lin = (RegisterActivationCodeResponse_t *)l;
    struct winRegisterActivationCodeResponse_t_8 *win = (struct winRegisterActivationCodeResponse_t_8 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unPackageRegistered = lin->m_unPackageRegistered;
}

#pragma pack( push, 8 )
struct winNewLaunchQueryParameters_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_NewLaunchQueryParameters_t_1(void *l, void *w)
{
    NewLaunchQueryParameters_t *lin = (NewLaunchQueryParameters_t *)l;
    struct winNewLaunchQueryParameters_t_1 *win = (struct winNewLaunchQueryParameters_t_1 *)w;
}

#pragma pack( push, 8 )
struct winAppProofOfPurchaseKeyResponse_t_252 {
    EResult m_eResult;
    uint32 m_nAppID;
    uint32 m_cchKeyLength;
    char m_rgchKey[240];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AppProofOfPurchaseKeyResponse_t_252(void *l, void *w)
{
    AppProofOfPurchaseKeyResponse_t *lin = (AppProofOfPurchaseKeyResponse_t *)l;
    struct winAppProofOfPurchaseKeyResponse_t_252 *win = (struct winAppProofOfPurchaseKeyResponse_t_252 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nAppID = lin->m_nAppID;
    win->m_cchKeyLength = lin->m_cchKeyLength;
    memcpy(win->m_rgchKey, lin->m_rgchKey, sizeof(win->m_rgchKey));
}

#pragma pack( push, 8 )
struct winFileDetailsResult_t_36 {
    EResult m_eResult;
    uint64 m_ulFileSize;
    uint8 m_FileSHA[20];
    uint32 m_unFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FileDetailsResult_t_36(void *l, void *w)
{
    FileDetailsResult_t *lin = (FileDetailsResult_t *)l;
    struct winFileDetailsResult_t_36 *win = (struct winFileDetailsResult_t_36 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_ulFileSize = lin->m_ulFileSize;
    memcpy(win->m_FileSHA, lin->m_FileSHA, sizeof(win->m_FileSHA));
    win->m_unFlags = lin->m_unFlags;
}

#pragma pack( push, 8 )
struct winP2PSessionState_t_142 {
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
void win_to_lin_struct_P2PSessionState_t_142(void *w, void *l)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_142 *win = (struct winP2PSessionState_t_142 *)w;
    lin->m_bConnectionActive = win->m_bConnectionActive;
    lin->m_bConnecting = win->m_bConnecting;
    lin->m_eP2PSessionError = win->m_eP2PSessionError;
    lin->m_bUsingRelay = win->m_bUsingRelay;
    lin->m_nBytesQueuedForSend = win->m_nBytesQueuedForSend;
    lin->m_nPacketsQueuedForSend = win->m_nPacketsQueuedForSend;
    lin->m_nRemoteIP = win->m_nRemoteIP;
    lin->m_nRemotePort = win->m_nRemotePort;
}

void lin_to_win_struct_P2PSessionState_t_142(void *l, void *w)
{
    P2PSessionState_t *lin = (P2PSessionState_t *)l;
    struct winP2PSessionState_t_142 *win = (struct winP2PSessionState_t_142 *)w;
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
struct winP2PSessionRequest_t_8 {
    CSteamID m_steamIDRemote;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_P2PSessionRequest_t_8(void *l, void *w)
{
    P2PSessionRequest_t *lin = (P2PSessionRequest_t *)l;
    struct winP2PSessionRequest_t_8 *win = (struct winP2PSessionRequest_t_8 *)w;
    win->m_steamIDRemote = lin->m_steamIDRemote;
}

#pragma pack( push, 8 )
struct winP2PSessionConnectFail_t_9 {
    CSteamID m_steamIDRemote;
    uint8 m_eP2PSessionError;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_P2PSessionConnectFail_t_9(void *l, void *w)
{
    P2PSessionConnectFail_t *lin = (P2PSessionConnectFail_t *)l;
    struct winP2PSessionConnectFail_t_9 *win = (struct winP2PSessionConnectFail_t_9 *)w;
    win->m_steamIDRemote = lin->m_steamIDRemote;
    win->m_eP2PSessionError = lin->m_eP2PSessionError;
}

#pragma pack( push, 8 )
struct winSocketStatusCallback_t_20 {
    SNetSocket_t m_hSocket;
    SNetListenSocket_t m_hListenSocket;
    CSteamID m_steamIDRemote;
    int m_eSNetSocketState;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SocketStatusCallback_t_20(void *l, void *w)
{
    SocketStatusCallback_t *lin = (SocketStatusCallback_t *)l;
    struct winSocketStatusCallback_t_20 *win = (struct winSocketStatusCallback_t_20 *)w;
    win->m_hSocket = lin->m_hSocket;
    win->m_hListenSocket = lin->m_hListenSocket;
    win->m_steamIDRemote = lin->m_steamIDRemote;
    win->m_eSNetSocketState = lin->m_eSNetSocketState;
}

#pragma pack( push, 8 )
struct winScreenshotReady_t_8 {
    ScreenshotHandle m_hLocal;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ScreenshotReady_t_8(void *l, void *w)
{
    ScreenshotReady_t *lin = (ScreenshotReady_t *)l;
    struct winScreenshotReady_t_8 *win = (struct winScreenshotReady_t_8 *)w;
    win->m_hLocal = lin->m_hLocal;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winScreenshotRequested_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ScreenshotRequested_t_1(void *l, void *w)
{
    ScreenshotRequested_t *lin = (ScreenshotRequested_t *)l;
    struct winScreenshotRequested_t_1 *win = (struct winScreenshotRequested_t_1 *)w;
}

#pragma pack( push, 8 )
struct winPlaybackStatusHasChanged_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_PlaybackStatusHasChanged_t_1(void *l, void *w)
{
    PlaybackStatusHasChanged_t *lin = (PlaybackStatusHasChanged_t *)l;
    struct winPlaybackStatusHasChanged_t_1 *win = (struct winPlaybackStatusHasChanged_t_1 *)w;
}

#pragma pack( push, 8 )
struct winVolumeHasChanged_t_4 {
    float m_flNewVolume;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_VolumeHasChanged_t_4(void *l, void *w)
{
    VolumeHasChanged_t *lin = (VolumeHasChanged_t *)l;
    struct winVolumeHasChanged_t_4 *win = (struct winVolumeHasChanged_t_4 *)w;
    win->m_flNewVolume = lin->m_flNewVolume;
}

#pragma pack( push, 8 )
struct winMusicPlayerRemoteWillActivate_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerRemoteWillActivate_t_1(void *l, void *w)
{
    MusicPlayerRemoteWillActivate_t *lin = (MusicPlayerRemoteWillActivate_t *)l;
    struct winMusicPlayerRemoteWillActivate_t_1 *win = (struct winMusicPlayerRemoteWillActivate_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerRemoteWillDeactivate_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerRemoteWillDeactivate_t_1(void *l, void *w)
{
    MusicPlayerRemoteWillDeactivate_t *lin = (MusicPlayerRemoteWillDeactivate_t *)l;
    struct winMusicPlayerRemoteWillDeactivate_t_1 *win = (struct winMusicPlayerRemoteWillDeactivate_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerRemoteToFront_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerRemoteToFront_t_1(void *l, void *w)
{
    MusicPlayerRemoteToFront_t *lin = (MusicPlayerRemoteToFront_t *)l;
    struct winMusicPlayerRemoteToFront_t_1 *win = (struct winMusicPlayerRemoteToFront_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWillQuit_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWillQuit_t_1(void *l, void *w)
{
    MusicPlayerWillQuit_t *lin = (MusicPlayerWillQuit_t *)l;
    struct winMusicPlayerWillQuit_t_1 *win = (struct winMusicPlayerWillQuit_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsPlay_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsPlay_t_1(void *l, void *w)
{
    MusicPlayerWantsPlay_t *lin = (MusicPlayerWantsPlay_t *)l;
    struct winMusicPlayerWantsPlay_t_1 *win = (struct winMusicPlayerWantsPlay_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsPause_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsPause_t_1(void *l, void *w)
{
    MusicPlayerWantsPause_t *lin = (MusicPlayerWantsPause_t *)l;
    struct winMusicPlayerWantsPause_t_1 *win = (struct winMusicPlayerWantsPause_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsPlayPrevious_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsPlayPrevious_t_1(void *l, void *w)
{
    MusicPlayerWantsPlayPrevious_t *lin = (MusicPlayerWantsPlayPrevious_t *)l;
    struct winMusicPlayerWantsPlayPrevious_t_1 *win = (struct winMusicPlayerWantsPlayPrevious_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsPlayNext_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsPlayNext_t_1(void *l, void *w)
{
    MusicPlayerWantsPlayNext_t *lin = (MusicPlayerWantsPlayNext_t *)l;
    struct winMusicPlayerWantsPlayNext_t_1 *win = (struct winMusicPlayerWantsPlayNext_t_1 *)w;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsShuffled_t_1 {
    bool m_bShuffled;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsShuffled_t_1(void *l, void *w)
{
    MusicPlayerWantsShuffled_t *lin = (MusicPlayerWantsShuffled_t *)l;
    struct winMusicPlayerWantsShuffled_t_1 *win = (struct winMusicPlayerWantsShuffled_t_1 *)w;
    win->m_bShuffled = lin->m_bShuffled;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsLooped_t_1 {
    bool m_bLooped;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsLooped_t_1(void *l, void *w)
{
    MusicPlayerWantsLooped_t *lin = (MusicPlayerWantsLooped_t *)l;
    struct winMusicPlayerWantsLooped_t_1 *win = (struct winMusicPlayerWantsLooped_t_1 *)w;
    win->m_bLooped = lin->m_bLooped;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsVolume_t_4 {
    float m_flNewVolume;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsVolume_t_4(void *l, void *w)
{
    MusicPlayerWantsVolume_t *lin = (MusicPlayerWantsVolume_t *)l;
    struct winMusicPlayerWantsVolume_t_4 *win = (struct winMusicPlayerWantsVolume_t_4 *)w;
    win->m_flNewVolume = lin->m_flNewVolume;
}

#pragma pack( push, 8 )
struct winMusicPlayerSelectsQueueEntry_t_4 {
    int nID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerSelectsQueueEntry_t_4(void *l, void *w)
{
    MusicPlayerSelectsQueueEntry_t *lin = (MusicPlayerSelectsQueueEntry_t *)l;
    struct winMusicPlayerSelectsQueueEntry_t_4 *win = (struct winMusicPlayerSelectsQueueEntry_t_4 *)w;
    win->nID = lin->nID;
}

#pragma pack( push, 8 )
struct winMusicPlayerSelectsPlaylistEntry_t_4 {
    int nID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerSelectsPlaylistEntry_t_4(void *l, void *w)
{
    MusicPlayerSelectsPlaylistEntry_t *lin = (MusicPlayerSelectsPlaylistEntry_t *)l;
    struct winMusicPlayerSelectsPlaylistEntry_t_4 *win = (struct winMusicPlayerSelectsPlaylistEntry_t_4 *)w;
    win->nID = lin->nID;
}

#pragma pack( push, 8 )
struct winMusicPlayerWantsPlayingRepeatStatus_t_4 {
    int m_nPlayingRepeatStatus;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MusicPlayerWantsPlayingRepeatStatus_t_4(void *l, void *w)
{
    MusicPlayerWantsPlayingRepeatStatus_t *lin = (MusicPlayerWantsPlayingRepeatStatus_t *)l;
    struct winMusicPlayerWantsPlayingRepeatStatus_t_4 *win = (struct winMusicPlayerWantsPlayingRepeatStatus_t_4 *)w;
    win->m_nPlayingRepeatStatus = lin->m_nPlayingRepeatStatus;
}

#pragma pack( push, 8 )
struct winHTTPRequestCompleted_t_24 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
    uint32 m_unBodySize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestCompleted_t_24(void *l, void *w)
{
    HTTPRequestCompleted_t *lin = (HTTPRequestCompleted_t *)l;
    struct winHTTPRequestCompleted_t_24 *win = (struct winHTTPRequestCompleted_t_24 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_bRequestSuccessful = lin->m_bRequestSuccessful;
    win->m_eStatusCode = lin->m_eStatusCode;
    win->m_unBodySize = lin->m_unBodySize;
}

#pragma pack( push, 8 )
struct winHTTPRequestHeadersReceived_t_12 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestHeadersReceived_t_12(void *l, void *w)
{
    HTTPRequestHeadersReceived_t *lin = (HTTPRequestHeadersReceived_t *)l;
    struct winHTTPRequestHeadersReceived_t_12 *win = (struct winHTTPRequestHeadersReceived_t_12 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
}

#pragma pack( push, 8 )
struct winHTTPRequestDataReceived_t_20 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    uint32 m_cOffset;
    uint32 m_cBytesReceived;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestDataReceived_t_20(void *l, void *w)
{
    HTTPRequestDataReceived_t *lin = (HTTPRequestDataReceived_t *)l;
    struct winHTTPRequestDataReceived_t_20 *win = (struct winHTTPRequestDataReceived_t_20 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_cOffset = lin->m_cOffset;
    win->m_cBytesReceived = lin->m_cBytesReceived;
}

#pragma pack( push, 8 )
struct winControllerAnalogActionData_t_142 {
    EControllerSourceMode eMode;
    float x;
    float y;
    bool bActive;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ControllerAnalogActionData_t_142(void *w, void *l)
{
    ControllerAnalogActionData_t *lin = (ControllerAnalogActionData_t *)l;
    struct winControllerAnalogActionData_t_142 *win = (struct winControllerAnalogActionData_t_142 *)w;
    lin->eMode = win->eMode;
    lin->x = win->x;
    lin->y = win->y;
    lin->bActive = win->bActive;
}

void lin_to_win_struct_ControllerAnalogActionData_t_142(void *l, void *w)
{
    ControllerAnalogActionData_t *lin = (ControllerAnalogActionData_t *)l;
    struct winControllerAnalogActionData_t_142 *win = (struct winControllerAnalogActionData_t_142 *)w;
    win->eMode = lin->eMode;
    win->x = lin->x;
    win->y = lin->y;
    win->bActive = lin->bActive;
}

#pragma pack( push, 8 )
struct winControllerDigitalActionData_t_142 {
    bool bState;
    bool bActive;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ControllerDigitalActionData_t_142(void *w, void *l)
{
    ControllerDigitalActionData_t *lin = (ControllerDigitalActionData_t *)l;
    struct winControllerDigitalActionData_t_142 *win = (struct winControllerDigitalActionData_t_142 *)w;
    lin->bState = win->bState;
    lin->bActive = win->bActive;
}

void lin_to_win_struct_ControllerDigitalActionData_t_142(void *l, void *w)
{
    ControllerDigitalActionData_t *lin = (ControllerDigitalActionData_t *)l;
    struct winControllerDigitalActionData_t_142 *win = (struct winControllerDigitalActionData_t_142 *)w;
    win->bState = lin->bState;
    win->bActive = lin->bActive;
}

#pragma pack( push, 8 )
struct winControllerMotionData_t_142 {
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
void win_to_lin_struct_ControllerMotionData_t_142(void *w, void *l)
{
    ControllerMotionData_t *lin = (ControllerMotionData_t *)l;
    struct winControllerMotionData_t_142 *win = (struct winControllerMotionData_t_142 *)w;
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

void lin_to_win_struct_ControllerMotionData_t_142(void *l, void *w)
{
    ControllerMotionData_t *lin = (ControllerMotionData_t *)l;
    struct winControllerMotionData_t_142 *win = (struct winControllerMotionData_t_142 *)w;
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
struct winSteamUGCDetails_t_142 {
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
void win_to_lin_struct_SteamUGCDetails_t_142(void *w, void *l)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_142 *win = (struct winSteamUGCDetails_t_142 *)w;
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

void lin_to_win_struct_SteamUGCDetails_t_142(void *l, void *w)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_142 *win = (struct winSteamUGCDetails_t_142 *)w;
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
struct winSteamUGCQueryCompleted_t_24 {
    UGCQueryHandle_t m_handle;
    EResult m_eResult;
    uint32 m_unNumResultsReturned;
    uint32 m_unTotalMatchingResults;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUGCQueryCompleted_t_24(void *l, void *w)
{
    SteamUGCQueryCompleted_t *lin = (SteamUGCQueryCompleted_t *)l;
    struct winSteamUGCQueryCompleted_t_24 *win = (struct winSteamUGCQueryCompleted_t_24 *)w;
    win->m_handle = lin->m_handle;
    win->m_eResult = lin->m_eResult;
    win->m_unNumResultsReturned = lin->m_unNumResultsReturned;
    win->m_unTotalMatchingResults = lin->m_unTotalMatchingResults;
    win->m_bCachedData = lin->m_bCachedData;
}

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9768 {
    SteamUGCDetails_t m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUGCRequestUGCDetailsResult_t_9768(void *l, void *w)
{
    SteamUGCRequestUGCDetailsResult_t *lin = (SteamUGCRequestUGCDetailsResult_t *)l;
    struct winSteamUGCRequestUGCDetailsResult_t_9768 *win = (struct winSteamUGCRequestUGCDetailsResult_t_9768 *)w;
    lin_to_win_struct_SteamUGCDetails_t_142(&lin->m_details, &win->m_details);
    win->m_bCachedData = lin->m_bCachedData;
}

#pragma pack( push, 8 )
struct winCreateItemResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_CreateItemResult_t_16(void *l, void *w)
{
    CreateItemResult_t *lin = (CreateItemResult_t *)l;
    struct winCreateItemResult_t_16 *win = (struct winCreateItemResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winSubmitItemUpdateResult_t_16 {
    EResult m_eResult;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SubmitItemUpdateResult_t_16(void *l, void *w)
{
    SubmitItemUpdateResult_t *lin = (SubmitItemUpdateResult_t *)l;
    struct winSubmitItemUpdateResult_t_16 *win = (struct winSubmitItemUpdateResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winItemInstalled_t_12 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ItemInstalled_t_12(void *l, void *w)
{
    ItemInstalled_t *lin = (ItemInstalled_t *)l;
    struct winItemInstalled_t_12 *win = (struct winItemInstalled_t_12 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winDownloadItemResult_t_16 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DownloadItemResult_t_16(void *l, void *w)
{
    DownloadItemResult_t *lin = (DownloadItemResult_t *)l;
    struct winDownloadItemResult_t_16 *win = (struct winDownloadItemResult_t_16 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winUserFavoriteItemsListChanged_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bWasAddRequest;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_UserFavoriteItemsListChanged_t_16(void *l, void *w)
{
    UserFavoriteItemsListChanged_t *lin = (UserFavoriteItemsListChanged_t *)l;
    struct winUserFavoriteItemsListChanged_t_16 *win = (struct winUserFavoriteItemsListChanged_t_16 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
    win->m_bWasAddRequest = lin->m_bWasAddRequest;
}

#pragma pack( push, 8 )
struct winSetUserItemVoteResult_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bVoteUp;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SetUserItemVoteResult_t_16(void *l, void *w)
{
    SetUserItemVoteResult_t *lin = (SetUserItemVoteResult_t *)l;
    struct winSetUserItemVoteResult_t_16 *win = (struct winSetUserItemVoteResult_t_16 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
    win->m_bVoteUp = lin->m_bVoteUp;
}

#pragma pack( push, 8 )
struct winGetUserItemVoteResult_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bVotedUp;
    bool m_bVotedDown;
    bool m_bVoteSkipped;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetUserItemVoteResult_t_16(void *l, void *w)
{
    GetUserItemVoteResult_t *lin = (GetUserItemVoteResult_t *)l;
    struct winGetUserItemVoteResult_t_16 *win = (struct winGetUserItemVoteResult_t_16 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
    win->m_bVotedUp = lin->m_bVotedUp;
    win->m_bVotedDown = lin->m_bVotedDown;
    win->m_bVoteSkipped = lin->m_bVoteSkipped;
}

#pragma pack( push, 8 )
struct winStartPlaytimeTrackingResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_StartPlaytimeTrackingResult_t_4(void *l, void *w)
{
    StartPlaytimeTrackingResult_t *lin = (StartPlaytimeTrackingResult_t *)l;
    struct winStartPlaytimeTrackingResult_t_4 *win = (struct winStartPlaytimeTrackingResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winStopPlaytimeTrackingResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_StopPlaytimeTrackingResult_t_4(void *l, void *w)
{
    StopPlaytimeTrackingResult_t *lin = (StopPlaytimeTrackingResult_t *)l;
    struct winStopPlaytimeTrackingResult_t_4 *win = (struct winStopPlaytimeTrackingResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winAddUGCDependencyResult_t_20 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AddUGCDependencyResult_t_20(void *l, void *w)
{
    AddUGCDependencyResult_t *lin = (AddUGCDependencyResult_t *)l;
    struct winAddUGCDependencyResult_t_20 *win = (struct winAddUGCDependencyResult_t_20 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nChildPublishedFileId = lin->m_nChildPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoveUGCDependencyResult_t_20 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoveUGCDependencyResult_t_20(void *l, void *w)
{
    RemoveUGCDependencyResult_t *lin = (RemoveUGCDependencyResult_t *)l;
    struct winRemoveUGCDependencyResult_t_20 *win = (struct winRemoveUGCDependencyResult_t_20 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nChildPublishedFileId = lin->m_nChildPublishedFileId;
}

#pragma pack( push, 8 )
struct winAddAppDependencyResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AddAppDependencyResult_t_16(void *l, void *w)
{
    AddAppDependencyResult_t *lin = (AddAppDependencyResult_t *)l;
    struct winAddAppDependencyResult_t_16 *win = (struct winAddAppDependencyResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRemoveAppDependencyResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoveAppDependencyResult_t_16(void *l, void *w)
{
    RemoveAppDependencyResult_t *lin = (RemoveAppDependencyResult_t *)l;
    struct winRemoveAppDependencyResult_t_16 *win = (struct winRemoveAppDependencyResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winGetAppDependenciesResult_t_148 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_rgAppIDs[32];
    uint32 m_nNumAppDependencies;
    uint32 m_nTotalNumAppDependencies;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetAppDependenciesResult_t_148(void *l, void *w)
{
    GetAppDependenciesResult_t *lin = (GetAppDependenciesResult_t *)l;
    struct winGetAppDependenciesResult_t_148 *win = (struct winGetAppDependenciesResult_t_148 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    memcpy(win->m_rgAppIDs, lin->m_rgAppIDs, sizeof(win->m_rgAppIDs));
    win->m_nNumAppDependencies = lin->m_nNumAppDependencies;
    win->m_nTotalNumAppDependencies = lin->m_nTotalNumAppDependencies;
}

#pragma pack( push, 8 )
struct winDeleteItemResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DeleteItemResult_t_12(void *l, void *w)
{
    DeleteItemResult_t *lin = (DeleteItemResult_t *)l;
    struct winDeleteItemResult_t_12 *win = (struct winDeleteItemResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winSteamAppInstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamAppInstalled_t_4(void *l, void *w)
{
    SteamAppInstalled_t *lin = (SteamAppInstalled_t *)l;
    struct winSteamAppInstalled_t_4 *win = (struct winSteamAppInstalled_t_4 *)w;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winSteamAppUninstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamAppUninstalled_t_4(void *l, void *w)
{
    SteamAppUninstalled_t *lin = (SteamAppUninstalled_t *)l;
    struct winSteamAppUninstalled_t_4 *win = (struct winSteamAppUninstalled_t_4 *)w;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winHTML_BrowserReady_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_BrowserReady_t_4(void *l, void *w)
{
    HTML_BrowserReady_t *lin = (HTML_BrowserReady_t *)l;
    struct winHTML_BrowserReady_t_4 *win = (struct winHTML_BrowserReady_t_4 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
}

#pragma pack( push, 8 )
struct winHTML_NeedsPaint_t_48 {
    HHTMLBrowser unBrowserHandle;
    const char * pBGRA;
    uint32 unWide;
    uint32 unTall;
    uint32 unUpdateX;
    uint32 unUpdateY;
    uint32 unUpdateWide;
    uint32 unUpdateTall;
    uint32 unScrollX;
    uint32 unScrollY;
    float flPageScale;
    uint32 unPageSerial;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_NeedsPaint_t_48(void *l, void *w)
{
    HTML_NeedsPaint_t *lin = (HTML_NeedsPaint_t *)l;
    struct winHTML_NeedsPaint_t_48 *win = (struct winHTML_NeedsPaint_t_48 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pBGRA = lin->pBGRA;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unUpdateX = lin->unUpdateX;
    win->unUpdateY = lin->unUpdateY;
    win->unUpdateWide = lin->unUpdateWide;
    win->unUpdateTall = lin->unUpdateTall;
    win->unScrollX = lin->unScrollX;
    win->unScrollY = lin->unScrollY;
    win->flPageScale = lin->flPageScale;
    win->unPageSerial = lin->unPageSerial;
}

#pragma pack( push, 8 )
struct winHTML_StartRequest_t_20 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchTarget;
    const char * pchPostData;
    bool bIsRedirect;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_StartRequest_t_20(void *l, void *w)
{
    HTML_StartRequest_t *lin = (HTML_StartRequest_t *)l;
    struct winHTML_StartRequest_t_20 *win = (struct winHTML_StartRequest_t_20 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
    win->pchTarget = lin->pchTarget;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
}

#pragma pack( push, 8 )
struct winHTML_CloseBrowser_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_CloseBrowser_t_4(void *l, void *w)
{
    HTML_CloseBrowser_t *lin = (HTML_CloseBrowser_t *)l;
    struct winHTML_CloseBrowser_t_4 *win = (struct winHTML_CloseBrowser_t_4 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
}

#pragma pack( push, 8 )
struct winHTML_URLChanged_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPostData;
    bool bIsRedirect;
    const char * pchPageTitle;
    bool bNewNavigation;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_URLChanged_t_24(void *l, void *w)
{
    HTML_URLChanged_t *lin = (HTML_URLChanged_t *)l;
    struct winHTML_URLChanged_t_24 *win = (struct winHTML_URLChanged_t_24 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
    win->pchPageTitle = lin->pchPageTitle;
    win->bNewNavigation = lin->bNewNavigation;
}

#pragma pack( push, 8 )
struct winHTML_FinishedRequest_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPageTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_FinishedRequest_t_12(void *l, void *w)
{
    HTML_FinishedRequest_t *lin = (HTML_FinishedRequest_t *)l;
    struct winHTML_FinishedRequest_t_12 *win = (struct winHTML_FinishedRequest_t_12 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
    win->pchPageTitle = lin->pchPageTitle;
}

#pragma pack( push, 8 )
struct winHTML_OpenLinkInNewTab_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_OpenLinkInNewTab_t_8(void *l, void *w)
{
    HTML_OpenLinkInNewTab_t *lin = (HTML_OpenLinkInNewTab_t *)l;
    struct winHTML_OpenLinkInNewTab_t_8 *win = (struct winHTML_OpenLinkInNewTab_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
}

#pragma pack( push, 8 )
struct winHTML_ChangedTitle_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_ChangedTitle_t_8(void *l, void *w)
{
    HTML_ChangedTitle_t *lin = (HTML_ChangedTitle_t *)l;
    struct winHTML_ChangedTitle_t_8 *win = (struct winHTML_ChangedTitle_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
}

#pragma pack( push, 8 )
struct winHTML_SearchResults_t_12 {
    HHTMLBrowser unBrowserHandle;
    uint32 unResults;
    uint32 unCurrentMatch;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_SearchResults_t_12(void *l, void *w)
{
    HTML_SearchResults_t *lin = (HTML_SearchResults_t *)l;
    struct winHTML_SearchResults_t_12 *win = (struct winHTML_SearchResults_t_12 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->unResults = lin->unResults;
    win->unCurrentMatch = lin->unCurrentMatch;
}

#pragma pack( push, 8 )
struct winHTML_CanGoBackAndForward_t_8 {
    HHTMLBrowser unBrowserHandle;
    bool bCanGoBack;
    bool bCanGoForward;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_CanGoBackAndForward_t_8(void *l, void *w)
{
    HTML_CanGoBackAndForward_t *lin = (HTML_CanGoBackAndForward_t *)l;
    struct winHTML_CanGoBackAndForward_t_8 *win = (struct winHTML_CanGoBackAndForward_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->bCanGoBack = lin->bCanGoBack;
    win->bCanGoForward = lin->bCanGoForward;
}

#pragma pack( push, 8 )
struct winHTML_HorizontalScroll_t_24 {
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_HorizontalScroll_t_24(void *l, void *w)
{
    HTML_HorizontalScroll_t *lin = (HTML_HorizontalScroll_t *)l;
    struct winHTML_HorizontalScroll_t_24 *win = (struct winHTML_HorizontalScroll_t_24 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->unScrollMax = lin->unScrollMax;
    win->unScrollCurrent = lin->unScrollCurrent;
    win->flPageScale = lin->flPageScale;
    win->bVisible = lin->bVisible;
    win->unPageSize = lin->unPageSize;
}

#pragma pack( push, 8 )
struct winHTML_VerticalScroll_t_24 {
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_VerticalScroll_t_24(void *l, void *w)
{
    HTML_VerticalScroll_t *lin = (HTML_VerticalScroll_t *)l;
    struct winHTML_VerticalScroll_t_24 *win = (struct winHTML_VerticalScroll_t_24 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->unScrollMax = lin->unScrollMax;
    win->unScrollCurrent = lin->unScrollCurrent;
    win->flPageScale = lin->flPageScale;
    win->bVisible = lin->bVisible;
    win->unPageSize = lin->unPageSize;
}

#pragma pack( push, 8 )
struct winHTML_LinkAtPosition_t_20 {
    HHTMLBrowser unBrowserHandle;
    uint32 x;
    uint32 y;
    const char * pchURL;
    bool bInput;
    bool bLiveLink;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_LinkAtPosition_t_20(void *l, void *w)
{
    HTML_LinkAtPosition_t *lin = (HTML_LinkAtPosition_t *)l;
    struct winHTML_LinkAtPosition_t_20 *win = (struct winHTML_LinkAtPosition_t_20 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->x = lin->x;
    win->y = lin->y;
    win->pchURL = lin->pchURL;
    win->bInput = lin->bInput;
    win->bLiveLink = lin->bLiveLink;
}

#pragma pack( push, 8 )
struct winHTML_JSAlert_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_JSAlert_t_8(void *l, void *w)
{
    HTML_JSAlert_t *lin = (HTML_JSAlert_t *)l;
    struct winHTML_JSAlert_t_8 *win = (struct winHTML_JSAlert_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}

#pragma pack( push, 8 )
struct winHTML_JSConfirm_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_JSConfirm_t_8(void *l, void *w)
{
    HTML_JSConfirm_t *lin = (HTML_JSConfirm_t *)l;
    struct winHTML_JSConfirm_t_8 *win = (struct winHTML_JSConfirm_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}

#pragma pack( push, 8 )
struct winHTML_FileOpenDialog_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
    const char * pchInitialFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_FileOpenDialog_t_12(void *l, void *w)
{
    HTML_FileOpenDialog_t *lin = (HTML_FileOpenDialog_t *)l;
    struct winHTML_FileOpenDialog_t_12 *win = (struct winHTML_FileOpenDialog_t_12 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
    win->pchInitialFile = lin->pchInitialFile;
}

#pragma pack( push, 8 )
struct winHTML_NewWindow_t_28 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
    HHTMLBrowser unNewWindow_BrowserHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_NewWindow_t_28(void *l, void *w)
{
    HTML_NewWindow_t *lin = (HTML_NewWindow_t *)l;
    struct winHTML_NewWindow_t_28 *win = (struct winHTML_NewWindow_t_28 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
    win->unX = lin->unX;
    win->unY = lin->unY;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unNewWindow_BrowserHandle = lin->unNewWindow_BrowserHandle;
}

#pragma pack( push, 8 )
struct winHTML_SetCursor_t_8 {
    HHTMLBrowser unBrowserHandle;
    uint32 eMouseCursor;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_SetCursor_t_8(void *l, void *w)
{
    HTML_SetCursor_t *lin = (HTML_SetCursor_t *)l;
    struct winHTML_SetCursor_t_8 *win = (struct winHTML_SetCursor_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->eMouseCursor = lin->eMouseCursor;
}

#pragma pack( push, 8 )
struct winHTML_StatusText_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_StatusText_t_8(void *l, void *w)
{
    HTML_StatusText_t *lin = (HTML_StatusText_t *)l;
    struct winHTML_StatusText_t_8 *win = (struct winHTML_StatusText_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}

#pragma pack( push, 8 )
struct winHTML_ShowToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_ShowToolTip_t_8(void *l, void *w)
{
    HTML_ShowToolTip_t *lin = (HTML_ShowToolTip_t *)l;
    struct winHTML_ShowToolTip_t_8 *win = (struct winHTML_ShowToolTip_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}

#pragma pack( push, 8 )
struct winHTML_UpdateToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_UpdateToolTip_t_8(void *l, void *w)
{
    HTML_UpdateToolTip_t *lin = (HTML_UpdateToolTip_t *)l;
    struct winHTML_UpdateToolTip_t_8 *win = (struct winHTML_UpdateToolTip_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}

#pragma pack( push, 8 )
struct winHTML_HideToolTip_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_HideToolTip_t_4(void *l, void *w)
{
    HTML_HideToolTip_t *lin = (HTML_HideToolTip_t *)l;
    struct winHTML_HideToolTip_t_4 *win = (struct winHTML_HideToolTip_t_4 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
}

#pragma pack( push, 8 )
struct winHTML_BrowserRestarted_t_8 {
    HHTMLBrowser unBrowserHandle;
    HHTMLBrowser unOldBrowserHandle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_BrowserRestarted_t_8(void *l, void *w)
{
    HTML_BrowserRestarted_t *lin = (HTML_BrowserRestarted_t *)l;
    struct winHTML_BrowserRestarted_t_8 *win = (struct winHTML_BrowserRestarted_t_8 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->unOldBrowserHandle = lin->unOldBrowserHandle;
}

#pragma pack( push, 8 )
struct winSteamItemDetails_t_142 {
    SteamItemInstanceID_t m_itemId;
    SteamItemDef_t m_iDefinition;
    uint16 m_unQuantity;
    uint16 m_unFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamItemDetails_t_142(void *w, void *l)
{
    SteamItemDetails_t *lin = (SteamItemDetails_t *)l;
    struct winSteamItemDetails_t_142 *win = (struct winSteamItemDetails_t_142 *)w;
    lin->m_itemId = win->m_itemId;
    lin->m_iDefinition = win->m_iDefinition;
    lin->m_unQuantity = win->m_unQuantity;
    lin->m_unFlags = win->m_unFlags;
}

void lin_to_win_struct_SteamItemDetails_t_142(void *l, void *w)
{
    SteamItemDetails_t *lin = (SteamItemDetails_t *)l;
    struct winSteamItemDetails_t_142 *win = (struct winSteamItemDetails_t_142 *)w;
    win->m_itemId = lin->m_itemId;
    win->m_iDefinition = lin->m_iDefinition;
    win->m_unQuantity = lin->m_unQuantity;
    win->m_unFlags = lin->m_unFlags;
}

#pragma pack( push, 8 )
struct winSteamInventoryResultReady_t_8 {
    SteamInventoryResult_t m_handle;
    EResult m_result;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryResultReady_t_8(void *l, void *w)
{
    SteamInventoryResultReady_t *lin = (SteamInventoryResultReady_t *)l;
    struct winSteamInventoryResultReady_t_8 *win = (struct winSteamInventoryResultReady_t_8 *)w;
    win->m_handle = lin->m_handle;
    win->m_result = lin->m_result;
}

#pragma pack( push, 8 )
struct winSteamInventoryFullUpdate_t_4 {
    SteamInventoryResult_t m_handle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryFullUpdate_t_4(void *l, void *w)
{
    SteamInventoryFullUpdate_t *lin = (SteamInventoryFullUpdate_t *)l;
    struct winSteamInventoryFullUpdate_t_4 *win = (struct winSteamInventoryFullUpdate_t_4 *)w;
    win->m_handle = lin->m_handle;
}

#pragma pack( push, 8 )
struct winSteamInventoryDefinitionUpdate_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryDefinitionUpdate_t_1(void *l, void *w)
{
    SteamInventoryDefinitionUpdate_t *lin = (SteamInventoryDefinitionUpdate_t *)l;
    struct winSteamInventoryDefinitionUpdate_t_1 *win = (struct winSteamInventoryDefinitionUpdate_t_1 *)w;
}

#pragma pack( push, 8 )
struct winSteamInventoryEligiblePromoItemDefIDs_t_20 {
    EResult m_result;
    CSteamID m_steamID;
    int m_numEligiblePromoItemDefs;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryEligiblePromoItemDefIDs_t_20(void *l, void *w)
{
    SteamInventoryEligiblePromoItemDefIDs_t *lin = (SteamInventoryEligiblePromoItemDefIDs_t *)l;
    struct winSteamInventoryEligiblePromoItemDefIDs_t_20 *win = (struct winSteamInventoryEligiblePromoItemDefIDs_t_20 *)w;
    win->m_result = lin->m_result;
    win->m_steamID = lin->m_steamID;
    win->m_numEligiblePromoItemDefs = lin->m_numEligiblePromoItemDefs;
    win->m_bCachedData = lin->m_bCachedData;
}

#pragma pack( push, 8 )
struct winSteamInventoryStartPurchaseResult_t_20 {
    EResult m_result;
    uint64 m_ulOrderID;
    uint64 m_ulTransID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryStartPurchaseResult_t_20(void *l, void *w)
{
    SteamInventoryStartPurchaseResult_t *lin = (SteamInventoryStartPurchaseResult_t *)l;
    struct winSteamInventoryStartPurchaseResult_t_20 *win = (struct winSteamInventoryStartPurchaseResult_t_20 *)w;
    win->m_result = lin->m_result;
    win->m_ulOrderID = lin->m_ulOrderID;
    win->m_ulTransID = lin->m_ulTransID;
}

#pragma pack( push, 8 )
struct winSteamInventoryRequestPricesResult_t_8 {
    EResult m_result;
    char m_rgchCurrency[4];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryRequestPricesResult_t_8(void *l, void *w)
{
    SteamInventoryRequestPricesResult_t *lin = (SteamInventoryRequestPricesResult_t *)l;
    struct winSteamInventoryRequestPricesResult_t_8 *win = (struct winSteamInventoryRequestPricesResult_t_8 *)w;
    win->m_result = lin->m_result;
    memcpy(win->m_rgchCurrency, lin->m_rgchCurrency, sizeof(win->m_rgchCurrency));
}

#pragma pack( push, 8 )
struct winBroadcastUploadStart_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_BroadcastUploadStart_t_1(void *l, void *w)
{
    BroadcastUploadStart_t *lin = (BroadcastUploadStart_t *)l;
    struct winBroadcastUploadStart_t_1 *win = (struct winBroadcastUploadStart_t_1 *)w;
}

#pragma pack( push, 8 )
struct winBroadcastUploadStop_t_4 {
    EBroadcastUploadResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_BroadcastUploadStop_t_4(void *l, void *w)
{
    BroadcastUploadStop_t *lin = (BroadcastUploadStop_t *)l;
    struct winBroadcastUploadStop_t_4 *win = (struct winBroadcastUploadStop_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winGetVideoURLResult_t_264 {
    EResult m_eResult;
    AppId_t m_unVideoAppID;
    char m_rgchURL[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetVideoURLResult_t_264(void *l, void *w)
{
    GetVideoURLResult_t *lin = (GetVideoURLResult_t *)l;
    struct winGetVideoURLResult_t_264 *win = (struct winGetVideoURLResult_t_264 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unVideoAppID = lin->m_unVideoAppID;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
}

#pragma pack( push, 8 )
struct winGetOPFSettingsResult_t_8 {
    EResult m_eResult;
    AppId_t m_unVideoAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetOPFSettingsResult_t_8(void *l, void *w)
{
    GetOPFSettingsResult_t *lin = (GetOPFSettingsResult_t *)l;
    struct winGetOPFSettingsResult_t_8 *win = (struct winGetOPFSettingsResult_t_8 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unVideoAppID = lin->m_unVideoAppID;
}

#pragma pack( push, 8 )
struct winSteamParentalSettingsChanged_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamParentalSettingsChanged_t_1(void *l, void *w)
{
    SteamParentalSettingsChanged_t *lin = (SteamParentalSettingsChanged_t *)l;
    struct winSteamParentalSettingsChanged_t_1 *win = (struct winSteamParentalSettingsChanged_t_1 *)w;
}

#pragma pack( push, 8 )
struct winCSteamAPIContext_142 {
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
    ISteamController * m_pController;
    ISteamUGC * m_pSteamUGC;
    ISteamAppList * m_pSteamAppList;
    ISteamMusic * m_pSteamMusic;
    ISteamMusicRemote * m_pSteamMusicRemote;
    ISteamHTMLSurface * m_pSteamHTMLSurface;
    ISteamInventory * m_pSteamInventory;
    ISteamVideo * m_pSteamVideo;
    ISteamParentalSettings * m_pSteamParentalSettings;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CSteamAPIContext_142(void *w, void *l)
{
    CSteamAPIContext *lin = (CSteamAPIContext *)l;
    struct winCSteamAPIContext_142 *win = (struct winCSteamAPIContext_142 *)w;
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
    lin->m_pController = win->m_pController;
    lin->m_pSteamUGC = win->m_pSteamUGC;
    lin->m_pSteamAppList = win->m_pSteamAppList;
    lin->m_pSteamMusic = win->m_pSteamMusic;
    lin->m_pSteamMusicRemote = win->m_pSteamMusicRemote;
    lin->m_pSteamHTMLSurface = win->m_pSteamHTMLSurface;
    lin->m_pSteamInventory = win->m_pSteamInventory;
    lin->m_pSteamVideo = win->m_pSteamVideo;
    lin->m_pSteamParentalSettings = win->m_pSteamParentalSettings;
}

void lin_to_win_struct_CSteamAPIContext_142(void *l, void *w)
{
    CSteamAPIContext *lin = (CSteamAPIContext *)l;
    struct winCSteamAPIContext_142 *win = (struct winCSteamAPIContext_142 *)w;
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
    win->m_pController = lin->m_pController;
    win->m_pSteamUGC = lin->m_pSteamUGC;
    win->m_pSteamAppList = lin->m_pSteamAppList;
    win->m_pSteamMusic = lin->m_pSteamMusic;
    win->m_pSteamMusicRemote = lin->m_pSteamMusicRemote;
    win->m_pSteamHTMLSurface = lin->m_pSteamHTMLSurface;
    win->m_pSteamInventory = lin->m_pSteamInventory;
    win->m_pSteamVideo = lin->m_pSteamVideo;
    win->m_pSteamParentalSettings = lin->m_pSteamParentalSettings;
}

#pragma pack( push, 8 )
struct winCCallbackBase_142 {
    uint8 m_nCallbackFlags;
    int m_iCallback;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_CCallbackBase_142(void *w, void *l)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_142 *win = (struct winCCallbackBase_142 *)w;
    lin->m_nCallbackFlags = win->m_nCallbackFlags;
    lin->m_iCallback = win->m_iCallback;
}

void lin_to_win_struct_CCallbackBase_142(void *l, void *w)
{
    CCallbackBase *lin = (CCallbackBase *)l;
    struct winCCallbackBase_142 *win = (struct winCCallbackBase_142 *)w;
    win->m_nCallbackFlags = lin->m_nCallbackFlags;
    win->m_iCallback = lin->m_iCallback;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_142 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_142(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_142(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winGSClientApprove_t_16 {
    CSteamID m_SteamID;
    CSteamID m_OwnerSteamID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSClientApprove_t_16(void *l, void *w)
{
    GSClientApprove_t *lin = (GSClientApprove_t *)l;
    struct winGSClientApprove_t_16 *win = (struct winGSClientApprove_t_16 *)w;
    win->m_SteamID = lin->m_SteamID;
    win->m_OwnerSteamID = lin->m_OwnerSteamID;
}

#pragma pack( push, 8 )
struct winGSClientDeny_t_140 {
    CSteamID m_SteamID;
    EDenyReason m_eDenyReason;
    char m_rgchOptionalText[128];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSClientDeny_t_140(void *l, void *w)
{
    GSClientDeny_t *lin = (GSClientDeny_t *)l;
    struct winGSClientDeny_t_140 *win = (struct winGSClientDeny_t_140 *)w;
    win->m_SteamID = lin->m_SteamID;
    win->m_eDenyReason = lin->m_eDenyReason;
    memcpy(win->m_rgchOptionalText, lin->m_rgchOptionalText, sizeof(win->m_rgchOptionalText));
}

#pragma pack( push, 8 )
struct winGSClientKick_t_12 {
    CSteamID m_SteamID;
    EDenyReason m_eDenyReason;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSClientKick_t_12(void *l, void *w)
{
    GSClientKick_t *lin = (GSClientKick_t *)l;
    struct winGSClientKick_t_12 *win = (struct winGSClientKick_t_12 *)w;
    win->m_SteamID = lin->m_SteamID;
    win->m_eDenyReason = lin->m_eDenyReason;
}

#pragma pack( push, 8 )
struct winGSClientAchievementStatus_t_140 {
    uint64 m_SteamID;
    char m_pchAchievement[128];
    bool m_bUnlocked;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSClientAchievementStatus_t_140(void *l, void *w)
{
    GSClientAchievementStatus_t *lin = (GSClientAchievementStatus_t *)l;
    struct winGSClientAchievementStatus_t_140 *win = (struct winGSClientAchievementStatus_t_140 *)w;
    win->m_SteamID = lin->m_SteamID;
    memcpy(win->m_pchAchievement, lin->m_pchAchievement, sizeof(win->m_pchAchievement));
    win->m_bUnlocked = lin->m_bUnlocked;
}

#pragma pack( push, 8 )
struct winGSPolicyResponse_t_1 {
    uint8 m_bSecure;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSPolicyResponse_t_1(void *l, void *w)
{
    GSPolicyResponse_t *lin = (GSPolicyResponse_t *)l;
    struct winGSPolicyResponse_t_1 *win = (struct winGSPolicyResponse_t_1 *)w;
    win->m_bSecure = lin->m_bSecure;
}

#pragma pack( push, 8 )
struct winGSGameplayStats_t_16 {
    EResult m_eResult;
    int32 m_nRank;
    uint32 m_unTotalConnects;
    uint32 m_unTotalMinutesPlayed;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSGameplayStats_t_16(void *l, void *w)
{
    GSGameplayStats_t *lin = (GSGameplayStats_t *)l;
    struct winGSGameplayStats_t_16 *win = (struct winGSGameplayStats_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nRank = lin->m_nRank;
    win->m_unTotalConnects = lin->m_unTotalConnects;
    win->m_unTotalMinutesPlayed = lin->m_unTotalMinutesPlayed;
}

#pragma pack( push, 8 )
struct winGSClientGroupStatus_t_18 {
    CSteamID m_SteamIDUser;
    CSteamID m_SteamIDGroup;
    bool m_bMember;
    bool m_bOfficer;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSClientGroupStatus_t_18(void *l, void *w)
{
    GSClientGroupStatus_t *lin = (GSClientGroupStatus_t *)l;
    struct winGSClientGroupStatus_t_18 *win = (struct winGSClientGroupStatus_t_18 *)w;
    win->m_SteamIDUser = lin->m_SteamIDUser;
    win->m_SteamIDGroup = lin->m_SteamIDGroup;
    win->m_bMember = lin->m_bMember;
    win->m_bOfficer = lin->m_bOfficer;
}

#pragma pack( push, 8 )
struct winGSReputation_t_32 {
    EResult m_eResult;
    uint32 m_unReputationScore;
    bool m_bBanned;
    uint32 m_unBannedIP;
    uint16 m_usBannedPort;
    uint64 m_ulBannedGameID;
    uint32 m_unBanExpires;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSReputation_t_32(void *l, void *w)
{
    GSReputation_t *lin = (GSReputation_t *)l;
    struct winGSReputation_t_32 *win = (struct winGSReputation_t_32 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unReputationScore = lin->m_unReputationScore;
    win->m_bBanned = lin->m_bBanned;
    win->m_unBannedIP = lin->m_unBannedIP;
    win->m_usBannedPort = lin->m_usBannedPort;
    win->m_ulBannedGameID = lin->m_ulBannedGameID;
    win->m_unBanExpires = lin->m_unBanExpires;
}

#pragma pack( push, 8 )
struct winAssociateWithClanResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AssociateWithClanResult_t_4(void *l, void *w)
{
    AssociateWithClanResult_t *lin = (AssociateWithClanResult_t *)l;
    struct winAssociateWithClanResult_t_4 *win = (struct winAssociateWithClanResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winComputeNewPlayerCompatibilityResult_t_24 {
    EResult m_eResult;
    int m_cPlayersThatDontLikeCandidate;
    int m_cPlayersThatCandidateDoesntLike;
    int m_cClanPlayersThatDontLikeCandidate;
    CSteamID m_SteamIDCandidate;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ComputeNewPlayerCompatibilityResult_t_24(void *l, void *w)
{
    ComputeNewPlayerCompatibilityResult_t *lin = (ComputeNewPlayerCompatibilityResult_t *)l;
    struct winComputeNewPlayerCompatibilityResult_t_24 *win = (struct winComputeNewPlayerCompatibilityResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_cPlayersThatDontLikeCandidate = lin->m_cPlayersThatDontLikeCandidate;
    win->m_cPlayersThatCandidateDoesntLike = lin->m_cPlayersThatCandidateDoesntLike;
    win->m_cClanPlayersThatDontLikeCandidate = lin->m_cClanPlayersThatDontLikeCandidate;
    win->m_SteamIDCandidate = lin->m_SteamIDCandidate;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_142 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_142(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_142(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winGSStatsReceived_t_12 {
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSStatsReceived_t_12(void *l, void *w)
{
    GSStatsReceived_t *lin = (GSStatsReceived_t *)l;
    struct winGSStatsReceived_t_12 *win = (struct winGSStatsReceived_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_steamIDUser = lin->m_steamIDUser;
}

#pragma pack( push, 8 )
struct winGSStatsStored_t_12 {
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GSStatsStored_t_12(void *l, void *w)
{
    GSStatsStored_t *lin = (GSStatsStored_t *)l;
    struct winGSStatsStored_t_12 *win = (struct winGSStatsStored_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_steamIDUser = lin->m_steamIDUser;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_142 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_142(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_142(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}

#pragma pack( push, 8 )
struct winGCMessageAvailable_t_4 {
    uint32 m_nMessageSize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GCMessageAvailable_t_4(void *l, void *w)
{
    GCMessageAvailable_t *lin = (GCMessageAvailable_t *)l;
    struct winGCMessageAvailable_t_4 *win = (struct winGCMessageAvailable_t_4 *)w;
    win->m_nMessageSize = lin->m_nMessageSize;
}

#pragma pack( push, 8 )
struct winGCMessageFailed_t_1 {
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GCMessageFailed_t_1(void *l, void *w)
{
    GCMessageFailed_t *lin = (GCMessageFailed_t *)l;
    struct winGCMessageFailed_t_1 *win = (struct winGCMessageFailed_t_1 *)w;
}

#pragma pack( push, 8 )
struct winValvePackingSentinel_t_142 {
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_ValvePackingSentinel_t_142(void *w, void *l)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    lin->m_u32 = win->m_u32;
    lin->m_u64 = win->m_u64;
    lin->m_u16 = win->m_u16;
    lin->m_d = win->m_d;
}

void lin_to_win_struct_ValvePackingSentinel_t_142(void *l, void *w)
{
    ValvePackingSentinel_t *lin = (ValvePackingSentinel_t *)l;
    struct winValvePackingSentinel_t_142 *win = (struct winValvePackingSentinel_t_142 *)w;
    win->m_u32 = lin->m_u32;
    win->m_u64 = lin->m_u64;
    win->m_u16 = lin->m_u16;
    win->m_d = lin->m_d;
}


}
