/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRNotifications_IVRNotifications_001.h"
struct u_IVRNotifications_IVRNotifications_001
{
#ifdef __cplusplus
    virtual uint32_t GetErrorString( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t CreateNotification( uint64_t, uint64_t, const char *, const char *, const char *, const u_NotificationBitmap *, uint32_t * ) = 0;
    virtual uint32_t DismissNotification( uint32_t ) = 0;
#endif /* __cplusplus */
};

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

