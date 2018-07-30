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
vr::EVRInitError cppIVRClientCore_IVRClientCore_002_Init(void *linux_side, EVRApplicationType eApplicationType)
{
    return ((IVRClientCore*)linux_side)->Init((vr::EVRApplicationType)eApplicationType);
}

void cppIVRClientCore_IVRClientCore_002_Cleanup(void *linux_side)
{
    ((IVRClientCore*)linux_side)->Cleanup();
}

vr::EVRInitError cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(void *linux_side, const char * pchInterfaceVersion)
{
    return ((IVRClientCore*)linux_side)->IsInterfaceVersionValid((const char *)pchInterfaceVersion);
}

void * cppIVRClientCore_IVRClientCore_002_GetGenericInterface(void *linux_side, const char * pchNameAndVersion, EVRInitError * peError)
{
    return ((IVRClientCore*)linux_side)->GetGenericInterface((const char *)pchNameAndVersion, (vr::EVRInitError *)peError);
}

bool cppIVRClientCore_IVRClientCore_002_BIsHmdPresent(void *linux_side)
{
    return ((IVRClientCore*)linux_side)->BIsHmdPresent();
}

const char * cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(void *linux_side, EVRInitError eError)
{
    return ((IVRClientCore*)linux_side)->GetEnglishStringForHmdError((vr::EVRInitError)eError);
}

const char * cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError(void *linux_side, EVRInitError eError)
{
    return ((IVRClientCore*)linux_side)->GetIDForVRInitError((vr::EVRInitError)eError);
}

#ifdef __cplusplus
}
#endif
