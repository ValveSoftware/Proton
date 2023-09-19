#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_010_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_010_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_010_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_010_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_010_GetProjectionRaw( struct cppIVRSystem_IVRSystem_010_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_010_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_010_ComputeDistortion( struct cppIVRSystem_IVRSystem_010_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_010_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_010_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_010_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_010_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_010_ApplyTransform( struct cppIVRSystem_IVRSystem_010_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};
extern void cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_010_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    VREvent_t *pEvent;
};
extern void cppIVRSystem_IVRSystem_010_PollNextEvent( struct cppIVRSystem_IVRSystem_010_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_010_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    VREvent_t *pEvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_010_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_010_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_010_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_0914 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_010_GetControllerState( struct cppIVRSystem_IVRSystem_010_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_010_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_0914 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_010_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_010_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_010_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_010_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_010_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_010_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_010_CaptureInputFocus( struct cppIVRSystem_IVRSystem_010_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_010_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_010_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_010_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_010_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_010_DriverDebugRequest( struct cppIVRSystem_IVRSystem_010_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt_params *params );

struct cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture_params
{
    void *linux_side;
    bool bEnable;
};
extern void cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture( struct cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture_params *params );

struct cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange_params
{
    void *linux_side;
    int32_t nFidelityLevel;
};
extern void cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange( struct cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange_params *params );

#ifdef __cplusplus
}
#endif
