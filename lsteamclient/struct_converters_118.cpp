#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_118/steam_api.h"
#include "steamworks_sdk_118/isteamgameserver.h"
#include "steamworks_sdk_118/isteamgameserverstats.h"
#include "steamworks_sdk_118/isteamgamecoordinator.h"
extern "C" {
struct winRemoteStorageGetPublishedFileDetailsResult_t_9484 {
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
}  __attribute__ ((ms_struct));
void cb_RemoteStorageGetPublishedFileDetailsResult_t_9484(void *l, void *w)
{
    RemoteStorageGetPublishedFileDetailsResult_t *lin = (RemoteStorageGetPublishedFileDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedFileDetailsResult_t_9484 *win = (struct winRemoteStorageGetPublishedFileDetailsResult_t_9484 *)w;
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
}

struct winComputeNewPlayerCompatibilityResult_t_16 {
    EResult m_eResult;
    int m_cPlayersThatDontLikeCandidate;
    int m_cPlayersThatCandidateDoesntLike;
    int m_cClanPlayersThatDontLikeCandidate;
}  __attribute__ ((ms_struct));
void cb_ComputeNewPlayerCompatibilityResult_t_16(void *l, void *w)
{
    ComputeNewPlayerCompatibilityResult_t *lin = (ComputeNewPlayerCompatibilityResult_t *)l;
    struct winComputeNewPlayerCompatibilityResult_t_16 *win = (struct winComputeNewPlayerCompatibilityResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_cPlayersThatDontLikeCandidate = lin->m_cPlayersThatDontLikeCandidate;
    win->m_cPlayersThatCandidateDoesntLike = lin->m_cPlayersThatCandidateDoesntLike;
    win->m_cClanPlayersThatDontLikeCandidate = lin->m_cClanPlayersThatDontLikeCandidate;
}


}
