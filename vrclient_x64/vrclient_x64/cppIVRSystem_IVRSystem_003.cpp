#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.1/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_003.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_003_GetWindowBounds( struct cppIVRSystem_IVRSystem_003_GetWindowBounds_params *params )
{
    ((IVRSystem*)params->linux_side)->GetWindowBounds((int32_t *)params->pnX, (int32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params *params )
{
    ((IVRSystem*)params->linux_side)->GetRecommendedRenderTargetSize((uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_003_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_003_GetEyeOutputViewport_params *params )
{
    ((IVRSystem*)params->linux_side)->GetEyeOutputViewport((vr::Hmd_Eye)params->eEye, (uint32_t *)params->pnX, (uint32_t *)params->pnY, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRSystem_IVRSystem_003_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_003_GetProjectionMatrix_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetProjectionMatrix((vr::Hmd_Eye)params->eEye, (float)params->fNearZ, (float)params->fFarZ, (vr::GraphicsAPIConvention)params->eProjType);
}

void cppIVRSystem_IVRSystem_003_GetProjectionRaw( struct cppIVRSystem_IVRSystem_003_GetProjectionRaw_params *params )
{
    ((IVRSystem*)params->linux_side)->GetProjectionRaw((vr::Hmd_Eye)params->eEye, (float *)params->pfLeft, (float *)params->pfRight, (float *)params->pfTop, (float *)params->pfBottom);
}

void cppIVRSystem_IVRSystem_003_ComputeDistortion( struct cppIVRSystem_IVRSystem_003_ComputeDistortion_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->ComputeDistortion((vr::Hmd_Eye)params->eEye, (float)params->fU, (float)params->fV);
}

void cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetEyeToHeadTransform((vr::Hmd_Eye)params->eEye);
}

void cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTimeSinceLastVsync((float *)params->pfSecondsSinceLastVsync, (uint64_t *)params->pulFrameCounter);
}

void cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDXGIOutputInfo((int32_t *)params->pnAdapterIndex, (int32_t *)params->pnAdapterOutputIndex);
}

void cppIVRSystem_IVRSystem_003_AttachToWindow( struct cppIVRSystem_IVRSystem_003_AttachToWindow_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->AttachToWindow((void *)params->hWnd);
}

void cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params *params )
{
    ((IVRSystem*)params->linux_side)->GetDeviceToAbsoluteTrackingPose((vr::TrackingUniverseOrigin)params->eOrigin, (float)params->fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)params->pTrackedDevicePoseArray, (uint32_t)params->unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose_params *params )
{
    ((IVRSystem*)params->linux_side)->ResetSeatedZeroPose();
}

void cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

void cppIVRSystem_IVRSystem_003_LoadRenderModel( struct cppIVRSystem_IVRSystem_003_LoadRenderModel_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->LoadRenderModel((const char *)params->pchRenderModelName, struct_RenderModel_t_091_unwrap( params->pRenderModel ));
}

void cppIVRSystem_IVRSystem_003_FreeRenderModel( struct cppIVRSystem_IVRSystem_003_FreeRenderModel_params *params )
{
    ((IVRSystem*)params->linux_side)->FreeRenderModel(struct_RenderModel_t_091_unwrap( params->pRenderModel ));
}

void cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)params->unDeviceIndex);
}

void cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)params->unDeviceIndex, (vr::TrackedDeviceProperty)params->prop, (char *)params->pchValue, (uint32_t)params->unBufferSize, (vr::TrackedPropertyError *)params->pError);
}

void cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetPropErrorNameFromEnum((vr::TrackedPropertyError)params->error);
}

void cppIVRSystem_IVRSystem_003_PollNextEvent( struct cppIVRSystem_IVRSystem_003_PollNextEvent_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEvent((vr::VREvent_t *)params->pEvent);
}

void cppIVRSystem_IVRSystem_003_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_003_PollNextEventWithPose_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->PollNextEventWithPose((vr::TrackingUniverseOrigin)params->eOrigin, (vr::VREvent_t *)params->pEvent, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
}

void cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)params->eType);
}

void cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh_params *params )
{
    *params->_ret = ((IVRSystem*)params->linux_side)->GetHiddenAreaMesh((vr::Hmd_Eye)params->eEye);
}

void cppIVRSystem_IVRSystem_003_GetControllerState( struct cppIVRSystem_IVRSystem_003_GetControllerState_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_091_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr);
    if (params->pControllerState)
        struct_VRControllerState001_t_091_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_003_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_003_GetControllerStateWithPose_params *params )
{
    VRControllerState001_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_091_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerStateWithPose((vr::TrackingUniverseOrigin)params->eOrigin, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, (vr::TrackedDevicePose_t *)params->pTrackedDevicePose);
    if (params->pControllerState)
        struct_VRControllerState001_t_091_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_003_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_003_TriggerHapticPulse_params *params )
{
    ((IVRSystem*)params->linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, (uint32_t)params->unAxisId, (unsigned short)params->usDurationMicroSec);
}

void cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)params->eButtonId);
}

void cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)params->eAxisType);
}

void cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse( struct cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->HandleControllerOverlayInteractionAsMouse(*params->overlaySettings, (vr::HmdVector2_t)params->vecWindowClientPositionOnScreen, (vr::HmdVector2_t)params->vecWindowClientSize, (vr::TrackedDeviceIndex_t)params->unControllerDeviceIndex, (vr::EVRControllerEventOutputType)params->eOutputType);
}

void cppIVRSystem_IVRSystem_003_CaptureInputFocus( struct cppIVRSystem_IVRSystem_003_CaptureInputFocus_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_003_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_003_ReleaseInputFocus_params *params )
{
    ((IVRSystem*)params->linux_side)->ReleaseInputFocus();
}

void cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params *params )
{
    params->_ret = ((IVRSystem*)params->linux_side)->IsInputFocusCapturedByAnotherProcess();
}

#ifdef __cplusplus
}
#endif
