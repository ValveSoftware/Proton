/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionCount_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionCount(  );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionID( params->iSessionIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionID( params->iSessionIndex );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BSessionRemotePlayTogether( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSessionRemotePlayTogether_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BSessionRemotePlayTogether( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    *params->_ret = iface->GetSessionSteamID( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionSteamID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    *params->_ret = iface->GetSessionSteamID( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionGuestID( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionGuestID_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionGuestID( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSmallSessionAvatar( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSmallSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSmallSessionAvatar( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetMediumSessionAvatar( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetMediumSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetMediumSessionAvatar( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetLargeSessionAvatar( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetLargeSessionAvatar_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetLargeSessionAvatar( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionClientName( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientName_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionClientName( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionClientFormFactor( params->unSessionID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetSessionClientFormFactor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetSessionClientFormFactor( params->unSessionID );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BGetSessionClientResolution( params->unSessionID, params->pnResolutionX, params->pnResolutionY );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BGetSessionClientResolution_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BGetSessionClientResolution( params->unSessionID, params->pnResolutionX, params->pnResolutionY );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->ShowRemotePlayTogetherUI(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_ShowRemotePlayTogetherUI_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->ShowRemotePlayTogetherUI(  );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BSendRemotePlayTogetherInvite( params->steamIDFriend );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BSendRemotePlayTogetherInvite_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BSendRemotePlayTogetherInvite( params->steamIDFriend );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BEnableRemotePlayTogetherDirectInput(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_BEnableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->BEnableRemotePlayTogetherDirectInput(  );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->DisableRemotePlayTogetherDirectInput(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_DisableRemotePlayTogetherDirectInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->DisableRemotePlayTogetherDirectInput(  );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetInput( params->pInput, params->unMaxEvents );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_GetInput_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->GetInput( params->pInput, params->unMaxEvents );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMouseVisibility( params->unSessionID, params->bVisible );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseVisibility_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMouseVisibility( params->unSessionID, params->bVisible );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMousePosition( params->unSessionID, params->flNormalizedX, params->flNormalizedY );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMousePosition_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMousePosition( params->unSessionID, params->flNormalizedX, params->flNormalizedY );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->CreateMouseCursor( params->nWidth, params->nHeight, params->nHotX, params->nHotY, params->pBGRA, params->nPitch );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_CreateMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    params->_ret = iface->CreateMouseCursor( params->nWidth, params->nHeight, params->nHotX, params->nHotY, params->pBGRA, params->nPitch );
    return 0;
}
#endif

NTSTATUS ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor( void *args )
{
    struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor_params *params = (struct ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMouseCursor( params->unSessionID, params->unCursorID );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor( void *args )
{
    struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor_params *params = (struct wow64_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004_SetMouseCursor_params *)args;
    struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *iface = (struct u_ISteamRemotePlay_STEAMREMOTEPLAY_INTERFACE_VERSION004 *)params->u_iface;
    iface->SetMouseCursor( params->unSessionID, params->unCursorID );
    return 0;
}
#endif

