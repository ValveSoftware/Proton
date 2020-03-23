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

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRSettings_IVRSettings_003.h"

typedef struct __winIVRSettings_IVRSettings_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRSettings_IVRSettings_003;

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum, 8)
const char * __thiscall winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(winIVRSettings_IVRSettings_003 *_this, EVRSettingsError eError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(_this->linux_side, eError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetBool, 17)
void __thiscall winIVRSettings_IVRSettings_003_SetBool(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetBool(_this->linux_side, pchSection, pchSettingsKey, bValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetInt32, 20)
void __thiscall winIVRSettings_IVRSettings_003_SetInt32(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetInt32(_this->linux_side, pchSection, pchSettingsKey, nValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetFloat, 20)
void __thiscall winIVRSettings_IVRSettings_003_SetFloat(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetFloat(_this->linux_side, pchSection, pchSettingsKey, flValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetString, 20)
void __thiscall winIVRSettings_IVRSettings_003_SetString(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetBool, 16)
bool __thiscall winIVRSettings_IVRSettings_003_GetBool(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_003_GetBool(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetInt32, 16)
int32_t __thiscall winIVRSettings_IVRSettings_003_GetInt32(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_003_GetInt32(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetFloat, 16)
float __thiscall winIVRSettings_IVRSettings_003_GetFloat(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_003_GetFloat(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetString, 24)
void __thiscall winIVRSettings_IVRSettings_003_GetString(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_GetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_RemoveSection, 12)
void __thiscall winIVRSettings_IVRSettings_003_RemoveSection(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_RemoveSection(_this->linux_side, pchSection, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_RemoveKeyInSection, 16)
void __thiscall winIVRSettings_IVRSettings_003_RemoveKeyInSection(winIVRSettings_IVRSettings_003 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_RemoveKeyInSection(_this->linux_side, pchSection, pchSettingsKey, peError);
}

extern vtable_ptr winIVRSettings_IVRSettings_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRSettings_IVRSettings_003,
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_SetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_SetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_SetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_SetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_GetBool)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_GetInt32)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_GetFloat)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_GetString)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_RemoveSection)
        VTABLE_ADD_FUNC(winIVRSettings_IVRSettings_003_RemoveKeyInSection)
    );
#ifndef __GNUC__
}
#endif

winIVRSettings_IVRSettings_003 *create_winIVRSettings_IVRSettings_003(void *linux_side)
{
    winIVRSettings_IVRSettings_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSettings_IVRSettings_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSettings_IVRSettings_003 *create_winIVRSettings_IVRSettings_003_FnTable(void *linux_side)
{
    winIVRSettings_IVRSettings_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_003));
    struct thunk *thunks = alloc_thunks(11);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 11 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSettings_IVRSettings_003_SetBool, 4, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSettings_IVRSettings_003_SetInt32, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSettings_IVRSettings_003_SetFloat, 4, TRUE, FALSE);
    init_thunk(&thunks[4], r, winIVRSettings_IVRSettings_003_SetString, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSettings_IVRSettings_003_GetBool, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSettings_IVRSettings_003_GetInt32, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSettings_IVRSettings_003_GetFloat, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSettings_IVRSettings_003_GetString, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSettings_IVRSettings_003_RemoveSection, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSettings_IVRSettings_003_RemoveKeyInSection, 3, FALSE, FALSE);
    for (i = 0; i < 11; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_003_FnTable(void *object)
{
    winIVRSettings_IVRSettings_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

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

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_Sync, 9)
bool __thiscall winIVRSettings_IVRSettings_002_Sync(winIVRSettings_IVRSettings_002 *_this, bool bForce, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_Sync(_this->linux_side, bForce, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetBool, 17)
void __thiscall winIVRSettings_IVRSettings_002_SetBool(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetBool(_this->linux_side, pchSection, pchSettingsKey, bValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetInt32, 20)
void __thiscall winIVRSettings_IVRSettings_002_SetInt32(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetInt32(_this->linux_side, pchSection, pchSettingsKey, nValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetFloat, 20)
void __thiscall winIVRSettings_IVRSettings_002_SetFloat(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetFloat(_this->linux_side, pchSection, pchSettingsKey, flValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetString, 20)
void __thiscall winIVRSettings_IVRSettings_002_SetString(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetBool, 16)
bool __thiscall winIVRSettings_IVRSettings_002_GetBool(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetBool(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetInt32, 16)
int32_t __thiscall winIVRSettings_IVRSettings_002_GetInt32(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetInt32(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetFloat, 16)
float __thiscall winIVRSettings_IVRSettings_002_GetFloat(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_002_GetFloat(_this->linux_side, pchSection, pchSettingsKey, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetString, 24)
void __thiscall winIVRSettings_IVRSettings_002_GetString(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_GetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveSection, 12)
void __thiscall winIVRSettings_IVRSettings_002_RemoveSection(winIVRSettings_IVRSettings_002 *_this, const char * pchSection, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_RemoveSection(_this->linux_side, pchSection, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveKeyInSection, 16)
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
    winIVRSettings_IVRSettings_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSettings_IVRSettings_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSettings_IVRSettings_002 *create_winIVRSettings_IVRSettings_002_FnTable(void *linux_side)
{
    winIVRSettings_IVRSettings_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_002));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSettings_IVRSettings_002_Sync, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSettings_IVRSettings_002_SetBool, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSettings_IVRSettings_002_SetInt32, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRSettings_IVRSettings_002_SetFloat, 4, TRUE, FALSE);
    init_thunk(&thunks[5], r, winIVRSettings_IVRSettings_002_SetString, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSettings_IVRSettings_002_GetBool, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRSettings_IVRSettings_002_GetInt32, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRSettings_IVRSettings_002_GetFloat, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSettings_IVRSettings_002_GetString, 5, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSettings_IVRSettings_002_RemoveSection, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSettings_IVRSettings_002_RemoveKeyInSection, 3, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_002_FnTable(void *object)
{
    winIVRSettings_IVRSettings_002 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
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

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_Sync, 9)
bool __thiscall winIVRSettings_IVRSettings_001_Sync(winIVRSettings_IVRSettings_001 *_this, bool bForce, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_Sync(_this->linux_side, bForce, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetBool, 17)
bool __thiscall winIVRSettings_IVRSettings_001_GetBool(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, bool bDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetBool(_this->linux_side, pchSection, pchSettingsKey, bDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetBool, 17)
void __thiscall winIVRSettings_IVRSettings_001_SetBool(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, bool bValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetBool(_this->linux_side, pchSection, pchSettingsKey, bValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetInt32, 20)
int32_t __thiscall winIVRSettings_IVRSettings_001_GetInt32(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetInt32(_this->linux_side, pchSection, pchSettingsKey, nDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetInt32, 20)
void __thiscall winIVRSettings_IVRSettings_001_SetInt32(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, int32_t nValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetInt32(_this->linux_side, pchSection, pchSettingsKey, nValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetFloat, 20)
float __thiscall winIVRSettings_IVRSettings_001_GetFloat(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, float flDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRSettings_IVRSettings_001_GetFloat(_this->linux_side, pchSection, pchSettingsKey, flDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetFloat, 20)
void __thiscall winIVRSettings_IVRSettings_001_SetFloat(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, float flValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetFloat(_this->linux_side, pchSection, pchSettingsKey, flValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetString, 28)
void __thiscall winIVRSettings_IVRSettings_001_GetString(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, char * pchValue, uint32_t unValueLen, const char * pchDefaultValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_GetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, unValueLen, pchDefaultValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetString, 20)
void __thiscall winIVRSettings_IVRSettings_001_SetString(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, const char * pchSettingsKey, const char * pchValue, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetString(_this->linux_side, pchSection, pchSettingsKey, pchValue, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveSection, 12)
void __thiscall winIVRSettings_IVRSettings_001_RemoveSection(winIVRSettings_IVRSettings_001 *_this, const char * pchSection, EVRSettingsError * peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_RemoveSection(_this->linux_side, pchSection, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveKeyInSection, 16)
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
    winIVRSettings_IVRSettings_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRSettings_IVRSettings_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRSettings_IVRSettings_001 *create_winIVRSettings_IVRSettings_001_FnTable(void *linux_side)
{
    winIVRSettings_IVRSettings_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRSettings_IVRSettings_001));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRSettings_IVRSettings_001_Sync, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRSettings_IVRSettings_001_GetBool, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRSettings_IVRSettings_001_SetBool, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRSettings_IVRSettings_001_GetInt32, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRSettings_IVRSettings_001_SetInt32, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRSettings_IVRSettings_001_GetFloat, 4, TRUE, FALSE);
    init_thunk(&thunks[7], r, winIVRSettings_IVRSettings_001_SetFloat, 4, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRSettings_IVRSettings_001_GetString, 6, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRSettings_IVRSettings_001_SetString, 4, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRSettings_IVRSettings_001_RemoveSection, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRSettings_IVRSettings_001_RemoveKeyInSection, 3, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_001_FnTable(void *object)
{
    winIVRSettings_IVRSettings_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

