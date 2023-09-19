#ifdef __cplusplus
extern "C" {
#endif
struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ulOverlayHandle;
    VRNativeDevice_t *pNativeDevice;
    VROverlayView_t *pOverlayView;
    uint32_t unOverlayViewSize;
};
extern void cppIVROverlayView_IVROverlayView_003_AcquireOverlayView( struct cppIVROverlayView_IVROverlayView_003_AcquireOverlayView_params *params );

struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params
{
    void *linux_side;
    uint32_t _ret;
    VROverlayView_t *pOverlayView;
};
extern void cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView( struct cppIVROverlayView_IVROverlayView_003_ReleaseOverlayView_params *params );

struct cppIVROverlayView_IVROverlayView_003_PostOverlayEvent_params
{
    void *linux_side;
    uint64_t ulOverlayHandle;
    const VREvent_t *pvrEvent;
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
}
#endif
