/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRClientCore_IVRClientCore_002.h"
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

