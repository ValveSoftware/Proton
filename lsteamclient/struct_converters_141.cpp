#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_141/steam_api.h"
#include "steamworks_sdk_141/isteamgameserver.h"
#include "steamworks_sdk_141/isteamgameserverstats.h"
#include "steamworks_sdk_141/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winSteamUnifiedMessagesSendMethodResult_t_24 {
    ClientUnifiedMessageHandle m_hHandle;
    uint64 m_unContext;
    EResult m_eResult;
    uint32 m_unResponseSize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUnifiedMessagesSendMethodResult_t_24(void *l, void *w)
{
    SteamUnifiedMessagesSendMethodResult_t *lin = (SteamUnifiedMessagesSendMethodResult_t *)l;
    struct winSteamUnifiedMessagesSendMethodResult_t_24 *win = (struct winSteamUnifiedMessagesSendMethodResult_t_24 *)w;
    win->m_hHandle = lin->m_hHandle;
    win->m_unContext = lin->m_unContext;
    win->m_eResult = lin->m_eResult;
    win->m_unResponseSize = lin->m_unResponseSize;
}


}
