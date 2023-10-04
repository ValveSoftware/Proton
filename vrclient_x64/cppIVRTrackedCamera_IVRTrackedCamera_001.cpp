/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_HasCamera( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraFirmwareDescription( params->nDeviceIndex, params->pBuffer, params->nBufferLen );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraFrameDimensions( params->nDeviceIndex, params->nVideoStreamFormat, params->pWidth, params->pHeight );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->SetCameraVideoStreamFormat( params->nDeviceIndex, params->nVideoStreamFormat );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraVideoStreamFormat( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->EnableCameraForStreaming( params->nDeviceIndex, params->bEnable );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->StartVideoStream( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->StopVideoStream( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->IsVideoStreamActive( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetVideoStreamElapsedTime( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    u_CameraVideoStreamFrame_t_0914 u_pFrameImage;
    if (params->pFrameImage) u_pFrameImage = *params->pFrameImage;
    params->_ret = iface->ReleaseVideoStreamFrame( params->nDeviceIndex, params->pFrameImage ? &u_pFrameImage : nullptr );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->SetAutoExposure( params->nDeviceIndex, params->bEnable );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->PauseVideoStream( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->ResumeVideoStream( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->IsVideoStreamPaused( params->nDeviceIndex );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraDistortion( params->nDeviceIndex, params->flInputU, params->flInputV, params->pflOutputU, params->pflOutputV );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->flWidthPixels, params->flHeightPixels, params->flZNear, params->flZFar, params->pProjection );
    return 0;
}

