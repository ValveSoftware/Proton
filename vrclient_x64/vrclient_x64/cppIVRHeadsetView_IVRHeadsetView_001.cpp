/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRHeadsetView_IVRHeadsetView_001.h"
struct u_IVRHeadsetView_IVRHeadsetView_001
{
#ifdef __cplusplus
    virtual void SetHeadsetViewSize( uint32_t, uint32_t ) = 0;
    virtual void GetHeadsetViewSize( uint32_t *, uint32_t * ) = 0;
    virtual void SetHeadsetViewMode( uint32_t ) = 0;
    virtual uint32_t GetHeadsetViewMode(  ) = 0;
    virtual void SetHeadsetViewCropped( bool ) = 0;
    virtual bool GetHeadsetViewCropped(  ) = 0;
    virtual float GetHeadsetViewAspectRatio(  ) = 0;
    virtual void SetHeadsetViewBlendRange( float, float ) = 0;
    virtual void GetHeadsetViewBlendRange( float *, float * ) = 0;
#endif /* __cplusplus */
};

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewSize_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->SetHeadsetViewSize( params->nWidth, params->nHeight );
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewSize_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->GetHeadsetViewSize( params->pnWidth, params->pnHeight );
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewMode_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->SetHeadsetViewMode( params->eHeadsetViewMode );
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewMode_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetHeadsetViewMode(  );
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewCropped_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->SetHeadsetViewCropped( params->bCropped );
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewCropped_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    params->_ret = (bool)iface->GetHeadsetViewCropped(  );
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewAspectRatio_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    params->_ret = (float)iface->GetHeadsetViewAspectRatio(  );
}

void cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_SetHeadsetViewBlendRange_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->SetHeadsetViewBlendRange( params->flStartPct, params->flEndPct );
}

void cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange( struct cppIVRHeadsetView_IVRHeadsetView_001_GetHeadsetViewBlendRange_params *params )
{
    struct u_IVRHeadsetView_IVRHeadsetView_001 *iface = (struct u_IVRHeadsetView_IVRHeadsetView_001 *)params->linux_side;
    iface->GetHeadsetViewBlendRange( params->pStartPct, params->pEndPct );
}

