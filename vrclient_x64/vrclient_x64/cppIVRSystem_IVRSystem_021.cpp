/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSystem_IVRSystem_021.h"
struct u_IVRSystem_IVRSystem_021
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual bool ComputeDistortion( uint32_t, float, float, DistortionCoordinates_t * ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual void GetOutputDevice( uint64_t *, uint32_t, VkInstance_T * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetArrayTrackedDeviceProperty( uint32_t, uint32_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( u_VREvent_t_11030 *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, u_VREvent_t_11030 *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual u_HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t, uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, u_VRControllerState001_t *, uint32_t ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, u_VRControllerState001_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool IsInputAvailable(  ) = 0;
    virtual bool IsSteamVRDrawingControllers(  ) = 0;
    virtual bool ShouldApplicationPause(  ) = 0;
    virtual bool ShouldApplicationReduceRenderingWork(  ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual uint32_t GetAppContainerFilePaths( char *, uint32_t ) = 0;
    virtual const char * GetRuntimeVersion(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_021_GetRecommendedRenderTargetSize_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_021_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_021_GetProjectionMatrix_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
}

void cppIVRSystem_IVRSystem_021_GetProjectionRaw( struct cppIVRSystem_IVRSystem_021_GetProjectionRaw_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_021_ComputeDistortion( struct cppIVRSystem_IVRSystem_021_ComputeDistortion_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
}

void cppIVRSystem_IVRSystem_021_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_021_GetEyeToHeadTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_021_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_021_GetTimeSinceLastVsync_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_021_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_021_GetD3D9AdapterIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_021_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_021_GetDXGIOutputInfo_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
}

void cppIVRSystem_IVRSystem_021_GetOutputDevice( struct cppIVRSystem_IVRSystem_021_GetOutputDevice_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->GetOutputDevice( params->pnDevice, params->textureType, params->pInstance );
}

void cppIVRSystem_IVRSystem_021_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_021_IsDisplayOnDesktop_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->IsDisplayOnDesktop(  );
}

void cppIVRSystem_IVRSystem_021_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_021_SetDisplayVisibility_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
}

void cppIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_021_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_021_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_021_ResetSeatedZeroPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_021_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_021_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_021_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_021_GetTrackedDeviceActivityLevel_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
}

void cppIVRSystem_IVRSystem_021_ApplyTransform( struct cppIVRSystem_IVRSystem_021_ApplyTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
}

void cppIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_021_GetTrackedDeviceIndexForControllerRole_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
}

void cppIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_021_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_021_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_021_GetTrackedDeviceClass_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_021_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_021_IsTrackedDeviceConnected_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetBoolTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetFloatTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetInt32TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetUint64TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetArrayTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_021_GetStringTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_021_GetPropErrorNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_021_PollNextEvent( struct cppIVRSystem_IVRSystem_021_PollNextEvent_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    u_VREvent_t_11030 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_021_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_021_PollNextEventWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    u_VREvent_t_11030 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_021_GetEventTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_021_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_021_GetHiddenAreaMesh_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
}

void cppIVRSystem_IVRSystem_021_GetControllerState( struct cppIVRSystem_IVRSystem_021_GetControllerState_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_021_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_021_GetControllerStateWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_021_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_021_TriggerHapticPulse_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_021_GetButtonIdNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_021_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_021_IsInputAvailable( struct cppIVRSystem_IVRSystem_021_IsInputAvailable_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->IsInputAvailable(  );
}

void cppIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers( struct cppIVRSystem_IVRSystem_021_IsSteamVRDrawingControllers_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->IsSteamVRDrawingControllers(  );
}

void cppIVRSystem_IVRSystem_021_ShouldApplicationPause( struct cppIVRSystem_IVRSystem_021_ShouldApplicationPause_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationPause(  );
}

void cppIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork( struct cppIVRSystem_IVRSystem_021_ShouldApplicationReduceRenderingWork_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationReduceRenderingWork(  );
}

void cppIVRSystem_IVRSystem_021_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_021_PerformFirmwareUpdate_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformFirmwareUpdate( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_021_AcknowledgeQuit_Exiting_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
}

void cppIVRSystem_IVRSystem_021_GetAppContainerFilePaths( struct cppIVRSystem_IVRSystem_021_GetAppContainerFilePaths_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetAppContainerFilePaths( params->pchBuffer, params->unBufferSize );
}

void cppIVRSystem_IVRSystem_021_GetRuntimeVersion( struct cppIVRSystem_IVRSystem_021_GetRuntimeVersion_params *params )
{
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    params->_ret = (const char *)iface->GetRuntimeVersion(  );
}

