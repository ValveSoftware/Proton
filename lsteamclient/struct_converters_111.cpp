#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_111/steam_api.h"
#include "steamworks_sdk_111/isteamgameserver.h"
#include "steamworks_sdk_111/isteamgameserverstats.h"
#include "steamworks_sdk_111/isteamgamecoordinator.h"
extern "C" {
struct winLobbyDataUpdate_t_16 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDMember;
}  __attribute__ ((ms_struct));
void cb_LobbyDataUpdate_t_16(void *l, void *w)
{
    LobbyDataUpdate_t *lin = (LobbyDataUpdate_t *)l;
    struct winLobbyDataUpdate_t_16 *win = (struct winLobbyDataUpdate_t_16 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDMember = lin->m_ulSteamIDMember;
}


}
