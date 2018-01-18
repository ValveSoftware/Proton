/* This file is auto-generated, do not edit. */

#include "config.h"
#include "wine/port.h"

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

#include "cppIVRSettings_IVRSettings_002.h"

typedef struct __winIVRSettings_IVRSettings_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSettings_IVRSettings_002;

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum, 8)
const char * __thiscall winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(winIVRSettings_IVRSettings_002 *_this, EVRSettingsError eError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(_this->linux_side, eError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_Sync, 13)
bool __thiscall winIVRSettings_IVRSettings_002_Sync(winIVRSettings_IVRSettings_002 *_this, bool bForce, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_Sync(_this->linux_side, bForce, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetBool, 29)
void __thiscall winIVRSettings_IVRSettings_002_SetBool(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetBool(_this->linux_side, pchSection, pchSettingsKey, bValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetInt32, 32)
void __thiscall winIVRSettings_IVRSettings_002_SetInt32(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetInt32(_this->linux_side, pchSection, pchSettingsKey, nValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetFloat, 32)
void __thiscall winIVRSettings_IVRSettings_002_SetFloat(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetFloat(_this->linux_side, pchSection, pchSettingsKey, flValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetString, 36)
void __thiscall winIVRSettings_IVRSettings_002_SetString(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetBool, 28)
bool __thiscall winIVRSettings_IVRSettings_002_GetBool(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetBool(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetInt32, 28)
int32_t __thiscall winIVRSettings_IVRSettings_002_GetInt32(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetInt32(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetFloat, 28)
float __thiscall winIVRSettings_IVRSettings_002_GetFloat(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetFloat(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetString, 40)
void __thiscall winIVRSettings_IVRSettings_002_GetString(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_GetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveSection, 20)
void __thiscall winIVRSettings_IVRSettings_002_RemoveSection(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_RemoveSection(_this->linux_side, pchSection, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveKeyInSection, 28)
void __thiscall winIVRSettings_IVRSettings_002_RemoveKeyInSection(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_RemoveKeyInSection(_this->linux_side, pchSection, pchSettingsKey, peError);
}

extern vtable_ptr winIVRSettings_IVRSettings_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSettings_IVRSettings_002,
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_Sync)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_SetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_SetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_SetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_SetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_GetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_GetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_GetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_GetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_RemoveSection)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_002_RemoveKeyInSection)
    );
#ifndef __GNUC__
}
#endif

winIVRSettings_IVRSettings_002 *create_winIVRSettings_IVRSettings_002(void *linux_side)
{
    winIVRSettings_IVRSettings_002 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRSettings_IVRSettings_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppIVRSettings_IVRSettings_001.h"

typedef struct __winIVRSettings_IVRSettings_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSettings_IVRSettings_001;

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum, 8)
const char * __thiscall winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(winIVRSettings_IVRSettings_001 *_this, EVRSettingsError eError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(_this->linux_side, eError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_Sync, 13)
bool __thiscall winIVRSettings_IVRSettings_001_Sync(winIVRSettings_IVRSettings_001 *_this, bool bForce, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_Sync(_this->linux_side, bForce, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetBool, 29)
bool __thiscall winIVRSettings_IVRSettings_001_GetBool(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, bool bDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetBool(_this->linux_side, pchSection, pchSettingsKey, bDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetBool, 29)
void __thiscall winIVRSettings_IVRSettings_001_SetBool(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetBool(_this->linux_side, pchSection, pchSettingsKey, bValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetInt32, 32)
int32_t __thiscall winIVRSettings_IVRSettings_001_GetInt32(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetInt32(_this->linux_side, pchSection, pchSettingsKey, nDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetInt32, 32)
void __thiscall winIVRSettings_IVRSettings_001_SetInt32(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetInt32(_this->linux_side, pchSection, pchSettingsKey, nValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetFloat, 32)
float __thiscall winIVRSettings_IVRSettings_001_GetFloat(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, float flDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetFloat(_this->linux_side, pchSection, pchSettingsKey, flDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetFloat, 32)
void __thiscall winIVRSettings_IVRSettings_001_SetFloat(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetFloat(_this->linux_side, pchSection, pchSettingsKey, flValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetString, 48)
void __thiscall winIVRSettings_IVRSettings_001_GetString(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, const char * pchDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_GetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, unValueLen, pchDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetString, 36)
void __thiscall winIVRSettings_IVRSettings_001_SetString(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveSection, 20)
void __thiscall winIVRSettings_IVRSettings_001_RemoveSection(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_RemoveSection(_this->linux_side, pchSection, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveKeyInSection, 28)
void __thiscall winIVRSettings_IVRSettings_001_RemoveKeyInSection(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_RemoveKeyInSection(_this->linux_side, pchSection, pchSettingsKey, peError);
}

extern vtable_ptr winIVRSettings_IVRSettings_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSettings_IVRSettings_001,
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_Sync)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_GetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_SetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_GetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_SetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_GetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_SetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_GetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_SetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_RemoveSection)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_001_RemoveKeyInSection)
    );
#ifndef __GNUC__
}
#endif

winIVRSettings_IVRSettings_001 *create_winIVRSettings_IVRSettings_001(void *linux_side)
{
    winIVRSettings_IVRSettings_001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRSettings_IVRSettings_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_001_vtable;
    r->linux_side = linux_side;
    return r;
}

