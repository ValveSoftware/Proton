/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetHomeApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_SetHomeApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum, 8)

uint32_t __thiscall winIVRApplications_IVRApplications_001_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_001_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_001_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_001_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_001_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_001_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_LaunchDashboardOverlay, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_001_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_001_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetHomeApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_001_GetHomeApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetHomeApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_SetHomeApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_SetHomeApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_SetHomeApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_001_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_001_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_001_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_001_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_001, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_001_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_001,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetHomeApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_SetHomeApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(21);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 21 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_001_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_001_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_001_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_001_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_001_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_001_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_001_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_001_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_001_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_001_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_001_GetHomeApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_001_SetHomeApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_001_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_001_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    for (i = 0; i < 21; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested, 4)

uint32_t __thiscall winIVRApplications_IVRApplications_002_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_002_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_002_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_002_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_002_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_002_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_LaunchDashboardOverlay, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_002_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_002_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_002_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_002_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_002_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_002_IsQuitUserPromptRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_002_IsQuitUserPromptRequested, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_002_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_002, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_002_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_002,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(20);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 20 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_002_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_002_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_002_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_002_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_002_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_002_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_002_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_002_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_002_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_002_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_002_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_002_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested, 0, FALSE, FALSE);
    for (i = 0; i < 20; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested, 4)

uint32_t __thiscall winIVRApplications_IVRApplications_003_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_003_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_003_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_003_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_003_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_003_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_003_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_LaunchDashboardOverlay, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_003_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_003_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_003_GetApplicationPropertyUint64_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationPropertyUint64, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_003_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_003_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_003_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_003_IsQuitUserPromptRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_003_IsQuitUserPromptRequested, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_003_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_003, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_003_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_003,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(21);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 21 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_003_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_003_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_003_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_003_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_003_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_003_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_003_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_003_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_003_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_003_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_003_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_003_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested, 0, FALSE, FALSE);
    for (i = 0; i < 21; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_CancelApplicationLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchInternalProcess, 16)

uint32_t __thiscall winIVRApplications_IVRApplications_004_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_004_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_004_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_004_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_004_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_004_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_LaunchDashboardOverlay, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_004_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_CancelApplicationLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_CancelApplicationLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_004_GetApplicationPropertyUint64_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationPropertyUint64, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_004_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_004_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_004_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_004_IsQuitUserPromptRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_IsQuitUserPromptRequested, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_004_LaunchInternalProcess_params params =
    {
        .linux_side = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_004_LaunchInternalProcess, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_004_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_004, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_004_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_004,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_CancelApplicationLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_004_LaunchInternalProcess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(23);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 23 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_004_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_004_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_004_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_004_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_004_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_004_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_004_CancelApplicationLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_004_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_004_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_004_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_004_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64, 3, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_004_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_004_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested, 0, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRApplications_IVRApplications_004_LaunchInternalProcess, 3, FALSE, FALSE);
    for (i = 0; i < 23; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchTemplateApplication, 20)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_CancelApplicationLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchInternalProcess, 16)

uint32_t __thiscall winIVRApplications_IVRApplications_005_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_005_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_005_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_005_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_005_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_005_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const w_AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    struct IVRApplications_IVRApplications_005_LaunchTemplateApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchTemplateAppKey = pchTemplateAppKey,
        .pchNewAppKey = pchNewAppKey,
        .pKeys = pKeys,
        .unKeys = unKeys,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_LaunchTemplateApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_LaunchDashboardOverlay, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_005_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_CancelApplicationLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_CancelApplicationLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_005_GetApplicationPropertyUint64_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationPropertyUint64, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_005_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_005_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_005_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_005_IsQuitUserPromptRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_IsQuitUserPromptRequested, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_005_LaunchInternalProcess_params params =
    {
        .linux_side = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_005_LaunchInternalProcess, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_005_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_005, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_005_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_005,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_LaunchTemplateApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_CancelApplicationLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_005_LaunchInternalProcess)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_005_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_005_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_005_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_005_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_005_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_005_LaunchTemplateApplication, 4, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_005_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_005_CancelApplicationLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_005_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_005_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_005_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_005_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64, 3, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_005_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_005_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested, 0, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRApplications_IVRApplications_005_LaunchInternalProcess, 3, FALSE, FALSE);
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchTemplateApplication, 20)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_CancelApplicationLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetTransitionState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchInternalProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId, 4)

