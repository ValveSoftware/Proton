/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUtils_SteamUtils002_GetSecondsSinceAppActive( void *args )
{
    struct ISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *params = (struct ISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetSecondsSinceComputerActive( void *args )
{
    struct ISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params *params = (struct ISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetConnectedUniverse( void *args )
{
    struct ISteamUtils_SteamUtils002_GetConnectedUniverse_params *params = (struct ISteamUtils_SteamUtils002_GetConnectedUniverse_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetServerRealTime( void *args )
{
    struct ISteamUtils_SteamUtils002_GetServerRealTime_params *params = (struct ISteamUtils_SteamUtils002_GetServerRealTime_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetIPCountry( void *args )
{
    struct ISteamUtils_SteamUtils002_GetIPCountry_params *params = (struct ISteamUtils_SteamUtils002_GetIPCountry_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetImageSize( void *args )
{
    struct ISteamUtils_SteamUtils002_GetImageSize_params *params = (struct ISteamUtils_SteamUtils002_GetImageSize_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetImageRGBA( void *args )
{
    struct ISteamUtils_SteamUtils002_GetImageRGBA_params *params = (struct ISteamUtils_SteamUtils002_GetImageRGBA_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetCSERIPPort( void *args )
{
    struct ISteamUtils_SteamUtils002_GetCSERIPPort_params *params = (struct ISteamUtils_SteamUtils002_GetCSERIPPort_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetCurrentBatteryPower( void *args )
{
    struct ISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *params = (struct ISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetAppID( void *args )
{
    struct ISteamUtils_SteamUtils002_GetAppID_params *params = (struct ISteamUtils_SteamUtils002_GetAppID_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_SetOverlayNotificationPosition( void *args )
{
    struct ISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params *params = (struct ISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_IsAPICallCompleted( void *args )
{
    struct ISteamUtils_SteamUtils002_IsAPICallCompleted_params *params = (struct ISteamUtils_SteamUtils002_IsAPICallCompleted_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
    return 0;
}

NTSTATUS ISteamUtils_SteamUtils002_GetAPICallFailureReason( void *args )
{
    struct ISteamUtils_SteamUtils002_GetAPICallFailureReason_params *params = (struct ISteamUtils_SteamUtils002_GetAPICallFailureReason_params *)args;
    struct u_ISteamUtils_SteamUtils002 *iface = (struct u_ISteamUtils_SteamUtils002 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
    return 0;
}

