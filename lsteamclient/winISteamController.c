/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamController_SteamController007.h"

typedef struct __winISteamController_SteamController007 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_SteamController007;

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_Init, 4)
bool __thiscall winISteamController_SteamController007_Init(winISteamController_SteamController007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_Shutdown, 4)
bool __thiscall winISteamController_SteamController007_Shutdown(winISteamController_SteamController007 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_RunFrame, 4)
void __thiscall winISteamController_SteamController007_RunFrame(winISteamController_SteamController007 *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetConnectedControllers, 8)
int __thiscall winISteamController_SteamController007_GetConnectedControllers(winISteamController_SteamController007 *_this, ControllerHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActionSetHandle, 8)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController007_GetActionSetHandle(winISteamController_SteamController007 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ActivateActionSet, 20)
void __thiscall winISteamController_SteamController007_ActivateActionSet(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_ActivateActionSet(_this->linux_side, controllerHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetCurrentActionSet, 12)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController007_GetCurrentActionSet(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetCurrentActionSet(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ActivateActionSetLayer, 20)
void __thiscall winISteamController_SteamController007_ActivateActionSetLayer(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_ActivateActionSetLayer(_this->linux_side, controllerHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_DeactivateActionSetLayer, 20)
void __thiscall winISteamController_SteamController007_DeactivateActionSetLayer(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_DeactivateActionSetLayer(_this->linux_side, controllerHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamController_SteamController007_DeactivateAllActionSetLayers(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_DeactivateAllActionSetLayers(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActiveActionSetLayers, 16)
int __thiscall winISteamController_SteamController007_GetActiveActionSetLayers(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetActiveActionSetLayers(_this->linux_side, controllerHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionHandle, 8)
ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController007_GetDigitalActionHandle(winISteamController_SteamController007 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionData, 24)
InputDigitalActionData_t *__thiscall winISteamController_SteamController007_GetDigitalActionData(winISteamController_SteamController007 *_this, InputDigitalActionData_t *_r, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController007_GetDigitalActionData(_this->linux_side, controllerHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetDigitalActionOrigins, 32)
int __thiscall winISteamController_SteamController007_GetDigitalActionOrigins(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetDigitalActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionHandle, 8)
ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController007_GetAnalogActionHandle(winISteamController_SteamController007 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionData, 24)
InputAnalogActionData_t *__thiscall winISteamController_SteamController007_GetAnalogActionData(winISteamController_SteamController007 *_this, InputAnalogActionData_t *_r, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController007_GetAnalogActionData(_this->linux_side, controllerHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetAnalogActionOrigins, 32)
int __thiscall winISteamController_SteamController007_GetAnalogActionOrigins(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetAnalogActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGlyphForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController007_GetGlyphForActionOrigin(winISteamController_SteamController007 *_this, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamController_SteamController007_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
    path_result = steamclient_isteamcontroller_getglyph(eOrigin, path_result);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetStringForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController007_GetStringForActionOrigin(winISteamController_SteamController007 *_this, EControllerActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_StopAnalogActionMomentum, 20)
void __thiscall winISteamController_SteamController007_StopAnalogActionMomentum(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_StopAnalogActionMomentum(_this->linux_side, controllerHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetMotionData, 16)
InputMotionData_t *__thiscall winISteamController_SteamController007_GetMotionData(winISteamController_SteamController007 *_this, InputMotionData_t *_r, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController007_GetMotionData(_this->linux_side, controllerHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerHapticPulse, 20)
void __thiscall winISteamController_SteamController007_TriggerHapticPulse(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamController_SteamController007_TriggerRepeatedHapticPulse(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerRepeatedHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TriggerVibration, 20)
void __thiscall winISteamController_SteamController007_TriggerVibration(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_TriggerVibration(_this->linux_side, controllerHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_SetLEDColor, 28)
void __thiscall winISteamController_SteamController007_SetLEDColor(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController007_SetLEDColor(_this->linux_side, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_ShowBindingPanel, 12)
bool __thiscall winISteamController_SteamController007_ShowBindingPanel(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_ShowBindingPanel(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamController_SteamController007_GetInputTypeForHandle(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetInputTypeForHandle(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetControllerForGamepadIndex, 8)
ControllerHandle_t __thiscall winISteamController_SteamController007_GetControllerForGamepadIndex(winISteamController_SteamController007 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGamepadIndexForController, 12)
int __thiscall winISteamController_SteamController007_GetGamepadIndexForController(winISteamController_SteamController007 *_this, ControllerHandle_t ulControllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetGamepadIndexForController(_this->linux_side, ulControllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetStringForXboxOrigin, 8)
const char * __thiscall winISteamController_SteamController007_GetStringForXboxOrigin(winISteamController_SteamController007 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetStringForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetGlyphForXboxOrigin, 8)
const char * __thiscall winISteamController_SteamController007_GetGlyphForXboxOrigin(winISteamController_SteamController007 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetGlyphForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetActionOriginFromXboxOrigin, 16)
EControllerActionOrigin __thiscall winISteamController_SteamController007_GetActionOriginFromXboxOrigin(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetActionOriginFromXboxOrigin(_this->linux_side, controllerHandle, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_TranslateActionOrigin, 12)
EControllerActionOrigin __thiscall winISteamController_SteamController007_TranslateActionOrigin(winISteamController_SteamController007 *_this, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_TranslateActionOrigin(_this->linux_side, eDestinationInputType, eSourceOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController007_GetControllerBindingRevision, 20)
bool __thiscall winISteamController_SteamController007_GetControllerBindingRevision(winISteamController_SteamController007 *_this, ControllerHandle_t controllerHandle, int * pMajor, int * pMinor)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController007_GetControllerBindingRevision(_this->linux_side, controllerHandle, pMajor, pMinor);
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

winISteamController_SteamController007 *create_winISteamController_SteamController007(void *linux_side)
{
    winISteamController_SteamController007 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_SteamController007));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_SteamController007_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamController_SteamController006.h"

typedef struct __winISteamController_SteamController006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_SteamController006;

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_Init, 4)
bool __thiscall winISteamController_SteamController006_Init(winISteamController_SteamController006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_Shutdown, 4)
bool __thiscall winISteamController_SteamController006_Shutdown(winISteamController_SteamController006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_RunFrame, 4)
void __thiscall winISteamController_SteamController006_RunFrame(winISteamController_SteamController006 *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetConnectedControllers, 8)
int __thiscall winISteamController_SteamController006_GetConnectedControllers(winISteamController_SteamController006 *_this, ControllerHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowBindingPanel, 12)
bool __thiscall winISteamController_SteamController006_ShowBindingPanel(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_ShowBindingPanel(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetActionSetHandle, 8)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController006_GetActionSetHandle(winISteamController_SteamController006 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ActivateActionSet, 20)
void __thiscall winISteamController_SteamController006_ActivateActionSet(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_ActivateActionSet(_this->linux_side, controllerHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetCurrentActionSet, 12)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController006_GetCurrentActionSet(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetCurrentActionSet(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ActivateActionSetLayer, 20)
void __thiscall winISteamController_SteamController006_ActivateActionSetLayer(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_ActivateActionSetLayer(_this->linux_side, controllerHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_DeactivateActionSetLayer, 20)
void __thiscall winISteamController_SteamController006_DeactivateActionSetLayer(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_DeactivateActionSetLayer(_this->linux_side, controllerHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamController_SteamController006_DeactivateAllActionSetLayers(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_DeactivateAllActionSetLayers(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetActiveActionSetLayers, 16)
int __thiscall winISteamController_SteamController006_GetActiveActionSetLayers(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetActiveActionSetLayers(_this->linux_side, controllerHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionHandle, 8)
ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController006_GetDigitalActionHandle(winISteamController_SteamController006 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionData, 24)
ControllerDigitalActionData_t *__thiscall winISteamController_SteamController006_GetDigitalActionData(winISteamController_SteamController006 *_this, ControllerDigitalActionData_t *_r, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController006_GetDigitalActionData(_this->linux_side, controllerHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetDigitalActionOrigins, 32)
int __thiscall winISteamController_SteamController006_GetDigitalActionOrigins(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetDigitalActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionHandle, 8)
ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController006_GetAnalogActionHandle(winISteamController_SteamController006 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionData, 24)
ControllerAnalogActionData_t *__thiscall winISteamController_SteamController006_GetAnalogActionData(winISteamController_SteamController006 *_this, ControllerAnalogActionData_t *_r, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController006_GetAnalogActionData(_this->linux_side, controllerHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetAnalogActionOrigins, 32)
int __thiscall winISteamController_SteamController006_GetAnalogActionOrigins(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetAnalogActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_StopAnalogActionMomentum, 20)
void __thiscall winISteamController_SteamController006_StopAnalogActionMomentum(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_StopAnalogActionMomentum(_this->linux_side, controllerHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerHapticPulse, 20)
void __thiscall winISteamController_SteamController006_TriggerHapticPulse(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamController_SteamController006_TriggerRepeatedHapticPulse(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerRepeatedHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_TriggerVibration, 20)
void __thiscall winISteamController_SteamController006_TriggerVibration(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_TriggerVibration(_this->linux_side, controllerHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_SetLEDColor, 28)
void __thiscall winISteamController_SteamController006_SetLEDColor(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController006_SetLEDColor(_this->linux_side, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetGamepadIndexForController, 12)
int __thiscall winISteamController_SteamController006_GetGamepadIndexForController(winISteamController_SteamController006 *_this, ControllerHandle_t ulControllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetGamepadIndexForController(_this->linux_side, ulControllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetControllerForGamepadIndex, 8)
ControllerHandle_t __thiscall winISteamController_SteamController006_GetControllerForGamepadIndex(winISteamController_SteamController006 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetMotionData, 16)
ControllerMotionData_t *__thiscall winISteamController_SteamController006_GetMotionData(winISteamController_SteamController006 *_this, ControllerMotionData_t *_r, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController006_GetMotionData(_this->linux_side, controllerHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowDigitalActionOrigins, 32)
bool __thiscall winISteamController_SteamController006_ShowDigitalActionOrigins(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_ShowDigitalActionOrigins(_this->linux_side, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_ShowAnalogActionOrigins, 32)
bool __thiscall winISteamController_SteamController006_ShowAnalogActionOrigins(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_ShowAnalogActionOrigins(_this->linux_side, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetStringForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController006_GetStringForActionOrigin(winISteamController_SteamController006 *_this, EControllerActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetGlyphForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController006_GetGlyphForActionOrigin(winISteamController_SteamController006 *_this, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamController_SteamController006_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
    path_result = steamclient_isteamcontroller_getglyph(eOrigin, path_result);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController006_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamController_SteamController006_GetInputTypeForHandle(winISteamController_SteamController006 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController006_GetInputTypeForHandle(_this->linux_side, controllerHandle);
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

winISteamController_SteamController006 *create_winISteamController_SteamController006(void *linux_side)
{
    winISteamController_SteamController006 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_SteamController006));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_SteamController006_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamController_SteamController005.h"

typedef struct __winISteamController_SteamController005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_SteamController005;

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_Init, 4)
bool __thiscall winISteamController_SteamController005_Init(winISteamController_SteamController005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_Shutdown, 4)
bool __thiscall winISteamController_SteamController005_Shutdown(winISteamController_SteamController005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_RunFrame, 4)
void __thiscall winISteamController_SteamController005_RunFrame(winISteamController_SteamController005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetConnectedControllers, 8)
int __thiscall winISteamController_SteamController005_GetConnectedControllers(winISteamController_SteamController005 *_this, ControllerHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowBindingPanel, 12)
bool __thiscall winISteamController_SteamController005_ShowBindingPanel(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_ShowBindingPanel(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetActionSetHandle, 8)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController005_GetActionSetHandle(winISteamController_SteamController005 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ActivateActionSet, 20)
void __thiscall winISteamController_SteamController005_ActivateActionSet(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_ActivateActionSet(_this->linux_side, controllerHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetCurrentActionSet, 12)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController005_GetCurrentActionSet(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetCurrentActionSet(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionHandle, 8)
ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController005_GetDigitalActionHandle(winISteamController_SteamController005 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionData, 24)
ControllerDigitalActionData_t *__thiscall winISteamController_SteamController005_GetDigitalActionData(winISteamController_SteamController005 *_this, ControllerDigitalActionData_t *_r, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController005_GetDigitalActionData(_this->linux_side, controllerHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetDigitalActionOrigins, 32)
int __thiscall winISteamController_SteamController005_GetDigitalActionOrigins(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetDigitalActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionHandle, 8)
ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController005_GetAnalogActionHandle(winISteamController_SteamController005 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionData, 24)
ControllerAnalogActionData_t *__thiscall winISteamController_SteamController005_GetAnalogActionData(winISteamController_SteamController005 *_this, ControllerAnalogActionData_t *_r, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController005_GetAnalogActionData(_this->linux_side, controllerHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetAnalogActionOrigins, 32)
int __thiscall winISteamController_SteamController005_GetAnalogActionOrigins(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetAnalogActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_StopAnalogActionMomentum, 20)
void __thiscall winISteamController_SteamController005_StopAnalogActionMomentum(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_StopAnalogActionMomentum(_this->linux_side, controllerHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerHapticPulse, 20)
void __thiscall winISteamController_SteamController005_TriggerHapticPulse(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamController_SteamController005_TriggerRepeatedHapticPulse(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerRepeatedHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_TriggerVibration, 20)
void __thiscall winISteamController_SteamController005_TriggerVibration(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_TriggerVibration(_this->linux_side, controllerHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_SetLEDColor, 28)
void __thiscall winISteamController_SteamController005_SetLEDColor(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController005_SetLEDColor(_this->linux_side, controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetGamepadIndexForController, 12)
int __thiscall winISteamController_SteamController005_GetGamepadIndexForController(winISteamController_SteamController005 *_this, ControllerHandle_t ulControllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetGamepadIndexForController(_this->linux_side, ulControllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetControllerForGamepadIndex, 8)
ControllerHandle_t __thiscall winISteamController_SteamController005_GetControllerForGamepadIndex(winISteamController_SteamController005 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetMotionData, 16)
ControllerMotionData_t *__thiscall winISteamController_SteamController005_GetMotionData(winISteamController_SteamController005 *_this, ControllerMotionData_t *_r, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController005_GetMotionData(_this->linux_side, controllerHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowDigitalActionOrigins, 32)
bool __thiscall winISteamController_SteamController005_ShowDigitalActionOrigins(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_ShowDigitalActionOrigins(_this->linux_side, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_ShowAnalogActionOrigins, 32)
bool __thiscall winISteamController_SteamController005_ShowAnalogActionOrigins(winISteamController_SteamController005 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_ShowAnalogActionOrigins(_this->linux_side, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetStringForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController005_GetStringForActionOrigin(winISteamController_SteamController005 *_this, EControllerActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController005_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController005_GetGlyphForActionOrigin, 8)
const char * __thiscall winISteamController_SteamController005_GetGlyphForActionOrigin(winISteamController_SteamController005 *_this, EControllerActionOrigin eOrigin)
{
    const char *path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamController_SteamController005_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
    path_result = steamclient_isteamcontroller_getglyph(eOrigin, path_result);
    return path_result;
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

winISteamController_SteamController005 *create_winISteamController_SteamController005(void *linux_side)
{
    winISteamController_SteamController005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_SteamController005));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_SteamController005_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamController_SteamController004.h"

typedef struct __winISteamController_SteamController004 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_SteamController004;

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_Init, 4)
bool __thiscall winISteamController_SteamController004_Init(winISteamController_SteamController004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_Shutdown, 4)
bool __thiscall winISteamController_SteamController004_Shutdown(winISteamController_SteamController004 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_RunFrame, 4)
void __thiscall winISteamController_SteamController004_RunFrame(winISteamController_SteamController004 *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetConnectedControllers, 8)
int __thiscall winISteamController_SteamController004_GetConnectedControllers(winISteamController_SteamController004 *_this, ControllerHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowBindingPanel, 12)
bool __thiscall winISteamController_SteamController004_ShowBindingPanel(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_ShowBindingPanel(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetActionSetHandle, 8)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController004_GetActionSetHandle(winISteamController_SteamController004 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ActivateActionSet, 20)
void __thiscall winISteamController_SteamController004_ActivateActionSet(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_ActivateActionSet(_this->linux_side, controllerHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetCurrentActionSet, 12)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController004_GetCurrentActionSet(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetCurrentActionSet(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionHandle, 8)
ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController004_GetDigitalActionHandle(winISteamController_SteamController004 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionData, 24)
ControllerDigitalActionData_t *__thiscall winISteamController_SteamController004_GetDigitalActionData(winISteamController_SteamController004 *_this, ControllerDigitalActionData_t *_r, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController004_GetDigitalActionData(_this->linux_side, controllerHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetDigitalActionOrigins, 32)
int __thiscall winISteamController_SteamController004_GetDigitalActionOrigins(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetDigitalActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionHandle, 8)
ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController004_GetAnalogActionHandle(winISteamController_SteamController004 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionData, 24)
ControllerAnalogActionData_t *__thiscall winISteamController_SteamController004_GetAnalogActionData(winISteamController_SteamController004 *_this, ControllerAnalogActionData_t *_r, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController004_GetAnalogActionData(_this->linux_side, controllerHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetAnalogActionOrigins, 32)
int __thiscall winISteamController_SteamController004_GetAnalogActionOrigins(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetAnalogActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_StopAnalogActionMomentum, 20)
void __thiscall winISteamController_SteamController004_StopAnalogActionMomentum(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_StopAnalogActionMomentum(_this->linux_side, controllerHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_TriggerHapticPulse, 20)
void __thiscall winISteamController_SteamController004_TriggerHapticPulse(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_TriggerHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamController_SteamController004_TriggerRepeatedHapticPulse(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController004_TriggerRepeatedHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetGamepadIndexForController, 12)
int __thiscall winISteamController_SteamController004_GetGamepadIndexForController(winISteamController_SteamController004 *_this, ControllerHandle_t ulControllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetGamepadIndexForController(_this->linux_side, ulControllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetControllerForGamepadIndex, 8)
ControllerHandle_t __thiscall winISteamController_SteamController004_GetControllerForGamepadIndex(winISteamController_SteamController004 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_GetMotionData, 16)
ControllerMotionData_t *__thiscall winISteamController_SteamController004_GetMotionData(winISteamController_SteamController004 *_this, ControllerMotionData_t *_r, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController004_GetMotionData(_this->linux_side, controllerHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowDigitalActionOrigins, 32)
bool __thiscall winISteamController_SteamController004_ShowDigitalActionOrigins(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_ShowDigitalActionOrigins(_this->linux_side, controllerHandle, digitalActionHandle, flScale, flXPosition, flYPosition);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController004_ShowAnalogActionOrigins, 32)
bool __thiscall winISteamController_SteamController004_ShowAnalogActionOrigins(winISteamController_SteamController004 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController004_ShowAnalogActionOrigins(_this->linux_side, controllerHandle, analogActionHandle, flScale, flXPosition, flYPosition);
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

winISteamController_SteamController004 *create_winISteamController_SteamController004(void *linux_side)
{
    winISteamController_SteamController004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_SteamController004));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_SteamController004_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamController_SteamController003.h"

typedef struct __winISteamController_SteamController003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_SteamController003;

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_Init, 4)
bool __thiscall winISteamController_SteamController003_Init(winISteamController_SteamController003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_Shutdown, 4)
bool __thiscall winISteamController_SteamController003_Shutdown(winISteamController_SteamController003 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_RunFrame, 4)
void __thiscall winISteamController_SteamController003_RunFrame(winISteamController_SteamController003 *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetConnectedControllers, 8)
int __thiscall winISteamController_SteamController003_GetConnectedControllers(winISteamController_SteamController003 *_this, ControllerHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_ShowBindingPanel, 12)
bool __thiscall winISteamController_SteamController003_ShowBindingPanel(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_ShowBindingPanel(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetActionSetHandle, 8)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController003_GetActionSetHandle(winISteamController_SteamController003 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_ActivateActionSet, 20)
void __thiscall winISteamController_SteamController003_ActivateActionSet(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_ActivateActionSet(_this->linux_side, controllerHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetCurrentActionSet, 12)
ControllerActionSetHandle_t __thiscall winISteamController_SteamController003_GetCurrentActionSet(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetCurrentActionSet(_this->linux_side, controllerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionHandle, 8)
ControllerDigitalActionHandle_t __thiscall winISteamController_SteamController003_GetDigitalActionHandle(winISteamController_SteamController003 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionData, 24)
ControllerDigitalActionData_t *__thiscall winISteamController_SteamController003_GetDigitalActionData(winISteamController_SteamController003 *_this, ControllerDigitalActionData_t *_r, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController003_GetDigitalActionData(_this->linux_side, controllerHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetDigitalActionOrigins, 32)
int __thiscall winISteamController_SteamController003_GetDigitalActionOrigins(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetDigitalActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionHandle, 8)
ControllerAnalogActionHandle_t __thiscall winISteamController_SteamController003_GetAnalogActionHandle(winISteamController_SteamController003 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionData, 24)
ControllerAnalogActionData_t *__thiscall winISteamController_SteamController003_GetAnalogActionData(winISteamController_SteamController003 *_this, ControllerAnalogActionData_t *_r, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamController_SteamController003_GetAnalogActionData(_this->linux_side, controllerHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_GetAnalogActionOrigins, 32)
int __thiscall winISteamController_SteamController003_GetAnalogActionOrigins(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamController_SteamController003_GetAnalogActionOrigins(_this->linux_side, controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_StopAnalogActionMomentum, 20)
void __thiscall winISteamController_SteamController003_StopAnalogActionMomentum(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_StopAnalogActionMomentum(_this->linux_side, controllerHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_TriggerHapticPulse, 20)
void __thiscall winISteamController_SteamController003_TriggerHapticPulse(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_TriggerHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_SteamController003_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamController_SteamController003_TriggerRepeatedHapticPulse(winISteamController_SteamController003 *_this, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamController_SteamController003_TriggerRepeatedHapticPulse(_this->linux_side, controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
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

winISteamController_SteamController003 *create_winISteamController_SteamController003(void *linux_side)
{
    winISteamController_SteamController003 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_SteamController003));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_SteamController003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION.h"

typedef struct __winISteamController_STEAMCONTROLLER_INTERFACE_VERSION {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamController_STEAMCONTROLLER_INTERFACE_VERSION;

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init, 8)
bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this, const char * pchAbsolutePathToControllerConfigVDF)
{
    char lin_pchAbsolutePathToControllerConfigVDF[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchAbsolutePathToControllerConfigVDF, lin_pchAbsolutePathToControllerConfigVDF, 0);
    TRACE("%p\n", _this);
    return cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(_this->linux_side, pchAbsolutePathToControllerConfigVDF ? lin_pchAbsolutePathToControllerConfigVDF : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown, 4)
bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this)
{
    TRACE("%p\n", _this);
    return cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame, 4)
void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState, 12)
bool __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this, uint32 unControllerIndex, SteamControllerState001_t * pState)
{
    TRACE("%p\n", _this);
    return cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(_this->linux_side, unControllerIndex, pState);
}

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse, 16)
void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this, uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(_this->linux_side, unControllerIndex, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode, 8)
void __thiscall winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *_this, const char * pchMode)
{
    TRACE("%p\n", _this);
    cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(_this->linux_side, pchMode);
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

winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *create_winISteamController_STEAMCONTROLLER_INTERFACE_VERSION(void *linux_side)
{
    winISteamController_STEAMCONTROLLER_INTERFACE_VERSION *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamController_STEAMCONTROLLER_INTERFACE_VERSION));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamController_STEAMCONTROLLER_INTERFACE_VERSION_vtable;
    r->linux_side = linux_side;
    return r;
}

