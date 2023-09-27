#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlayView_IVROverlayView_003.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVROverlayView_IVROverlayView_003_AcquireOverlayView( struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params )
{
    params->_ret = ((IVROverlayView*)params->linux_side)->AcquireOverlayView((vr::VROverlayHandle_t)params->ulOverlayHandle, (vr::VRNativeDevice_t *)params->pNativeDevice, (vr::VROverlayView_t *)params->pOverlayView, (uint32_t)params->unOverlayViewSize);
}

void cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView( struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params )
{
    params->_ret = ((IVROverlayView*)params->linux_side)->ReleaseOverlayView((vr::VROverlayView_t *)params->pOverlayView);
}

void cppIVROverlayView_IVROverlayView_003_PostOverlayEvent( struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params *params )
{
    VREvent_t lin_pvrEvent;
    if (params->pvrEvent)
        struct_VREvent_t_1267_win_to_lin( params->pvrEvent, &lin_pvrEvent );
    ((IVROverlayView*)params->linux_side)->PostOverlayEvent((vr::VROverlayHandle_t)params->ulOverlayHandle, params->pvrEvent ? &lin_pvrEvent : nullptr);
}

void cppIVROverlayView_IVROverlayView_003_IsViewingPermitted( struct cppIVROverlayView_IVROverlayView_003_IsViewingPermitted_params *params )
{
    params->_ret = ((IVROverlayView*)params->linux_side)->IsViewingPermitted((vr::VROverlayHandle_t)params->ulOverlayHandle);
}

#ifdef __cplusplus
}
#endif
