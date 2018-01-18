#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_140/steam_api.h"
#include "steamworks_sdk_140/isteamgameserver.h"
#include "steamworks_sdk_140/isteamgameserverstats.h"
#include "steamworks_sdk_140/isteamgamecoordinator.h"
extern "C" {
struct winSubmitItemUpdateResult_t_8 {
    EResult m_eResult;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
void cb_SubmitItemUpdateResult_t_8(void *l, void *w)
{
    SubmitItemUpdateResult_t *lin = (SubmitItemUpdateResult_t *)l;
    struct winSubmitItemUpdateResult_t_8 *win = (struct winSubmitItemUpdateResult_t_8 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}


}
