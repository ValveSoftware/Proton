#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_017_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};
extern void cppIVRSystem_IVRSystem_017_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_017_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_017_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_017_GetProjectionRaw( struct cppIVRSystem_IVRSystem_017_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_017_ComputeDistortion_params
{
    void *linux_side;
    bool _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};
extern void cppIVRSystem_IVRSystem_017_ComputeDistortion( struct cppIVRSystem_IVRSystem_017_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_017_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_017_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_017_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_017_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};
extern void cppIVRSystem_IVRSystem_017_GetOutputDevice( struct cppIVRSystem_IVRSystem_017_GetOutputDevice_params *params );

struct cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_017_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_017_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_017_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    uint32_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    uint32_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_017_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_017_ApplyTransform( struct cppIVRSystem_IVRSystem_017_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceType;
};
extern void cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_017_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_017_PollNextEvent( struct cppIVRSystem_IVRSystem_017_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_017_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_1011 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_017_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_017_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};
extern void cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_017_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_1011 *pControllerState;
    uint32_t unControllerStateSize;
};
extern void cppIVRSystem_IVRSystem_017_GetControllerState( struct cppIVRSystem_IVRSystem_017_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_017_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    uint32_t unControllerDeviceIndex;
    winVRControllerState001_t_1011 *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_017_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_017_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_017_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_017_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_017_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_017_CaptureInputFocus_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_017_CaptureInputFocus( struct cppIVRSystem_IVRSystem_017_CaptureInputFocus_params *params );

struct cppIVRSystem_IVRSystem_017_ReleaseInputFocus_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_017_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_017_ReleaseInputFocus_params *params );

struct cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess_params *params );

struct cppIVRSystem_IVRSystem_017_DriverDebugRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    const char *pchRequest;
    char *pchResponseBuffer;
    uint32_t unResponseBufferSize;
};
extern void cppIVRSystem_IVRSystem_017_DriverDebugRequest( struct cppIVRSystem_IVRSystem_017_DriverDebugRequest_params *params );

struct cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt_params *params );

#ifdef __cplusplus
}
#endif
