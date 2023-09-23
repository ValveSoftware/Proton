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
EVRInitError cppIVRClientCore_IVRClientCore_002_Init(void *linux_side, EVRApplicationType eApplicationType)
{
    EVRInitError _ret;
    _ret = ((IVRClientCore*)linux_side)->Init((vr::EVRApplicationType)eApplicationType);
    return _ret;
}

void cppIVRClientCore_IVRClientCore_002_Cleanup(void *linux_side)
{
    ((IVRClientCore*)linux_side)->Cleanup();
}

EVRInitError cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(void *linux_side, const char *pchInterfaceVersion)
{
    EVRInitError _ret;
    _ret = ((IVRClientCore*)linux_side)->IsInterfaceVersionValid((const char *)pchInterfaceVersion);
    return _ret;
}

void * cppIVRClientCore_IVRClientCore_002_GetGenericInterface(void *linux_side, const char *pchNameAndVersion, EVRInitError *peError)
{
    void *_ret;
    _ret = ((IVRClientCore*)linux_side)->GetGenericInterface((const char *)pchNameAndVersion, (vr::EVRInitError *)peError);
    return _ret;
}

bool cppIVRClientCore_IVRClientCore_002_BIsHmdPresent(void *linux_side)
{
    bool _ret;
    _ret = ((IVRClientCore*)linux_side)->BIsHmdPresent();
    return _ret;
}

const char * cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(void *linux_side, EVRInitError eError)
{
    const char *_ret;
    _ret = ((IVRClientCore*)linux_side)->GetEnglishStringForHmdError((vr::EVRInitError)eError);
    return _ret;
}

const char * cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError(void *linux_side, EVRInitError eError)
{
    const char *_ret;
    _ret = ((IVRClientCore*)linux_side)->GetIDForVRInitError((vr::EVRInitError)eError);
    return _ret;
}

#ifdef __cplusplus
}
#endif
