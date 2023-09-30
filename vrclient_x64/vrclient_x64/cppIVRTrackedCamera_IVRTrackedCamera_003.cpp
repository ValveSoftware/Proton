/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRTrackedCamera_IVRTrackedCamera_003.h"
void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraIntrinsics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureSize( params->nDeviceIndex, params->eFrameType, params->pTextureBounds, params->pnWidth, params->pnHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureD3D11( params->hTrackedCamera, params->eFrameType, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureGL( params->hTrackedCamera, params->eFrameType, params->pglTextureId, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_003 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamTextureGL( params->hTrackedCamera, params->glTextureId );
}

