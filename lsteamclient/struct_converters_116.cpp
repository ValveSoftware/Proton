#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_116/steam_api.h"
#include "steamworks_sdk_116/isteamgameserver.h"
#include "steamworks_sdk_116/isteamgameserverstats.h"
#include "steamworks_sdk_116/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winNameHistoryResponse_t_8 {
    int m_cSuccessfulLookups;
    int m_cFailedLookups;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_NameHistoryResponse_t_8(void *l, void *w)
{
    NameHistoryResponse_t *lin = (NameHistoryResponse_t *)l;
    struct winNameHistoryResponse_t_8 *win = (struct winNameHistoryResponse_t_8 *)w;
    win->m_cSuccessfulLookups = lin->m_cSuccessfulLookups;
    win->m_cFailedLookups = lin->m_cFailedLookups;
}

#pragma pack( push, 8 )
struct winRemoteStorageDownloadUGCResult_t_32 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char * m_pchFileName;
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageDownloadUGCResult_t_32(void *l, void *w)
{
    RemoteStorageDownloadUGCResult_t *lin = (RemoteStorageDownloadUGCResult_t *)l;
    struct winRemoteStorageDownloadUGCResult_t_32 *win = (struct winRemoteStorageDownloadUGCResult_t_32 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    win->m_nAppID = lin->m_nAppID;
    win->m_nSizeInBytes = lin->m_nSizeInBytes;
    win->m_pchFileName = lin->m_pchFileName;
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
}


}
