/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperone_IVRChaperone_004.h"
struct u_IVRChaperone_IVRChaperone_004
{
#ifdef __cplusplus
    virtual uint32_t GetCalibrationState(  ) = 0;
    virtual bool GetPlayAreaSize( float *, float * ) = 0;
    virtual bool GetPlayAreaRect( HmdQuad_t * ) = 0;
    virtual void ReloadInfo(  ) = 0;
    virtual void SetSceneColor( HmdColor_t ) = 0;
    virtual void GetBoundsColor( HmdColor_t *, int32_t, float, HmdColor_t * ) = 0;
    virtual bool AreBoundsVisible(  ) = 0;
    virtual void ForceBoundsVisible( bool ) = 0;
    virtual void ResetZeroPose( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRChaperone_IVRChaperone_004_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_004_GetCalibrationState_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCalibrationState(  );
}

void cppIVRChaperone_IVRChaperone_004_GetPlayAreaSize( struct cppIVRChaperone_IVRChaperone_004_GetPlayAreaSize_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    params->_ret = (bool)iface->GetPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperone_IVRChaperone_004_GetPlayAreaRect( struct cppIVRChaperone_IVRChaperone_004_GetPlayAreaRect_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    params->_ret = (bool)iface->GetPlayAreaRect( params->rect );
}

void cppIVRChaperone_IVRChaperone_004_ReloadInfo( struct cppIVRChaperone_IVRChaperone_004_ReloadInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    iface->ReloadInfo(  );
}

void cppIVRChaperone_IVRChaperone_004_SetSceneColor( struct cppIVRChaperone_IVRChaperone_004_SetSceneColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    iface->SetSceneColor( params->color );
}

void cppIVRChaperone_IVRChaperone_004_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_004_GetBoundsColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    iface->GetBoundsColor( params->pOutputColorArray, params->nNumOutputColors, params->flCollisionBoundsFadeDistance, params->pOutputCameraColor );
}

void cppIVRChaperone_IVRChaperone_004_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_004_AreBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    params->_ret = (bool)iface->AreBoundsVisible(  );
}

void cppIVRChaperone_IVRChaperone_004_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_004_ForceBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    iface->ForceBoundsVisible( params->bForce );
}

void cppIVRChaperone_IVRChaperone_004_ResetZeroPose( struct cppIVRChaperone_IVRChaperone_004_ResetZeroPose_params *params )
{
    struct u_IVRChaperone_IVRChaperone_004 *iface = (struct u_IVRChaperone_IVRChaperone_004 *)params->linux_side;
    iface->ResetZeroPose( params->eTrackingUniverseOrigin );
}

