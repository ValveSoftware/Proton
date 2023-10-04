/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_HasCamera( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraIntrinisics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader, params->nFrameHeaderSize );
    return 0;
}

