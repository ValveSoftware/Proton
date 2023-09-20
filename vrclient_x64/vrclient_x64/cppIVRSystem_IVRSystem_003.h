#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_003;
struct cppIVRSystem_IVRSystem_003_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_003_GetWindowBounds( struct cppIVRSystem_IVRSystem_003_GetWindowBounds_params *params );

struct cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_003_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_003_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_003_GetEyeOutputViewport_params *params );

struct cppIVRSystem_IVRSystem_003_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_003_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_003_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_003_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_003_GetProjectionRaw( struct cppIVRSystem_IVRSystem_003_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_003_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_003_ComputeDistortion( struct cppIVRSystem_IVRSystem_003_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};
extern void cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_003_AttachToWindow_params
{
    void *linux_side;
    bool _ret;
    void *hWnd;
};
extern void cppIVRSystem_IVRSystem_003_AttachToWindow( struct cppIVRSystem_IVRSystem_003_AttachToWindow_params *params );

struct cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_003_LoadRenderModel_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    winRenderModel_t_091 *pRenderModel;
};
extern void cppIVRSystem_IVRSystem_003_LoadRenderModel( struct cppIVRSystem_IVRSystem_003_LoadRenderModel_params *params );

struct cppIVRSystem_IVRSystem_003_FreeRenderModel_params
{
    void *linux_side;
    winRenderModel_t_091 *pRenderModel;
};
extern void cppIVRSystem_IVRSystem_003_FreeRenderModel( struct cppIVRSystem_IVRSystem_003_FreeRenderModel_params *params );

struct cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_003_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_091 *pEvent;
};
extern void cppIVRSystem_IVRSystem_003_PollNextEvent( struct cppIVRSystem_IVRSystem_003_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_003_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_091 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_003_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_003_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_003_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_091 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_003_GetControllerState( struct cppIVRSystem_IVRSystem_003_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_003_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_091 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_003_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_003_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_003_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_003_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_003_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params
{
    void *linux_side;
    bool _ret;
    const Compositor_OverlaySettings *overlaySettings;
    HmdVector2_t vecWindowClientPositionOnScreen;
    HmdVector2_t vecWindowClientSize;
    uint32_t unControllerDeviceIndex;
    uint32_t eOutputType;
};
extern void cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse( struct cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params *params );

struct cppIVRSystem_IVRSystem_003_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_003_CaptureInputFocus( struct cppIVRSystem_IVRSystem_003_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_003_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_003_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_003_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params *params );

#ifdef __cplusplus
}
#endif
