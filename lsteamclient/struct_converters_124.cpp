#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_124/steam_api.h"
#include "steamworks_sdk_124/isteamgameserver.h"
#include "steamworks_sdk_124/isteamgameserverstats.h"
#include "steamworks_sdk_124/isteamgamecoordinator.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
extern "C" {
#define SDKVER_124
#include "struct_converters.h"
#pragma pack( push, 8 )
struct winRemoteStoragePublishFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishFileResult_t_16(const struct RemoteStoragePublishFileResult_t *lin, struct winRemoteStoragePublishFileResult_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageUpdatePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUpdatePublishedFileResult_t_16(const struct RemoteStorageUpdatePublishedFileResult_t *lin, struct winRemoteStorageUpdatePublishedFileResult_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateWorkshopFilesResult_t_616 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateWorkshopFilesResult_t_616(const struct RemoteStorageEnumerateWorkshopFilesResult_t *lin, struct winRemoteStorageEnumerateWorkshopFilesResult_t_616 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgScore, lin->m_rgScore, sizeof(win->m_rgScore));
}

void win_to_lin_struct_LeaderboardEntry_t_124(const struct winLeaderboardEntry_t_124 *win, struct LeaderboardEntry_t *lin)
{
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_124(const struct LeaderboardEntry_t *lin, struct winLeaderboardEntry_t_124 *win)
{
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}


}
