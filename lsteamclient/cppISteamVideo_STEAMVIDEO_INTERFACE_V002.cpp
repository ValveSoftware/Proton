#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V002.h"
void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL(void *linux_side, AppId_t unVideoAppID)
{
    ((ISteamVideo*)linux_side)->GetVideoURL((AppId_t)unVideoAppID);
}

bool cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting(void *linux_side, int * pnNumViewers)
{
    return ((ISteamVideo*)linux_side)->IsBroadcasting((int *)pnNumViewers);
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings(void *linux_side, AppId_t unVideoAppID)
{
    ((ISteamVideo*)linux_side)->GetOPFSettings((AppId_t)unVideoAppID);
}

bool cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp(void *linux_side, AppId_t unVideoAppID, char * pchBuffer, int32 * pnBufferSize)
{
    return ((ISteamVideo*)linux_side)->GetOPFStringForApp((AppId_t)unVideoAppID, (char *)pchBuffer, (int32 *)pnBufferSize);
}

#ifdef __cplusplus
}
#endif
