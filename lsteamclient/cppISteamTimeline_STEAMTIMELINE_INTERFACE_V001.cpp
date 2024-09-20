/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineStateDescription_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *)params->linux_side;
    iface->SetTimelineStateDescription( params->pchDescription, params->flTimeDelta );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_ClearTimelineStateDescription_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *)params->linux_side;
    iface->ClearTimelineStateDescription( params->flTimeDelta );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_AddTimelineEvent_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *)params->linux_side;
    iface->AddTimelineEvent( params->pchIcon, params->pchTitle, params->pchDescription, params->unPriority, params->flStartOffsetSeconds, params->flDurationSeconds, params->ePossibleClip );
    return 0;
}

NTSTATUS ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode( void *args )
{
    struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode_params *params = (struct ISteamTimeline_STEAMTIMELINE_INTERFACE_V001_SetTimelineGameMode_params *)args;
    struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *iface = (struct u_ISteamTimeline_STEAMTIMELINE_INTERFACE_V001 *)params->linux_side;
    iface->SetTimelineGameMode( params->eMode );
    return 0;
}

