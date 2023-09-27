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
void cppIVRNotifications_IVRNotifications_001_GetErrorString( struct cppIVRNotifications_IVRNotifications_001_GetErrorString_params *params )
{
    params->_ret = ((IVRNotifications*)params->linux_side)->GetErrorString((vr::NotificationError_t)params->error, (char *)params->pchBuffer, (uint32_t)params->unBufferSize);
}

void cppIVRNotifications_IVRNotifications_001_CreateNotification( struct cppIVRNotifications_IVRNotifications_001_CreateNotification_params *params )
{
    params->_ret = ((IVRNotifications*)params->linux_side)->CreateNotification((vr::VROverlayHandle_t)params->ulOverlayHandle, (uint64_t)params->ulUserValue, (const char *)params->strType, (const char *)params->strText, (const char *)params->strCategory, (const vr::NotificationBitmap *)params->photo, (vr::VRNotificationId *)params->notificationId);
}

void cppIVRNotifications_IVRNotifications_001_DismissNotification( struct cppIVRNotifications_IVRNotifications_001_DismissNotification_params *params )
{
    params->_ret = ((IVRNotifications*)params->linux_side)->DismissNotification((vr::VRNotificationId)params->notificationId);
}

#ifdef __cplusplus
}
#endif
