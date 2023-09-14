#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_005_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_005_GetWindowBounds( struct cppIVRSystem_IVRSystem_005_GetWindowBounds_params *params );

struct cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_005_GetEyeOutputViewport_params
{
    void *linux_side;
    uint32_t eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_005_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_005_GetEyeOutputViewport_params *params );

struct cppIVRSystem_IVRSystem_005_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_005_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_005_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_005_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_005_GetProjectionRaw( struct cppIVRSystem_IVRSystem_005_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_005_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_005_ComputeDistortion( struct cppIVRSystem_IVRSystem_005_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};
extern void cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_005_AttachToWindow_params
{
    void *linux_side;
    bool _ret;
    void *hWnd;
};
extern void cppIVRSystem_IVRSystem_005_AttachToWindow( struct cppIVRSystem_IVRSystem_005_AttachToWindow_params *params );

struct cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_005_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    VREvent_t *pEvent;
};
extern void cppIVRSystem_IVRSystem_005_PollNextEvent( struct cppIVRSystem_IVRSystem_005_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_005_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    VREvent_t *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_005_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_005_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_005_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_098 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_005_GetControllerState( struct cppIVRSystem_IVRSystem_005_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_005_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_098 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_005_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_005_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_005_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    unsigned short usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_005_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_005_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_005_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_005_CaptureInputFocus( struct cppIVRSystem_IVRSystem_005_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_005_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_005_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_005_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_005_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_005_DriverDebugRequest( struct cppIVRSystem_IVRSystem_005_DriverDebugRequest_params *params );

#ifdef __cplusplus
}
#endif
