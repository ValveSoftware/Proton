/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils004.h"

void cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils004_GetConnectedUniverse( struct cppISteamUtils_SteamUtils004_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils004_GetServerRealTime( struct cppISteamUtils_SteamUtils004_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils004_GetIPCountry( struct cppISteamUtils_SteamUtils004_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils004_GetImageSize( struct cppISteamUtils_SteamUtils004_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils004_GetImageRGBA( struct cppISteamUtils_SteamUtils004_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils004_GetCSERIPPort( struct cppISteamUtils_SteamUtils004_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils004_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils004_GetAppID( struct cppISteamUtils_SteamUtils004_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils004_IsAPICallCompleted( struct cppISteamUtils_SteamUtils004_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils004_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils004_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils004_RunFrame( struct cppISteamUtils_SteamUtils004_RunFrame_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils004_GetIPCCallCount( struct cppISteamUtils_SteamUtils004_GetIPCCallCount_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils004_SetWarningMessageHook( struct cppISteamUtils_SteamUtils004_SetWarningMessageHook_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamUtils_SteamUtils004_IsOverlayEnabled( struct cppISteamUtils_SteamUtils004_IsOverlayEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils004 *iface = (struct u_ISteamUtils_SteamUtils004 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

