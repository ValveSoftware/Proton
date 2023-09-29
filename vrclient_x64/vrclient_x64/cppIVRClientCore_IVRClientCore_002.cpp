/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRClientCore_IVRClientCore_002.h"
struct u_IVRClientCore_IVRClientCore_002
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
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->Init( params->eApplicationType );
}

void cppIVRClientCore_IVRClientCore_002_Cleanup( struct cppIVRClientCore_IVRClientCore_002_Cleanup_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    iface->Cleanup(  );
}

void cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->IsInterfaceVersionValid( params->pchInterfaceVersion );
}

void cppIVRClientCore_IVRClientCore_002_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (void *)iface->GetGenericInterface( params->pchNameAndVersion, params->peError );
}

void cppIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (bool)iface->BIsHmdPresent(  );
}

void cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (const char *)iface->GetEnglishStringForHmdError( params->eError );
}

void cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *params )
{
    struct u_IVRClientCore_IVRClientCore_002 *iface = (struct u_IVRClientCore_IVRClientCore_002 *)params->linux_side;
    params->_ret = (const char *)iface->GetIDForVRInitError( params->eError );
}

