#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V002.h"
void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params )
{
    ((ISteamVideo*)params->linux_side)->GetVideoURL( (AppId_t)params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params )
{
    params->_ret = ((ISteamVideo*)params->linux_side)->IsBroadcasting( (int *)params->pnNumViewers );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params )
{
    ((ISteamVideo*)params->linux_side)->GetOPFSettings( (AppId_t)params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params )
{
    params->_ret = ((ISteamVideo*)params->linux_side)->GetOPFStringForApp( (AppId_t)params->unVideoAppID, (char *)params->pchBuffer, (int32 *)params->pnBufferSize );
}

#ifdef __cplusplus
}
#endif
