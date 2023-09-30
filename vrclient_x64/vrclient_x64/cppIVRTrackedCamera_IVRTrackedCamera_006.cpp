/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRTrackedCamera_IVRTrackedCamera_006.h"
void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (const char *)iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraIntrinsics( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraProjection( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureSize( params->nDeviceIndex, params->eFrameType, params->pTextureBounds, params->pnWidth, params->pnHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureD3D11( params->hTrackedCamera, params->eFrameType, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureGL( params->hTrackedCamera, params->eFrameType, params->pglTextureId, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamTextureGL( params->hTrackedCamera, params->glTextureId );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace( struct cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    iface->SetCameraTrackingSpace( params->eUniverse );
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace( struct cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_006 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_006 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraTrackingSpace(  );
}

