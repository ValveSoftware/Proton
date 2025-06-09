/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionCount( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionCount_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionCount_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSessionCount(  );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSessionID( params->iSessionIndex );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionSteamID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionSteamID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionSteamID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    *params->_ret = iface->GetSessionSteamID( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientName( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientName_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientName_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSessionClientName( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientFormFactor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientFormFactor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetSessionClientFormFactor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetSessionClientFormFactor( params->unSessionID );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BGetSessionClientResolution( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BGetSessionClientResolution_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BGetSessionClientResolution_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BGetSessionClientResolution( params->unSessionID, params->pnResolutionX, params->pnResolutionY );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_ShowRemotePlayTogetherUI( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_ShowRemotePlayTogetherUI_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_ShowRemotePlayTogetherUI_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ShowRemotePlayTogetherUI(  );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BSendRemotePlayTogetherInvite( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BSendRemotePlayTogetherInvite_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BSendRemotePlayTogetherInvite_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BSendRemotePlayTogetherInvite( params->steamIDFriend );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BEnableRemotePlayTogetherDirectInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BEnableRemotePlayTogetherDirectInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_BEnableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->BEnableRemotePlayTogetherDirectInput(  );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_DisableRemotePlayTogetherDirectInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_DisableRemotePlayTogetherDirectInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_DisableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    iface->DisableRemotePlayTogetherDirectInput(  );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_GetInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetInput( params->pInput, params->unMaxEvents );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseVisibility( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseVisibility_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseVisibility_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    iface->SetMouseVisibility( params->unSessionID, params->bVisible );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMousePosition( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMousePosition_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMousePosition_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    iface->SetMousePosition( params->unSessionID, params->flNormalizedX, params->flNormalizedY );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_CreateMouseCursor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_CreateMouseCursor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_CreateMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateMouseCursor( params->nWidth, params->nHeight, params->nHotX, params->nHotY, params->pBGRA, params->nPitch );
    return 0;
}

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseCursor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseCursor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003_SetMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION003 *)params->linux_side;
    iface->SetMouseCursor( params->unSessionID, params->unCursorID );
    return 0;
}

