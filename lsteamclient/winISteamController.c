/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState, 12)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse, 16)
DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode, 8)

int8_t __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(struct w_steam_iface *_this, const char *pchAbsolutePathToControllerConfigVDF)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params params =
    {
        .linux_side = _this->u_iface,
        .pchAbsolutePathToControllerConfigVDF = pchAbsolutePathToControllerConfigVDF,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame, &params );
}

int8_t __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(struct w_steam_iface *_this, uint32_t unControllerIndex, SteamControllerState001_t *pState)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerIndex = unControllerIndex,
        .pState = pState,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState, &params );
    return params._ret;
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(struct w_steam_iface *_this, uint32_t unControllerIndex, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .unControllerIndex = unControllerIndex,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(struct w_steam_iface *_this, const char *pchMode)
{
    struct ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params params =
    {
        .linux_side = _this->u_iface,
        .pchMode = pchMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode, &params );
}

extern vtable_ptr winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtable;

DEFINE_RTTI_DATA0(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtables)
    __ASM_VTABLE(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION,
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_STEAMCONTROLLER_INTERFACE_VERSION(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMCONTROLLER_INTERFACE_VERSION");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtable, 6, "STEAMCONTROLLER_INTERFACE_VERSION");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController003_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController003_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController003_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController003_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController003_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController003_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController003_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController003_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetConnectedControllers, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController003_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController003_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_ShowBindingPanel, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController003_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController003_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController003_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController003_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController003_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController003_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetCurrentActionSet, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController003_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController003_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetDigitalActionHandle, &params );
    return params._ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController003_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController003_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController003_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController003_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController003_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController003_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetAnalogActionHandle, &params );
    return params._ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController003_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController003_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController003_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController003_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_GetAnalogActionOrigins, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController003_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController003_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_StopAnalogActionMomentum, &params );
}

void __thiscall winISteamController_SteamController003_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController003_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController003_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController003_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController003_TriggerRepeatedHapticPulse, &params );
}

extern vtable_ptr winISteamController_SteamController003_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController003, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController003_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController003_vtable, 17, "SteamController003");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController004_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController004_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController004_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController004_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController004_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController004_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController004_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController004_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetConnectedControllers, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController004_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController004_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_ShowBindingPanel, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController004_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController004_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController004_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController004_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController004_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController004_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetCurrentActionSet, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController004_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController004_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetDigitalActionHandle, &params );
    return params._ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController004_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController004_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController004_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController004_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController004_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController004_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetAnalogActionHandle, &params );
    return params._ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController004_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController004_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController004_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController004_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetAnalogActionOrigins, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController004_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController004_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_StopAnalogActionMomentum, &params );
}

void __thiscall winISteamController_SteamController004_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController004_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController004_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController004_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_TriggerRepeatedHapticPulse, &params );
}

int32_t __thiscall winISteamController_SteamController004_GetGamepadIndexForController(struct w_steam_iface *_this, uint64_t ulControllerHandle)
{
    struct ISteamController_SteamController004_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulControllerHandle = ulControllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetGamepadIndexForController, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController004_GetControllerForGamepadIndex(struct w_steam_iface *_this, int32_t nIndex)
{
    struct ISteamController_SteamController004_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetControllerForGamepadIndex, &params );
    return params._ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController004_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, uint64_t controllerHandle)
{
    struct ISteamController_SteamController004_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_GetMotionData, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController004_ShowDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController004_ShowDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_ShowDigitalActionOrigins, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController004_ShowAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController004_ShowAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController004_ShowAnalogActionOrigins, &params );
    return params._ret;
}

