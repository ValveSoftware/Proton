#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.10.30/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRMailbox_IVRMailbox_001.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::vrmb_typeb cppIVRMailbox_IVRMailbox_001_undoc1(void *linux_side, const char * a, vrmb_typea * b)
{
    return ((IVRMailbox*)linux_side)->undoc1((const char *)a, (vr::vrmb_typea *)b);
}

vr::vrmb_typeb cppIVRMailbox_IVRMailbox_001_undoc2(void *linux_side, vrmb_typea a)
{
    return ((IVRMailbox*)linux_side)->undoc2((vr::vrmb_typea)a);
}

vr::vrmb_typeb cppIVRMailbox_IVRMailbox_001_undoc3(void *linux_side, vrmb_typea a, const char * b, const char * c)
{
    return ((IVRMailbox*)linux_side)->undoc3((vr::vrmb_typea)a, (const char *)b, (const char *)c);
}

vr::vrmb_typeb cppIVRMailbox_IVRMailbox_001_undoc4(void *linux_side, vrmb_typea a, char * b, uint32_t c, uint32_t * d)
{
    return ((IVRMailbox*)linux_side)->undoc4((vr::vrmb_typea)a, (char *)b, (uint32_t)c, (uint32_t *)d);
}

#ifdef __cplusplus
}
#endif
