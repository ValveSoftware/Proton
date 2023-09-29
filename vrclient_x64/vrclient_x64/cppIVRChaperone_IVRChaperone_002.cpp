/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperone_IVRChaperone_002.h"
struct u_IVRChaperone_IVRChaperone_002
{
#ifdef __cplusplus
    virtual uint32_t GetCalibrationState(  ) = 0;
    virtual bool GetSoftBoundsInfo( ChaperoneSoftBoundsInfo_t * ) = 0;
    virtual bool GetHardBoundsInfo( HmdQuad_t *, uint32_t * ) = 0;
    virtual bool GetSeatedBoundsInfo( ChaperoneSeatedBoundsInfo_t * ) = 0;
    virtual void ReloadInfo(  ) = 0;
    virtual void SetSceneColor( HmdColor_t ) = 0;
    virtual void GetBoundsColor( HmdColor_t *, int32_t ) = 0;
    virtual bool AreBoundsVisible(  ) = 0;
    virtual void ForceBoundsVisible( bool ) = 0;
#endif /* __cplusplus */
};

void cppIVRChaperone_IVRChaperone_002_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_002_GetCalibrationState_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCalibrationState(  );
}

void cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSoftBoundsInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    params->_ret = (bool)iface->GetSoftBoundsInfo( params->pInfo );
}

void cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetHardBoundsInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    params->_ret = (bool)iface->GetHardBoundsInfo( params->pQuadsBuffer, params->punQuadsCount );
}

void cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo( struct cppIVRChaperone_IVRChaperone_002_GetSeatedBoundsInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    params->_ret = (bool)iface->GetSeatedBoundsInfo( params->pInfo );
}

void cppIVRChaperone_IVRChaperone_002_ReloadInfo( struct cppIVRChaperone_IVRChaperone_002_ReloadInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    iface->ReloadInfo(  );
}

void cppIVRChaperone_IVRChaperone_002_SetSceneColor( struct cppIVRChaperone_IVRChaperone_002_SetSceneColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    iface->SetSceneColor( params->color );
}

void cppIVRChaperone_IVRChaperone_002_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_002_GetBoundsColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    iface->GetBoundsColor( params->pOutputColorArray, params->nNumOutputColors );
}

void cppIVRChaperone_IVRChaperone_002_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_AreBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    params->_ret = (bool)iface->AreBoundsVisible(  );
}

void cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_002_ForceBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_002 *iface = (struct u_IVRChaperone_IVRChaperone_002 *)params->linux_side;
    iface->ForceBoundsVisible( params->bForce );
}

