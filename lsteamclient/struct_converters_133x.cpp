#include "steam_defs.h"
#include "steamworks_sdk_133x/steam_api.h"
#include "steamworks_sdk_133x/isteamgameserver.h"
#include "steamworks_sdk_133x/isteamgameserverstats.h"
#include "steamworks_sdk_133x/isteamgamecoordinator.h"
#include "steamclient_private.h"
extern "C" {
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_133x {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_133x(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_133x *win = (struct winLeaderboardEntry_t_133x *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_133x(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_133x *win = (struct winLeaderboardEntry_t_133x *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

#pragma pack( push, 8 )
struct winSteamUGCDetails_t_133x {
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
void win_to_lin_struct_SteamUGCDetails_t_133x(const void *w, void *l)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_133x *win = (struct winSteamUGCDetails_t_133x *)w;
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

void lin_to_win_struct_SteamUGCDetails_t_133x(const void *l, void *w)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_133x *win = (struct winSteamUGCDetails_t_133x *)w;
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


}
