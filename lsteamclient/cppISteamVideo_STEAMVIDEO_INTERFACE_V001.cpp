/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V001.h"

void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V001 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( params->pnNumViewers );
}

