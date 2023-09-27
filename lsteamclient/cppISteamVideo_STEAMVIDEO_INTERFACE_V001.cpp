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
void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params )
{
    ((ISteamVideo*)params->linux_side)->GetVideoURL( (AppId_t)params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params )
{
    params->_ret = ((ISteamVideo*)params->linux_side)->IsBroadcasting( (int *)params->pnNumViewers );
}

#ifdef __cplusplus
}
#endif
