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

#include "cppISteamInput_SteamInput001.h"

typedef struct __winISteamInput_SteamInput001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInput_SteamInput001;

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Init, 4)
bool __thiscall winISteamInput_SteamInput001_Init(winISteamInput_SteamInput001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_Shutdown, 4)
bool __thiscall winISteamInput_SteamInput001_Shutdown(winISteamInput_SteamInput001 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_RunFrame, 4)
void __thiscall winISteamInput_SteamInput001_RunFrame(winISteamInput_SteamInput001 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetConnectedControllers, 8)
int __thiscall winISteamInput_SteamInput001_GetConnectedControllers(winISteamInput_SteamInput001 *_this, InputHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionSetHandle, 8)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetActionSetHandle(winISteamInput_SteamInput001 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSet, 20)
void __thiscall winISteamInput_SteamInput001_ActivateActionSet(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSet(_this->linux_side, inputHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetCurrentActionSet, 12)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput001_GetCurrentActionSet(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetCurrentActionSet(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ActivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput001_ActivateActionSetLayer(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_ActivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput001_DeactivateActionSetLayer(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamInput_SteamInput001_DeactivateAllActionSetLayers(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_DeactivateAllActionSetLayers(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActiveActionSetLayers, 16)
int __thiscall winISteamInput_SteamInput001_GetActiveActionSetLayers(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetActiveActionSetLayers(_this->linux_side, inputHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionHandle, 8)
InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput001_GetDigitalActionHandle(winISteamInput_SteamInput001 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionData, 24)
InputDigitalActionData_t *__thiscall winISteamInput_SteamInput001_GetDigitalActionData(winISteamInput_SteamInput001 *_this, InputDigitalActionData_t *_r, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput001_GetDigitalActionData(_this->linux_side, inputHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDigitalActionOrigins, 32)
int __thiscall winISteamInput_SteamInput001_GetDigitalActionOrigins(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetDigitalActionOrigins(_this->linux_side, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionHandle, 8)
InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput001_GetAnalogActionHandle(winISteamInput_SteamInput001 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionData, 24)
InputAnalogActionData_t *__thiscall winISteamInput_SteamInput001_GetAnalogActionData(winISteamInput_SteamInput001 *_this, InputAnalogActionData_t *_r, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput001_GetAnalogActionData(_this->linux_side, inputHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetAnalogActionOrigins, 32)
int __thiscall winISteamInput_SteamInput001_GetAnalogActionOrigins(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetAnalogActionOrigins(_this->linux_side, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput001_GetGlyphForActionOrigin(winISteamInput_SteamInput001 *_this, EInputActionOrigin eOrigin)
{
    const char *path_result;
    TRACE("%p\n", _this);
    path_result = cppISteamInput_SteamInput001_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
    path_result = steamclient_isteamcontroller_getglyph(eOrigin, path_result);
    return path_result;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput001_GetStringForActionOrigin(winISteamInput_SteamInput001 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_StopAnalogActionMomentum, 20)
void __thiscall winISteamInput_SteamInput001_StopAnalogActionMomentum(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_StopAnalogActionMomentum(_this->linux_side, inputHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetMotionData, 16)
InputMotionData_t *__thiscall winISteamInput_SteamInput001_GetMotionData(winISteamInput_SteamInput001 *_this, InputMotionData_t *_r, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput001_GetMotionData(_this->linux_side, inputHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerVibration, 20)
void __thiscall winISteamInput_SteamInput001_TriggerVibration(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerVibration(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_SetLEDColor, 28)
void __thiscall winISteamInput_SteamInput001_SetLEDColor(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_SetLEDColor(_this->linux_side, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerHapticPulse, 20)
void __thiscall winISteamInput_SteamInput001_TriggerHapticPulse(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamInput_SteamInput001_TriggerRepeatedHapticPulse(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_ShowBindingPanel, 12)
bool __thiscall winISteamInput_SteamInput001_ShowBindingPanel(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_ShowBindingPanel(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamInput_SteamInput001_GetInputTypeForHandle(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetInputTypeForHandle(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetControllerForGamepadIndex, 8)
InputHandle_t __thiscall winISteamInput_SteamInput001_GetControllerForGamepadIndex(winISteamInput_SteamInput001 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGamepadIndexForController, 12)
int __thiscall winISteamInput_SteamInput001_GetGamepadIndexForController(winISteamInput_SteamInput001 *_this, InputHandle_t ulinputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetGamepadIndexForController(_this->linux_side, ulinputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetStringForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput001_GetStringForXboxOrigin(winISteamInput_SteamInput001 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetStringForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetGlyphForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput001_GetGlyphForXboxOrigin(winISteamInput_SteamInput001 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetGlyphForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin, 16)
EInputActionOrigin __thiscall winISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(_this->linux_side, inputHandle, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_TranslateActionOrigin, 12)
EInputActionOrigin __thiscall winISteamInput_SteamInput001_TranslateActionOrigin(winISteamInput_SteamInput001 *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_TranslateActionOrigin(_this->linux_side, eDestinationInputType, eSourceOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetDeviceBindingRevision, 20)
bool __thiscall winISteamInput_SteamInput001_GetDeviceBindingRevision(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetDeviceBindingRevision(_this->linux_side, inputHandle, pMajor, pMinor);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput001_GetRemotePlaySessionID, 12)
uint32 __thiscall winISteamInput_SteamInput001_GetRemotePlaySessionID(winISteamInput_SteamInput001 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetRemotePlaySessionID(_this->linux_side, inputHandle);
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

winISteamInput_SteamInput001 *create_winISteamInput_SteamInput001(void *linux_side)
{
    winISteamInput_SteamInput001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamInput_SteamInput001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamInput_SteamInput001_vtable;
    r->linux_side = linux_side;
    return r;
}

