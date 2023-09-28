#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.0/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_002.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRTrackedCamera_IVRTrackedCamera_002
{
#ifdef __cplusplus
    virtual const char * GetCameraErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t HasCamera( uint32_t, bool * ) = 0;
    virtual uint32_t GetCameraFrameSize( uint32_t, uint32_t, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t GetCameraIntrinisics( uint32_t, uint32_t, HmdVector2_t *, HmdVector2_t * ) = 0;
    virtual uint32_t GetCameraProjection( uint32_t, uint32_t, float, float, HmdMatrix44_t * ) = 0;
    virtual uint32_t AcquireVideoStreamingService( uint32_t, void ** ) = 0;
    virtual uint32_t ReleaseVideoStreamingService( void * ) = 0;
    virtual uint32_t GetVideoStreamFrameBuffer( void *, uint32_t, void *, uint32_t, CameraVideoStreamFrameHeader_t *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraErrorNameFromEnum( params->eCameraError );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex, params->pHasCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraFrameSize( params->nDeviceIndex, params->eFrameType, params->pnWidth, params->pnHeight, params->pnFrameBufferSize );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraIntrinisics( params->nDeviceIndex, params->eFrameType, params->pFocalLength, params->pCenter );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->eFrameType, params->flZNear, params->flZFar, params->pProjection );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->AcquireVideoStreamingService( params->nDeviceIndex, params->pHandle );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->ReleaseVideoStreamingService( params->hTrackedCamera );
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_002 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_002 *)params->linux_side;
    params->_ret = iface->GetVideoStreamFrameBuffer( params->hTrackedCamera, params->eFrameType, params->pFrameBuffer, params->nFrameBufferSize, params->pFrameHeader, params->nFrameHeaderSize );
}

#ifdef __cplusplus
}
#endif
