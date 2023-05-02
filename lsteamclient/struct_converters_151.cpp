#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_151/steam_api.h"
#include "steamworks_sdk_151/isteamgameserver.h"
#include "steamworks_sdk_151/isteamnetworkingsockets.h"
#include "steamworks_sdk_151/isteamgameserverstats.h"
#include "steamworks_sdk_151/isteamgamecoordinator.h"
#include "steamworks_sdk_151/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
extern "C" {
#define SDKVER_151
#include "struct_converters.h"
void win_to_lin_struct_SteamPartyBeaconLocation_t_151(const struct winSteamPartyBeaconLocation_t_151 *win, struct SteamPartyBeaconLocation_t *lin)
{
    lin->m_eType = win->m_eType;
    lin->m_ulLocationID = win->m_ulLocationID;
}

void lin_to_win_struct_SteamPartyBeaconLocation_t_151(const struct SteamPartyBeaconLocation_t *lin, struct winSteamPartyBeaconLocation_t_151 *win)
{
    win->m_eType = lin->m_eType;
    win->m_ulLocationID = lin->m_ulLocationID;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncProgress_t_288 {
    char m_rgchCurrentFile[260];
    AppId_t m_nAppID;
    uint32 m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncProgress_t_288(const struct RemoteStorageAppSyncProgress_t *lin, struct winRemoteStorageAppSyncProgress_t_288 *win)
{
    memcpy(win->m_rgchCurrentFile, lin->m_rgchCurrentFile, sizeof(win->m_rgchCurrentFile));
    win->m_nAppID = lin->m_nAppID;
    win->m_uBytesTransferredThisChunk = lin->m_uBytesTransferredThisChunk;
    win->m_dAppPercentComplete = lin->m_dAppPercentComplete;
    win->m_bUploading = lin->m_bUploading;
}

void win_to_lin_struct_LeaderboardEntry_t_151(const struct winLeaderboardEntry_t_151 *win, struct LeaderboardEntry_t *lin)
{
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_151(const struct LeaderboardEntry_t *lin, struct winLeaderboardEntry_t_151 *win)
{
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

void win_to_lin_struct_SteamUGCDetails_t_151(const struct winSteamUGCDetails_t_151 *win, struct SteamUGCDetails_t *lin)
{
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

void lin_to_win_struct_SteamUGCDetails_t_151(const struct SteamUGCDetails_t *lin, struct winSteamUGCDetails_t_151 *win)
{
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
struct winSteamNetConnectionStatusChangedCallback_t_584 {
    HSteamNetConnection m_hConn;
    SteamNetConnectionInfo_t m_info __attribute__((aligned(8)));
    ESteamNetworkingConnectionState m_eOldState;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamNetConnectionStatusChangedCallback_t_584(const struct SteamNetConnectionStatusChangedCallback_t *lin, struct winSteamNetConnectionStatusChangedCallback_t_584 *win)
{
    win->m_hConn = lin->m_hConn;
    win->m_info = lin->m_info;
    win->m_eOldState = lin->m_eOldState;
}


}
