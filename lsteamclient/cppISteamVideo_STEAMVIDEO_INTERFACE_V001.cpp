#include "steam_defs.h"
#include "steamworks_sdk_139/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V001.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_139.h"
void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL(void *linux_side, AppId_t unVideoAppID)
{
    ((ISteamVideo*)linux_side)->GetVideoURL((AppId_t)unVideoAppID);
}

bool cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting(void *linux_side, int * pnNumViewers)
{
    return ((ISteamVideo*)linux_side)->IsBroadcasting((int *)pnNumViewers);
}

#ifdef __cplusplus
}
#endif
