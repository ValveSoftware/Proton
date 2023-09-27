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
void cppIVRClientCore_IVRClientCore_002_Init( struct cppIVRClientCore_IVRClientCore_002_Init_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->Init((vr::EVRApplicationType)params->eApplicationType);
}

void cppIVRClientCore_IVRClientCore_002_Cleanup( struct cppIVRClientCore_IVRClientCore_002_Cleanup_params *params )
{
    ((IVRClientCore*)params->linux_side)->Cleanup();
}

void cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid( struct cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->IsInterfaceVersionValid((const char *)params->pchInterfaceVersion);
}

void cppIVRClientCore_IVRClientCore_002_GetGenericInterface( struct cppIVRClientCore_IVRClientCore_002_GetGenericInterface_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->GetGenericInterface((const char *)params->pchNameAndVersion, (vr::EVRInitError *)params->peError);
}

void cppIVRClientCore_IVRClientCore_002_BIsHmdPresent( struct cppIVRClientCore_IVRClientCore_002_BIsHmdPresent_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->BIsHmdPresent();
}

void cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError( struct cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->GetEnglishStringForHmdError((vr::EVRInitError)params->eError);
}

void cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError( struct cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError_params *params )
{
    params->_ret = ((IVRClientCore*)params->linux_side)->GetIDForVRInitError((vr::EVRInitError)params->eError);
}

#ifdef __cplusplus
}
#endif
