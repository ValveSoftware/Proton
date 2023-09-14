#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_011_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_011_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_011_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_011_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_011_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_011_GetProjectionRaw( struct cppIVRSystem_IVRSystem_011_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_011_ComputeDistortion_params
{
    void *linux_side;
    DistortionCoordinates_t *_ret;
    uint32_t eEye;
    float fU;
    float fV;
};
extern void cppIVRSystem_IVRSystem_011_ComputeDistortion( struct cppIVRSystem_IVRSystem_011_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_011_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_011_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_011_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_011_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_011_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_011_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_011_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_011_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_011_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_011_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_011_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_011_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_011_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_011_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_011_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_011_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_011_ApplyTransform( struct cppIVRSystem_IVRSystem_011_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
    ETrackedControllerRole unDeviceType;
};
extern void cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    ETrackedControllerRole _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_011_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_011_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_011_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_011_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_011_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_011_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_011_PollNextEvent( struct cppIVRSystem_IVRSystem_011_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_011_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_0918 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_011_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_011_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_011_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_011_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_011_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_0918 *pControllerState;
};
extern void cppIVRSystem_IVRSystem_011_GetControllerState( struct cppIVRSystem_IVRSystem_011_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_011_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_0918 *pControllerState;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_011_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_011_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_011_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    unsigned short usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_011_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_011_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_011_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_011_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_011_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_011_CaptureInputFocus( struct cppIVRSystem_IVRSystem_011_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_011_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_011_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_011_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_011_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_011_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_011_DriverDebugRequest( struct cppIVRSystem_IVRSystem_011_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate_params
{
    void *linux_side;
    EVRFirmwareError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_011_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_011_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_011_AcknowledgeQuit_UserPrompt_params *params );

struct cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture_params
{
    void *linux_side;
    bool bEnable;
};
extern void cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture( struct cppIVRSystem_IVRSystem_011_PerformanceTestEnableCapture_params *params );

struct cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange_params
{
    void *linux_side;
    int nFidelityLevel;
};
extern void cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange( struct cppIVRSystem_IVRSystem_011_PerformanceTestReportFidelityLevelChange_params *params );

#ifdef __cplusplus
}
#endif