extern vtable_ptr winISteamController_SteamController004_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController004, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController004_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController004_vtable, 22, "SteamController004");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController005_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController005_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController005_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController005_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController005_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController005_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController005_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController005_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetConnectedControllers, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController005_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController005_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_ShowBindingPanel, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController005_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController005_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController005_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController005_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController005_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController005_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetCurrentActionSet, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController005_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController005_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetDigitalActionHandle, &params );
    return params._ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController005_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController005_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController005_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController005_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController005_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController005_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetAnalogActionHandle, &params );
    return params._ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController005_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController005_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController005_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController005_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetAnalogActionOrigins, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController005_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController005_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_StopAnalogActionMomentum, &params );
}

void __thiscall winISteamController_SteamController005_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController005_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController005_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController005_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_TriggerRepeatedHapticPulse, &params );
}

void __thiscall winISteamController_SteamController005_TriggerVibration(struct w_steam_iface *_this, uint64_t controllerHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed)
{
    struct ISteamController_SteamController005_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_TriggerVibration, &params );
}

void __thiscall winISteamController_SteamController005_SetLEDColor(struct w_steam_iface *_this, uint64_t controllerHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags)
{
    struct ISteamController_SteamController005_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_SetLEDColor, &params );
}

int32_t __thiscall winISteamController_SteamController005_GetGamepadIndexForController(struct w_steam_iface *_this, uint64_t ulControllerHandle)
{
    struct ISteamController_SteamController005_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulControllerHandle = ulControllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetGamepadIndexForController, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController005_GetControllerForGamepadIndex(struct w_steam_iface *_this, int32_t nIndex)
{
    struct ISteamController_SteamController005_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetControllerForGamepadIndex, &params );
    return params._ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController005_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, uint64_t controllerHandle)
{
    struct ISteamController_SteamController005_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetMotionData, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController005_ShowDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController005_ShowDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_ShowDigitalActionOrigins, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController005_ShowAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController005_ShowAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_ShowAnalogActionOrigins, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController005_GetStringForActionOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController005_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController005_GetStringForActionOrigin, &params );
    return params._ret;
}

extern vtable_ptr winISteamController_SteamController005_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController005, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController005_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController005_vtable, 26, "SteamController005");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController006_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController006_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController006_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController006_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController006_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController006_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController006_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController006_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetConnectedControllers, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController006_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController006_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_ShowBindingPanel, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController006_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController006_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController006_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController006_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController006_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController006_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetCurrentActionSet, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController006_ActivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController006_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_ActivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController006_DeactivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController006_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_DeactivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController006_DeactivateAllActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController006_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_DeactivateAllActionSetLayers, &params );
}

int32_t __thiscall winISteamController_SteamController006_GetActiveActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t *handlesOut)
{
    struct ISteamController_SteamController006_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetActiveActionSetLayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController006_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController006_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetDigitalActionHandle, &params );
    return params._ret;
}

ControllerDigitalActionData_t * __thiscall winISteamController_SteamController006_GetDigitalActionData(struct w_steam_iface *_this, ControllerDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController006_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController006_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController006_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController006_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController006_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetAnalogActionHandle, &params );
    return params._ret;
}

ControllerAnalogActionData_t * __thiscall winISteamController_SteamController006_GetAnalogActionData(struct w_steam_iface *_this, ControllerAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController006_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController006_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController006_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetAnalogActionOrigins, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController006_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController006_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_StopAnalogActionMomentum, &params );
}

void __thiscall winISteamController_SteamController006_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController006_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController006_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController006_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_TriggerRepeatedHapticPulse, &params );
}

void __thiscall winISteamController_SteamController006_TriggerVibration(struct w_steam_iface *_this, uint64_t controllerHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed)
{
    struct ISteamController_SteamController006_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_TriggerVibration, &params );
}

void __thiscall winISteamController_SteamController006_SetLEDColor(struct w_steam_iface *_this, uint64_t controllerHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags)
{
    struct ISteamController_SteamController006_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_SetLEDColor, &params );
}

int32_t __thiscall winISteamController_SteamController006_GetGamepadIndexForController(struct w_steam_iface *_this, uint64_t ulControllerHandle)
{
    struct ISteamController_SteamController006_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulControllerHandle = ulControllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetGamepadIndexForController, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController006_GetControllerForGamepadIndex(struct w_steam_iface *_this, int32_t nIndex)
{
    struct ISteamController_SteamController006_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetControllerForGamepadIndex, &params );
    return params._ret;
}

