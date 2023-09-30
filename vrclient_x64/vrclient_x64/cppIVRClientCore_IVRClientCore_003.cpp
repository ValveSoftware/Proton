/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRClientCore_IVRClientCore_003.h"
void cppIVRClientCore_IVRClientCore_003_Init( struct cppIVRClientCore_IVRClientCore_003_Init_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->Init( params->eApplicationType, params->pStartupInfo );
}

void cppIVRClientCore_IVRClientCore_003_Cleanup( struct cppIVRClientCore_IVRClientCore_003_Cleanup_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    iface->Cleanup(  );
}

void cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->IsInterfaceVersionValid( params->pchInterfaceVersion );
}

void cppIVRClientCore_IVRClientCore_003_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_003_GetGenericInterface_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (void *)iface->GetGenericInterface( params->pchNameAndVersion, params->peError );
}

void cppIVRClientCore_IVRClientCore_003_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_003_BIsHmdPresent_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (bool)iface->BIsHmdPresent(  );
}

void cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetEnglishStringForHmdError( params->eError );
}

void cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError_params *params )
{
    struct u_IVRClientCore_IVRClientCore_003 *iface = (struct u_IVRClientCore_IVRClientCore_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetIDForVRInitError( params->eError );
}

