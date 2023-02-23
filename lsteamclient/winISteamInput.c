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

#include "cppISteamInput_SteamInput006.h"

typedef struct __winISteamInput_SteamInput006 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInput_SteamInput006;

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Init, 8)
bool __thiscall winISteamInput_SteamInput006_Init(winISteamInput_SteamInput006 *_this, bool bExplicitlyCallRunFrame)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_Init(_this->linux_side, bExplicitlyCallRunFrame);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Shutdown, 4)
bool __thiscall winISteamInput_SteamInput006_Shutdown(winISteamInput_SteamInput006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetInputActionManifestFilePath, 8)
bool __thiscall winISteamInput_SteamInput006_SetInputActionManifestFilePath(winISteamInput_SteamInput006 *_this, const char * pchInputActionManifestAbsolutePath)
{
    char lin_pchInputActionManifestAbsolutePath[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchInputActionManifestAbsolutePath, lin_pchInputActionManifestAbsolutePath, 0);
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_SetInputActionManifestFilePath(_this->linux_side, pchInputActionManifestAbsolutePath ? lin_pchInputActionManifestAbsolutePath : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_RunFrame, 8)
void __thiscall winISteamInput_SteamInput006_RunFrame(winISteamInput_SteamInput006 *_this, bool bReservedValue)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_RunFrame(_this->linux_side, bReservedValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BWaitForData, 12)
bool __thiscall winISteamInput_SteamInput006_BWaitForData(winISteamInput_SteamInput006 *_this, bool bWaitForever, uint32 unTimeout)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_BWaitForData(_this->linux_side, bWaitForever, unTimeout);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_BNewDataAvailable, 4)
bool __thiscall winISteamInput_SteamInput006_BNewDataAvailable(winISteamInput_SteamInput006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_BNewDataAvailable(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetConnectedControllers, 8)
int __thiscall winISteamInput_SteamInput006_GetConnectedControllers(winISteamInput_SteamInput006 *_this, InputHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableDeviceCallbacks, 4)
void __thiscall winISteamInput_SteamInput006_EnableDeviceCallbacks(winISteamInput_SteamInput006 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableDeviceCallbacks(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_EnableActionEventCallbacks, 8)
void __thiscall winISteamInput_SteamInput006_EnableActionEventCallbacks(winISteamInput_SteamInput006 *_this, SteamInputActionEventCallbackPointer pCallback)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_EnableActionEventCallbacks(_this->linux_side, pCallback);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionSetHandle, 8)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetActionSetHandle(winISteamInput_SteamInput006 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSet, 20)
void __thiscall winISteamInput_SteamInput006_ActivateActionSet(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSet(_this->linux_side, inputHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetCurrentActionSet, 12)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput006_GetCurrentActionSet(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetCurrentActionSet(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ActivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput006_ActivateActionSetLayer(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_ActivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput006_DeactivateActionSetLayer(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamInput_SteamInput006_DeactivateAllActionSetLayers(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_DeactivateAllActionSetLayers(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActiveActionSetLayers, 16)
int __thiscall winISteamInput_SteamInput006_GetActiveActionSetLayers(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetActiveActionSetLayers(_this->linux_side, inputHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionHandle, 8)
InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput006_GetDigitalActionHandle(winISteamInput_SteamInput006 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionData, 24)
InputDigitalActionData_t *__thiscall winISteamInput_SteamInput006_GetDigitalActionData(winISteamInput_SteamInput006 *_this, InputDigitalActionData_t *_r, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput006_GetDigitalActionData(_this->linux_side, inputHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDigitalActionOrigins, 32)
int __thiscall winISteamInput_SteamInput006_GetDigitalActionOrigins(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetDigitalActionOrigins(_this->linux_side, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForDigitalActionName, 12)
const char * __thiscall winISteamInput_SteamInput006_GetStringForDigitalActionName(winISteamInput_SteamInput006 *_this, InputDigitalActionHandle_t eActionHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetStringForDigitalActionName(_this->linux_side, eActionHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionHandle, 8)
InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput006_GetAnalogActionHandle(winISteamInput_SteamInput006 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionData, 24)
InputAnalogActionData_t *__thiscall winISteamInput_SteamInput006_GetAnalogActionData(winISteamInput_SteamInput006 *_this, InputAnalogActionData_t *_r, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput006_GetAnalogActionData(_this->linux_side, inputHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetAnalogActionOrigins, 32)
int __thiscall winISteamInput_SteamInput006_GetAnalogActionOrigins(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetAnalogActionOrigins(_this->linux_side, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin, 16)
const char * __thiscall winISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(winISteamInput_SteamInput006 *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(_this->linux_side, eOrigin, eSize, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin, 12)
const char * __thiscall winISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(winISteamInput_SteamInput006 *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(_this->linux_side, eOrigin, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy, 8)
const char * __thiscall winISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(winISteamInput_SteamInput006 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput006_GetStringForActionOrigin(winISteamInput_SteamInput006 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForAnalogActionName, 12)
const char * __thiscall winISteamInput_SteamInput006_GetStringForAnalogActionName(winISteamInput_SteamInput006 *_this, InputAnalogActionHandle_t eActionHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetStringForAnalogActionName(_this->linux_side, eActionHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_StopAnalogActionMomentum, 20)
void __thiscall winISteamInput_SteamInput006_StopAnalogActionMomentum(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_StopAnalogActionMomentum(_this->linux_side, inputHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetMotionData, 16)
InputMotionData_t *__thiscall winISteamInput_SteamInput006_GetMotionData(winISteamInput_SteamInput006 *_this, InputMotionData_t *_r, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput006_GetMotionData(_this->linux_side, inputHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibration, 20)
void __thiscall winISteamInput_SteamInput006_TriggerVibration(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibration(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerVibrationExtended, 28)
void __thiscall winISteamInput_SteamInput006_TriggerVibrationExtended(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerVibrationExtended(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TriggerSimpleHapticEvent, 32)
void __thiscall winISteamInput_SteamInput006_TriggerSimpleHapticEvent(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_TriggerSimpleHapticEvent(_this->linux_side, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetLEDColor, 28)
void __thiscall winISteamInput_SteamInput006_SetLEDColor(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetLEDColor(_this->linux_side, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerHapticPulse, 20)
void __thiscall winISteamInput_SteamInput006_Legacy_TriggerHapticPulse(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_ShowBindingPanel, 12)
bool __thiscall winISteamInput_SteamInput006_ShowBindingPanel(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_ShowBindingPanel(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamInput_SteamInput006_GetInputTypeForHandle(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetInputTypeForHandle(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetControllerForGamepadIndex, 8)
InputHandle_t __thiscall winISteamInput_SteamInput006_GetControllerForGamepadIndex(winISteamInput_SteamInput006 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGamepadIndexForController, 12)
int __thiscall winISteamInput_SteamInput006_GetGamepadIndexForController(winISteamInput_SteamInput006 *_this, InputHandle_t ulinputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetGamepadIndexForController(_this->linux_side, ulinputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetStringForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput006_GetStringForXboxOrigin(winISteamInput_SteamInput006 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetStringForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetGlyphForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput006_GetGlyphForXboxOrigin(winISteamInput_SteamInput006 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetGlyphForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin, 16)
EInputActionOrigin __thiscall winISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(_this->linux_side, inputHandle, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_TranslateActionOrigin, 12)
EInputActionOrigin __thiscall winISteamInput_SteamInput006_TranslateActionOrigin(winISteamInput_SteamInput006 *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_TranslateActionOrigin(_this->linux_side, eDestinationInputType, eSourceOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetDeviceBindingRevision, 20)
bool __thiscall winISteamInput_SteamInput006_GetDeviceBindingRevision(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetDeviceBindingRevision(_this->linux_side, inputHandle, pMajor, pMinor);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetRemotePlaySessionID, 12)
uint32 __thiscall winISteamInput_SteamInput006_GetRemotePlaySessionID(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetRemotePlaySessionID(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_GetSessionInputConfigurationSettings, 4)
uint16 __thiscall winISteamInput_SteamInput006_GetSessionInputConfigurationSettings(winISteamInput_SteamInput006 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput006_SetDualSenseTriggerEffect, 16)
void __thiscall winISteamInput_SteamInput006_SetDualSenseTriggerEffect(winISteamInput_SteamInput006 *_this, InputHandle_t inputHandle, const ScePadTriggerEffectParam * pParam)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput006_SetDualSenseTriggerEffect(_this->linux_side, inputHandle, pParam);
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

winISteamInput_SteamInput006 *create_winISteamInput_SteamInput006(void *linux_side)
{
    winISteamInput_SteamInput006 *r = alloc_mem_for_iface(sizeof(winISteamInput_SteamInput006), "SteamInput006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput006_vtable, 48, "SteamInput006");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamInput_SteamInput005.h"

typedef struct __winISteamInput_SteamInput005 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInput_SteamInput005;

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Init, 8)
bool __thiscall winISteamInput_SteamInput005_Init(winISteamInput_SteamInput005 *_this, bool bExplicitlyCallRunFrame)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_Init(_this->linux_side, bExplicitlyCallRunFrame);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Shutdown, 4)
bool __thiscall winISteamInput_SteamInput005_Shutdown(winISteamInput_SteamInput005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetInputActionManifestFilePath, 8)
bool __thiscall winISteamInput_SteamInput005_SetInputActionManifestFilePath(winISteamInput_SteamInput005 *_this, const char * pchInputActionManifestAbsolutePath)
{
    char lin_pchInputActionManifestAbsolutePath[PATH_MAX];
    steamclient_dos_path_to_unix_path(pchInputActionManifestAbsolutePath, lin_pchInputActionManifestAbsolutePath, 0);
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_SetInputActionManifestFilePath(_this->linux_side, pchInputActionManifestAbsolutePath ? lin_pchInputActionManifestAbsolutePath : NULL);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_RunFrame, 8)
void __thiscall winISteamInput_SteamInput005_RunFrame(winISteamInput_SteamInput005 *_this, bool bReservedValue)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_RunFrame(_this->linux_side, bReservedValue);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BWaitForData, 12)
bool __thiscall winISteamInput_SteamInput005_BWaitForData(winISteamInput_SteamInput005 *_this, bool bWaitForever, uint32 unTimeout)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_BWaitForData(_this->linux_side, bWaitForever, unTimeout);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_BNewDataAvailable, 4)
bool __thiscall winISteamInput_SteamInput005_BNewDataAvailable(winISteamInput_SteamInput005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_BNewDataAvailable(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetConnectedControllers, 8)
int __thiscall winISteamInput_SteamInput005_GetConnectedControllers(winISteamInput_SteamInput005 *_this, InputHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableDeviceCallbacks, 4)
void __thiscall winISteamInput_SteamInput005_EnableDeviceCallbacks(winISteamInput_SteamInput005 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableDeviceCallbacks(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_EnableActionEventCallbacks, 8)
void __thiscall winISteamInput_SteamInput005_EnableActionEventCallbacks(winISteamInput_SteamInput005 *_this, SteamInputActionEventCallbackPointer pCallback)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_EnableActionEventCallbacks(_this->linux_side, pCallback);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionSetHandle, 8)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetActionSetHandle(winISteamInput_SteamInput005 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSet, 20)
void __thiscall winISteamInput_SteamInput005_ActivateActionSet(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSet(_this->linux_side, inputHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetCurrentActionSet, 12)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput005_GetCurrentActionSet(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetCurrentActionSet(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ActivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput005_ActivateActionSetLayer(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_ActivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput005_DeactivateActionSetLayer(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamInput_SteamInput005_DeactivateAllActionSetLayers(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_DeactivateAllActionSetLayers(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActiveActionSetLayers, 16)
int __thiscall winISteamInput_SteamInput005_GetActiveActionSetLayers(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetActiveActionSetLayers(_this->linux_side, inputHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionHandle, 8)
InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput005_GetDigitalActionHandle(winISteamInput_SteamInput005 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionData, 24)
InputDigitalActionData_t *__thiscall winISteamInput_SteamInput005_GetDigitalActionData(winISteamInput_SteamInput005 *_this, InputDigitalActionData_t *_r, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput005_GetDigitalActionData(_this->linux_side, inputHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDigitalActionOrigins, 32)
int __thiscall winISteamInput_SteamInput005_GetDigitalActionOrigins(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetDigitalActionOrigins(_this->linux_side, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForDigitalActionName, 12)
const char * __thiscall winISteamInput_SteamInput005_GetStringForDigitalActionName(winISteamInput_SteamInput005 *_this, InputDigitalActionHandle_t eActionHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetStringForDigitalActionName(_this->linux_side, eActionHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionHandle, 8)
InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput005_GetAnalogActionHandle(winISteamInput_SteamInput005 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionData, 24)
InputAnalogActionData_t *__thiscall winISteamInput_SteamInput005_GetAnalogActionData(winISteamInput_SteamInput005 *_this, InputAnalogActionData_t *_r, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput005_GetAnalogActionData(_this->linux_side, inputHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetAnalogActionOrigins, 32)
int __thiscall winISteamInput_SteamInput005_GetAnalogActionOrigins(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetAnalogActionOrigins(_this->linux_side, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin, 16)
const char * __thiscall winISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(winISteamInput_SteamInput005 *_this, EInputActionOrigin eOrigin, ESteamInputGlyphSize eSize, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(_this->linux_side, eOrigin, eSize, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin, 12)
const char * __thiscall winISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(winISteamInput_SteamInput005 *_this, EInputActionOrigin eOrigin, uint32 unFlags)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(_this->linux_side, eOrigin, unFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy, 8)
const char * __thiscall winISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(winISteamInput_SteamInput005 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput005_GetStringForActionOrigin(winISteamInput_SteamInput005 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForAnalogActionName, 12)
const char * __thiscall winISteamInput_SteamInput005_GetStringForAnalogActionName(winISteamInput_SteamInput005 *_this, InputAnalogActionHandle_t eActionHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetStringForAnalogActionName(_this->linux_side, eActionHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_StopAnalogActionMomentum, 20)
void __thiscall winISteamInput_SteamInput005_StopAnalogActionMomentum(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_StopAnalogActionMomentum(_this->linux_side, inputHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetMotionData, 16)
InputMotionData_t *__thiscall winISteamInput_SteamInput005_GetMotionData(winISteamInput_SteamInput005 *_this, InputMotionData_t *_r, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput005_GetMotionData(_this->linux_side, inputHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibration, 20)
void __thiscall winISteamInput_SteamInput005_TriggerVibration(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibration(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerVibrationExtended, 28)
void __thiscall winISteamInput_SteamInput005_TriggerVibrationExtended(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed, unsigned short usLeftTriggerSpeed, unsigned short usRightTriggerSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerVibrationExtended(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed, usLeftTriggerSpeed, usRightTriggerSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TriggerSimpleHapticEvent, 32)
void __thiscall winISteamInput_SteamInput005_TriggerSimpleHapticEvent(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, EControllerHapticLocation eHapticLocation, uint8 nIntensity, char nGainDB, uint8 nOtherIntensity, char nOtherGainDB)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_TriggerSimpleHapticEvent(_this->linux_side, inputHandle, eHapticLocation, nIntensity, nGainDB, nOtherIntensity, nOtherGainDB);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_SetLEDColor, 28)
void __thiscall winISteamInput_SteamInput005_SetLEDColor(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_SetLEDColor(_this->linux_side, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerHapticPulse, 20)
void __thiscall winISteamInput_SteamInput005_Legacy_TriggerHapticPulse(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_ShowBindingPanel, 12)
bool __thiscall winISteamInput_SteamInput005_ShowBindingPanel(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_ShowBindingPanel(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamInput_SteamInput005_GetInputTypeForHandle(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetInputTypeForHandle(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetControllerForGamepadIndex, 8)
InputHandle_t __thiscall winISteamInput_SteamInput005_GetControllerForGamepadIndex(winISteamInput_SteamInput005 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGamepadIndexForController, 12)
int __thiscall winISteamInput_SteamInput005_GetGamepadIndexForController(winISteamInput_SteamInput005 *_this, InputHandle_t ulinputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetGamepadIndexForController(_this->linux_side, ulinputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetStringForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput005_GetStringForXboxOrigin(winISteamInput_SteamInput005 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetStringForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetGlyphForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput005_GetGlyphForXboxOrigin(winISteamInput_SteamInput005 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetGlyphForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin, 16)
EInputActionOrigin __thiscall winISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(_this->linux_side, inputHandle, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_TranslateActionOrigin, 12)
EInputActionOrigin __thiscall winISteamInput_SteamInput005_TranslateActionOrigin(winISteamInput_SteamInput005 *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_TranslateActionOrigin(_this->linux_side, eDestinationInputType, eSourceOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetDeviceBindingRevision, 20)
bool __thiscall winISteamInput_SteamInput005_GetDeviceBindingRevision(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetDeviceBindingRevision(_this->linux_side, inputHandle, pMajor, pMinor);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetRemotePlaySessionID, 12)
uint32 __thiscall winISteamInput_SteamInput005_GetRemotePlaySessionID(winISteamInput_SteamInput005 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetRemotePlaySessionID(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput005_GetSessionInputConfigurationSettings, 4)
uint16 __thiscall winISteamInput_SteamInput005_GetSessionInputConfigurationSettings(winISteamInput_SteamInput005 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings(_this->linux_side);
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

winISteamInput_SteamInput005 *create_winISteamInput_SteamInput005(void *linux_side)
{
    winISteamInput_SteamInput005 *r = alloc_mem_for_iface(sizeof(winISteamInput_SteamInput005), "SteamInput005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput005_vtable, 47, "SteamInput005");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamInput_SteamInput002.h"

typedef struct __winISteamInput_SteamInput002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamInput_SteamInput002;

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Init, 4)
bool __thiscall winISteamInput_SteamInput002_Init(winISteamInput_SteamInput002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_Init(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_Shutdown, 4)
bool __thiscall winISteamInput_SteamInput002_Shutdown(winISteamInput_SteamInput002 *_this)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_Shutdown(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_RunFrame, 4)
void __thiscall winISteamInput_SteamInput002_RunFrame(winISteamInput_SteamInput002 *_this)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_RunFrame(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetConnectedControllers, 8)
int __thiscall winISteamInput_SteamInput002_GetConnectedControllers(winISteamInput_SteamInput002 *_this, InputHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetConnectedControllers(_this->linux_side, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionSetHandle, 8)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetActionSetHandle(winISteamInput_SteamInput002 *_this, const char * pszActionSetName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetActionSetHandle(_this->linux_side, pszActionSetName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSet, 20)
void __thiscall winISteamInput_SteamInput002_ActivateActionSet(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSet(_this->linux_side, inputHandle, actionSetHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetCurrentActionSet, 12)
InputActionSetHandle_t __thiscall winISteamInput_SteamInput002_GetCurrentActionSet(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetCurrentActionSet(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ActivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput002_ActivateActionSetLayer(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_ActivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateActionSetLayer, 20)
void __thiscall winISteamInput_SteamInput002_DeactivateActionSetLayer(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateActionSetLayer(_this->linux_side, inputHandle, actionSetLayerHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_DeactivateAllActionSetLayers, 12)
void __thiscall winISteamInput_SteamInput002_DeactivateAllActionSetLayers(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_DeactivateAllActionSetLayers(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActiveActionSetLayers, 16)
int __thiscall winISteamInput_SteamInput002_GetActiveActionSetLayers(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetActiveActionSetLayers(_this->linux_side, inputHandle, handlesOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionHandle, 8)
InputDigitalActionHandle_t __thiscall winISteamInput_SteamInput002_GetDigitalActionHandle(winISteamInput_SteamInput002 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetDigitalActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionData, 24)
InputDigitalActionData_t *__thiscall winISteamInput_SteamInput002_GetDigitalActionData(winISteamInput_SteamInput002 *_this, InputDigitalActionData_t *_r, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput002_GetDigitalActionData(_this->linux_side, inputHandle, digitalActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDigitalActionOrigins, 32)
int __thiscall winISteamInput_SteamInput002_GetDigitalActionOrigins(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetDigitalActionOrigins(_this->linux_side, inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionHandle, 8)
InputAnalogActionHandle_t __thiscall winISteamInput_SteamInput002_GetAnalogActionHandle(winISteamInput_SteamInput002 *_this, const char * pszActionName)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetAnalogActionHandle(_this->linux_side, pszActionName);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionData, 24)
InputAnalogActionData_t *__thiscall winISteamInput_SteamInput002_GetAnalogActionData(winISteamInput_SteamInput002 *_this, InputAnalogActionData_t *_r, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput002_GetAnalogActionData(_this->linux_side, inputHandle, analogActionHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetAnalogActionOrigins, 32)
int __thiscall winISteamInput_SteamInput002_GetAnalogActionOrigins(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetAnalogActionOrigins(_this->linux_side, inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput002_GetGlyphForActionOrigin(winISteamInput_SteamInput002 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForActionOrigin, 8)
const char * __thiscall winISteamInput_SteamInput002_GetStringForActionOrigin(winISteamInput_SteamInput002 *_this, EInputActionOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetStringForActionOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_StopAnalogActionMomentum, 20)
void __thiscall winISteamInput_SteamInput002_StopAnalogActionMomentum(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_StopAnalogActionMomentum(_this->linux_side, inputHandle, eAction);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetMotionData, 16)
InputMotionData_t *__thiscall winISteamInput_SteamInput002_GetMotionData(winISteamInput_SteamInput002 *_this, InputMotionData_t *_r, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    *_r = cppISteamInput_SteamInput002_GetMotionData(_this->linux_side, inputHandle);
    return _r;
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerVibration, 20)
void __thiscall winISteamInput_SteamInput002_TriggerVibration(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerVibration(_this->linux_side, inputHandle, usLeftSpeed, usRightSpeed);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_SetLEDColor, 28)
void __thiscall winISteamInput_SteamInput002_SetLEDColor(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_SetLEDColor(_this->linux_side, inputHandle, nColorR, nColorG, nColorB, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerHapticPulse, 20)
void __thiscall winISteamInput_SteamInput002_TriggerHapticPulse(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TriggerRepeatedHapticPulse, 32)
void __thiscall winISteamInput_SteamInput002_TriggerRepeatedHapticPulse(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
    TRACE("%p\n", _this);
    cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse(_this->linux_side, inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_ShowBindingPanel, 12)
bool __thiscall winISteamInput_SteamInput002_ShowBindingPanel(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_ShowBindingPanel(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetInputTypeForHandle, 12)
ESteamInputType __thiscall winISteamInput_SteamInput002_GetInputTypeForHandle(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetInputTypeForHandle(_this->linux_side, inputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetControllerForGamepadIndex, 8)
InputHandle_t __thiscall winISteamInput_SteamInput002_GetControllerForGamepadIndex(winISteamInput_SteamInput002 *_this, int nIndex)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetControllerForGamepadIndex(_this->linux_side, nIndex);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGamepadIndexForController, 12)
int __thiscall winISteamInput_SteamInput002_GetGamepadIndexForController(winISteamInput_SteamInput002 *_this, InputHandle_t ulinputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetGamepadIndexForController(_this->linux_side, ulinputHandle);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetStringForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput002_GetStringForXboxOrigin(winISteamInput_SteamInput002 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetStringForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetGlyphForXboxOrigin, 8)
const char * __thiscall winISteamInput_SteamInput002_GetGlyphForXboxOrigin(winISteamInput_SteamInput002 *_this, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetGlyphForXboxOrigin(_this->linux_side, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin, 16)
EInputActionOrigin __thiscall winISteamInput_SteamInput002_GetActionOriginFromXboxOrigin(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin(_this->linux_side, inputHandle, eOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_TranslateActionOrigin, 12)
EInputActionOrigin __thiscall winISteamInput_SteamInput002_TranslateActionOrigin(winISteamInput_SteamInput002 *_this, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_TranslateActionOrigin(_this->linux_side, eDestinationInputType, eSourceOrigin);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetDeviceBindingRevision, 20)
bool __thiscall winISteamInput_SteamInput002_GetDeviceBindingRevision(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle, int * pMajor, int * pMinor)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetDeviceBindingRevision(_this->linux_side, inputHandle, pMajor, pMinor);
}

DEFINE_THISCALL_WRAPPER(winISteamInput_SteamInput002_GetRemotePlaySessionID, 12)
uint32 __thiscall winISteamInput_SteamInput002_GetRemotePlaySessionID(winISteamInput_SteamInput002 *_this, InputHandle_t inputHandle)
{
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput002_GetRemotePlaySessionID(_this->linux_side, inputHandle);
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

winISteamInput_SteamInput002 *create_winISteamInput_SteamInput002(void *linux_side)
{
    winISteamInput_SteamInput002 *r = alloc_mem_for_iface(sizeof(winISteamInput_SteamInput002), "SteamInput002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput002_vtable, 35, "SteamInput002");
    r->linux_side = linux_side;
    return r;
}

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
    TRACE("%p\n", _this);
    return cppISteamInput_SteamInput001_GetGlyphForActionOrigin(_this->linux_side, eOrigin);
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
    winISteamInput_SteamInput001 *r = alloc_mem_for_iface(sizeof(winISteamInput_SteamInput001), "SteamInput001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamInput_SteamInput001_vtable, 35, "SteamInput001");
    r->linux_side = linux_side;
    return r;
}

