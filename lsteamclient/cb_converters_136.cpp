#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_136/steam_api.h"
#include "steamworks_sdk_136/isteamgameserver.h"
#include "steamworks_sdk_136/isteamgameserverstats.h"
#include "steamworks_sdk_136/isteamgamecoordinator.h"
extern "C" {
struct winSteamAPICallCompleted_t_8 {
    SteamAPICall_t m_hAsyncCall;
}  __attribute__ ((ms_struct));
void cb_SteamAPICallCompleted_t_8(void *l, void *w)
{
    SteamAPICallCompleted_t *lin = (SteamAPICallCompleted_t *)l;
    struct winSteamAPICallCompleted_t_8 *win = (struct winSteamAPICallCompleted_t_8 *)w;
    win->m_hAsyncCall = lin->m_hAsyncCall;
}

struct winAppProofOfPurchaseKeyResponse_t_72 {
    EResult m_eResult;
    uint32 m_nAppID;
    char m_rgchKey[64];
}  __attribute__ ((ms_struct));
void cb_AppProofOfPurchaseKeyResponse_t_72(void *l, void *w)
{
    AppProofOfPurchaseKeyResponse_t *lin = (AppProofOfPurchaseKeyResponse_t *)l;
    struct winAppProofOfPurchaseKeyResponse_t_72 *win = (struct winAppProofOfPurchaseKeyResponse_t_72 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nAppID = lin->m_nAppID;
    memcpy(win->m_rgchKey, lin->m_rgchKey, sizeof(win->m_rgchKey));
}


}
