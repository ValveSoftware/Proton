/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRNotifications_IVRNotifications_001.h"
void cppIVRNotifications_IVRNotifications_001_GetErrorString( struct cppIVRNotifications_IVRNotifications_001_GetErrorString_params *params )
{
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetErrorString( params->error, params->pchBuffer, params->unBufferSize );
}

void cppIVRNotifications_IVRNotifications_001_CreateNotification( struct cppIVRNotifications_IVRNotifications_001_CreateNotification_params *params )
{
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->strType, params->strText, params->strCategory, params->photo, params->notificationId );
}

void cppIVRNotifications_IVRNotifications_001_DismissNotification( struct cppIVRNotifications_IVRNotifications_001_DismissNotification_params *params )
{
    struct u_IVRNotifications_IVRNotifications_001 *iface = (struct u_IVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->DismissNotification( params->notificationId );
}

