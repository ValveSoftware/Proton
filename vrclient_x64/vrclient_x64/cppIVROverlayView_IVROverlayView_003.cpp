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

struct cppIVROverlayView_IVROverlayView_003
{
#ifdef __cplusplus
    virtual uint32_t AcquireOverlayView( uint64_t, VRNativeDevice_t *, VROverlayView_t *, uint32_t ) = 0;
    virtual uint32_t ReleaseOverlayView( VROverlayView_t * ) = 0;
    virtual void PostOverlayEvent( uint64_t, const VREvent_t * ) = 0;
    virtual bool IsViewingPermitted( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlayView_IVROverlayView_003_AcquireOverlayView( struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params )
{
    struct cppIVROverlayView_IVROverlayView_003 *iface = (struct cppIVROverlayView_IVROverlayView_003 *)params->linux_side;
    params->_ret = iface->AcquireOverlayView( params->ulOverlayHandle, params->pNativeDevice, params->pOverlayView, params->unOverlayViewSize );
}

void cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView( struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params )
{
    struct cppIVROverlayView_IVROverlayView_003 *iface = (struct cppIVROverlayView_IVROverlayView_003 *)params->linux_side;
    params->_ret = iface->ReleaseOverlayView( params->pOverlayView );
}

void cppIVROverlayView_IVROverlayView_003_PostOverlayEvent( struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params *params )
{
    struct cppIVROverlayView_IVROverlayView_003 *iface = (struct cppIVROverlayView_IVROverlayView_003 *)params->linux_side;
    VREvent_t lin_pvrEvent;
    if (params->pvrEvent)
        struct_VREvent_t_1267_win_to_lin( params->pvrEvent, &lin_pvrEvent );
    iface->PostOverlayEvent( params->ulOverlayHandle, params->pvrEvent ? &lin_pvrEvent : nullptr );
}

void cppIVROverlayView_IVROverlayView_003_IsViewingPermitted( struct cppIVROverlayView_IVROverlayView_003_IsViewingPermitted_params *params )
{
    struct cppIVROverlayView_IVROverlayView_003 *iface = (struct cppIVROverlayView_IVROverlayView_003 *)params->linux_side;
    params->_ret = iface->IsViewingPermitted( params->ulOverlayHandle );
}

#ifdef __cplusplus
}
#endif
