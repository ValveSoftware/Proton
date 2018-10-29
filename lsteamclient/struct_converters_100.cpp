#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_100/steam_api.h"
#include "steamworks_sdk_100/isteamgameserver.h"
extern "C" {
struct winAppDataChanged_t_8 {
    uint32 m_nAppID;
    bool m_bBySteamUI;
    bool m_bCDDBUpdate;
}  __attribute__ ((ms_struct));
void cb_AppDataChanged_t_8(void *l, void *w)
{
    AppDataChanged_t *lin = (AppDataChanged_t *)l;
    struct winAppDataChanged_t_8 *win = (struct winAppDataChanged_t_8 *)w;
    win->m_nAppID = lin->m_nAppID;
    win->m_bBySteamUI = lin->m_bBySteamUI;
    win->m_bCDDBUpdate = lin->m_bCDDBUpdate;
}


}
