#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_001.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRTrackedCamera_IVRTrackedCamera_001
{
#ifdef __cplusplus
    virtual bool HasCamera( uint32_t ) = 0;
    virtual bool GetCameraFirmwareDescription( uint32_t, char *, uint32_t ) = 0;
    virtual bool GetCameraFrameDimensions( uint32_t, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual bool SetCameraVideoStreamFormat( uint32_t, uint32_t ) = 0;
    virtual uint32_t GetCameraVideoStreamFormat( uint32_t ) = 0;
    virtual bool EnableCameraForStreaming( uint32_t, bool ) = 0;
    virtual bool StartVideoStream( uint32_t ) = 0;
    virtual bool StopVideoStream( uint32_t ) = 0;
    virtual bool IsVideoStreamActive( uint32_t ) = 0;
    virtual float GetVideoStreamElapsedTime( uint32_t ) = 0;
    virtual const CameraVideoStreamFrame_t * GetVideoStreamFrame( uint32_t ) = 0;
    virtual bool ReleaseVideoStreamFrame( uint32_t, const CameraVideoStreamFrame_t * ) = 0;
    virtual bool SetAutoExposure( uint32_t, bool ) = 0;
    virtual bool PauseVideoStream( uint32_t ) = 0;
    virtual bool ResumeVideoStream( uint32_t ) = 0;
    virtual bool IsVideoStreamPaused( uint32_t ) = 0;
    virtual bool GetCameraDistortion( uint32_t, float, float, float *, float * ) = 0;
    virtual bool GetCameraProjection( uint32_t, float, float, float, float, HmdMatrix44_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->HasCamera( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraFirmwareDescription( params->nDeviceIndex, params->pBuffer, params->nBufferLen );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraFrameDimensions( params->nDeviceIndex, params->nVideoStreamFormat, params->pWidth, params->pHeight );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->SetCameraVideoStreamFormat( params->nDeviceIndex, params->nVideoStreamFormat );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraVideoStreamFormat( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming( struct cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->EnableCameraForStreaming( params->nDeviceIndex, params->bEnable );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->StartVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->StopVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->IsVideoStreamActive( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetVideoStreamElapsedTime( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetVideoStreamFrame( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    CameraVideoStreamFrame_t lin_pFrameImage;
    if (params->pFrameImage)
        struct_CameraVideoStreamFrame_t_0914_win_to_lin( params->pFrameImage, &lin_pFrameImage );
    params->_ret = iface->ReleaseVideoStreamFrame( params->nDeviceIndex, params->pFrameImage ? &lin_pFrameImage : nullptr );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->SetAutoExposure( params->nDeviceIndex, params->bEnable );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->PauseVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->ResumeVideoStream( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->IsVideoStreamPaused( params->nDeviceIndex );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraDistortion( params->nDeviceIndex, params->flInputU, params->flInputV, params->pflOutputU, params->pflOutputV );
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *params )
{
    struct cppIVRTrackedCamera_IVRTrackedCamera_001 *iface = (struct cppIVRTrackedCamera_IVRTrackedCamera_001 *)params->linux_side;
    params->_ret = iface->GetCameraProjection( params->nDeviceIndex, params->flWidthPixels, params->flHeightPixels, params->flZNear, params->flZFar, params->pProjection );
}

#ifdef __cplusplus
}
#endif