ControllerMotionData_t * __thiscall winISteamController_SteamController006_GetMotionData(struct w_steam_iface *_this, ControllerMotionData_t *_ret, uint64_t controllerHandle)
{
    struct ISteamController_SteamController006_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetMotionData, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController006_ShowDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController006_ShowDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_ShowDigitalActionOrigins, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController006_ShowAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    struct ISteamController_SteamController006_ShowAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
        .flScale = flScale,
        .flXPosition = flXPosition,
        .flYPosition = flYPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_ShowAnalogActionOrigins, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController006_GetStringForActionOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController006_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetStringForActionOrigin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController006_GetInputTypeForHandle(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController006_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController006_GetInputTypeForHandle, &params );
    return params._ret;
}

extern vtable_ptr winISteamController_SteamController006_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController006, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController006_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController006_vtable, 31, "SteamController006");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController007_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController007_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController007_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController007_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController007_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController007_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController007_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController007_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetConnectedControllers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController007_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController007_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController007_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController007_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController007_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController007_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetCurrentActionSet, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController007_ActivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController007_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_ActivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController007_DeactivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController007_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_DeactivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController007_DeactivateAllActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController007_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_DeactivateAllActionSetLayers, &params );
}

int32_t __thiscall winISteamController_SteamController007_GetActiveActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t *handlesOut)
{
    struct ISteamController_SteamController007_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetActiveActionSetLayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController007_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController007_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetDigitalActionHandle, &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamController_SteamController007_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController007_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController007_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController007_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController007_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController007_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetAnalogActionHandle, &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamController_SteamController007_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController007_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController007_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController007_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetAnalogActionOrigins, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController007_GetStringForActionOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController007_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetStringForActionOrigin, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController007_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController007_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_StopAnalogActionMomentum, &params );
}

InputMotionData_t * __thiscall winISteamController_SteamController007_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, uint64_t controllerHandle)
{
    struct ISteamController_SteamController007_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetMotionData, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController007_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController007_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController007_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController007_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_TriggerRepeatedHapticPulse, &params );
}

void __thiscall winISteamController_SteamController007_TriggerVibration(struct w_steam_iface *_this, uint64_t controllerHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed)
{
    struct ISteamController_SteamController007_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_TriggerVibration, &params );
}

void __thiscall winISteamController_SteamController007_SetLEDColor(struct w_steam_iface *_this, uint64_t controllerHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags)
{
    struct ISteamController_SteamController007_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_SetLEDColor, &params );
}

