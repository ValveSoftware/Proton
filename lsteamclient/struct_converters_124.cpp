#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_124/steam_api.h"
#include "steamworks_sdk_124/isteamgameserver.h"
#include "steamworks_sdk_124/isteamgameserverstats.h"
#include "steamworks_sdk_124/isteamgamecoordinator.h"
extern "C" {
struct winRemoteStoragePublishFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
void cb_RemoteStoragePublishFileResult_t_12(void *l, void *w)
{
    RemoteStoragePublishFileResult_t *lin = (RemoteStoragePublishFileResult_t *)l;
    struct winRemoteStoragePublishFileResult_t_12 *win = (struct winRemoteStoragePublishFileResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

struct winRemoteStorageUpdatePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
void cb_RemoteStorageUpdatePublishedFileResult_t_12(void *l, void *w)
{
    RemoteStorageUpdatePublishedFileResult_t *lin = (RemoteStorageUpdatePublishedFileResult_t *)l;
    struct winRemoteStorageUpdatePublishedFileResult_t_12 *win = (struct winRemoteStorageUpdatePublishedFileResult_t_12 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

struct winRemoteStorageEnumerateWorkshopFilesResult_t_612 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
}  __attribute__ ((ms_struct));
void cb_RemoteStorageEnumerateWorkshopFilesResult_t_612(void *l, void *w)
{
    RemoteStorageEnumerateWorkshopFilesResult_t *lin = (RemoteStorageEnumerateWorkshopFilesResult_t *)l;
    struct winRemoteStorageEnumerateWorkshopFilesResult_t_612 *win = (struct winRemoteStorageEnumerateWorkshopFilesResult_t_612 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgScore, lin->m_rgScore, sizeof(win->m_rgScore));
}


}
