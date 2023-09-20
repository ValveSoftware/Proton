#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_004;
struct cppIVRSystem_IVRSystem_004_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_004_GetWindowBounds( struct cppIVRSystem_IVRSystem_004_GetWindowBounds_params *params );

struct cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_004_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_004_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_004_GetEyeOutputViewport_params *params );

struct cppIVRSystem_IVRSystem_004_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_004_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_004_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_004_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_004_GetProjectionRaw( struct cppIVRSystem_IVRSystem_004_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_004_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_004_ComputeDistortion( struct cppIVRSystem_IVRSystem_004_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};
extern void cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_004_AttachToWindow_params
{
    void *linux_side;
    bool _ret;
    void *hWnd;
};
extern void cppIVRSystem_IVRSystem_004_AttachToWindow( struct cppIVRSystem_IVRSystem_004_AttachToWindow_params *params );

struct cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_004_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_092 *pEvent;
};
extern void cppIVRSystem_IVRSystem_004_PollNextEvent( struct cppIVRSystem_IVRSystem_004_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_004_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_092 *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_004_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_004_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_004_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_092 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_004_GetControllerState( struct cppIVRSystem_IVRSystem_004_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_004_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_092 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_004_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_004_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_004_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_004_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_004_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_004_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_004_CaptureInputFocus( struct cppIVRSystem_IVRSystem_004_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_004_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_004_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_004_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_004_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_004_DriverDebugRequest( struct cppIVRSystem_IVRSystem_004_DriverDebugRequest_params *params );

#ifdef __cplusplus
}
#endif