int8_t __thiscall winISteamController_SteamController007_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController007_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_ShowBindingPanel, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController007_GetInputTypeForHandle(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController007_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetInputTypeForHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController007_GetControllerForGamepadIndex(struct w_steam_iface *_this, int32_t nIndex)
{
    struct ISteamController_SteamController007_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetControllerForGamepadIndex, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController007_GetGamepadIndexForController(struct w_steam_iface *_this, uint64_t ulControllerHandle)
{
    struct ISteamController_SteamController007_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulControllerHandle = ulControllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetGamepadIndexForController, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController007_GetStringForXboxOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController007_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetStringForXboxOrigin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController007_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eOrigin)
{
    struct ISteamController_SteamController007_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetActionOriginFromXboxOrigin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController007_TranslateActionOrigin(struct w_steam_iface *_this, uint32_t eDestinationInputType, uint32_t eSourceOrigin)
{
    struct ISteamController_SteamController007_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_TranslateActionOrigin, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController007_GetControllerBindingRevision(struct w_steam_iface *_this, uint64_t controllerHandle, int32_t *pMajor, int32_t *pMinor)
{
    struct ISteamController_SteamController007_GetControllerBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController007_GetControllerBindingRevision, &params );
    return params._ret;
}

extern vtable_ptr winISteamController_SteamController007_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController007, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController007_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController007_vtable, 34, "SteamController007");
    r->u_iface = u_iface;
    return r;
}

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

int8_t __thiscall winISteamController_SteamController008_Init(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController008_Init_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_Init, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController008_Shutdown(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController008_Shutdown_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_Shutdown, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController008_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamController_SteamController008_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_RunFrame, &params );
}

int32_t __thiscall winISteamController_SteamController008_GetConnectedControllers(struct w_steam_iface *_this, uint64_t *handlesOut)
{
    struct ISteamController_SteamController008_GetConnectedControllers_params params =
    {
        .linux_side = _this->u_iface,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetConnectedControllers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController008_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    struct ISteamController_SteamController008_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionSetName = pszActionSetName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetActionSetHandle, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController008_ActivateActionSet(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle)
{
    struct ISteamController_SteamController008_ActivateActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_ActivateActionSet, &params );
}

uint64_t __thiscall winISteamController_SteamController008_GetCurrentActionSet(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController008_GetCurrentActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetCurrentActionSet, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController008_ActivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController008_ActivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_ActivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController008_DeactivateActionSetLayer(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetLayerHandle)
{
    struct ISteamController_SteamController008_DeactivateActionSetLayer_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetLayerHandle = actionSetLayerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_DeactivateActionSetLayer, &params );
}

void __thiscall winISteamController_SteamController008_DeactivateAllActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController008_DeactivateAllActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_DeactivateAllActionSetLayers, &params );
}

int32_t __thiscall winISteamController_SteamController008_GetActiveActionSetLayers(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t *handlesOut)
{
    struct ISteamController_SteamController008_GetActiveActionSetLayers_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .handlesOut = handlesOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetActiveActionSetLayers, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController008_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController008_GetDigitalActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetDigitalActionHandle, &params );
    return params._ret;
}

InputDigitalActionData_t * __thiscall winISteamController_SteamController008_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, uint64_t controllerHandle, uint64_t digitalActionHandle)
{
    struct ISteamController_SteamController008_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .digitalActionHandle = digitalActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetDigitalActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController008_GetDigitalActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController008_GetDigitalActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetDigitalActionOrigins, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController008_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    struct ISteamController_SteamController008_GetAnalogActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pszActionName = pszActionName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetAnalogActionHandle, &params );
    return params._ret;
}

InputAnalogActionData_t * __thiscall winISteamController_SteamController008_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, uint64_t controllerHandle, uint64_t analogActionHandle)
{
    struct ISteamController_SteamController008_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
        .analogActionHandle = analogActionHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetAnalogActionData, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController008_GetAnalogActionOrigins(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t actionSetHandle, uint64_t analogActionHandle, uint32_t *originsOut)
{
    struct ISteamController_SteamController008_GetAnalogActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .actionSetHandle = actionSetHandle,
        .analogActionHandle = analogActionHandle,
        .originsOut = originsOut,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetAnalogActionOrigins, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController008_GetStringForActionOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController008_GetStringForActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetStringForActionOrigin, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController008_StopAnalogActionMomentum(struct w_steam_iface *_this, uint64_t controllerHandle, uint64_t eAction)
{
    struct ISteamController_SteamController008_StopAnalogActionMomentum_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eAction = eAction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_StopAnalogActionMomentum, &params );
}

InputMotionData_t * __thiscall winISteamController_SteamController008_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, uint64_t controllerHandle)
{
    struct ISteamController_SteamController008_GetMotionData_params params =
    {
        .linux_side = _this->u_iface,
        ._ret = _ret,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetMotionData, &params );
    return params._ret;
}

void __thiscall winISteamController_SteamController008_TriggerHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec)
{
    struct ISteamController_SteamController008_TriggerHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_TriggerHapticPulse, &params );
}

void __thiscall winISteamController_SteamController008_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eTargetPad, uint16_t usDurationMicroSec, uint16_t usOffMicroSec, uint16_t unRepeat, uint32_t nFlags)
{
    struct ISteamController_SteamController008_TriggerRepeatedHapticPulse_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eTargetPad = eTargetPad,
        .usDurationMicroSec = usDurationMicroSec,
        .usOffMicroSec = usOffMicroSec,
        .unRepeat = unRepeat,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_TriggerRepeatedHapticPulse, &params );
}

