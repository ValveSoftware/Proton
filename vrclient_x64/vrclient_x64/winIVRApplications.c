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

#include "cppIVRApplications_IVRApplications_007.h"

typedef struct __winIVRApplications_IVRApplications_007 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_007;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_AddApplicationManifest(winIVRApplications_IVRApplications_007 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_RemoveApplicationManifest(winIVRApplications_IVRApplications_007 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_007_IsApplicationInstalled(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationCount(winIVRApplications_IVRApplications_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_007 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_007 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchApplication(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchTemplateApplication, 20)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchTemplateApplication(winIVRApplications_IVRApplications_007 *_this, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_LaunchTemplateApplication(_this->linux_side, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(winIVRApplications_IVRApplications_007 *_this, const char * pchMimeType, const char * pchArgs)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_LaunchApplicationFromMimeType(_this->linux_side, pchMimeType, pchArgs);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchDashboardOverlay(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_CancelApplicationLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_007_CancelApplicationLaunch(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_CancelApplicationLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_IdentifyApplication(winIVRApplications_IVRApplications_007 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationProcessId(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_007 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyString(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyBool(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64, 16)
uint64_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationPropertyUint64(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, const char * pchMimeType)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_SetDefaultApplicationForMimeType(_this->linux_side, pchAppKey, pchMimeType);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType, 16)
bool __thiscall winIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(winIVRApplications_IVRApplications_007 *_this, const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetDefaultApplicationForMimeType(_this->linux_side, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes, 16)
bool __thiscall winIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationSupportedMimeTypes(_this->linux_side, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType, 16)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(winIVRApplications_IVRApplications_007 *_this, const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationsThatSupportMimeType(_this->linux_side, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments, 16)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(winIVRApplications_IVRApplications_007 *_this, uint32_t unHandle, char * pchArgs, uint32_t unArgs)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetApplicationLaunchArguments(_this->linux_side, unHandle, pchArgs, unArgs);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_GetStartingApplication(winIVRApplications_IVRApplications_007 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetSceneApplicationState, 4)
EVRSceneApplicationState __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationState(winIVRApplications_IVRApplications_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetSceneApplicationState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_007 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(winIVRApplications_IVRApplications_007 *_this, EVRSceneApplicationState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetSceneApplicationStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_LaunchInternalProcess, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_007_LaunchInternalProcess(winIVRApplications_IVRApplications_007 *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_LaunchInternalProcess(_this->linux_side, pchBinaryPath, pchArguments, pchWorkingDirectory);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(winIVRApplications_IVRApplications_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_007_GetCurrentSceneProcessId(_this->linux_side);
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

winIVRApplications_IVRApplications_007 *create_winIVRApplications_IVRApplications_007(void *linux_side)
{
    winIVRApplications_IVRApplications_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_007));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_007_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_007(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_007 *create_winIVRApplications_IVRApplications_007_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_007));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_007_FnTable(void *object)
{
    winIVRApplications_IVRApplications_007 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_006.h"

typedef struct __winIVRApplications_IVRApplications_006 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_006;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_AddApplicationManifest(winIVRApplications_IVRApplications_006 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_RemoveApplicationManifest(winIVRApplications_IVRApplications_006 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_006_IsApplicationInstalled(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationCount(winIVRApplications_IVRApplications_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_006 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_006 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchApplication(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchTemplateApplication, 20)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchTemplateApplication(winIVRApplications_IVRApplications_006 *_this, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_LaunchTemplateApplication(_this->linux_side, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(winIVRApplications_IVRApplications_006 *_this, const char * pchMimeType, const char * pchArgs)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_LaunchApplicationFromMimeType(_this->linux_side, pchMimeType, pchArgs);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchDashboardOverlay(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_CancelApplicationLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_006_CancelApplicationLaunch(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_CancelApplicationLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_IdentifyApplication(winIVRApplications_IVRApplications_006 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationProcessId(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_006 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyString(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyBool(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64, 16)
uint64_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationPropertyUint64(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, const char * pchMimeType)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_SetDefaultApplicationForMimeType(_this->linux_side, pchAppKey, pchMimeType);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType, 16)
bool __thiscall winIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(winIVRApplications_IVRApplications_006 *_this, const char * pchMimeType, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetDefaultApplicationForMimeType(_this->linux_side, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes, 16)
bool __thiscall winIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey, char * pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationSupportedMimeTypes(_this->linux_side, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType, 16)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(winIVRApplications_IVRApplications_006 *_this, const char * pchMimeType, char * pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationsThatSupportMimeType(_this->linux_side, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments, 16)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(winIVRApplications_IVRApplications_006 *_this, uint32_t unHandle, char * pchArgs, uint32_t unArgs)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationLaunchArguments(_this->linux_side, unHandle, pchArgs, unArgs);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_GetStartingApplication(winIVRApplications_IVRApplications_006 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_006_GetTransitionState(winIVRApplications_IVRApplications_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_006 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_006 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested, 4)
bool __thiscall winIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(winIVRApplications_IVRApplications_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_IsQuitUserPromptRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_LaunchInternalProcess, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_006_LaunchInternalProcess(winIVRApplications_IVRApplications_006 *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_LaunchInternalProcess(_this->linux_side, pchBinaryPath, pchArguments, pchWorkingDirectory);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(winIVRApplications_IVRApplications_006 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_006_GetCurrentSceneProcessId(_this->linux_side);
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

winIVRApplications_IVRApplications_006 *create_winIVRApplications_IVRApplications_006(void *linux_side)
{
    winIVRApplications_IVRApplications_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_006));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_006_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_006(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_006 *create_winIVRApplications_IVRApplications_006_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_006));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_006_FnTable(void *object)
{
    winIVRApplications_IVRApplications_006 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_005.h"

typedef struct __winIVRApplications_IVRApplications_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_005;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_AddApplicationManifest(winIVRApplications_IVRApplications_005 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_RemoveApplicationManifest(winIVRApplications_IVRApplications_005 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_005_IsApplicationInstalled(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationCount(winIVRApplications_IVRApplications_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_005 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_005 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchApplication(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchTemplateApplication, 20)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchTemplateApplication(winIVRApplications_IVRApplications_005 *_this, const char * pchTemplateAppKey, const char * pchNewAppKey, AppOverrideKeys_t * pKeys, uint32_t unKeys)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_LaunchTemplateApplication(_this->linux_side, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchDashboardOverlay(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_CancelApplicationLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_005_CancelApplicationLaunch(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_CancelApplicationLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_IdentifyApplication(winIVRApplications_IVRApplications_005 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationProcessId(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_005 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyString(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyBool(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64, 16)
uint64_t __thiscall winIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationPropertyUint64(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_GetStartingApplication(winIVRApplications_IVRApplications_005 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_005_GetTransitionState(winIVRApplications_IVRApplications_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_005 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_005 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested, 4)
bool __thiscall winIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(winIVRApplications_IVRApplications_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_IsQuitUserPromptRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_005_LaunchInternalProcess, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_005_LaunchInternalProcess(winIVRApplications_IVRApplications_005 *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_005_LaunchInternalProcess(_this->linux_side, pchBinaryPath, pchArguments, pchWorkingDirectory);
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

winIVRApplications_IVRApplications_005 *create_winIVRApplications_IVRApplications_005(void *linux_side)
{
    winIVRApplications_IVRApplications_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_005 *create_winIVRApplications_IVRApplications_005_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_005));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_005_FnTable(void *object)
{
    winIVRApplications_IVRApplications_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_004.h"

typedef struct __winIVRApplications_IVRApplications_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_004;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_AddApplicationManifest(winIVRApplications_IVRApplications_004 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_RemoveApplicationManifest(winIVRApplications_IVRApplications_004 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_004_IsApplicationInstalled(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationCount(winIVRApplications_IVRApplications_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_004 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_004 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchApplication(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchDashboardOverlay(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_CancelApplicationLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_004_CancelApplicationLaunch(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_CancelApplicationLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_IdentifyApplication(winIVRApplications_IVRApplications_004 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationProcessId(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_004 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyString(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyBool(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64, 16)
uint64_t __thiscall winIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationPropertyUint64(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_GetStartingApplication(winIVRApplications_IVRApplications_004 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_004_GetTransitionState(winIVRApplications_IVRApplications_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_004 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_004 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested, 4)
bool __thiscall winIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(winIVRApplications_IVRApplications_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_IsQuitUserPromptRequested(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_004_LaunchInternalProcess, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_004_LaunchInternalProcess(winIVRApplications_IVRApplications_004 *_this, const char * pchBinaryPath, const char * pchArguments, const char * pchWorkingDirectory)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_004_LaunchInternalProcess(_this->linux_side, pchBinaryPath, pchArguments, pchWorkingDirectory);
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

winIVRApplications_IVRApplications_004 *create_winIVRApplications_IVRApplications_004(void *linux_side)
{
    winIVRApplications_IVRApplications_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_004 *create_winIVRApplications_IVRApplications_004_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_004));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_004_FnTable(void *object)
{
    winIVRApplications_IVRApplications_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_003.h"

typedef struct __winIVRApplications_IVRApplications_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_003;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_AddApplicationManifest(winIVRApplications_IVRApplications_003 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_RemoveApplicationManifest(winIVRApplications_IVRApplications_003 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_003_IsApplicationInstalled(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationCount(winIVRApplications_IVRApplications_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_003 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_003 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_LaunchApplication(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_LaunchDashboardOverlay(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_IdentifyApplication(winIVRApplications_IVRApplications_003 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationProcessId(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_003 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyString(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyBool(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64, 16)
uint64_t __thiscall winIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationPropertyUint64(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_GetStartingApplication(winIVRApplications_IVRApplications_003 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_003_GetTransitionState(winIVRApplications_IVRApplications_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_003 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_003 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested, 4)
bool __thiscall winIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(winIVRApplications_IVRApplications_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_003_IsQuitUserPromptRequested(_this->linux_side);
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

winIVRApplications_IVRApplications_003 *create_winIVRApplications_IVRApplications_003(void *linux_side)
{
    winIVRApplications_IVRApplications_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_003 *create_winIVRApplications_IVRApplications_003_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_003));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_003_FnTable(void *object)
{
    winIVRApplications_IVRApplications_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_002.h"

typedef struct __winIVRApplications_IVRApplications_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_002;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_AddApplicationManifest(winIVRApplications_IVRApplications_002 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_RemoveApplicationManifest(winIVRApplications_IVRApplications_002 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_002_IsApplicationInstalled(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationCount(winIVRApplications_IVRApplications_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_002 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_002 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_LaunchApplication(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_LaunchDashboardOverlay(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_IdentifyApplication(winIVRApplications_IVRApplications_002 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationProcessId(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_002 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyString(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_002_GetApplicationPropertyBool(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_GetStartingApplication(winIVRApplications_IVRApplications_002 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_002_GetTransitionState(winIVRApplications_IVRApplications_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_002 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_002 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested, 4)
bool __thiscall winIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(winIVRApplications_IVRApplications_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_002_IsQuitUserPromptRequested(_this->linux_side);
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

winIVRApplications_IVRApplications_002 *create_winIVRApplications_IVRApplications_002(void *linux_side)
{
    winIVRApplications_IVRApplications_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_002 *create_winIVRApplications_IVRApplications_002_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_002));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_002_FnTable(void *object)
{
    winIVRApplications_IVRApplications_002 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRApplications_IVRApplications_001.h"

typedef struct __winIVRApplications_IVRApplications_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRApplications_IVRApplications_001;

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_AddApplicationManifest, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_AddApplicationManifest(winIVRApplications_IVRApplications_001 *_this, const char * pchApplicationManifestFullPath, bool bTemporary)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_AddApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL, bTemporary);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_RemoveApplicationManifest, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_RemoveApplicationManifest(winIVRApplications_IVRApplications_001 *_this, const char * pchApplicationManifestFullPath)
{
    char lin_pchApplicationManifestFullPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchApplicationManifestFullPath, lin_pchApplicationManifestFullPath);
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_RemoveApplicationManifest(_this->linux_side, pchApplicationManifestFullPath ? lin_pchApplicationManifestFullPath : NULL);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_IsApplicationInstalled, 8)
bool __thiscall winIVRApplications_IVRApplications_001_IsApplicationInstalled(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_IsApplicationInstalled(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationCount, 4)
uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationCount(winIVRApplications_IVRApplications_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(winIVRApplications_IVRApplications_001 *_this, uint32_t unApplicationIndex, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationKeyByIndex(_this->linux_side, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId, 16)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(winIVRApplications_IVRApplications_001 *_this, uint32_t unProcessId, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationKeyByProcessId(_this->linux_side, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_LaunchApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_LaunchApplication(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_LaunchApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_LaunchDashboardOverlay, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_LaunchDashboardOverlay(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_LaunchDashboardOverlay(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_IdentifyApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_IdentifyApplication(winIVRApplications_IVRApplications_001 *_this, uint32_t unProcessId, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_IdentifyApplication(_this->linux_side, unProcessId, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationProcessId, 8)
uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationProcessId(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationProcessId(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(winIVRApplications_IVRApplications_001 *_this, EVRApplicationError error)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationsErrorNameFromEnum(_this->linux_side, error);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationPropertyString, 24)
uint32_t __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyString(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, char * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationPropertyString(_this->linux_side, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationPropertyBool, 16)
bool __thiscall winIVRApplications_IVRApplications_001_GetApplicationPropertyBool(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationPropertyBool(_this->linux_side, pchAppKey, eProperty, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetHomeApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetHomeApplication(winIVRApplications_IVRApplications_001 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetHomeApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_SetHomeApplication, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_SetHomeApplication(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_SetHomeApplication(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch, 9)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey, bool bAutoLaunch)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_SetApplicationAutoLaunch(_this->linux_side, pchAppKey, bAutoLaunch);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch, 8)
bool __thiscall winIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationAutoLaunch(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetStartingApplication, 12)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_GetStartingApplication(winIVRApplications_IVRApplications_001 *_this, char * pchAppKeyBuffer, uint32_t unAppKeyBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetStartingApplication(_this->linux_side, pchAppKeyBuffer, unAppKeyBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetTransitionState, 4)
EVRApplicationTransitionState __thiscall winIVRApplications_IVRApplications_001_GetTransitionState(winIVRApplications_IVRApplications_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetTransitionState(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck, 8)
EVRApplicationError __thiscall winIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(winIVRApplications_IVRApplications_001 *_this, const char * pchAppKey)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_PerformApplicationPrelaunchCheck(_this->linux_side, pchAppKey);
}

DEFINE_THISCALL_WRAPPER(winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum, 8)
const char * __thiscall winIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(winIVRApplications_IVRApplications_001 *_this, EVRApplicationTransitionState state)
{
    TRACE("%p\n", _this);
    return cppIVRApplications_IVRApplications_001_GetApplicationsTransitionStateNameFromEnum(_this->linux_side, state);
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

winIVRApplications_IVRApplications_001 *create_winIVRApplications_IVRApplications_001(void *linux_side)
{
    winIVRApplications_IVRApplications_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRApplications_IVRApplications_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRApplications_IVRApplications_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRApplications_IVRApplications_001 *create_winIVRApplications_IVRApplications_001_FnTable(void *linux_side)
{
    winIVRApplications_IVRApplications_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRApplications_IVRApplications_001));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRApplications_IVRApplications_001_FnTable(void *object)
{
    winIVRApplications_IVRApplications_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

