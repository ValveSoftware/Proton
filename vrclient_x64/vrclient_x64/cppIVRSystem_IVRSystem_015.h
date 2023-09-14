#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_015_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};
extern void cppIVRSystem_IVRSystem_015_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_015_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_015_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_015_GetProjectionRaw( struct cppIVRSystem_IVRSystem_015_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_015_ComputeDistortion_params
{
    void *linux_side;
    bool _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};
extern void cppIVRSystem_IVRSystem_015_ComputeDistortion( struct cppIVRSystem_IVRSystem_015_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_015_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_015_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_015_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_015_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_015_ApplyTransform( struct cppIVRSystem_IVRSystem_015_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
    ETrackedControllerRole unDeviceType;
};
extern void cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    ETrackedControllerRole _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_015_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_107 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_015_PollNextEvent( struct cppIVRSystem_IVRSystem_015_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_015_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_107 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_015_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_015_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};
extern void cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_015_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_107 *pControllerState;
    uint32_t unControllerStateSize;
};
extern void cppIVRSystem_IVRSystem_015_GetControllerState( struct cppIVRSystem_IVRSystem_015_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_015_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_107 *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_015_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_015_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_015_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    unsigned short usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_015_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_015_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_015_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_015_CaptureInputFocus( struct cppIVRSystem_IVRSystem_015_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_015_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_015_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_015_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_015_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_015_DriverDebugRequest( struct cppIVRSystem_IVRSystem_015_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate_params
{
    void *linux_side;
    EVRFirmwareError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt_params *params );

#ifdef __cplusplus
}
#endif
