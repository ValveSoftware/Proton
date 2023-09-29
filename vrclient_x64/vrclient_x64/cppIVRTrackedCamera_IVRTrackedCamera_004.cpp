/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRTrackedCamera_IVRTrackedCamera_004.h"
struct u_IVRTrackedCamera_IVRTrackedCamera_004
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, u_CameraVideoStreamFrameHeader_t_1017 *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (const char *)iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_004_HasCamera_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraIntrinsics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureSize( params->nDeviceIndex, params->eFrameType, params->pTextureBounds, params->pnWidth, params->pnHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureD3D11( params->hTrackedCamera, params->eFrameType, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    u_CameraVideoStreamFrameHeader_t_1017 u_pFrameHeader;
    if (params->pFrameHeader) u_pFrameHeader = *params->pFrameHeader;
    uint32_t u_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(u_pFrameHeader) : 0;
    params->_ret = (uint32_t)iface->GetVideoStreamTextureGL( params->hTrackedCamera, params->eFrameType, params->pglTextureId, params->pFrameHeader ? &u_pFrameHeader : nullptr, u_nFrameHeaderSize );
    if (params->pFrameHeader) *params->pFrameHeader = u_pFrameHeader;
}

void cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL_params *params )
{
    struct u_IVRTrackedCamera_IVRTrackedCamera_004 *iface = (struct u_IVRTrackedCamera_IVRTrackedCamera_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseVideoStreamTextureGL( params->hTrackedCamera, params->glTextureId );
}

