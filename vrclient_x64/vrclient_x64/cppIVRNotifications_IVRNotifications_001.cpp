#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.10/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRNotifications_IVRNotifications_001.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRNotifications_IVRNotifications_001
{
#ifdef __cplusplus
    virtual uint32_t GetErrorString( uint32_t, char *, uint32_t ) = 0;
    virtual uint32_t CreateNotification( uint64_t, uint64_t, const char *, const char *, const char *, const NotificationBitmap *, uint32_t * ) = 0;
    virtual uint32_t DismissNotification( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRNotifications_IVRNotifications_001_GetErrorString( struct cppIVRNotifications_IVRNotifications_001_GetErrorString_params *params )
{
    struct cppIVRNotifications_IVRNotifications_001 *iface = (struct cppIVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->GetErrorString( params->error, params->pchBuffer, params->unBufferSize );
}

void cppIVRNotifications_IVRNotifications_001_CreateNotification( struct cppIVRNotifications_IVRNotifications_001_CreateNotification_params *params )
{
    struct cppIVRNotifications_IVRNotifications_001 *iface = (struct cppIVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->strType, params->strText, params->strCategory, params->photo, params->notificationId );
}

void cppIVRNotifications_IVRNotifications_001_DismissNotification( struct cppIVRNotifications_IVRNotifications_001_DismissNotification_params *params )
{
    struct cppIVRNotifications_IVRNotifications_001 *iface = (struct cppIVRNotifications_IVRNotifications_001 *)params->linux_side;
    params->_ret = iface->DismissNotification( params->notificationId );
}

#ifdef __cplusplus
}
#endif
