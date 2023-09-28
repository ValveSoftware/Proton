#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRExtendedDisplay_IVRExtendedDisplay_001.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRExtendedDisplay_IVRExtendedDisplay_001
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetWindowBounds_params *params )
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetEyeOutputViewport_params *params )
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo( struct cppIVRExtendedDisplay_IVRExtendedDisplay_001_GetDXGIOutputInfo_params *params )
{
    struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *iface = (struct cppIVRExtendedDisplay_IVRExtendedDisplay_001 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
}

#ifdef __cplusplus
}
#endif