uint32_t __thiscall winIVRApplications_IVRApplications_006_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_006_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_006_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_006_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_006_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const w_AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    struct IVRApplications_IVRApplications_006_LaunchTemplateApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchTemplateAppKey = pchTemplateAppKey,
        .pchNewAppKey = pchNewAppKey,
        .pKeys = pKeys,
        .unKeys = unKeys,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchTemplateApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(struct w_steam_iface *_this, const char *pchMimeType, const char *pchArgs)
{
    struct IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchArgs = pchArgs,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchApplicationFromMimeType, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchDashboardOverlay, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_CancelApplicationLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_CancelApplicationLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_006_GetApplicationPropertyUint64_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationPropertyUint64, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_006_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchAppKey, const char *pchMimeType)
{
    struct IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .pchMimeType = pchMimeType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(struct w_steam_iface *_this, const char *pchAppKey, char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    struct IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .pchMimeTypesBuffer = pchMimeTypesBuffer,
        .unMimeTypesBuffer = unMimeTypesBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    struct IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchAppKeysThatSupportBuffer = pchAppKeysThatSupportBuffer,
        .unAppKeysThatSupportBuffer = unAppKeysThatSupportBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(struct w_steam_iface *_this, uint32_t unHandle, char *pchArgs, uint32_t unArgs)
{
    struct IVRApplications_IVRApplications_006_GetApplicationLaunchArguments_params params =
    {
        .linux_side = _this->u_iface,
        .unHandle = unHandle,
        .pchArgs = pchArgs,
        .unArgs = unArgs,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationLaunchArguments, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_006_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetTransitionState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_006_GetTransitionState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetTransitionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_006_IsQuitUserPromptRequested_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_IsQuitUserPromptRequested, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_006_LaunchInternalProcess_params params =
    {
        .linux_side = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_006_GetCurrentSceneProcessId_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_006_GetCurrentSceneProcessId, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_006_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_006, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_006_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_006,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_LaunchTemplateApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_CancelApplicationLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetTransitionState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_LaunchInternalProcess)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(31);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 31 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_006_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_006_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_006_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_006_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_006_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_006_LaunchTemplateApplication, 4, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_006_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_006_CancelApplicationLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_006_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_006_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_006_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_006_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRApplications_IVRApplications_006_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRApplications_IVRApplications_006_GetTransitionState, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested, 0, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRApplications_IVRApplications_006_LaunchInternalProcess, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId, 0, FALSE, FALSE);
    for (i = 0; i < 31; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_AddApplicationManifest, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_RemoveApplicationManifest, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_IsApplicationInstalled, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchApplication, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchTemplateApplication, 20)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchDashboardOverlay, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_CancelApplicationLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_IdentifyApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationProcessId, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyString, 24)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyBool, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetStartingApplication, 12)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetSceneApplicationState, 4)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchInternalProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId, 4)

