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

#include "cppIVRApplications_IVRApplications_001.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_001_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetHomeApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetHomeApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_SetHomeApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_SetHomeApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_001_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_002.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_002_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_002_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_003.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_003_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_003_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_004.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_004_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_004_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_CancelApplicationLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_004_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_004_LaunchInternalProcess(_this->u_iface, pchBinaryPath, pchArguments, pchWorkingDirectory);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_005.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_005_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_LaunchTemplateApplication(_this->u_iface, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_005_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_CancelApplicationLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_005_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_005_LaunchInternalProcess(_this->u_iface, pchBinaryPath, pchArguments, pchWorkingDirectory);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_006.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_LaunchTemplateApplication(_this->u_iface, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(struct w_steam_iface *_this, const char *pchMimeType, const char *pchArgs)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(_this->u_iface, pchMimeType, pchArgs);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_CancelApplicationLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchAppKey, const char *pchMimeType)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(_this->u_iface, pchAppKey, pchMimeType);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(_this->u_iface, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(struct w_steam_iface *_this, const char *pchAppKey, char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(_this->u_iface, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(_this->u_iface, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(struct w_steam_iface *_this, uint32_t unHandle, char *pchArgs, uint32_t unArgs)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(_this->u_iface, unHandle, pchArgs, unArgs);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_006_GetTransitionState(struct w_steam_iface *_this)
{
    EVRApplicationTransitionState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetTransitionState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(struct w_steam_iface *_this, EVRApplicationTransitionState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_LaunchInternalProcess(_this->u_iface, pchBinaryPath, pchArguments, pchWorkingDirectory);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRApplications_IVRApplications_007.h"

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

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_AddApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath, bool bTemporary)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_AddApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_RemoveApplicationManifest(struct w_steam_iface *_this, const char *pchApplicationManifestFullPath)
{
    EVRApplicationError _ret;
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_RemoveApplicationManifest(_this->u_iface, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_IsApplicationInstalled(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_IsApplicationInstalled(_this->u_iface, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationCount(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationCount(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(struct w_steam_iface *_this, uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(_this->u_iface, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(struct w_steam_iface *_this, uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(_this->u_iface, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchApplication(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_LaunchApplication(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchTemplateApplication(struct w_steam_iface *_this, const char *pchTemplateAppKey, const char *pchNewAppKey, const AppOverrideKeys_t *pKeys, uint32_t unKeys)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_LaunchTemplateApplication(_this->u_iface, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(struct w_steam_iface *_this, const char *pchMimeType, const char *pchArgs)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(_this->u_iface, pchMimeType, pchArgs);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchDashboardOverlay(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay(_this->u_iface, pchAppKey);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_CancelApplicationLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_CancelApplicationLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_IdentifyApplication(struct w_steam_iface *_this, uint32_t unProcessId, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_IdentifyApplication(_this->u_iface, unProcessId, pchAppKey);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationProcessId(struct w_steam_iface *_this, const char *pchAppKey)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationProcessId(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(struct w_steam_iface *_this, EVRApplicationError error)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(_this->u_iface, error);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyString(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationPropertyString(_this->u_iface, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyBool(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

uint64_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(struct w_steam_iface *_this, const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError)
{
    uint64_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(_this->u_iface, pchAppKey, eProperty, peError);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey, bool bAutoLaunch)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(_this->u_iface, pchAppKey, bAutoLaunch);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(struct w_steam_iface *_this, const char *pchAppKey)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(_this->u_iface, pchAppKey);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchAppKey, const char *pchMimeType)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(_this->u_iface, pchAppKey, pchMimeType);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(_this->u_iface, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(struct w_steam_iface *_this, const char *pchAppKey, char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(_this->u_iface, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(struct w_steam_iface *_this, const char *pchMimeType, char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(_this->u_iface, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(struct w_steam_iface *_this, uint32_t unHandle, char *pchArgs, uint32_t unArgs)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(_this->u_iface, unHandle, pchArgs, unArgs);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetStartingApplication(struct w_steam_iface *_this, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetStartingApplication(_this->u_iface, pchAppKeyBuffer, unAppKeyBufferLen);
    return _ret;
}

EVRSceneApplicationState __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationState(struct w_steam_iface *_this)
{
    EVRSceneApplicationState _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetSceneApplicationState(_this->u_iface);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(struct w_steam_iface *_this, const char *pchAppKey)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(_this->u_iface, pchAppKey);
    return _ret;
}

const char * __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(struct w_steam_iface *_this, EVRSceneApplicationState state)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(_this->u_iface, state);
    return _ret;
}

EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchInternalProcess(struct w_steam_iface *_this, const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory)
{
    EVRApplicationError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_LaunchInternalProcess(_this->u_iface, pchBinaryPath, pchArguments, pchWorkingDirectory);
    return _ret;
}

uint32_t __thiscall winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(struct w_steam_iface *_this)
{
    uint32_t _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRApplications_IVRApplications_007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

