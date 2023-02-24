#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.23.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlayView_IVROverlayView_003.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVROverlayError cppIVROverlayView_IVROverlayView_003_AcquireOverlayView(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRNativeDevice_t * pNativeDevice, VROverlayView_t * pOverlayView, uint32_t unOverlayViewSize)
{
    return ((IVROverlayView*)linux_side)->AcquireOverlayView((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRNativeDevice_t *)pNativeDevice, (vr::VROverlayView_t *)pOverlayView, (uint32_t)unOverlayViewSize);
}

vr::EVROverlayError cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView(void *linux_side, VROverlayView_t * pOverlayView)
{
    return ((IVROverlayView*)linux_side)->ReleaseOverlayView((vr::VROverlayView_t *)pOverlayView);
}

void cppIVROverlayView_IVROverlayView_003_PostOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, VREvent_t * pvrEvent)
{
    VREvent_t lin;
    if(pvrEvent)
        struct_VREvent_t_1237_win_to_lin(pvrEvent, &lin);
    ((IVROverlayView*)linux_side)->PostOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pvrEvent ? &lin : nullptr);
}

bool cppIVROverlayView_IVROverlayView_003_IsViewingPermitted(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlayView*)linux_side)->IsViewingPermitted((vr::VROverlayHandle_t)ulOverlayHandle);
}

#ifdef __cplusplus
}
#endif
