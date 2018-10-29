#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_122/steam_api.h"
#include "steamworks_sdk_122/isteamgameserver.h"
#include "steamworks_sdk_122/isteamgameserverstats.h"
#include "steamworks_sdk_122/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winRemoteStorageSubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSubscribePublishedFileResult_t_4(void *l, void *w)
{
    RemoteStorageSubscribePublishedFileResult_t *lin = (RemoteStorageSubscribePublishedFileResult_t *)l;
    struct winRemoteStorageSubscribePublishedFileResult_t_4 *win = (struct winRemoteStorageSubscribePublishedFileResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winRemoteStorageUnsubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUnsubscribePublishedFileResult_t_4(void *l, void *w)
{
    RemoteStorageUnsubscribePublishedFileResult_t *lin = (RemoteStorageUnsubscribePublishedFileResult_t *)l;
    struct winRemoteStorageUnsubscribePublishedFileResult_t_4 *win = (struct winRemoteStorageUnsubscribePublishedFileResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}


}
