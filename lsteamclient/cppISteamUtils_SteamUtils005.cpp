/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUtils_SteamUtils005.h"

void cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceAppActive(  );
}

void cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetSecondsSinceComputerActive(  );
}

void cppISteamUtils_SteamUtils005_GetConnectedUniverse( struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetConnectedUniverse(  );
}

void cppISteamUtils_SteamUtils005_GetServerRealTime( struct cppISteamUtils_SteamUtils005_GetServerRealTime_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetServerRealTime(  );
}

void cppISteamUtils_SteamUtils005_GetIPCountry( struct cppISteamUtils_SteamUtils005_GetIPCountry_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCountry(  );
}

void cppISteamUtils_SteamUtils005_GetImageSize( struct cppISteamUtils_SteamUtils005_GetImageSize_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageSize( params->iImage, params->pnWidth, params->pnHeight );
}

void cppISteamUtils_SteamUtils005_GetImageRGBA( struct cppISteamUtils_SteamUtils005_GetImageRGBA_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetImageRGBA( params->iImage, params->pubDest, params->nDestBufferSize );
}

void cppISteamUtils_SteamUtils005_GetCSERIPPort( struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCSERIPPort( params->unIP, params->usPort );
}

void cppISteamUtils_SteamUtils005_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetCurrentBatteryPower(  );
}

void cppISteamUtils_SteamUtils005_GetAppID( struct cppISteamUtils_SteamUtils005_GetAppID_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAppID(  );
}

void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    iface->SetOverlayNotificationPosition( params->eNotificationPosition );
}

void cppISteamUtils_SteamUtils005_IsAPICallCompleted( struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsAPICallCompleted( params->hSteamAPICall, params->pbFailed );
}

void cppISteamUtils_SteamUtils005_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetAPICallFailureReason( params->hSteamAPICall );
}

void cppISteamUtils_SteamUtils005_RunFrame( struct cppISteamUtils_SteamUtils005_RunFrame_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    iface->RunFrame(  );
}

void cppISteamUtils_SteamUtils005_GetIPCCallCount( struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetIPCCallCount(  );
}

void cppISteamUtils_SteamUtils005_SetWarningMessageHook( struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
}

void cppISteamUtils_SteamUtils005_IsOverlayEnabled( struct cppISteamUtils_SteamUtils005_IsOverlayEnabled_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->IsOverlayEnabled(  );
}

void cppISteamUtils_SteamUtils005_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->BOverlayNeedsPresent(  );
}

void cppISteamUtils_SteamUtils005_CheckFileSignature( struct cppISteamUtils_SteamUtils005_CheckFileSignature_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->CheckFileSignature( params->szFileName );
}

void cppISteamUtils_SteamUtils005_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->ShowGamepadTextInput( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextLength(  );
}

void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params )
{
    struct u_ISteamUtils_SteamUtils005 *iface = (struct u_ISteamUtils_SteamUtils005 *)params->linux_side;
    params->_ret = iface->GetEnteredGamepadTextInput( params->pchText, params->cchText );
}

