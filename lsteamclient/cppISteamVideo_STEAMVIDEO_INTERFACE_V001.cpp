#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_139/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_139
#include "struct_converters.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V001.h"
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
