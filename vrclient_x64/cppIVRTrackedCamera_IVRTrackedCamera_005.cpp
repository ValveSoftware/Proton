/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_HasCamera( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraIntrinsics( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->pFocalLength, params->pCenter );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetVideoStreamTextureSize( params->nDeviceIndex, params->eFrameType, params->pTextureBounds, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamTextureD3D11( params->hTrackedCamera, params->eFrameType, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamTextureGL( params->hTrackedCamera, params->eFrameType, params->pglTextureId, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
    return 0;
}

NTSTATUS IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL( void *args )
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params *params = (struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params *)args;
    struct u_IVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamTextureGL( params->hTrackedCamera, params->glTextureId );
    return 0;
}