uint32_t __thiscall winIVRApplications_IVRApplications_007_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, int8_t bTemporary)
{
    struct IVRApplications_IVRApplications_007_AddApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
        .bTemporary = bTemporary,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_AddApplicationManifest, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    struct IVRApplications_IVRApplications_007_RemoveApplicationManifest_params params =
    {
        .linux_side = _this->u_iface,
        .pchApplicationManifestFullPath = pchApplicationManifestFullPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_RemoveApplicationManifest, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_IsApplicationInstalled_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_IsApplicationInstalled, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationCount(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_007_GetApplicationCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_007_GetApplicationKeyByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unApplicationIndex = unApplicationIndex,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationKeyByIndex, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationKeyByProcessId, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_LaunchApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const w_AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    struct IVRApplications_IVRApplications_007_LaunchTemplateApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchTemplateAppKey = pchTemplateAppKey,
        .pchNewAppKey = pchNewAppKey,
        .pKeys = pKeys,
        .unKeys = unKeys,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchTemplateApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(struct w_steam_iface *_this, const char *pchMimeType, const char *pchArgs)
{
    struct IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchArgs = pchArgs,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchApplicationFromMimeType, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_LaunchDashboardOverlay_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchDashboardOverlay, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_CancelApplicationLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_CancelApplicationLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_IdentifyApplication_params params =
    {
        .linux_side = _this->u_iface,
        .unProcessId = unProcessId,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_IdentifyApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_GetApplicationProcessId_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationProcessId, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyString_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .pchPropertyValueBuffer = pchPropertyValueBuffer,
        .unPropertyValueBufferLen = unPropertyValueBufferLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationPropertyString, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyBool_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationPropertyBool, &params );
    return params._ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, uint32_t eProperty, uint32_t *peError)
{
    struct IVRApplications_IVRApplications_007_GetApplicationPropertyUint64_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .eProperty = eProperty,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationPropertyUint64, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, int8_t bAutoLaunch)
{
    struct IVRApplications_IVRApplications_007_SetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .bAutoLaunch = bAutoLaunch,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_SetApplicationAutoLaunch, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_GetApplicationAutoLaunch_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationAutoLaunch, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchAppKey, const char *pchMimeType)
{
    struct IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .pchMimeType = pchMimeType,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType, &params );
    return params._ret;
}

int8_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(struct w_steam_iface *_this, const char *pchAppKey, char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    struct IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .pchMimeTypesBuffer = pchMimeTypesBuffer,
        .unMimeTypesBuffer = unMimeTypesBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    struct IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType_params params =
    {
        .linux_side = _this->u_iface,
        .pchMimeType = pchMimeType,
        .pchAppKeysThatSupportBuffer = pchAppKeysThatSupportBuffer,
        .unAppKeysThatSupportBuffer = unAppKeysThatSupportBuffer,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(struct w_steam_iface *_this, uint32_t unHandle, char *pchArgs, uint32_t unArgs)
{
    struct IVRApplications_IVRApplications_007_GetApplicationLaunchArguments_params params =
    {
        .linux_side = _this->u_iface,
        .unHandle = unHandle,
        .pchArgs = pchArgs,
        .unArgs = unArgs,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetApplicationLaunchArguments, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    struct IVRApplications_IVRApplications_007_GetStartingApplication_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKeyBuffer = pchAppKeyBuffer,
        .unAppKeyBufferLen = unAppKeyBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetStartingApplication, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationState(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_007_GetSceneApplicationState_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetSceneApplicationState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    struct IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck, &params );
    return params._ret;
}

const char * __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(struct w_steam_iface *_this, uint32_t state)
{
    struct IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .state = state,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    struct IVRApplications_IVRApplications_007_LaunchInternalProcess_params params =
    {
        .linux_side = _this->u_iface,
        .pchBinaryPath = pchBinaryPath,
        .pchArguments = pchArguments,
        .pchWorkingDirectory = pchWorkingDirectory,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_LaunchInternalProcess, &params );
    return params._ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(struct w_steam_iface *_this)
{
    struct IVRApplications_IVRApplications_007_GetCurrentSceneProcessId_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRApplications_IVRApplications_007_GetCurrentSceneProcessId, &params );
    return params._ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_007_vtable;

DEFINE_RTTI_DATA0(winIVRApplications_IVRApplications_007, 0, ".?AVIVRApplications@@")

__ASM_BLOCK_BEGIN(winIVRApplications_IVRApplications_007_vtables)
    __ASM_VTABLE(winIVRApplications_IVRApplications_007,
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_AddApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_RemoveApplicationManifest)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_IsApplicationInstalled)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationCount)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_LaunchApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_LaunchTemplateApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_LaunchDashboardOverlay)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_CancelApplicationLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_IdentifyApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationProcessId)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationPropertyString)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationPropertyBool)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetStartingApplication)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetSceneApplicationState)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_LaunchInternalProcess)
        VTABLE_ADD_FUNC(winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRApplications_IVRApplications_007(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_007_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRApplications_IVRApplications_007(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRApplications_IVRApplications_007_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(30);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 30 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRApplications_IVRApplications_007_AddApplicationManifest, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRApplications_IVRApplications_007_RemoveApplicationManifest, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRApplications_IVRApplications_007_IsApplicationInstalled, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRApplications_IVRApplications_007_GetApplicationCount, 0, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRApplications_IVRApplications_007_LaunchApplication, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRApplications_IVRApplications_007_LaunchTemplateApplication, 4, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRApplications_IVRApplications_007_LaunchDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRApplications_IVRApplications_007_CancelApplicationLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRApplications_IVRApplications_007_IdentifyApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRApplications_IVRApplications_007_GetApplicationProcessId, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRApplications_IVRApplications_007_GetApplicationPropertyString, 5, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRApplications_IVRApplications_007_GetApplicationPropertyBool, 3, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch, 1, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRApplications_IVRApplications_007_GetStartingApplication, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRApplications_IVRApplications_007_GetSceneApplicationState, 0, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRApplications_IVRApplications_007_LaunchInternalProcess, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId, 0, FALSE, FALSE);
    for (i = 0; i < 30; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_007_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRApplications_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRApplications_IVRApplications_001_rtti( base );
    init_winIVRApplications_IVRApplications_002_rtti( base );
    init_winIVRApplications_IVRApplications_003_rtti( base );
    init_winIVRApplications_IVRApplications_004_rtti( base );
    init_winIVRApplications_IVRApplications_005_rtti( base );
    init_winIVRApplications_IVRApplications_006_rtti( base );
    init_winIVRApplications_IVRApplications_007_rtti( base );
#endif /* __x86_64__ */
}
