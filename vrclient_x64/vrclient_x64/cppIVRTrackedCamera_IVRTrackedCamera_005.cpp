#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.6.10/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_005.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRTrackedCamera_IVRTrackedCamera_005
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinsics( uint32_t, uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, uint64_t * ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( uint64_t ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( uint64_t, uint32_t, void *, uint32_t, CameraVideoStreamFrameHeader_t *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureSize( uint32_t, uint32_t, VRTextureBounds_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetVideoStreamTextureD3D11( uint64_t, uint32_t, void *, void **, CameraVideoStreamFrameHeader_t *, uint32_t ) = 0;
    virtual uint32_t GetVideoStreamTextureGL( uint64_t, uint32_t, uint32_t *, CameraVideoStreamFrameHeader_t *, uint32_t ) = 0;
    virtual uint32_t ReleaseVideoStreamTextureGL( uint64_t, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraIntrinsics( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->nCameraIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize );
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->GetVideoStreamTextureSize( params->nDeviceIndex, params->eFrameType, params->pTextureBounds, params->pnWidth, params->pnHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamTextureD3D11( params->hTrackedCamera, params->eFrameType, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize );
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    CameraVideoStreamFrameHeader_t lin_pFrameHeader;
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin( params->pFrameHeader, &lin_pFrameHeader );
    uint32_t lin_nFrameHeaderSize = params->nFrameHeaderSize ? sizeof(lin_pFrameHeader) : 0;
    params->_ret = iface->GetVideoStreamTextureGL( params->hTrackedCamera, params->eFrameType, params->pglTextureId, params->pFrameHeader ? &lin_pFrameHeader : nullptr, lin_nFrameHeaderSize );
    if (params->pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win( &lin_pFrameHeader, params->pFrameHeader, params->nFrameHeaderSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_005 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_005 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamTextureGL( params->hTrackedCamera, params->glTextureId );
}

#ifdef __cplusplus
}
#endif