void __thiscall winISteamController_SteamController008_TriggerVibration(struct w_steam_iface *_this, uint64_t controllerHandle, uint16_t usLeftSpeed, uint16_t usRightSpeed)
{
    struct ISteamController_SteamController008_TriggerVibration_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .usLeftSpeed = usLeftSpeed,
        .usRightSpeed = usRightSpeed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_TriggerVibration, &params );
}

void __thiscall winISteamController_SteamController008_SetLEDColor(struct w_steam_iface *_this, uint64_t controllerHandle, uint8_t nColorR, uint8_t nColorG, uint8_t nColorB, uint32_t nFlags)
{
    struct ISteamController_SteamController008_SetLEDColor_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .nColorR = nColorR,
        .nColorG = nColorG,
        .nColorB = nColorB,
        .nFlags = nFlags,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_SetLEDColor, &params );
}

int8_t __thiscall winISteamController_SteamController008_ShowBindingPanel(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController008_ShowBindingPanel_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_ShowBindingPanel, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController008_GetInputTypeForHandle(struct w_steam_iface *_this, uint64_t controllerHandle)
{
    struct ISteamController_SteamController008_GetInputTypeForHandle_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetInputTypeForHandle, &params );
    return params._ret;
}

uint64_t __thiscall winISteamController_SteamController008_GetControllerForGamepadIndex(struct w_steam_iface *_this, int32_t nIndex)
{
    struct ISteamController_SteamController008_GetControllerForGamepadIndex_params params =
    {
        .linux_side = _this->u_iface,
        .nIndex = nIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetControllerForGamepadIndex, &params );
    return params._ret;
}

int32_t __thiscall winISteamController_SteamController008_GetGamepadIndexForController(struct w_steam_iface *_this, uint64_t ulControllerHandle)
{
    struct ISteamController_SteamController008_GetGamepadIndexForController_params params =
    {
        .linux_side = _this->u_iface,
        .ulControllerHandle = ulControllerHandle,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetGamepadIndexForController, &params );
    return params._ret;
}

const char * __thiscall winISteamController_SteamController008_GetStringForXboxOrigin(struct w_steam_iface *_this, uint32_t eOrigin)
{
    struct ISteamController_SteamController008_GetStringForXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetStringForXboxOrigin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController008_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, uint64_t controllerHandle, uint32_t eOrigin)
{
    struct ISteamController_SteamController008_GetActionOriginFromXboxOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .eOrigin = eOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetActionOriginFromXboxOrigin, &params );
    return params._ret;
}

uint32_t __thiscall winISteamController_SteamController008_TranslateActionOrigin(struct w_steam_iface *_this, uint32_t eDestinationInputType, uint32_t eSourceOrigin)
{
    struct ISteamController_SteamController008_TranslateActionOrigin_params params =
    {
        .linux_side = _this->u_iface,
        .eDestinationInputType = eDestinationInputType,
        .eSourceOrigin = eSourceOrigin,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_TranslateActionOrigin, &params );
    return params._ret;
}

int8_t __thiscall winISteamController_SteamController008_GetControllerBindingRevision(struct w_steam_iface *_this, uint64_t controllerHandle, int32_t *pMajor, int32_t *pMinor)
{
    struct ISteamController_SteamController008_GetControllerBindingRevision_params params =
    {
        .linux_side = _this->u_iface,
        .controllerHandle = controllerHandle,
        .pMajor = pMajor,
        .pMinor = pMinor,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamController_SteamController008_GetControllerBindingRevision, &params );
    return params._ret;
}

extern vtable_ptr winISteamController_SteamController008_vtable;

DEFINE_RTTI_DATA0(winISteamController_SteamController008, 0, ".?AVISteamController@@")

__ASM_BLOCK_BEGIN(winISteamController_SteamController008_vtables)
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
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamController_SteamController008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamController008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamController_SteamController008_vtable, 34, "SteamController008");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamController_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_rtti( base );
    init_winISteamController_SteamController003_rtti( base );
    init_winISteamController_SteamController004_rtti( base );
    init_winISteamController_SteamController005_rtti( base );
    init_winISteamController_SteamController006_rtti( base );
    init_winISteamController_SteamController007_rtti( base );
    init_winISteamController_SteamController008_rtti( base );
#endif /* __x86_64__ */
}
