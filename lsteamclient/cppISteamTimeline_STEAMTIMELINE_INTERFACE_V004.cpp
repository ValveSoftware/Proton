/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineTooltip_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->SetTimelineTooltip( params->pchDescription, params->flTimeDelta );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_ClearTimelineTooltip_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->ClearTimelineTooltip( params->flTimeDelta );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetTimelineGameMode_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->SetTimelineGameMode( params->eMode );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddInstantaneousTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    params->_ret = iface->AddInstantaneousTimelineEvent( params->pchTitle, params->pchDescription, params->pchIcon, params->unIconPriority, params->flStartOffsetSeconds, params->ePossibleClip );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddRangeTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    params->_ret = iface->AddRangeTimelineEvent( params->pchTitle, params->pchDescription, params->pchIcon, params->unIconPriority, params->flStartOffsetSeconds, params->flDuration, params->ePossibleClip );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartRangeTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    params->_ret = iface->StartRangeTimelineEvent( params->pchTitle, params->pchDescription, params->pchIcon, params->unPriority, params->flStartOffsetSeconds, params->ePossibleClip );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_UpdateRangeTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->UpdateRangeTimelineEvent( params->ulEvent, params->pchTitle, params->pchDescription, params->pchIcon, params->unPriority, params->ePossibleClip );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndRangeTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->EndRangeTimelineEvent( params->ulEvent, params->flEndOffsetSeconds );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_RemoveTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->RemoveTimelineEvent( params->ulEvent );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesEventRecordingExist_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    params->_ret = iface->DoesEventRecordingExist( params->ulEvent );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_StartGamePhase_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->StartGamePhase(  );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_EndGamePhase_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->EndGamePhase(  );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseID_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->SetGamePhaseID( params->pchPhaseID );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_DoesGamePhaseRecordingExist_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    params->_ret = iface->DoesGamePhaseRecordingExist( params->pchPhaseID );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_AddGamePhaseTag_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->AddGamePhaseTag( params->pchTagName, params->pchTagIcon, params->pchTagGroup, params->unPriority );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_SetGamePhaseAttribute_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->SetGamePhaseAttribute( params->pchAttributeGroup, params->pchAttributeValue, params->unPriority );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToGamePhase_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->OpenOverlayToGamePhase( params->pchPhaseID );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V004_OpenOverlayToTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V004 *)params->linux_side;
    iface->OpenOverlayToTimelineEvent( params->ulEvent );
    return 0;
}

