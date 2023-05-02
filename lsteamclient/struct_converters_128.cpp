#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_128/steam_api.h"
#include "steamworks_sdk_128/isteamgameserver.h"
#include "steamworks_sdk_128/isteamgameserverstats.h"
#include "steamworks_sdk_128/isteamgamecoordinator.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
extern "C" {
#define SDKVER_128
#include "struct_converters.h"
#pragma pack( push, 8 )
struct winRemoteStorageFileShareResult_t_16 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageFileShareResult_t_16(const struct RemoteStorageFileShareResult_t *lin, struct winRemoteStorageFileShareResult_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
}

void win_to_lin_struct_LeaderboardEntry_t_128(const struct winLeaderboardEntry_t_128 *win, struct LeaderboardEntry_t *lin)
{
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_128(const struct LeaderboardEntry_t *lin, struct winLeaderboardEntry_t_128 *win)
{
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

void win_to_lin_struct_SteamUGCDetails_t_128(const struct winSteamUGCDetails_t_128 *win, struct SteamUGCDetails_t *lin)
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
}

void lin_to_win_struct_SteamUGCDetails_t_128(const struct SteamUGCDetails_t *lin, struct winSteamUGCDetails_t_128 *win)
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
}

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9768 {
    winSteamUGCDetails_t_128 m_details;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUGCRequestUGCDetailsResult_t_9768(const struct SteamUGCRequestUGCDetailsResult_t *lin, struct winSteamUGCRequestUGCDetailsResult_t_9768 *win)
{
    lin_to_win_struct_SteamUGCDetails_t_128(&lin->m_details, &win->m_details);
}


}
