/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION.h"

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode, 8)

bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(struct w_steam_iface *_this, const char *pchAbsolutePathToControllerConfigVDF)
{
    bool _ret;
    const char *u_pchAbsolutePathToControllerConfigVDF = steamclient_dos_to_unix_path( pchAbsolutePathToControllerConfigVDF, 0 );
    TRACE("%p\n", _this);
    _ret = cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(_this->u_iface, pchAbsolutePathToControllerConfigVDF ? u_pchAbsolutePathToControllerConfigVDF : NULL);
    steamclient_free_path( u_pchAbsolutePathToControllerConfigVDF );
    return _ret;
}

bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(_this->u_iface);
}

bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(struct w_steam_iface *_this, uint32 unControllerIndex, SteamControllerState001_t *pState)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(_this->u_iface, unControllerIndex, pState);
    return _ret;
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(struct w_steam_iface *_this, uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(_this->u_iface, unControllerIndex, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(struct w_steam_iface *_this, const char *pchMode)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(_this->u_iface, pchMode);
}

extern vtable_ptr winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION,
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_STEAMCONTROLLER_INTERFACE_VERSION(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMCONTROLLER_INTERFACE_VERSION");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtable, 6, "STEAMCONTROLLER_INTERFACE_VERSION");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController003.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_TriggerRepeatedHapticPulse, 32)

bool __thiscall winISteamController_SteamController003_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController003_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController003_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController003_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

bool __thiscall winISteamController_SteamController003_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController003_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController003_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController003_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController003_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController003_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController003_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController003_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController003_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController003_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController003_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController003_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController003_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

void __thiscall winISteamController_SteamController003_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

void __thiscall winISteamController_SteamController003_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController003_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

extern vtable_ptr winISteamController_SteamController003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController003,
        VTABLE_ADD_FUNC(winISteamController_SteamController003_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController003_TriggerRepeatedHapticPulse)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController003_vtable, 17, "SteamController003");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController004.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowAnalogActionOrigins, 32)

bool __thiscall winISteamController_SteamController004_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController004_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController004_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController004_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

bool __thiscall winISteamController_SteamController004_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController004_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController004_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController004_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController004_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController004_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController004_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController004_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController004_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController004_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController004_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController004_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

void __thiscall winISteamController_SteamController004_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

void __thiscall winISteamController_SteamController004_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController004_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

int __thiscall winISteamController_SteamController004_GetGamepadIndexForController(struct w_steam_iface *_this, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetGamepadIndexForController(_this->u_iface, ulControllerHandle);
    return _ret;
}

ControllerHandle_t __thiscall winISteamController_SteamController004_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    ControllerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController004_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController004_GetMotionData(_this->u_iface, controllerHandle);
    return _ret;
}

bool __thiscall winISteamController_SteamController004_ShowDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_ShowDigitalActionOrigins(_this->u_iface, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

bool __thiscall winISteamController_SteamController004_ShowAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController004_ShowAnalogActionOrigins(_this->u_iface, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

extern vtable_ptr winISteamController_SteamController004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController004,
        VTABLE_ADD_FUNC(winISteamController_SteamController004_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_GetMotionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_ShowDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController004_ShowAnalogActionOrigins)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController004_vtable, 22, "SteamController004");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController005.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetGlyphForActionOrigin, 8)

bool __thiscall winISteamController_SteamController005_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController005_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController005_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController005_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

bool __thiscall winISteamController_SteamController005_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController005_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController005_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController005_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController005_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController005_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController005_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController005_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController005_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController005_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController005_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController005_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

void __thiscall winISteamController_SteamController005_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

