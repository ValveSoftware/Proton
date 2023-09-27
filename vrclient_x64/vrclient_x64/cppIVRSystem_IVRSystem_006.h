#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_006_GetWindowBounds_params
{
    void *linux_side;
    int32_t *pnX;
    int32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_006_GetWindowBounds( struct cppIVRSystem_IVRSystem_006_GetWindowBounds_params *params );

struct cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_006_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_006_GetEyeOutputViewport_params
{
    void *linux_side;
    Hmd_Eye eEye;
    uint32_t *pnX;
    uint32_t *pnY;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_006_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_006_GetEyeOutputViewport_params *params );

struct cppIVRSystem_IVRSystem_006_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    Hmd_Eye eEye;
    float fNearZ;
    float fFarZ;
    GraphicsAPIConvention eProjType;
};
extern void cppIVRSystem_IVRSystem_006_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_006_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_006_GetProjectionRaw_params
{
    void *linux_side;
    Hmd_Eye eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_006_GetProjectionRaw( struct cppIVRSystem_IVRSystem_006_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_006_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    Hmd_Eye eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_006_ComputeDistortion( struct cppIVRSystem_IVRSystem_006_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    Hmd_Eye eEye;
};
extern void cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_006_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_006_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_006_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
    int32_t *pnAdapterOutputIndex;
};
extern void cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_006_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_006_AttachToWindow_params
{
    void *linux_side;
    bool _ret;
    void *hWnd;
};
extern void cppIVRSystem_IVRSystem_006_AttachToWindow( struct cppIVRSystem_IVRSystem_006_AttachToWindow_params *params );

struct cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    TrackingUniverseOrigin eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_006_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_006_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_006_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_006_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceClass eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_006_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    EDeviceActivityLevel _ret;
    TrackedDeviceIndex_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_006_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass_params
{
    void *linux_side;
    TrackedDeviceClass _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_006_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_006_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    TrackedDeviceProperty prop;
    char *pchValue;
    uint32_t unBufferSize;
    TrackedPropertyError *pError;
};
extern void cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_006_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    TrackedPropertyError error;
};
extern void cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_006_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_006_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    VREvent_t *pEvent;
};
extern void cppIVRSystem_IVRSystem_006_PollNextEvent( struct cppIVRSystem_IVRSystem_006_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_006_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    TrackingUniverseOrigin eOrigin;
    VREvent_t *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_006_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_006_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVREventType eType;
};
extern void cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_006_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    Hmd_Eye eEye;
};
extern void cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_006_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_006_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_0910 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_006_GetControllerState( struct cppIVRSystem_IVRSystem_006_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_006_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    TrackingUniverseOrigin eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_0910 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_006_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_006_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_006_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    unsigned short usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_006_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_006_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRButtonId eButtonId;
};
extern void cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_006_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    EVRControllerAxisType eAxisType;
};
extern void cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_006_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_006_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_006_CaptureInputFocus( struct cppIVRSystem_IVRSystem_006_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_006_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_006_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_006_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_006_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_006_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_006_DriverDebugRequest( struct cppIVRSystem_IVRSystem_006_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate_params
{
    void *linux_side;
    VRFirmwareError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_006_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_006_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_006_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_006_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_006_SetDisplayVisibility_params *params );

#ifdef __cplusplus
}
#endif
