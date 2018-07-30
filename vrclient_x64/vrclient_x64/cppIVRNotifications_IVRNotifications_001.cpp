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
uint32_t cppIVRNotifications_IVRNotifications_001_GetErrorString(void *linux_side, NotificationError_t error, char * pchBuffer, uint32_t unBufferSize)
{
    return ((IVRNotifications*)linux_side)->GetErrorString((vr::NotificationError_t)error, (char *)pchBuffer, (uint32_t)unBufferSize);
}

vr::NotificationError_t cppIVRNotifications_IVRNotifications_001_CreateNotification(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, const char * strType, const char * strText, const char * strCategory, NotificationBitmap * photo, VRNotificationId * notificationId)
{
    return ((IVRNotifications*)linux_side)->CreateNotification((vr::VROverlayHandle_t)ulOverlayHandle, (uint64_t)ulUserValue, (const char *)strType, (const char *)strText, (const char *)strCategory, (const vr::NotificationBitmap *)photo, (vr::VRNotificationId *)notificationId);
}

vr::NotificationError_t cppIVRNotifications_IVRNotifications_001_DismissNotification(void *linux_side, VRNotificationId notificationId)
{
    return ((IVRNotifications*)linux_side)->DismissNotification((vr::VRNotificationId)notificationId);
}

#ifdef __cplusplus
}
#endif