void __thiscall winISteamController_SteamController005_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController005_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void __thiscall winISteamController_SteamController005_TriggerVibration(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerVibration(_this->u_iface, controllerHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamController_SteamController005_SetLEDColor(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_SetLEDColor(_this->u_iface, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

int __thiscall winISteamController_SteamController005_GetGamepadIndexForController(struct w_steam_iface *_this, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetGamepadIndexForController(_this->u_iface, ulControllerHandle);
    return _ret;
}

ControllerHandle_t __thiscall winISteamController_SteamController005_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    ControllerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController005_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController005_GetMotionData(_this->u_iface, controllerHandle);
    return _ret;
}

bool __thiscall winISteamController_SteamController005_ShowDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_ShowDigitalActionOrigins(_this->u_iface, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

bool __thiscall winISteamController_SteamController005_ShowAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_ShowAnalogActionOrigins(_this->u_iface, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

const char * __thiscall winISteamController_SteamController005_GetStringForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController005_GetGlyphForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController005_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

extern vtable_ptr winISteamController_SteamController005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController005,
        VTABLE_ADD_FUNC(winISteamController_SteamController005_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetMotionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_ShowDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_ShowAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController005_GetGlyphForActionOrigin)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController005_vtable, 26, "SteamController005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController006.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetInputTypeForHandle, 12)

bool __thiscall winISteamController_SteamController006_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController006_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController006_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController006_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

bool __thiscall winISteamController_SteamController006_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController006_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController006_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController006_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

void __thiscall winISteamController_SteamController006_ActivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_ActivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController006_DeactivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_DeactivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController006_DeactivateAllActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_DeactivateAllActionSetLayers(_this->u_iface, controllerHandle);
}

int __thiscall winISteamController_SteamController006_GetActiveActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetActiveActionSetLayers(_this->u_iface, controllerHandle, handlesOut);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController006_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController006_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController006_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController006_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController006_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController006_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController006_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController006_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

void __thiscall winISteamController_SteamController006_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

void __thiscall winISteamController_SteamController006_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController006_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void __thiscall winISteamController_SteamController006_TriggerVibration(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerVibration(_this->u_iface, controllerHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamController_SteamController006_SetLEDColor(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_SetLEDColor(_this->u_iface, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

int __thiscall winISteamController_SteamController006_GetGamepadIndexForController(struct w_steam_iface *_this, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetGamepadIndexForController(_this->u_iface, ulControllerHandle);
    return _ret;
}

ControllerHandle_t __thiscall winISteamController_SteamController006_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    ControllerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController006_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController006_GetMotionData(_this->u_iface, controllerHandle);
    return _ret;
}

bool __thiscall winISteamController_SteamController006_ShowDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_ShowDigitalActionOrigins(_this->u_iface, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

bool __thiscall winISteamController_SteamController006_ShowAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_ShowAnalogActionOrigins(_this->u_iface, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
    return _ret;
}

const char * __thiscall winISteamController_SteamController006_GetStringForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController006_GetGlyphForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

ESteamInputType __thiscall winISteamController_SteamController006_GetInputTypeForHandle(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController006_GetInputTypeForHandle(_this->u_iface, controllerHandle);
    return _ret;
}

extern vtable_ptr winISteamController_SteamController006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController006,
        VTABLE_ADD_FUNC(winISteamController_SteamController006_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetMotionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_ShowDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_ShowAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController006_GetInputTypeForHandle)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController006_vtable, 31, "SteamController006");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController007.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetControllerBindingRevision, 20)

bool __thiscall winISteamController_SteamController007_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController007_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController007_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController007_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController007_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController007_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController007_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

void __thiscall winISteamController_SteamController007_ActivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_ActivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController007_DeactivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_DeactivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController007_DeactivateAllActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_DeactivateAllActionSetLayers(_this->u_iface, controllerHandle);
}

int __thiscall winISteamController_SteamController007_GetActiveActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetActiveActionSetLayers(_this->u_iface, controllerHandle, handlesOut);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController007_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamController_SteamController007_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController007_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController007_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController007_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamController_SteamController007_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController007_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController007_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamController_SteamController007_GetGlyphForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController007_GetStringForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

void __thiscall winISteamController_SteamController007_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

InputMotionData_t * __thiscall winISteamController_SteamController007_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController007_GetMotionData(_this->u_iface, controllerHandle);
    return _ret;
}

void __thiscall winISteamController_SteamController007_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController007_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void __thiscall winISteamController_SteamController007_TriggerVibration(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerVibration(_this->u_iface, controllerHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamController_SteamController007_SetLEDColor(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_SetLEDColor(_this->u_iface, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

bool __thiscall winISteamController_SteamController007_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamController_SteamController007_GetInputTypeForHandle(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetInputTypeForHandle(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerHandle_t __thiscall winISteamController_SteamController007_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    ControllerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamController_SteamController007_GetGamepadIndexForController(struct w_steam_iface *_this, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetGamepadIndexForController(_this->u_iface, ulControllerHandle);
    return _ret;
}

const char * __thiscall winISteamController_SteamController007_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController007_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EControllerActionOrigin __thiscall winISteamController_SteamController007_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
    EControllerActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetActionOriginFromXboxOrigin(_this->u_iface, controllerHandle, eOrigin);
    return _ret;
}

EControllerActionOrigin __thiscall winISteamController_SteamController007_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
    EControllerActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamController_SteamController007_GetControllerBindingRevision(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController007_GetControllerBindingRevision(_this->u_iface, controllerHandle, pMajor, pMinor);
    return _ret;
}

extern vtable_ptr winISteamController_SteamController007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController007,
        VTABLE_ADD_FUNC(winISteamController_SteamController007_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetMotionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController007_GetControllerBindingRevision)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController007_vtable, 34, "SteamController007");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamController_SteamController008.h"

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_SteamController008_GetControllerBindingRevision, 20)

bool __thiscall winISteamController_SteamController008_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamController_SteamController008_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamController_SteamController008_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_RunFrame(_this->u_iface);
}

int __thiscall winISteamController_SteamController008_GetConnectedControllers(struct w_steam_iface *_this, ControllerHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController008_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamController_SteamController008_ActivateActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_ActivateActionSet(_this->u_iface, controllerHandle, actionSetHandle);
}

ControllerActionSetHandle_t __thiscall winISteamController_SteamController008_GetCurrentActionSet(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ControllerActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetCurrentActionSet(_this->u_iface, controllerHandle);
    return _ret;
}

void __thiscall winISteamController_SteamController008_ActivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_ActivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController008_DeactivateActionSetLayer(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_DeactivateActionSetLayer(_this->u_iface, controllerHandle, actionSetLayerHandle);
}

void __thiscall winISteamController_SteamController008_DeactivateAllActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_DeactivateAllActionSetLayers(_this->u_iface, controllerHandle);
}

int __thiscall winISteamController_SteamController008_GetActiveActionSetLayers(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetActiveActionSetLayers(_this->u_iface, controllerHandle, handlesOut);
    return _ret;
}

ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController008_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamController_SteamController008_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController008_GetDigitalActionData(_this->u_iface, controllerHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController008_GetDigitalActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetDigitalActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController008_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    ControllerAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamController_SteamController008_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController008_GetAnalogActionData(_this->u_iface, controllerHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamController_SteamController008_GetAnalogActionOrigins(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetAnalogActionOrigins(_this->u_iface, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamController_SteamController008_GetGlyphForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController008_GetStringForActionOrigin(struct w_steam_iface *_this, EControllerActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

void __thiscall winISteamController_SteamController008_StopAnalogActionMomentum(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_StopAnalogActionMomentum(_this->u_iface, controllerHandle, eAction);
}

InputMotionData_t * __thiscall winISteamController_SteamController008_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamController_SteamController008_GetMotionData(_this->u_iface, controllerHandle);
    return _ret;
}

void __thiscall winISteamController_SteamController008_TriggerHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_TriggerHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamController_SteamController008_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_TriggerRepeatedHapticPulse(_this->u_iface, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

void __thiscall winISteamController_SteamController008_TriggerVibration(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_TriggerVibration(_this->u_iface, controllerHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamController_SteamController008_SetLEDColor(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController008_SetLEDColor(_this->u_iface, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

bool __thiscall winISteamController_SteamController008_ShowBindingPanel(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_ShowBindingPanel(_this->u_iface, controllerHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamController_SteamController008_GetInputTypeForHandle(struct w_steam_iface *_this, ControllerHandle_t controllerHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetInputTypeForHandle(_this->u_iface, controllerHandle);
    return _ret;
}

ControllerHandle_t __thiscall winISteamController_SteamController008_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    ControllerHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamController_SteamController008_GetGamepadIndexForController(struct w_steam_iface *_this, ControllerHandle_t ulControllerHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetGamepadIndexForController(_this->u_iface, ulControllerHandle);
    return _ret;
}

const char * __thiscall winISteamController_SteamController008_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamController_SteamController008_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EControllerActionOrigin __thiscall winISteamController_SteamController008_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
    EControllerActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetActionOriginFromXboxOrigin(_this->u_iface, controllerHandle, eOrigin);
    return _ret;
}

EControllerActionOrigin __thiscall winISteamController_SteamController008_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
    EControllerActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamController_SteamController008_GetControllerBindingRevision(struct w_steam_iface *_this, ControllerHandle_t controllerHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamController_SteamController008_GetControllerBindingRevision(_this->u_iface, controllerHandle, pMajor, pMinor);
    return _ret;
}

extern vtable_ptr winISteamController_SteamController008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamController_SteamController008,
        VTABLE_ADD_FUNC(winISteamController_SteamController008_Init)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetMotionData)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamController_SteamController008_GetControllerBindingRevision)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamController_SteamController008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController008_vtable, 34, "SteamController008");
    r->u_iface = u_iface;
    return r;
}

