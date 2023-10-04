/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

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

const char * __thiscall winIVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eError)
{
    struct IVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_GetSettingsErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSettings_IVRSettings_001_Sync(struct w_steam_iface *_this, int8_t bForce, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_Sync_params params =
    {
        .linux_side = _this->u_iface,
        .bForce = bForce,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_Sync, &params );
    return params._ret;
}

int8_t __thiscall winIVRSettings_IVRSettings_001_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int8_t bDefaultValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_GetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .bDefaultValue = bDefaultValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_GetBool, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int8_t bValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_SetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .bValue = bValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_SetBool, &params );
}

int32_t __thiscall winIVRSettings_IVRSettings_001_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nDefaultValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_GetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .nDefaultValue = nDefaultValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_GetInt32, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_SetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .nValue = nValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_SetInt32, &params );
}

float __thiscall winIVRSettings_IVRSettings_001_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flDefaultValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_GetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .flDefaultValue = flDefaultValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_GetFloat, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_001_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_SetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .flValue = flValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_SetFloat, &params );
}

void __thiscall winIVRSettings_IVRSettings_001_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, const char *pchDefaultValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_GetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .unValueLen = unValueLen,
        .pchDefaultValue = pchDefaultValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_GetString, &params );
}

void __thiscall winIVRSettings_IVRSettings_001_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_SetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_SetString, &params );
}

void __thiscall winIVRSettings_IVRSettings_001_RemoveSection(struct w_steam_iface *_this, const char *pchSection, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_RemoveSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_RemoveSection, &params );
}

void __thiscall winIVRSettings_IVRSettings_001_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_001_RemoveKeyInSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_001_RemoveKeyInSection, &params );
}

extern vtable_ptr winIVRSettings_IVRSettings_001_vtable;

DEFINE_RTTI_DATA0(winIVRSettings_IVRSettings_001, 0, ".?AVIVRSettings@@")

__ASM_BLOCK_BEGIN(winIVRSettings_IVRSettings_001_vtables)
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
__ASM_BLOCK_END

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

const char * __thiscall winIVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eError)
{
    struct IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_GetSettingsErrorNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRSettings_IVRSettings_002_Sync(struct w_steam_iface *_this, int8_t bForce, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_Sync_params params =
    {
        .linux_side = _this->u_iface,
        .bForce = bForce,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_Sync, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_002_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int8_t bValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_SetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .bValue = bValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_SetBool, &params );
}

void __thiscall winIVRSettings_IVRSettings_002_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_SetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .nValue = nValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_SetInt32, &params );
}

void __thiscall winIVRSettings_IVRSettings_002_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_SetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .flValue = flValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_SetFloat, &params );
}

void __thiscall winIVRSettings_IVRSettings_002_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_SetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_SetString, &params );
}

int8_t __thiscall winIVRSettings_IVRSettings_002_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_GetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_GetBool, &params );
    return params._ret;
}

int32_t __thiscall winIVRSettings_IVRSettings_002_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_GetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_GetInt32, &params );
    return params._ret;
}

float __thiscall winIVRSettings_IVRSettings_002_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_GetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_GetFloat, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_002_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_GetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .unValueLen = unValueLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_GetString, &params );
}

void __thiscall winIVRSettings_IVRSettings_002_RemoveSection(struct w_steam_iface *_this, const char *pchSection, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_RemoveSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_RemoveSection, &params );
}

void __thiscall winIVRSettings_IVRSettings_002_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_002_RemoveKeyInSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_002_RemoveKeyInSection, &params );
}

extern vtable_ptr winIVRSettings_IVRSettings_002_vtable;

DEFINE_RTTI_DATA0(winIVRSettings_IVRSettings_002, 0, ".?AVIVRSettings@@")

__ASM_BLOCK_BEGIN(winIVRSettings_IVRSettings_002_vtables)
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
__ASM_BLOCK_END

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

const char * __thiscall winIVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eError)
{
    struct IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eError = eError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_GetSettingsErrorNameFromEnum, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_003_SetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int8_t bValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_SetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .bValue = bValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_SetBool, &params );
}

void __thiscall winIVRSettings_IVRSettings_003_SetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, int32_t nValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_SetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .nValue = nValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_SetInt32, &params );
}

void __thiscall winIVRSettings_IVRSettings_003_SetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, float flValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_SetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .flValue = flValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_SetFloat, &params );
}

void __thiscall winIVRSettings_IVRSettings_003_SetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, const char *pchValue, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_SetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_SetString, &params );
}

int8_t __thiscall winIVRSettings_IVRSettings_003_GetBool(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_GetBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_GetBool, &params );
    return params._ret;
}

int32_t __thiscall winIVRSettings_IVRSettings_003_GetInt32(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_GetInt32_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_GetInt32, &params );
    return params._ret;
}

float __thiscall winIVRSettings_IVRSettings_003_GetFloat(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_GetFloat_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_GetFloat, &params );
    return params._ret;
}

void __thiscall winIVRSettings_IVRSettings_003_GetString(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_GetString_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .pchValue = pchValue,
        .unValueLen = unValueLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_GetString, &params );
}

void __thiscall winIVRSettings_IVRSettings_003_RemoveSection(struct w_steam_iface *_this, const char *pchSection, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_RemoveSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_RemoveSection, &params );
}

void __thiscall winIVRSettings_IVRSettings_003_RemoveKeyInSection(struct w_steam_iface *_this, const char *pchSection, const char *pchSettingsKey, uint32_t *peError)
{
    struct IVRSettings_IVRSettings_003_RemoveKeyInSection_params params =
    {
        .linux_side = _this->u_iface,
        .pchSection = pchSection,
        .pchSettingsKey = pchSettingsKey,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSettings_IVRSettings_003_RemoveKeyInSection, &params );
}

extern vtable_ptr winIVRSettings_IVRSettings_003_vtable;

DEFINE_RTTI_DATA0(winIVRSettings_IVRSettings_003, 0, ".?AVIVRSettings@@")

__ASM_BLOCK_BEGIN(winIVRSettings_IVRSettings_003_vtables)
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
__ASM_BLOCK_END

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

void init_winIVRSettings_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRSettings_IVRSettings_001_rtti( base );
    init_winIVRSettings_IVRSettings_002_rtti( base );
    init_winIVRSettings_IVRSettings_003_rtti( base );
#endif /* __x86_64__ */
}
