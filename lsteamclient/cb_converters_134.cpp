#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_134/steam_api.h"
#include "steamworks_sdk_134/isteamgameserver.h"
#include "steamworks_sdk_134/isteamgameserverstats.h"
#include "steamworks_sdk_134/isteamgamecoordinator.h"
extern "C" {
struct winSteamServerConnectFailure_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
void cb_SteamServerConnectFailure_t_4(void *l, void *w)
{
    SteamServerConnectFailure_t *lin = (SteamServerConnectFailure_t *)l;
    struct winSteamServerConnectFailure_t_4 *win = (struct winSteamServerConnectFailure_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}


}
