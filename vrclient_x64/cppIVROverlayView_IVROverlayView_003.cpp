/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlayView_IVROverlayView_003_AcquireOverlayView( void *args )
{
    struct IVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params = (struct IVROverlayView_IVROverlayView_003_AcquireOverlayView_params *)args;
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VROverlayView_t u_pOverlayView;
    if (params->pOverlayView) u_pOverlayView = *params->pOverlayView;
    params->_ret = iface->AcquireOverlayView( params->ulOverlayHandle, params->pNativeDevice, params->pOverlayView ? &u_pOverlayView : nullptr, params->unOverlayViewSize );
    if (params->pOverlayView) *params->pOverlayView = u_pOverlayView;
    return 0;
}

NTSTATUS IVROverlayView_IVROverlayView_003_ReleaseOverlayView( void *args )
{
    struct IVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params = (struct IVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *)args;
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VROverlayView_t u_pOverlayView;
    if (params->pOverlayView) u_pOverlayView = *params->pOverlayView;
    params->_ret = iface->ReleaseOverlayView( params->pOverlayView ? &u_pOverlayView : nullptr );
    if (params->pOverlayView) *params->pOverlayView = u_pOverlayView;
    return 0;
}

NTSTATUS IVROverlayView_IVROverlayView_003_PostOverlayEvent( void *args )
{
    struct IVROverlayView_IVROverlayView_003_PostOverlayEvent_params *params = (struct IVROverlayView_IVROverlayView_003_PostOverlayEvent_params *)args;
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    u_VREvent_t_1168 u_pvrEvent;
    if (params->pvrEvent) u_pvrEvent = *params->pvrEvent;
    iface->PostOverlayEvent( params->ulOverlayHandle, params->pvrEvent ? &u_pvrEvent : nullptr );
    return 0;
}

NTSTATUS IVROverlayView_IVROverlayView_003_IsViewingPermitted( void *args )
{
    struct IVROverlayView_IVROverlayView_003_IsViewingPermitted_params *params = (struct IVROverlayView_IVROverlayView_003_IsViewingPermitted_params *)args;
    struct u_IVROverlayView_IVROverlayView_003 *iface = (struct u_IVROverlayView_IVROverlayView_003 *)params->linux_side;
    params->_ret = iface->IsViewingPermitted( params->ulOverlayHandle );
    return 0;
}

