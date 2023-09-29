/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlayView_IVROverlayView_003.h"
struct u_IVROverlayView_IVROverlayView_003
{
#ifdef __cplusplus
    virtual uint32_t AcquireOverlayView( uint64_t, u_VRNativeDevice_t *, u_VROverlayView_t *, uint32_t ) = 0;
    virtual uint32_t ReleaseOverlayView( u_VROverlayView_t * ) = 0;
    virtual void PostOverlayEvent( uint64_t, const u_VREvent_t_1168 * ) = 0;
    virtual bool IsViewingPermitted( uint64_t ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlayView_IVROverlayView_003_AcquireOverlayView( struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params )
{
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VROverlayView_t u_pOverlayView;
    if (params->pOverlayView) u_pOverlayView = *params->pOverlayView;
    params->_ret = (uint32_t)iface->AcquireOverlayView( params->ulOverlayHandle, params->pNativeDevice, params->pOverlayView ? &u_pOverlayView : nullptr, params->unOverlayViewSize );
    if (params->pOverlayView) *params->pOverlayView = u_pOverlayView;
}

void cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView( struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params )
{
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VROverlayView_t u_pOverlayView;
    if (params->pOverlayView) u_pOverlayView = *params->pOverlayView;
    params->_ret = (uint32_t)iface->ReleaseOverlayView( params->pOverlayView ? &u_pOverlayView : nullptr );
    if (params->pOverlayView) *params->pOverlayView = u_pOverlayView;
}

void cppIVROverlayView_IVROverlayView_003_PostOverlayEvent( struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params *params )
{
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VREvent_t_1168 u_pvrEvent;
    if (params->pvrEvent) u_pvrEvent = *params->pvrEvent;
    iface->PostOverlayEvent( params->ulOverlayHandle, params->pvrEvent ? &u_pvrEvent : nullptr );
}

void cppIVROverlayView_IVROverlayView_003_IsViewingPermitted( struct cppIVROverlayView_IVROverlayView_003_IsViewingPermitted_params *params )
{
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    params->_ret = (bool)iface->IsViewingPermitted( params->ulOverlayHandle );
}

