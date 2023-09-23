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

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001
{
#ifdef __cplusplus
    virtual void GetVideoURL( uint32_t ) = 0;
    virtual bool IsBroadcasting( int32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params )
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params )
{
    struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( params->pnNumViewers );
}

#ifdef __cplusplus
}
#endif
