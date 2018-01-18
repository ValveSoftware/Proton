#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_104/steam_api.h"
#include "steamworks_sdk_104/isteamgameserver.h"
extern "C" {
struct winLobbyClosing_t_8 {
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
void cb_LobbyClosing_t_8(void *l, void *w)
{
    LobbyClosing_t *lin = (LobbyClosing_t *)l;
    struct winLobbyClosing_t_8 *win = (struct winLobbyClosing_t_8 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
}

struct winLobbyKicked_t_16 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDAdmin;
}  __attribute__ ((ms_struct));
void cb_LobbyKicked_t_16(void *l, void *w)
{
    LobbyKicked_t *lin = (LobbyKicked_t *)l;
    struct winLobbyKicked_t_16 *win = (struct winLobbyKicked_t_16 *)w;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
    win->m_ulSteamIDAdmin = lin->m_ulSteamIDAdmin;
}


}
