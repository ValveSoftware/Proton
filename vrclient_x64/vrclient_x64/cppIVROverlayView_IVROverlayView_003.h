/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    w_VRNativeDevice_t *pNativeDevice;
    w_VROverlayView_t *pOverlayView;
    uint32_t unOverlayViewSize;
};
extern void cppIVROverlayView_IVROverlayView_003_AcquireOverlayView( struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params );

struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    w_VROverlayView_t *pOverlayView;
};
extern void cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView( struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params );

struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    const w_VREvent_t_1168 *pvrEvent;
};
extern void cppIVROverlayView_IVROverlayView_003_PostOverlayEvent( struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params *params );

struct cppIVROverlayView_IVROverlayView_003_IsViewingPermitted_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulOverlayHandle;
};
extern void cppIVROverlayView_IVROverlayView_003_IsViewingPermitted( struct cppIVROverlayView_IVROverlayView_003_IsViewingPermitted_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
