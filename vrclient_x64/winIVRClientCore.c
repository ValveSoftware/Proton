/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRClientCore_IVRClientCore_003.h"

typedef struct __winIVRClientCore_IVRClientCore_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRClientCore_IVRClientCore_003;

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_Init, 16)
EVRInitError __thiscall winIVRClientCore_IVRClientCore_003_Init(winIVRClientCore_IVRClientCore_003 *_this, EVRApplicationType eApplicationType, const char * pStartupInfo)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_003_Init(_this->linux_side, eApplicationType, pStartupInfo);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_Cleanup, 4)
void __thiscall winIVRClientCore_IVRClientCore_003_Cleanup(winIVRClientCore_IVRClientCore_003 *_this)
{
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_003_Cleanup(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid, 12)
EVRInitError __thiscall winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid(winIVRClientCore_IVRClientCore_003 *_this, const char * pchInterfaceVersion)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid(_this->linux_side, pchInterfaceVersion);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetGenericInterface, 20)
void * __thiscall winIVRClientCore_IVRClientCore_003_GetGenericInterface(winIVRClientCore_IVRClientCore_003 *_this, const char * pchNameAndVersion, EVRInitError * peError)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchNameAndVersion,
        cppIVRClientCore_IVRClientCore_003_GetGenericInterface(_this->linux_side, pchNameAndVersion, peError));
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_BIsHmdPresent, 4)
bool __thiscall winIVRClientCore_IVRClientCore_003_BIsHmdPresent(winIVRClientCore_IVRClientCore_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_003_BIsHmdPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError, 8)
const char * __thiscall winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError(winIVRClientCore_IVRClientCore_003 *_this, EVRInitError eError)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError(_this->linux_side, eError);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_003_GetIDForVRInitError, 8)
const char * __thiscall winIVRClientCore_IVRClientCore_003_GetIDForVRInitError(winIVRClientCore_IVRClientCore_003 *_this, EVRInitError eError)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_003_GetIDForVRInitError(_this->linux_side, eError);
}

extern vtable_ptr winIVRClientCore_IVRClientCore_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRClientCore_IVRClientCore_003,
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_Init)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_Cleanup)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_IsInterfaceVersionValid)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetGenericInterface)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_BIsHmdPresent)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetEnglishStringForHmdError)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_003_GetIDForVRInitError)
    );
#ifndef __GNUC__
}
#endif

winIVRClientCore_IVRClientCore_003 *create_winIVRClientCore_IVRClientCore_003(void *linux_side)
{
    winIVRClientCore_IVRClientCore_003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRClientCore_IVRClientCore_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRClientCore_IVRClientCore_003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppIVRClientCore_IVRClientCore_002.h"

typedef struct __winIVRClientCore_IVRClientCore_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRClientCore_IVRClientCore_002;

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_Init, 8)
EVRInitError __thiscall winIVRClientCore_IVRClientCore_002_Init(winIVRClientCore_IVRClientCore_002 *_this, EVRApplicationType eApplicationType)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_002_Init(_this->linux_side, eApplicationType);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_Cleanup, 4)
void __thiscall winIVRClientCore_IVRClientCore_002_Cleanup(winIVRClientCore_IVRClientCore_002 *_this)
{
    TRACE("%p\n", _this);
    cppIVRClientCore_IVRClientCore_002_Cleanup(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid, 12)
EVRInitError __thiscall winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(winIVRClientCore_IVRClientCore_002 *_this, const char * pchInterfaceVersion)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid(_this->linux_side, pchInterfaceVersion);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetGenericInterface, 20)
void * __thiscall winIVRClientCore_IVRClientCore_002_GetGenericInterface(winIVRClientCore_IVRClientCore_002 *_this, const char * pchNameAndVersion, EVRInitError * peError)
{
    TRACE("%p\n", _this);
    return create_win_interface(pchNameAndVersion,
        cppIVRClientCore_IVRClientCore_002_GetGenericInterface(_this->linux_side, pchNameAndVersion, peError));
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_BIsHmdPresent, 4)
bool __thiscall winIVRClientCore_IVRClientCore_002_BIsHmdPresent(winIVRClientCore_IVRClientCore_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_002_BIsHmdPresent(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError, 8)
const char * __thiscall winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(winIVRClientCore_IVRClientCore_002 *_this, EVRInitError eError)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError(_this->linux_side, eError);
}

DEFINE_THISCALL_WRAPPER(winIVRClientCore_IVRClientCore_002_GetIDForVRInitError, 8)
const char * __thiscall winIVRClientCore_IVRClientCore_002_GetIDForVRInitError(winIVRClientCore_IVRClientCore_002 *_this, EVRInitError eError)
{
    TRACE("%p\n", _this);
    return cppIVRClientCore_IVRClientCore_002_GetIDForVRInitError(_this->linux_side, eError);
}

extern vtable_ptr winIVRClientCore_IVRClientCore_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRClientCore_IVRClientCore_002,
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_Init)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_Cleanup)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_IsInterfaceVersionValid)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetGenericInterface)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_BIsHmdPresent)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetEnglishStringForHmdError)
        VTABLE_ADD_FUNC(winIVRClientCore_IVRClientCore_002_GetIDForVRInitError)
    );
#ifndef __GNUC__
}
#endif

winIVRClientCore_IVRClientCore_002 *create_winIVRClientCore_IVRClientCore_002(void *linux_side)
{
    winIVRClientCore_IVRClientCore_002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRClientCore_IVRClientCore_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRClientCore_IVRClientCore_002_vtable;
    r->linux_side = linux_side;
    return r;
}

