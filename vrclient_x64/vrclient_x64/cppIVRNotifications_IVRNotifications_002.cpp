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
void cppIVRNotifications_IVRNotifications_002_CreateNotification( struct cppIVRNotifications_IVRNotifications_002_CreateNotification_params *params )
{
    params->_ret = ((IVRNotifications*)params->linux_side)->CreateNotification((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint64_t)params->ulUserValue, (vr::EVRNotificationType)params->type, (const char *)params->pchText, (vr::EVRNotificationStyle)params->style, (const vr::NotificationBitmap_t *)params->pImage, (vr::VRNotificationId *)params->pNotificationId);
}

void cppIVRNotifications_IVRNotifications_002_RemoveNotification( struct cppIVRNotifications_IVRNotifications_002_RemoveNotification_params *params )
{
    params->_ret = ((IVRNotifications*)params->linux_side)->RemoveNotification((vr::VRNotificationId)params->notificationId);
}

#ifdef __cplusplus
}
#endif
