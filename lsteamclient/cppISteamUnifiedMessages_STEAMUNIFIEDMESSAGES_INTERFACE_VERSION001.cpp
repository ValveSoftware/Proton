/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod( void *args )
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *params = (struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *)args;
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendMethod( params->pchServiceMethod, params->pRequestBuffer, params->unRequestBufferSize, params->unContext );
    return 0;
}

NTSTATUS ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo( void *args )
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *params = (struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *)args;
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseInfo( params->hHandle, params->punResponseSize, params->peResult );
    return 0;
}

NTSTATUS ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData( void *args )
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *params = (struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *)args;
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseData( params->hHandle, params->pResponseBuffer, params->unResponseBufferSize, params->bAutoRelease );
    return 0;
}

NTSTATUS ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod( void *args )
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *params = (struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *)args;
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseMethod( params->hHandle );
    return 0;
}

NTSTATUS ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification( void *args )
{
    struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *params = (struct ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *)args;
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendNotification( params->pchServiceNotification, params->pNotificationBuffer, params->unNotificationBufferSize );
    return 0;
}

