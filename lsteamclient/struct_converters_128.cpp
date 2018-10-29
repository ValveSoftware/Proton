#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_128/steam_api.h"
#include "steamworks_sdk_128/isteamgameserver.h"
#include "steamworks_sdk_128/isteamgameserverstats.h"
#include "steamworks_sdk_128/isteamgamecoordinator.h"
extern "C" {
struct winFavoritesListChanged_t_24 {
    uint32 m_nIP;
    uint32 m_nQueryPort;
    uint32 m_nConnPort;
    uint32 m_nAppID;
    uint32 m_nFlags;
    bool m_bAdd;
}  __attribute__ ((ms_struct));
void cb_FavoritesListChanged_t_24(void *l, void *w)
{
    FavoritesListChanged_t *lin = (FavoritesListChanged_t *)l;
    struct winFavoritesListChanged_t_24 *win = (struct winFavoritesListChanged_t_24 *)w;
    win->m_nIP = lin->m_nIP;
    win->m_nQueryPort = lin->m_nQueryPort;
    win->m_nConnPort = lin->m_nConnPort;
    win->m_nAppID = lin->m_nAppID;
    win->m_nFlags = lin->m_nFlags;
    win->m_bAdd = lin->m_bAdd;
}

struct winRemoteStorageFileShareResult_t_12 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
}  __attribute__ ((ms_struct));
void cb_RemoteStorageFileShareResult_t_12(void *l, void *w)
{
    RemoteStorageFileShareResult_t *lin = (RemoteStorageFileShareResult_t *)l;
    struct winRemoteStorageFileShareResult_t_12 *win = (struct winRemoteStorageFileShareResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
}

struct winSteamUGCRequestUGCDetailsResult_t_9760 {
    SteamUGCDetails_t m_details;
}  __attribute__ ((ms_struct));
void cb_SteamUGCRequestUGCDetailsResult_t_9760(void *l, void *w)
{
    SteamUGCRequestUGCDetailsResult_t *lin = (SteamUGCRequestUGCDetailsResult_t *)l;
    struct winSteamUGCRequestUGCDetailsResult_t_9760 *win = (struct winSteamUGCRequestUGCDetailsResult_t_9760 *)w;
    win->m_details = lin->m_details;
}


}
