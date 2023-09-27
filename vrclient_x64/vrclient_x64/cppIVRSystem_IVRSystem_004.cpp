#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_004.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_004_GetWindowBounds( struct cppIVRSystem_IVRSystem_004_GetWindowBounds_params *params )
{
    ((IVRSystem*)params->linux_side)->GetWindowBounds((int32_t *)params->pnX, (int32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params *params )
{
    ((IVRSystem*)params->linux_side)->GetRecommendedRenderTargetSize((uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_004_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_004_GetEyeOutputViewport_params *params )
{
    ((IVRSystem*)params->linux_side)->GetEyeOutputViewport((vr::Hmd_Eye)params->eEye, (uint32_t *)params->pnX, (uint32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_004_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_004_GetProjectionMatrix_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetProjectionMatrix((vr::Hmd_Eye)params->eEye, (float)params->fNearZ, (float)params->fFarZ, (vr::GraphicsAPIConvention)params->eProjType);
}

void cppIVRSystem_IVRSystem_004_GetProjectionRaw( struct cppIVRSystem_IVRSystem_004_GetProjectionRaw_params *params )
{
    ((IVRSystem*)params->linux_side)->GetProjectionRaw((vr::Hmd_Eye)params->eEye, (float *)params->pfLeft, (float *)params->pfRight, (float *)params->pfTop, (float *)params->pfBottom);
}

void cppIVRSystem_IVRSystem_004_ComputeDistortion( struct cppIVRSystem_IVRSystem_004_ComputeDistortion_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->ComputeDistortion((vr::Hmd_Eye)params->eEye, (float)params->fU, (float)params->fV);
}

void cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetEyeToHeadTransform((vr::Hmd_Eye)params->eEye);
}

void cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTimeSinceLastVsync((float *)params->pfSecondsSinceLastVsync, (uint64_t *)params->pulFrameCounter);
}

void cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDXGIOutputInfo((int32_t *)params->pnAdapterIndex, (int32_t *)params->pnAdapterOutputIndex);
}

void cppIVRSystem_IVRSystem_004_AttachToWindow( struct cppIVRSystem_IVRSystem_004_AttachToWindow_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->AttachToWindow((void *)params->hWnd);
}

void cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDeviceToAbsoluteTrackingPose((vr::TrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)params->pTrackedDevicePoseArray, (uint32_t)params->unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose_params *params )
{
    ((IVRSystem*)params->linux_side)->ResetSeatedZeroPose();
}

void cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetPropErrorNameFromEnum((vr::TrackedPropertyError)params->error);
}

void cppIVRSystem_IVRSystem_004_PollNextEvent( struct cppIVRSystem_IVRSystem_004_PollNextEvent_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEvent((vr::VREvent_t *)params->pEvent);
}

void cppIVRSystem_IVRSystem_004_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_004_PollNextEventWithPose_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEventWithPose((vr::TrackingUniverseOrigin)params->eOrigin, (vr::VREvent_t *)params->pEvent, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
}

void cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)params->eType);
}

void cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetHiddenAreaMesh((vr::Hmd_Eye)params->eEye);
}

void cppIVRSystem_IVRSystem_004_GetControllerState( struct cppIVRSystem_IVRSystem_004_GetControllerState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_092_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr);
    if (params->pControllerState)
        struct_VRControllerState001_t_092_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_004_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_004_GetControllerStateWithPose_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_092_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerStateWithPose((vr::TrackingUniverseOrigin)params->eOrigin, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
    if (params->pControllerState)
        struct_VRControllerState001_t_092_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_004_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_004_TriggerHapticPulse_params *params )
{
    ((IVRSystem*)params->linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, (uint32_t)params->unAxisId, (unsigned short)params->usDurationMicroSec);
}

void cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)params->eButtonId);
}

void cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)params->eAxisType);
}

void cppIVRSystem_IVRSystem_004_CaptureInputFocus( struct cppIVRSystem_IVRSystem_004_CaptureInputFocus_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_004_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_004_ReleaseInputFocus_params *params )
{
    ((IVRSystem*)params->linux_side)->ReleaseInputFocus();
}

void cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsInputFocusCapturedByAnotherProcess();
}

void cppIVRSystem_IVRSystem_004_DriverDebugRequest( struct cppIVRSystem_IVRSystem_004_DriverDebugRequest_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (const char *)params->pchRequest, (char *)params->pchResponseBuffer, (uint32_t)params->unResponseBufferSize);
}

#ifdef __cplusplus
}
#endif
