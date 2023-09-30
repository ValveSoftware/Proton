/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRTrackedCamera_IVRTrackedCamera_002.h"
void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (const char *)iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraIntrinisics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader, params->nFrameHeaderSize );
}

