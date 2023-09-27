#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_010.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_010_GetRecommendedRenderTargetSize_params *params )
{
    ((IVRSystem*)params->linux_side)->GetRecommendedRenderTargetSize((uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_010_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_010_GetProjectionMatrix_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetProjectionMatrix((vr::EVREye)params->eEye, (float)params->fNearZ, (float)params->fFarZ, (vr::EGraphicsAPIConvention)params->eProjType);
}

void cppIVRSystem_IVRSystem_010_GetProjectionRaw( struct cppIVRSystem_IVRSystem_010_GetProjectionRaw_params *params )
{
    ((IVRSystem*)params->linux_side)->GetProjectionRaw((vr::EVREye)params->eEye, (float *)params->pfLeft, (float *)params->pfRight, (float *)params->pfTop, (float *)params->pfBottom);
}

void cppIVRSystem_IVRSystem_010_ComputeDistortion( struct cppIVRSystem_IVRSystem_010_ComputeDistortion_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->ComputeDistortion((vr::EVREye)params->eEye, (float)params->fU, (float)params->fV);
}

void cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_010_GetEyeToHeadTransform_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetEyeToHeadTransform((vr::EVREye)params->eEye);
}

void cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_010_GetTimeSinceLastVsync_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTimeSinceLastVsync((float *)params->pfSecondsSinceLastVsync, (uint64_t *)params->pulFrameCounter);
}

void cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_010_GetD3D9AdapterIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_010_GetDXGIOutputInfo_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDXGIOutputInfo((int32_t *)params->pnAdapterIndex);
}

void cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_010_IsDisplayOnDesktop_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsDisplayOnDesktop();
}

void cppIVRSystem_IVRSystem_010_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_010_SetDisplayVisibility_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->SetDisplayVisibility((bool)params->bIsVisibleOnDesktop);
}

void cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetDeviceToAbsoluteTrackingPose_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)params->pTrackedDevicePoseArray, (uint32_t)params->unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_010_ResetSeatedZeroPose_params *params )
{
    ((IVRSystem*)params->linux_side)->ResetSeatedZeroPose();
}

void cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_010_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_010_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)params->eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)params->punTrackedDeviceIndexArray, (uint32_t)params->unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)params->unRelativeToTrackedDeviceIndex);
}

void cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceActivityLevel_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)params->unDeviceId);
}

void cppIVRSystem_IVRSystem_010_ApplyTransform( struct cppIVRSystem_IVRSystem_010_ApplyTransform_params *params )
{
    ((IVRSystem*)params->linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)params->pOutputPose, (const vr::TrackedDevicePose_t *)params->pTrackedDevicePose, (const vr::HmdMatrix34_t *)params->pTransform);
}

void cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceIndexForControllerRole_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)params->unDeviceType);
}

void cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_010_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_010_GetTrackedDeviceClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_010_IsTrackedDeviceConnected_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetBoolTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetFloatTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetInt32TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetUint64TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetMatrix34TrackedDeviceProperty_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_010_GetStringTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::ETrackedDeviceProperty)params->prop, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::ETrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetPropErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)params->error);
}

void cppIVRSystem_IVRSystem_010_PollNextEvent( struct cppIVRSystem_IVRSystem_010_PollNextEvent_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEvent((vr::VREvent_t *)params->pEvent);
}

void cppIVRSystem_IVRSystem_010_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_010_PollNextEventWithPose_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)params->eOrigin, (vr::VREvent_t *)params->pEvent, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
}

void cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetEventTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)params->eType);
}

void cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_010_GetHiddenAreaMesh_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetHiddenAreaMesh((vr::EVREye)params->eEye);
}

void cppIVRSystem_IVRSystem_010_GetControllerState( struct cppIVRSystem_IVRSystem_010_GetControllerState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0914_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr);
    if (params->pControllerState)
        struct_VRControllerState001_t_0914_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_010_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_010_GetControllerStateWithPose_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_0914_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)params->eOrigin, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
    if (params->pControllerState)
        struct_VRControllerState001_t_0914_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_010_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_010_TriggerHapticPulse_params *params )
{
    ((IVRSystem*)params->linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, (uint32_t)params->unAxisId, (unsigned short)params->usDurationMicroSec);
}

void cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetButtonIdNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)params->eButtonId);
}

void cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_010_GetControllerAxisTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)params->eAxisType);
}

void cppIVRSystem_IVRSystem_010_CaptureInputFocus( struct cppIVRSystem_IVRSystem_010_CaptureInputFocus_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_010_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_010_ReleaseInputFocus_params *params )
{
    ((IVRSystem*)params->linux_side)->ReleaseInputFocus();
}

void cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_010_IsInputFocusCapturedByAnotherProcess_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsInputFocusCapturedByAnotherProcess();
}

void cppIVRSystem_IVRSystem_010_DriverDebugRequest( struct cppIVRSystem_IVRSystem_010_DriverDebugRequest_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchRequest, (char *)params->pchResponseBuffer, (uint32_t)params->unResponseBufferSize);
}

void cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_010_PerformFirmwareUpdate_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_Exiting_params *params )
{
    ((IVRSystem*)params->linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_010_AcknowledgeQuit_UserPrompt_params *params )
{
    ((IVRSystem*)params->linux_side)->AcknowledgeQuit_UserPrompt();
}

void cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture( struct cppIVRSystem_IVRSystem_010_PerformanceTestEnableCapture_params *params )
{
    ((IVRSystem*)params->linux_side)->PerformanceTestEnableCapture((bool)params->bEnable);
}

void cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange( struct cppIVRSystem_IVRSystem_010_PerformanceTestReportFidelityLevelChange_params *params )
{
    ((IVRSystem*)params->linux_side)->PerformanceTestReportFidelityLevelChange((int)params->nFidelityLevel);
}

#ifdef __cplusplus
}
#endif
