#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.9/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRClientCore_IVRClientCore_002.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRClientCore_IVRClientCore_002
{
#ifdef __cplusplus
    virtual uint32_t Init( uint32_t ) = 0;
    virtual void Cleanup(  ) = 0;
    virtual uint32_t IsInterfaceVersionValid( const char * ) = 0;
    virtual void * GetGenericInterface( const char *, uint32_t * ) = 0;
    virtual bool BIsHmdPresent(  ) = 0;
    virtual const char * GetEnglishStringForHmdError( uint32_t ) = 0;
    virtual const char * GetIDForVRInitError( uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRClientCore_IVRClientCore_002_Init( struct cppIVRClientCore_IVRClientCore_002_Init_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->Init( params->eApplicationType );
}

void cppIVRClientCore_IVRClientCore_002_Cleanup( struct cppIVRClientCore_IVRClientCore_002_Cleanup_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    iface->Cleanup(  );
}

void cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->IsInterfaceVersionValid( params->pchInterfaceVersion );
}

void cppIVRClientCore_IVRClientCore_002_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetGenericInterface( params->pchNameAndVersion, params->peError );
}

void cppIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->BIsHmdPresent(  );
}

void cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetEnglishStringForHmdError( params->eError );
}

void cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *params )
{
    struct cppIVRClientCore_IVRClientCore_002 *iface = (struct cppIVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = iface->GetIDForVRInitError( params->eError );
}

#ifdef __cplusplus
}
#endif
