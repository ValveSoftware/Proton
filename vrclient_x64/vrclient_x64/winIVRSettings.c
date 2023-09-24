/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRSettings_IVRSettings_001.h"

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_Sync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetBool, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetBool, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetInt32, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetInt32, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetFloat, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetFloat, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_GetString, 28)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_SetString, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveSection, 12)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_001_RemoveKeyInSection, 16)

const char * __thiscall winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, EVRSettingsError eError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(_this->u_iface, eError);
    return _ret;
}

bool __thiscall winIVRSettings_IVRSettings_001_Sync(struct w_steam_iface *_this, bool bForce, EVRSettingsError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_001_Sync(_this->u_iface, bForce, peError);
    return _ret;
}

bool __thiscall winIVRSettings_IVRSettings_001_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, bool bDefaultValue, EVRSettingsError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_001_GetBool(_this->u_iface, pchSection, pchSettingsKey, bDefaultValue, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetBool(_this->u_iface, pchSection, pchSettingsKey, bValue, peError);
}

int32_t __thiscall winIVRSettings_IVRSettings_001_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nDefaultValue, EVRSettingsError *peError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_001_GetInt32(_this->u_iface, pchSection, pchSettingsKey, nDefaultValue, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetInt32(_this->u_iface, pchSection, pchSettingsKey, nValue, peError);
}

float __thiscall winIVRSettings_IVRSettings_001_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flDefaultValue, EVRSettingsError *peError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_001_GetFloat(_this->u_iface, pchSection, pchSettingsKey, flDefaultValue, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetFloat(_this->u_iface, pchSection, pchSettingsKey, flValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_001_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, const char *pchDefaultValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_GetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, unValueLen, pchDefaultValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_001_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_SetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_001_RemoveSection(struct w_steam_iface *_this, const char *pchSection, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_RemoveSection(_this->u_iface, pchSection, peError);
}

void __thiscall winIVRSettings_IVRSettings_001_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_001_RemoveKeyInSection(_this->u_iface, pchSection, pchSettingsKey, peError);
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

struct w_steam_iface *create_winIVRSettings_IVRSettings_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSettings_IVRSettings_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSettings_IVRSettings_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRSettings_IVRSettings_002.h"

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_Sync, 12)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetBool, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetInt32, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetFloat, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_SetString, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetInt32, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetFloat, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_GetString, 24)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveSection, 12)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_002_RemoveKeyInSection, 16)

const char * __thiscall winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, EVRSettingsError eError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(_this->u_iface, eError);
    return _ret;
}

bool __thiscall winIVRSettings_IVRSettings_002_Sync(struct w_steam_iface *_this, bool bForce, EVRSettingsError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_002_Sync(_this->u_iface, bForce, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_002_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetBool(_this->u_iface, pchSection, pchSettingsKey, bValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_002_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetInt32(_this->u_iface, pchSection, pchSettingsKey, nValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_002_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetFloat(_this->u_iface, pchSection, pchSettingsKey, flValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_002_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_SetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, peError);
}

bool __thiscall winIVRSettings_IVRSettings_002_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_002_GetBool(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

int32_t __thiscall winIVRSettings_IVRSettings_002_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_002_GetInt32(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

float __thiscall winIVRSettings_IVRSettings_002_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_002_GetFloat(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_002_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_GetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}

void __thiscall winIVRSettings_IVRSettings_002_RemoveSection(struct w_steam_iface *_this, const char *pchSection, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_RemoveSection(_this->u_iface, pchSection, peError);
}

void __thiscall winIVRSettings_IVRSettings_002_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_002_RemoveKeyInSection(_this->u_iface, pchSection, pchSettingsKey, peError);
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

struct w_steam_iface *create_winIVRSettings_IVRSettings_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSettings_IVRSettings_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSettings_IVRSettings_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRSettings_IVRSettings_003.h"

DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetBool, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetInt32, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetFloat, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_SetString, 20)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetInt32, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetFloat, 16)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_GetString, 24)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_RemoveSection, 12)
DEFINE_THISCALL_WRAPPER(winIVRSettings_IVRSettings_003_RemoveKeyInSection, 16)

const char * __thiscall winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, EVRSettingsError eError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(_this->u_iface, eError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_003_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetBool(_this->u_iface, pchSection, pchSettingsKey, bValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_003_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetInt32(_this->u_iface, pchSection, pchSettingsKey, nValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_003_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetFloat(_this->u_iface, pchSection, pchSettingsKey, flValue, peError);
}

void __thiscall winIVRSettings_IVRSettings_003_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_SetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, peError);
}

bool __thiscall winIVRSettings_IVRSettings_003_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_003_GetBool(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

int32_t __thiscall winIVRSettings_IVRSettings_003_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    int32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_003_GetInt32(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

float __thiscall winIVRSettings_IVRSettings_003_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRSettings_IVRSettings_003_GetFloat(_this->u_iface, pchSection, pchSettingsKey, peError);
    return _ret;
}

void __thiscall winIVRSettings_IVRSettings_003_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_GetString(_this->u_iface, pchSection, pchSettingsKey, pchValue, unValueLen, peError);
}

void __thiscall winIVRSettings_IVRSettings_003_RemoveSection(struct w_steam_iface *_this, const char *pchSection, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_RemoveSection(_this->u_iface, pchSection, peError);
}

void __thiscall winIVRSettings_IVRSettings_003_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError)
{
    TRACE("%p\n", _this);
    cppIVRSettings_IVRSettings_003_RemoveKeyInSection(_this->u_iface, pchSection, pchSettingsKey, peError);
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

struct w_steam_iface *create_winIVRSettings_IVRSettings_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRSettings_IVRSettings_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRSettings_IVRSettings_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRSettings_IVRSettings_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRSettings_IVRSettings_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

