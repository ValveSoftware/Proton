/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_026_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_026_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetProjectionMatrix( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetProjectionMatrix_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_026_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_026_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetProjectionRaw( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetProjectionRaw_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_026_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_026_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_ComputeDistortion( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_ComputeDistortion_params *params = (struct wow64_IVRSystem_IVRSystem_026_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_ComputeDistortionSet( void *args )
{
    struct IVRSystem_IVRSystem_026_ComputeDistortionSet_params *params = (struct IVRSystem_IVRSystem_026_ComputeDistortionSet_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ComputeDistortionSet( params->eEye, params->eChannel, params->bAsNormalizedDeviceCoordinates, params->nNumCoordinates, params->pInput, params->pOutput );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_ComputeDistortionSet( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_ComputeDistortionSet_params *params = (struct wow64_IVRSystem_IVRSystem_026_ComputeDistortionSet_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ComputeDistortionSet( params->eEye, params->eChannel, params->bAsNormalizedDeviceCoordinates, params->nNumCoordinates, params->pInput, params->pOutput );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_026_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_026_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetEyeToHeadTransform( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetEyeToHeadTransform_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_026_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_026_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetTimeSinceLastVsync( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetTimeSinceLastVsync_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_026_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_026_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetD3D9AdapterIndex( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetD3D9AdapterIndex_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_026_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_026_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetDXGIOutputInfo( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetDXGIOutputInfo_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_IsDisplayOnDesktop( void *args )
{
    struct IVRSystem_IVRSystem_026_IsDisplayOnDesktop_params *params = (struct IVRSystem_IVRSystem_026_IsDisplayOnDesktop_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsDisplayOnDesktop(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_IsDisplayOnDesktop( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_IsDisplayOnDesktop_params *params = (struct wow64_IVRSystem_IVRSystem_026_IsDisplayOnDesktop_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsDisplayOnDesktop(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_SetDisplayVisibility( void *args )
{
    struct IVRSystem_IVRSystem_026_SetDisplayVisibility_params *params = (struct IVRSystem_IVRSystem_026_SetDisplayVisibility_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_SetDisplayVisibility( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_SetDisplayVisibility_params *params = (struct wow64_IVRSystem_IVRSystem_026_SetDisplayVisibility_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel( void *args )
{
    struct IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel_params *params = (struct IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceActivityLevel_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_ApplyTransform( void *args )
{
    struct IVRSystem_IVRSystem_026_ApplyTransform_params *params = (struct IVRSystem_IVRSystem_026_ApplyTransform_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_ApplyTransform( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_ApplyTransform_params *params = (struct wow64_IVRSystem_IVRSystem_026_ApplyTransform_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole( void *args )
{
    struct IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole_params *params = (struct IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceIndexForControllerRole_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex( void *args )
{
    struct IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex_params *params = (struct IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetControllerRoleForTrackedDeviceIndex_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_026_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_026_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceClass( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceClass_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_026_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_026_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_IsTrackedDeviceConnected( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_IsTrackedDeviceConnected_params *params = (struct wow64_IVRSystem_IVRSystem_026_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetArrayTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_026_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_026_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_PollNextEvent( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_PollNextEvent_params *params = (struct wow64_IVRSystem_IVRSystem_026_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_026_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_026_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_PollNextEventWithPose( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_PollNextEventWithPose_params *params = (struct wow64_IVRSystem_IVRSystem_026_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays( void *args )
{
    struct IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays_params *params = (struct IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPoseAndOverlays( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose, params->pulOverlayHandle );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays_params *params = (struct wow64_IVRSystem_IVRSystem_026_PollNextEventWithPoseAndOverlays_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VREvent_t_223 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPoseAndOverlays( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose, params->pulOverlayHandle );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_026_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_026_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetHiddenAreaMesh( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetHiddenAreaMesh_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter( void *args )
{
    struct IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter_params *params = (struct IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEyeTrackedFoveationCenter( params->pNdcLeft, params->pNdcRight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenter_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEyeTrackedFoveationCenter( params->pNdcLeft, params->pNdcRight );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection( void *args )
{
    struct IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection_params *params = (struct IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEyeTrackedFoveationCenterForProjection( params->pProjMat, params->pNdc );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetEyeTrackedFoveationCenterForProjection_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetEyeTrackedFoveationCenterForProjection( params->pProjMat, params->pNdc );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_026_GetControllerState_params *params = (struct IVRSystem_IVRSystem_026_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetControllerState( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetControllerState_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_026_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_026_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetControllerStateWithPose( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetControllerStateWithPose_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_026_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_026_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_TriggerHapticPulse( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_TriggerHapticPulse_params *params = (struct wow64_IVRSystem_IVRSystem_026_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_IsInputAvailable( void *args )
{
    struct IVRSystem_IVRSystem_026_IsInputAvailable_params *params = (struct IVRSystem_IVRSystem_026_IsInputAvailable_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsInputAvailable(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_IsInputAvailable( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_IsInputAvailable_params *params = (struct wow64_IVRSystem_IVRSystem_026_IsInputAvailable_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsInputAvailable(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers( void *args )
{
    struct IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers_params *params = (struct IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsSteamVRDrawingControllers(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers_params *params = (struct wow64_IVRSystem_IVRSystem_026_IsSteamVRDrawingControllers_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->IsSteamVRDrawingControllers(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_ShouldApplicationPause( void *args )
{
    struct IVRSystem_IVRSystem_026_ShouldApplicationPause_params *params = (struct IVRSystem_IVRSystem_026_ShouldApplicationPause_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ShouldApplicationPause(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_ShouldApplicationPause( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_ShouldApplicationPause_params *params = (struct wow64_IVRSystem_IVRSystem_026_ShouldApplicationPause_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ShouldApplicationPause(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork( void *args )
{
    struct IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork_params *params = (struct IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ShouldApplicationReduceRenderingWork(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork_params *params = (struct wow64_IVRSystem_IVRSystem_026_ShouldApplicationReduceRenderingWork_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->ShouldApplicationReduceRenderingWork(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_PerformFirmwareUpdate( void *args )
{
    struct IVRSystem_IVRSystem_026_PerformFirmwareUpdate_params *params = (struct IVRSystem_IVRSystem_026_PerformFirmwareUpdate_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_PerformFirmwareUpdate( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_PerformFirmwareUpdate_params *params = (struct wow64_IVRSystem_IVRSystem_026_PerformFirmwareUpdate_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting( void *args )
{
    struct IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting_params *params = (struct IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->AcknowledgeQuit_Exiting(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting_params *params = (struct wow64_IVRSystem_IVRSystem_026_AcknowledgeQuit_Exiting_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    iface->AcknowledgeQuit_Exiting(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetAppContainerFilePaths( void *args )
{
    struct IVRSystem_IVRSystem_026_GetAppContainerFilePaths_params *params = (struct IVRSystem_IVRSystem_026_GetAppContainerFilePaths_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetAppContainerFilePaths( params->pchBuffer, params->unBufferSize );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetAppContainerFilePaths( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetAppContainerFilePaths_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetAppContainerFilePaths_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetAppContainerFilePaths( params->pchBuffer, params->unBufferSize );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_GetRuntimeVersion( void *args )
{
    struct IVRSystem_IVRSystem_026_GetRuntimeVersion_params *params = (struct IVRSystem_IVRSystem_026_GetRuntimeVersion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetRuntimeVersion(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_GetRuntimeVersion( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_GetRuntimeVersion_params *params = (struct wow64_IVRSystem_IVRSystem_026_GetRuntimeVersion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->GetRuntimeVersion(  );
    return 0;
}
#endif

NTSTATUS IVRSystem_IVRSystem_026_SetSDKVersion( void *args )
{
    struct IVRSystem_IVRSystem_026_SetSDKVersion_params *params = (struct IVRSystem_IVRSystem_026_SetSDKVersion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->SetSDKVersion( params->nVersionMajor, params->nVersionMinor, params->nVersionBuild );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRSystem_IVRSystem_026_SetSDKVersion( void *args )
{
    struct wow64_IVRSystem_IVRSystem_026_SetSDKVersion_params *params = (struct wow64_IVRSystem_IVRSystem_026_SetSDKVersion_params *)args;
    struct u_IVRSystem_IVRSystem_026 *iface = (struct u_IVRSystem_IVRSystem_026 *)params->u_iface;
    params->_ret = iface->SetSDKVersion( params->nVersionMajor, params->nVersionMinor, params->nVersionBuild );
    return 0;
}
#endif

