/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRChaperone_IVRChaperone_003.h"
void cppIVRChaperone_IVRChaperone_003_GetCalibrationState( struct cppIVRChaperone_IVRChaperone_003_GetCalibrationState_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCalibrationState(  );
}

void cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaSize_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    params->_ret = (bool)iface->GetPlayAreaSize( params->pSizeX, params->pSizeZ );
}

void cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect( struct cppIVRChaperone_IVRChaperone_003_GetPlayAreaRect_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    params->_ret = (bool)iface->GetPlayAreaRect( params->rect );
}

void cppIVRChaperone_IVRChaperone_003_ReloadInfo( struct cppIVRChaperone_IVRChaperone_003_ReloadInfo_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    iface->ReloadInfo(  );
}

void cppIVRChaperone_IVRChaperone_003_SetSceneColor( struct cppIVRChaperone_IVRChaperone_003_SetSceneColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    iface->SetSceneColor( params->color );
}

void cppIVRChaperone_IVRChaperone_003_GetBoundsColor( struct cppIVRChaperone_IVRChaperone_003_GetBoundsColor_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    iface->GetBoundsColor( params->pOutputColorArray, params->nNumOutputColors, params->flCollisionBoundsFadeDistance, params->pOutputCameraColor );
}

void cppIVRChaperone_IVRChaperone_003_AreBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_AreBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    params->_ret = (bool)iface->AreBoundsVisible(  );
}

void cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible( struct cppIVRChaperone_IVRChaperone_003_ForceBoundsVisible_params *params )
{
    struct u_IVRChaperone_IVRChaperone_003 *iface = (struct u_IVRChaperone_IVRChaperone_003 *)params->linux_side;
    iface->ForceBoundsVisible( params->bForce );
}

