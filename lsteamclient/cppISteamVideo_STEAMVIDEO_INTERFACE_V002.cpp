/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamVideo_STEAMVIDEO_INTERFACE_V002.h"

struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002
{
#ifdef __cplusplus
    virtual void GetVideoURL( uint32_t ) = 0;
    virtual bool IsBroadcasting( int32_t * ) = 0;
    virtual void GetOPFSettings( uint32_t ) = 0;
    virtual bool GetOPFStringForApp( uint32_t, char *, int32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetVideoURL( params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->IsBroadcasting( params->pnNumViewers );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    iface->GetOPFSettings( params->unVideoAppID );
}

void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params )
{
    struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *iface = (struct u_ISteamVideo_STEAMVIDEO_INTERFACE_V002 *)params->linux_side;
    params->_ret = iface->GetOPFStringForApp( params->unVideoAppID, params->pchBuffer, params->pnBufferSize );
}

