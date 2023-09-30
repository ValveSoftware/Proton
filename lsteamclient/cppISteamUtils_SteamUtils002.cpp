/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils002.h"

void cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils002_GetConnectedUniverse( struct cppISteamUtils_SteamUtils002_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils002_GetServerRealTime( struct cppISteamUtils_SteamUtils002_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils002_GetIPCountry( struct cppISteamUtils_SteamUtils002_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils002_GetImageSize( struct cppISteamUtils_SteamUtils002_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils002_GetImageRGBA( struct cppISteamUtils_SteamUtils002_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils002_GetCSERIPPort( struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils002_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils002_GetAppID( struct cppISteamUtils_SteamUtils002_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils002_IsAPICallCompleted( struct cppISteamUtils_SteamUtils002_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils002_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

