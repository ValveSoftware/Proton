/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamGameCoordinator_SteamGameCoordinator001_SendMessage( void *args )
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params = (struct ISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *)args;
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->SendMessage( params->unMsgType, params->pubData, params->cubData );
    return 0;
}

NTSTATUS ISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( void *args )
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params = (struct ISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *)args;
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->IsMessageAvailable( params->pcubMsgSize );
    return 0;
}

NTSTATUS ISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( void *args )
{
    struct ISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params = (struct ISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *)args;
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->RetrieveMessage( params->punMsgType, params->pubDest, params->cubDest, params->pcubMsgSize );
    return 0;
}

