/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRNotifications_IVRNotifications_002_CreateNotification( void *args )
{
    struct IVRNotifications_IVRNotifications_002_CreateNotification_params *params = (struct IVRNotifications_IVRNotifications_002_CreateNotification_params *)args;
    struct u_IVRNotifications_IVRNotifications_002 *iface = (struct u_IVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->type, params->pchText, params->style, params->pImage, params->pNotificationId );
    return 0;
}

NTSTATUS IVRNotifications_IVRNotifications_002_RemoveNotification( void *args )
{
    struct IVRNotifications_IVRNotifications_002_RemoveNotification_params *params = (struct IVRNotifications_IVRNotifications_002_RemoveNotification_params *)args;
    struct u_IVRNotifications_IVRNotifications_002 *iface = (struct u_IVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = iface->RemoveNotification( params->notificationId );
    return 0;
}

