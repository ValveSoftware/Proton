/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001.h"

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendMethod( params->pchServiceMethod, params->pRequestBuffer, params->unRequestBufferSize, params->unContext );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseInfo( params->hHandle, params->punResponseSize, params->peResult );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseData( params->hHandle, params->pResponseBuffer, params->unResponseBufferSize, params->bAutoRelease );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseMethod( params->hHandle );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendNotification( params->pchServiceNotification, params->pNotificationBuffer, params->unNotificationBufferSize );
}

