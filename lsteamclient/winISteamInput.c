/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamInput_SteamInput001.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetRemotePlaySessionID, 12)

bool __thiscall winISteamInput_SteamInput001_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput001_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamInput_SteamInput001_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_RunFrame(_this->u_iface);
}

int __thiscall winISteamInput_SteamInput001_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamInput_SteamInput001_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSet(_this->u_iface, inputHandle, actionSetHandle);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetCurrentActionSet(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput001_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput001_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput001_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateAllActionSetLayers(_this->u_iface, inputHandle);
}

int __thiscall winISteamInput_SteamInput001_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetActiveActionSetLayers(_this->u_iface, inputHandle, handlesOut);
    return _ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput001_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput001_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput001_GetDigitalActionData(_this->u_iface, inputHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput001_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetDigitalActionOrigins(_this->u_iface, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput001_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput001_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput001_GetAnalogActionData(_this->u_iface, inputHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput001_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetAnalogActionOrigins(_this->u_iface, inputHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetGlyphForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

void __thiscall winISteamInput_SteamInput001_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_StopAnalogActionMomentum(_this->u_iface, inputHandle, eAction);
}

InputMotionData_t * __thiscall winISteamInput_SteamInput001_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput001_GetMotionData(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput001_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerVibration(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamInput_SteamInput001_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_SetLEDColor(_this->u_iface, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

void __thiscall winISteamInput_SteamInput001_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamInput_SteamInput001_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

bool __thiscall winISteamInput_SteamInput001_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_ShowBindingPanel(_this->u_iface, inputHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput001_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetInputTypeForHandle(_this->u_iface, inputHandle);
    return _ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput001_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    InputHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamInput_SteamInput001_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetGamepadIndexForController(_this->u_iface, ulinputHandle);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput001_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(_this->u_iface, inputHandle, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput001_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput001_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetDeviceBindingRevision(_this->u_iface, inputHandle, pMajor, pMinor);
    return _ret;
}

uint32 __thiscall winISteamInput_SteamInput001_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput001_GetRemotePlaySessionID(_this->u_iface, inputHandle);
    return _ret;
}

extern vtable_ptr winISteamInput_SteamInput001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput001,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput001_GetRemotePlaySessionID)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput001_vtable, 35, "SteamInput001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput002.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Init, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetRemotePlaySessionID, 12)

bool __thiscall winISteamInput_SteamInput002_Init(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_Init(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput002_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_Shutdown(_this->u_iface);
    return _ret;
}

void __thiscall winISteamInput_SteamInput002_RunFrame(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_RunFrame(_this->u_iface);
}

int __thiscall winISteamInput_SteamInput002_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamInput_SteamInput002_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSet(_this->u_iface, inputHandle, actionSetHandle);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetCurrentActionSet(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput002_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput002_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput002_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateAllActionSetLayers(_this->u_iface, inputHandle);
}

int __thiscall winISteamInput_SteamInput002_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetActiveActionSetLayers(_this->u_iface, inputHandle, handlesOut);
    return _ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput002_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput002_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput002_GetDigitalActionData(_this->u_iface, inputHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput002_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetDigitalActionOrigins(_this->u_iface, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput002_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput002_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput002_GetAnalogActionData(_this->u_iface, inputHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput002_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetAnalogActionOrigins(_this->u_iface, inputHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetGlyphForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetGlyphForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

void __thiscall winISteamInput_SteamInput002_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_StopAnalogActionMomentum(_this->u_iface, inputHandle, eAction);
}

InputMotionData_t * __thiscall winISteamInput_SteamInput002_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput002_GetMotionData(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput002_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerVibration(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamInput_SteamInput002_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_SetLEDColor(_this->u_iface, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

void __thiscall winISteamInput_SteamInput002_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamInput_SteamInput002_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

bool __thiscall winISteamInput_SteamInput002_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_ShowBindingPanel(_this->u_iface, inputHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput002_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetInputTypeForHandle(_this->u_iface, inputHandle);
    return _ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput002_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    InputHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamInput_SteamInput002_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetGamepadIndexForController(_this->u_iface, ulinputHandle);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput002_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin(_this->u_iface, inputHandle, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput002_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput002_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetDeviceBindingRevision(_this->u_iface, inputHandle, pMajor, pMinor);
    return _ret;
}

uint32 __thiscall winISteamInput_SteamInput002_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput002_GetRemotePlaySessionID(_this->u_iface, inputHandle);
    return _ret;
}

extern vtable_ptr winISteamInput_SteamInput002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput002,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGlyphForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput002_GetRemotePlaySessionID)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput002_vtable, 35, "SteamInput002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput005.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetInputActionManifestFilePath, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_RunFrame, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BWaitForData, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BNewDataAvailable, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableDeviceCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableActionEventCallbacks, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForDigitalActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForAnalogActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibrationExtended, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerSimpleHapticEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetRemotePlaySessionID, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetSessionInputConfigurationSettings, 4)

bool __thiscall winISteamInput_SteamInput005_Init(struct w_steam_iface *_this, bool bExplicitlyCallRunFrame)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_Init(_this->u_iface, bExplicitlyCallRunFrame);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput005_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_Shutdown(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput005_SetInputActionManifestFilePath(struct w_steam_iface *_this, const char *pchInputActionManifestAbsolutePath)
{
    bool _ret;
    char lin_pchInputActionManifestAbsolutePath[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchInputActionManifestAbsolutePath, lin_pchInputActionManifestAbsolutePath, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_SetInputActionManifestFilePath(_this->u_iface, pchInputActionManifestAbsolutePath ? lin_pchInputActionManifestAbsolutePath : NULL);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_RunFrame(struct w_steam_iface *_this, bool bReservedValue)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_RunFrame(_this->u_iface, bReservedValue);
}

bool __thiscall winISteamInput_SteamInput005_BWaitForData(struct w_steam_iface *_this, bool bWaitForever, uint32 unTimeout)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_BWaitForData(_this->u_iface, bWaitForever, unTimeout);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput005_BNewDataAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_BNewDataAvailable(_this->u_iface);
    return _ret;
}

int __thiscall winISteamInput_SteamInput005_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_EnableDeviceCallbacks(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableDeviceCallbacks(_this->u_iface);
}

void __thiscall winISteamInput_SteamInput005_EnableActionEventCallbacks(struct w_steam_iface *_this, SteamInputActionEventCallbackPointer pCallback)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableActionEventCallbacks(_this->u_iface, pCallback);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSet(_this->u_iface, inputHandle, actionSetHandle);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetCurrentActionSet(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput005_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput005_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateAllActionSetLayers(_this->u_iface, inputHandle);
}

int __thiscall winISteamInput_SteamInput005_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetActiveActionSetLayers(_this->u_iface, inputHandle, handlesOut);
    return _ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput005_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput005_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput005_GetDigitalActionData(_this->u_iface, inputHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput005_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetDigitalActionOrigins(_this->u_iface, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForDigitalActionName(struct w_steam_iface *_this, InputDigitalActionHandle_t eActionHandle)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetStringForDigitalActionName(_this->u_iface, eActionHandle);
    return _ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput005_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput005_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput005_GetAnalogActionData(_this->u_iface, inputHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput005_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetAnalogActionOrigins(_this->u_iface, inputHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(_this->u_iface, eOrigin, eSize, unFlags);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(_this->u_iface, eOrigin, unFlags);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForAnalogActionName(struct w_steam_iface *_this, InputAnalogActionHandle_t eActionHandle)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetStringForAnalogActionName(_this->u_iface, eActionHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_StopAnalogActionMomentum(_this->u_iface, inputHandle, eAction);
}

InputMotionData_t * __thiscall winISteamInput_SteamInput005_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput005_GetMotionData(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput005_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibration(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamInput_SteamInput005_TriggerVibrationExtended(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibrationExtended(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}

void __thiscall winISteamInput_SteamInput005_TriggerSimpleHapticEvent(struct w_steam_iface *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerSimpleHapticEvent(_this->u_iface, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}

void __thiscall winISteamInput_SteamInput005_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_SetLEDColor(_this->u_iface, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

void __thiscall winISteamInput_SteamInput005_Legacy_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

bool __thiscall winISteamInput_SteamInput005_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_ShowBindingPanel(_this->u_iface, inputHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput005_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetInputTypeForHandle(_this->u_iface, inputHandle);
    return _ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput005_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    InputHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamInput_SteamInput005_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetGamepadIndexForController(_this->u_iface, ulinputHandle);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput005_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(_this->u_iface, inputHandle, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput005_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput005_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetDeviceBindingRevision(_this->u_iface, inputHandle, pMajor, pMinor);
    return _ret;
}

uint32 __thiscall winISteamInput_SteamInput005_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetRemotePlaySessionID(_this->u_iface, inputHandle);
    return _ret;
}

uint16 __thiscall winISteamInput_SteamInput005_GetSessionInputConfigurationSettings(struct w_steam_iface *_this)
{
    uint16 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamInput_SteamInput005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput005,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_SetInputActionManifestFilePath)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_BWaitForData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_BNewDataAvailable)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_EnableDeviceCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_EnableActionEventCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForDigitalActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForAnalogActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerVibrationExtended)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TriggerSimpleHapticEvent)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Legacy_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetRemotePlaySessionID)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput005_GetSessionInputConfigurationSettings)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput005_vtable, 47, "SteamInput005");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamInput_SteamInput006.h"

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Init, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Shutdown, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetInputActionManifestFilePath, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_RunFrame, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BWaitForData, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BNewDataAvailable, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetConnectedControllers, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableDeviceCallbacks, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableActionEventCallbacks, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionSetHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSet, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetCurrentActionSet, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateActionSetLayer, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateAllActionSetLayers, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActiveActionSetLayers, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForDigitalActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionHandle, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionData, 24)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionOrigins, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForActionOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForAnalogActionName, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_StopAnalogActionMomentum, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetMotionData, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibration, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibrationExtended, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerSimpleHapticEvent, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetLEDColor, 28)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerHapticPulse, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse, 32)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ShowBindingPanel, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetInputTypeForHandle, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetControllerForGamepadIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGamepadIndexForController, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForXboxOrigin, 8)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin, 16)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TranslateActionOrigin, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDeviceBindingRevision, 20)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetRemotePlaySessionID, 12)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetSessionInputConfigurationSettings, 4)
DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetDualSenseTriggerEffect, 16)

bool __thiscall winISteamInput_SteamInput006_Init(struct w_steam_iface *_this, bool bExplicitlyCallRunFrame)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_Init(_this->u_iface, bExplicitlyCallRunFrame);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput006_Shutdown(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_Shutdown(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput006_SetInputActionManifestFilePath(struct w_steam_iface *_this, const char *pchInputActionManifestAbsolutePath)
{
    bool _ret;
    char lin_pchInputActionManifestAbsolutePath[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchInputActionManifestAbsolutePath, lin_pchInputActionManifestAbsolutePath, 0);
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_SetInputActionManifestFilePath(_this->u_iface, pchInputActionManifestAbsolutePath ? lin_pchInputActionManifestAbsolutePath : NULL);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_RunFrame(struct w_steam_iface *_this, bool bReservedValue)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_RunFrame(_this->u_iface, bReservedValue);
}

bool __thiscall winISteamInput_SteamInput006_BWaitForData(struct w_steam_iface *_this, bool bWaitForever, uint32 unTimeout)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_BWaitForData(_this->u_iface, bWaitForever, unTimeout);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput006_BNewDataAvailable(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_BNewDataAvailable(_this->u_iface);
    return _ret;
}

int __thiscall winISteamInput_SteamInput006_GetConnectedControllers(struct w_steam_iface *_this, InputHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetConnectedControllers(_this->u_iface, handlesOut);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_EnableDeviceCallbacks(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableDeviceCallbacks(_this->u_iface);
}

void __thiscall winISteamInput_SteamInput006_EnableActionEventCallbacks(struct w_steam_iface *_this, SteamInputActionEventCallbackPointer pCallback)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableActionEventCallbacks(_this->u_iface, pCallback);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetActionSetHandle(struct w_steam_iface *_this, const char *pszActionSetName)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetActionSetHandle(_this->u_iface, pszActionSetName);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_ActivateActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSet(_this->u_iface, inputHandle, actionSetHandle);
}

InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetCurrentActionSet(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    InputActionSetHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetCurrentActionSet(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_ActivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput006_DeactivateActionSetLayer(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateActionSetLayer(_this->u_iface, inputHandle, actionSetLayerHandle);
}

void __thiscall winISteamInput_SteamInput006_DeactivateAllActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateAllActionSetLayers(_this->u_iface, inputHandle);
}

int __thiscall winISteamInput_SteamInput006_GetActiveActionSetLayers(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t *handlesOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetActiveActionSetLayers(_this->u_iface, inputHandle, handlesOut);
    return _ret;
}

InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput006_GetDigitalActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputDigitalActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetDigitalActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputDigitalActionData_t * __thiscall winISteamInput_SteamInput006_GetDigitalActionData(struct w_steam_iface *_this, InputDigitalActionData_t *_ret, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput006_GetDigitalActionData(_this->u_iface, inputHandle, digitalActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput006_GetDigitalActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetDigitalActionOrigins(_this->u_iface, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForDigitalActionName(struct w_steam_iface *_this, InputDigitalActionHandle_t eActionHandle)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetStringForDigitalActionName(_this->u_iface, eActionHandle);
    return _ret;
}

InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput006_GetAnalogActionHandle(struct w_steam_iface *_this, const char *pszActionName)
{
    InputAnalogActionHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetAnalogActionHandle(_this->u_iface, pszActionName);
    return _ret;
}

InputAnalogActionData_t * __thiscall winISteamInput_SteamInput006_GetAnalogActionData(struct w_steam_iface *_this, InputAnalogActionData_t *_ret, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput006_GetAnalogActionData(_this->u_iface, inputHandle, analogActionHandle);
    return _ret;
}

int __thiscall winISteamInput_SteamInput006_GetAnalogActionOrigins(struct w_steam_iface *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin *originsOut)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetAnalogActionOrigins(_this->u_iface, inputHandle, actionSetHandle, analogActionHandle, originsOut);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(_this->u_iface, eOrigin, eSize, unFlags);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(_this->u_iface, eOrigin, unFlags);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForActionOrigin(struct w_steam_iface *_this, EInputActionOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetStringForActionOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForAnalogActionName(struct w_steam_iface *_this, InputAnalogActionHandle_t eActionHandle)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetStringForAnalogActionName(_this->u_iface, eActionHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_StopAnalogActionMomentum(struct w_steam_iface *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_StopAnalogActionMomentum(_this->u_iface, inputHandle, eAction);
}

InputMotionData_t * __thiscall winISteamInput_SteamInput006_GetMotionData(struct w_steam_iface *_this, InputMotionData_t *_ret, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_ret = cppISteamInput_SteamInput006_GetMotionData(_this->u_iface, inputHandle);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_TriggerVibration(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibration(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed);
}

void __thiscall winISteamInput_SteamInput006_TriggerVibrationExtended(struct w_steam_iface *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibrationExtended(_this->u_iface, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}

void __thiscall winISteamInput_SteamInput006_TriggerSimpleHapticEvent(struct w_steam_iface *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerSimpleHapticEvent(_this->u_iface, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}

void __thiscall winISteamInput_SteamInput006_SetLEDColor(struct w_steam_iface *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetLEDColor(_this->u_iface, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

void __thiscall winISteamInput_SteamInput006_Legacy_TriggerHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec);
}

void __thiscall winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(struct w_steam_iface *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(_this->u_iface, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

bool __thiscall winISteamInput_SteamInput006_ShowBindingPanel(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_ShowBindingPanel(_this->u_iface, inputHandle);
    return _ret;
}

ESteamInputType __thiscall winISteamInput_SteamInput006_GetInputTypeForHandle(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    ESteamInputType _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetInputTypeForHandle(_this->u_iface, inputHandle);
    return _ret;
}

InputHandle_t __thiscall winISteamInput_SteamInput006_GetControllerForGamepadIndex(struct w_steam_iface *_this, int nIndex)
{
    InputHandle_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetControllerForGamepadIndex(_this->u_iface, nIndex);
    return _ret;
}

int __thiscall winISteamInput_SteamInput006_GetGamepadIndexForController(struct w_steam_iface *_this, InputHandle_t ulinputHandle)
{
    int _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetGamepadIndexForController(_this->u_iface, ulinputHandle);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetStringForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetStringForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

const char * __thiscall winISteamInput_SteamInput006_GetGlyphForXboxOrigin(struct w_steam_iface *_this, EXboxOrigin eOrigin)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetGlyphForXboxOrigin(_this->u_iface, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(struct w_steam_iface *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(_this->u_iface, inputHandle, eOrigin);
    return _ret;
}

EInputActionOrigin __thiscall winISteamInput_SteamInput006_TranslateActionOrigin(struct w_steam_iface *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    EInputActionOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_TranslateActionOrigin(_this->u_iface, eDestinationInputType, eSourceOrigin);
    return _ret;
}

bool __thiscall winISteamInput_SteamInput006_GetDeviceBindingRevision(struct w_steam_iface *_this, InputHandle_t inputHandle, int *pMajor, int *pMinor)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetDeviceBindingRevision(_this->u_iface, inputHandle, pMajor, pMinor);
    return _ret;
}

uint32 __thiscall winISteamInput_SteamInput006_GetRemotePlaySessionID(struct w_steam_iface *_this, InputHandle_t inputHandle)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetRemotePlaySessionID(_this->u_iface, inputHandle);
    return _ret;
}

uint16 __thiscall winISteamInput_SteamInput006_GetSessionInputConfigurationSettings(struct w_steam_iface *_this)
{
    uint16 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings(_this->u_iface);
    return _ret;
}

void __thiscall winISteamInput_SteamInput006_SetDualSenseTriggerEffect(struct w_steam_iface *_this, InputHandle_t inputHandle, const ScePadTriggerEffectParam *pParam)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetDualSenseTriggerEffect(_this->u_iface, inputHandle, pParam);
}

extern vtable_ptr winISteamInput_SteamInput006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamInput_SteamInput006,
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Init)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Shutdown)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetInputActionManifestFilePath)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_RunFrame)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_BWaitForData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_BNewDataAvailable)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetConnectedControllers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_EnableDeviceCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_EnableActionEventCallbacks)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActionSetHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ActivateActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetCurrentActionSet)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ActivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_DeactivateActionSetLayer)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_DeactivateAllActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActiveActionSetLayers)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDigitalActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForDigitalActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetAnalogActionOrigins)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForAnalogActionName)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_StopAnalogActionMomentum)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetMotionData)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerVibration)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerVibrationExtended)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TriggerSimpleHapticEvent)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetLEDColor)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Legacy_TriggerHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_ShowBindingPanel)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetInputTypeForHandle)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetControllerForGamepadIndex)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGamepadIndexForController)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetStringForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetGlyphForXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_TranslateActionOrigin)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetDeviceBindingRevision)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetRemotePlaySessionID)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_GetSessionInputConfigurationSettings)
        VTABLE_ADD_FUNC(winISteamInput_SteamInput006_SetDualSenseTriggerEffect)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamInput_SteamInput006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamInput006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput006_vtable, 48, "SteamInput006");
    r->u_iface = u_iface;
    return r;
}

