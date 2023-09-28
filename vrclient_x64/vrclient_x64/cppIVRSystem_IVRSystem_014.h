#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_014;
struct cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_014_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_014_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
    uint32_t eProjType;
};
extern void cppIVRSystem_IVRSystem_014_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_014_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_014_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_014_GetProjectionRaw( struct cppIVRSystem_IVRSystem_014_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_014_ComputeDistortion_params
{
    void *linux_side;
    bool _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};
extern void cppIVRSystem_IVRSystem_014_ComputeDistortion( struct cppIVRSystem_IVRSystem_014_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_014_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_014_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_014_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_014_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_014_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_014_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_014_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_014_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_014_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_014_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_014_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_014_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_014_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_014_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_014_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_014_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_014_ApplyTransform( struct cppIVRSystem_IVRSystem_014_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};
extern void cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_014_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_014_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_014_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_014_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_014_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_014_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_104 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_014_PollNextEvent( struct cppIVRSystem_IVRSystem_014_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_014_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_104 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_014_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_014_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_014_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};
extern void cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_014_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_014_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_104 *pControllerState;
    uint32_t unControllerStateSize;
};
extern void cppIVRSystem_IVRSystem_014_GetControllerState( struct cppIVRSystem_IVRSystem_014_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_014_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_104 *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_014_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_014_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_014_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_014_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_014_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_014_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_014_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_014_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_014_CaptureInputFocus( struct cppIVRSystem_IVRSystem_014_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_014_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_014_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_014_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_014_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_014_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_014_DriverDebugRequest( struct cppIVRSystem_IVRSystem_014_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_014_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_014_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_014_AcknowledgeQuit_UserPrompt_params *params );

#ifdef __cplusplus
}
#endif
