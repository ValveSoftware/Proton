#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRClientCore_IVRClientCore_003.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRClientCore_IVRClientCore_003
{
#ifdef __cplusplus
    virtual uint32_t Init( uint32_t, const char * ) = 0;
    virtual void Cleanup(  ) = 0;
    virtual uint32_t IsInterfaceVersionValid( const char * ) = 0;
    virtual void * GetGenericInterface( const char *, uint32_t * ) = 0;
    virtual bool BIsHmdPresent(  ) = 0;
    virtual const char * GetEnglishStringForHmdError( uint32_t ) = 0;
    virtual const char * GetIDForVRInitError( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRClientCore_IVRClientCore_003_Init( struct cppIVRClientCore_IVRClientCore_003_Init_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->Init( params->eApplicationType, params->pStartupInfo );
}

void cppIVRClientCore_IVRClientCore_003_Cleanup( struct cppIVRClientCore_IVRClientCore_003_Cleanup_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    iface->Cleanup(  );
}

void cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->IsInterfaceVersionValid( params->pchInterfaceVersion );
}

void cppIVRClientCore_IVRClientCore_003_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_003_GetGenericInterface_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->GetGenericInterface( params->pchNameAndVersion, params->peError );
}

void cppIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_003_BIsHmdPresent_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->BIsHmdPresent(  );
}

void cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->GetEnglishStringForHmdError( params->eError );
}

void cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError_params *params )
{
    struct cppIVRClientCore_IVRClientCore_003 *iface = (struct cppIVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = iface->GetIDForVRInitError( params->eError );
}

#ifdef __cplusplus
}
#endif
