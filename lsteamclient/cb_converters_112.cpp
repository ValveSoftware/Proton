#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_112/steam_api.h"
#include "steamworks_sdk_112/isteamgameserver.h"
#include "steamworks_sdk_112/isteamgameserverstats.h"
#include "steamworks_sdk_112/isteamgamecoordinator.h"
extern "C" {
struct winLobbyInvite_t_16 {
    uint64 m_ulSteamIDUser;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
void cb_LobbyInvite_t_16(void *l, void *w)
{
    LobbyInvite_t *lin = (LobbyInvite_t *)l;
    struct winLobbyInvite_t_16 *win = (struct winLobbyInvite_t_16 *)w;
    win->m_ulSteamIDUser = lin->m_ulSteamIDUser;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
}


}
