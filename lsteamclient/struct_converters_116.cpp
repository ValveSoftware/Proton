#include "steam_defs.h"
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteamgameserver.h"
#include "steamworks_sdk_116/isteamgameserverstats.h"
#include "steamworks_sdk_116/isteamgamecoordinator.h"
#include "steamclient_private.h"
extern "C" {
#pragma pack( push, 8 )
struct winRemoteStorageDownloadUGCResult_t_40 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char * m_pchFileName;
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageDownloadUGCResult_t_40(const void *l, void *w)
{
    RemoteStorageDownloadUGCResult_t *lin = (RemoteStorageDownloadUGCResult_t *)l;
    struct winRemoteStorageDownloadUGCResult_t_40 *win = (struct winRemoteStorageDownloadUGCResult_t_40 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    win->m_nAppID = lin->m_nAppID;
    win->m_nSizeInBytes = lin->m_nSizeInBytes;
    win->m_pchFileName = lin->m_pchFileName;
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_116 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_116(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_116 *win = (struct winLeaderboardEntry_t_116 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_116(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_116 *win = (struct winLeaderboardEntry_t_116 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}


}
