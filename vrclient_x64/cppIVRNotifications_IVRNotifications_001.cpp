/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRNotifications_IVRNotifications_001_GetErrorString( void *args )
{
    struct IVRNotifications_IVRNotifications_001_GetErrorString_params *params = (struct IVRNotifications_IVRNotifications_001_GetErrorString_params *)args;
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->GetErrorString( params->error, params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRNotifications_IVRNotifications_001_CreateNotification( void *args )
{
    struct IVRNotifications_IVRNotifications_001_CreateNotification_params *params = (struct IVRNotifications_IVRNotifications_001_CreateNotification_params *)args;
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->strType, params->strText, params->strCategory, params->photo, params->notificationId );
    return 0;
}

NTSTATUS IVRNotifications_IVRNotifications_001_DismissNotification( void *args )
{
    struct IVRNotifications_IVRNotifications_001_DismissNotification_params *params = (struct IVRNotifications_IVRNotifications_001_DismissNotification_params *)args;
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->DismissNotification( params->notificationId );
    return 0;
}

