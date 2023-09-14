#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params
{
    void *linux_side;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params *params );

struct cppIVRSystem_IVRSystem_020_GetProjectionMatrix_params
{
    void *linux_side;
    HmdMatrix44_t *_ret;
    uint32_t eEye;
    float fNearZ;
    float fFarZ;
};
extern void cppIVRSystem_IVRSystem_020_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_020_GetProjectionMatrix_params *params );

struct cppIVRSystem_IVRSystem_020_GetProjectionRaw_params
{
    void *linux_side;
    uint32_t eEye;
    float *pfLeft;
    float *pfRight;
    float *pfTop;
    float *pfBottom;
};
extern void cppIVRSystem_IVRSystem_020_GetProjectionRaw( struct cppIVRSystem_IVRSystem_020_GetProjectionRaw_params *params );

struct cppIVRSystem_IVRSystem_020_ComputeDistortion_params
{
    void *linux_side;
    bool _ret;
    uint32_t eEye;
    float fU;
    float fV;
    DistortionCoordinates_t *pDistortionCoordinates;
};
extern void cppIVRSystem_IVRSystem_020_ComputeDistortion( struct cppIVRSystem_IVRSystem_020_ComputeDistortion_params *params );

struct cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    uint32_t eEye;
};
extern void cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_020_GetEyeToHeadTransform_params *params );

struct cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params
{
    void *linux_side;
    bool _ret;
    float *pfSecondsSinceLastVsync;
    uint64_t *pulFrameCounter;
};
extern void cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params *params );

struct cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params *params );

struct cppIVRSystem_IVRSystem_020_GetDXGIOutputInfo_params
{
    void *linux_side;
    int32_t *pnAdapterIndex;
};
extern void cppIVRSystem_IVRSystem_020_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_020_GetDXGIOutputInfo_params *params );

struct cppIVRSystem_IVRSystem_020_GetOutputDevice_params
{
    void *linux_side;
    uint64_t *pnDevice;
    uint32_t textureType;
    VkInstance_T *pInstance;
};
extern void cppIVRSystem_IVRSystem_020_GetOutputDevice( struct cppIVRSystem_IVRSystem_020_GetOutputDevice_params *params );

struct cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_020_IsDisplayOnDesktop_params *params );

struct cppIVRSystem_IVRSystem_020_SetDisplayVisibility_params
{
    void *linux_side;
    bool _ret;
    bool bIsVisibleOnDesktop;
};
extern void cppIVRSystem_IVRSystem_020_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_020_SetDisplayVisibility_params *params );

struct cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params
{
    void *linux_side;
    uint32_t eOrigin;
    float fPredictedSecondsToPhotonsFromNow;
    TrackedDevicePose_t *pTrackedDevicePoseArray;
    uint32_t unTrackedDevicePoseArrayCount;
};
extern void cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_020_ResetSeatedZeroPose_params *params );

struct cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
};
extern void cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params );

struct cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eTrackedDeviceClass;
    TrackedDeviceIndex_t *punTrackedDeviceIndexArray;
    uint32_t unTrackedDeviceIndexArrayCount;
    TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params *params );

struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceId;
};
extern void cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params *params );

struct cppIVRSystem_IVRSystem_020_ApplyTransform_params
{
    void *linux_side;
    TrackedDevicePose_t *pOutputPose;
    const TrackedDevicePose_t *pTrackedDevicePose;
    const HmdMatrix34_t *pTransform;
};
extern void cppIVRSystem_IVRSystem_020_ApplyTransform( struct cppIVRSystem_IVRSystem_020_ApplyTransform_params *params );

struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params
{
    void *linux_side;
    TrackedDeviceIndex_t _ret;
    ETrackedControllerRole unDeviceType;
};
extern void cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params *params );

struct cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params
{
    void *linux_side;
    ETrackedControllerRole _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params *params );

struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_020_GetTrackedDeviceClass_params *params );

struct cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params *params );

struct cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params
{
    void *linux_side;
    float _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params
{
    void *linux_side;
    int32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params
{
    void *linux_side;
    uint64_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params
{
    void *linux_side;
    HmdMatrix34_t *_ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    PropertyTypeTag_t propType;
    void *pBuffer;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDeviceIndex_t unDeviceIndex;
    uint32_t prop;
    char *pchValue;
    uint32_t unBufferSize;
    uint32_t *pError;
};
extern void cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params *params );

struct cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_020_PollNextEvent_params
{
    void *linux_side;
    bool _ret;
    winVREvent_t_1715 *pEvent;
    uint32_t uncbVREvent;
};
extern void cppIVRSystem_IVRSystem_020_PollNextEvent( struct cppIVRSystem_IVRSystem_020_PollNextEvent_params *params );

struct cppIVRSystem_IVRSystem_020_PollNextEventWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    winVREvent_t_1715 *pEvent;
    uint32_t uncbVREvent;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_020_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_020_PollNextEventWithPose_params *params );

struct cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eType;
};
extern void cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh_params
{
    void *linux_side;
    HiddenAreaMesh_t *_ret;
    uint32_t eEye;
    uint32_t type;
};
extern void cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_020_GetHiddenAreaMesh_params *params );

struct cppIVRSystem_IVRSystem_020_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_1715 *pControllerState;
    uint32_t unControllerStateSize;
};
extern void cppIVRSystem_IVRSystem_020_GetControllerState( struct cppIVRSystem_IVRSystem_020_GetControllerState_params *params );

struct cppIVRSystem_IVRSystem_020_GetControllerStateWithPose_params
{
    void *linux_side;
    bool _ret;
    uint32_t eOrigin;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    winVRControllerState001_t_1715 *pControllerState;
    uint32_t unControllerStateSize;
    TrackedDevicePose_t *pTrackedDevicePose;
};
extern void cppIVRSystem_IVRSystem_020_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_020_GetControllerStateWithPose_params *params );

struct cppIVRSystem_IVRSystem_020_TriggerHapticPulse_params
{
    void *linux_side;
    TrackedDeviceIndex_t unControllerDeviceIndex;
    uint32_t unAxisId;
    uint16_t usDurationMicroSec;
};
extern void cppIVRSystem_IVRSystem_020_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_020_TriggerHapticPulse_params *params );

struct cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eButtonId;
};
extern void cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eAxisType;
};
extern void cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params *params );

struct cppIVRSystem_IVRSystem_020_IsInputAvailable_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_020_IsInputAvailable( struct cppIVRSystem_IVRSystem_020_IsInputAvailable_params *params );

struct cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers( struct cppIVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params *params );

struct cppIVRSystem_IVRSystem_020_ShouldApplicationPause_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_020_ShouldApplicationPause( struct cppIVRSystem_IVRSystem_020_ShouldApplicationPause_params *params );

struct cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork( struct cppIVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params *params );

struct cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate_params
{
    void *linux_side;
    EVRFirmwareError _ret;
    TrackedDeviceIndex_t unDeviceIndex;
};
extern void cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_020_PerformFirmwareUpdate_params *params );

struct cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params *params );

struct cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params
{
    void *linux_side;
};
extern void cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params *params );

struct cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths_params
{
    void *linux_side;
    uint32_t _ret;
    char *pchBuffer;
    uint32_t unBufferSize;
};
extern void cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths( struct cppIVRSystem_IVRSystem_020_GetAppContainerFilePaths_params *params );

struct cppIVRSystem_IVRSystem_020_GetRuntimeVersion_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppIVRSystem_IVRSystem_020_GetRuntimeVersion( struct cppIVRSystem_IVRSystem_020_GetRuntimeVersion_params *params );

#ifdef __cplusplus
}
#endif
