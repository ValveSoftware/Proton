#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRNotifications_IVRNotifications_002.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRNotifications_IVRNotifications_002
{
#ifdef __cplusplus
    virtual uint32_t CreateNotification( uint64_t, uint64_t, uint32_t, const char *, uint32_t, const NotificationBitmap_t *, uint32_t * ) = 0;
    virtual uint32_t RemoveNotification( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRNotifications_IVRNotifications_002_CreateNotification( struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params *params )
{
    struct cppIVRNotifications_IVRNotifications_002 *iface = (struct cppIVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = iface->CreateNotification( params->ulOverlayHandle, params->ulUserValue, params->type, params->pchText, params->style, params->pImage, params->pNotificationId );
}

void cppIVRNotifications_IVRNotifications_002_RemoveNotification( struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params *params )
{
    struct cppIVRNotifications_IVRNotifications_002 *iface = (struct cppIVRNotifications_IVRNotifications_002 *)params->linux_side;
    params->_ret = iface->RemoveNotification( params->notificationId );
}

#ifdef __cplusplus
}
#endif
