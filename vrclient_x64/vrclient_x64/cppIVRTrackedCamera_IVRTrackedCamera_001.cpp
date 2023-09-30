/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRTrackedCamera_IVRTrackedCamera_001.h"
void cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->HasCamera( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->GetCameraFirmwareDescription( params->nDeviceIndex, params->pBuffer, params->nBufferLen );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->GetCameraFrameDimensions( params->nDeviceIndex, params->nVideoStreamFormat, params->pWidth, params->pHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->SetCameraVideoStreamFormat( params->nDeviceIndex, params->nVideoStreamFormat );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraVideoStreamFormat( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming( struct cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->EnableCameraForStreaming( params->nDeviceIndex, params->bEnable );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->StartVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->StopVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->IsVideoStreamActive( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (float)iface->GetVideoStreamElapsedTime( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (const w_CameraVideoStreamFrame_t_0914 *)iface->GetVideoStreamFrame( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    u_CameraVideoStreamFrame_t_0914 u_pFrameImage;
    if (params->pFrameImage) u_pFrameImage = *params->pFrameImage;
    params->_ret = (bool)iface->ReleaseVideoStreamFrame( params->nDeviceIndex, params->pFrameImage ? &u_pFrameImage : nullptr );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->SetAutoExposure( params->nDeviceIndex, params->bEnable );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->PauseVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->ResumeVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->IsVideoStreamPaused( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->GetCameraDistortion( params->nDeviceIndex, params->flInputU, params->flInputV, params->pflOutputU, params->pflOutputV );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = (bool)iface->GetCameraProjection( params->nDeviceIndex, params->flWidthPixels, params->flHeightPixels, params->flZNear, params->flZFar, params->pProjection );
}

