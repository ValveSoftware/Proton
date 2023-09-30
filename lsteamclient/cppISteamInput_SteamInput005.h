/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamInput_SteamInput005_Init_params
{
    void *linux_side;
    bool _ret;
    bool bExplicitlyCallRunFrame;
};
extern void cppISteamInput_SteamInput005_Init( struct cppISteamInput_SteamInput005_Init_params *params );

struct cppISteamInput_SteamInput005_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput005_Shutdown( struct cppISteamInput_SteamInput005_Shutdown_params *params );

struct cppISteamInput_SteamInput005_SetInputActionManifestFilePath_params
{
    void *linux_side;
    bool _ret;
    const char *pchInputActionManifestAbsolutePath;
};
extern void cppISteamInput_SteamInput005_SetInputActionManifestFilePath( struct cppISteamInput_SteamInput005_SetInputActionManifestFilePath_params *params );

struct cppISteamInput_SteamInput005_RunFrame_params
{
    void *linux_side;
    bool bReservedValue;
};
extern void cppISteamInput_SteamInput005_RunFrame( struct cppISteamInput_SteamInput005_RunFrame_params *params );

struct cppISteamInput_SteamInput005_BWaitForData_params
{
    void *linux_side;
    bool _ret;
    bool bWaitForever;
    uint32_t unTimeout;
};
extern void cppISteamInput_SteamInput005_BWaitForData( struct cppISteamInput_SteamInput005_BWaitForData_params *params );

struct cppISteamInput_SteamInput005_BNewDataAvailable_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput005_BNewDataAvailable( struct cppISteamInput_SteamInput005_BNewDataAvailable_params *params );

struct cppISteamInput_SteamInput005_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t *handlesOut;
};
extern void cppISteamInput_SteamInput005_GetConnectedControllers( struct cppISteamInput_SteamInput005_GetConnectedControllers_params *params );

struct cppISteamInput_SteamInput005_EnableDeviceCallbacks_params
{
    void *linux_side;
};
extern void cppISteamInput_SteamInput005_EnableDeviceCallbacks( struct cppISteamInput_SteamInput005_EnableDeviceCallbacks_params *params );

struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params
{
    void *linux_side;
    void (*W_STDCALL pCallback)(SteamInputActionEvent_t *);
};
extern void cppISteamInput_SteamInput005_EnableActionEventCallbacks( struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params *params );

struct cppISteamInput_SteamInput005_GetActionSetHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamInput_SteamInput005_GetActionSetHandle( struct cppISteamInput_SteamInput005_GetActionSetHandle_params *params );

struct cppISteamInput_SteamInput005_ActivateActionSet_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint64_t actionSetHandle;
};
extern void cppISteamInput_SteamInput005_ActivateActionSet( struct cppISteamInput_SteamInput005_ActivateActionSet_params *params );

struct cppISteamInput_SteamInput005_GetCurrentActionSet_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetCurrentActionSet( struct cppISteamInput_SteamInput005_GetCurrentActionSet_params *params );

struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint64_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput005_ActivateActionSetLayer( struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint64_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput005_DeactivateActionSetLayer( struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params *params );

struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t inputHandle;
    uint64_t *handlesOut;
};
extern void cppISteamInput_SteamInput005_GetActiveActionSetLayers( struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionHandle( struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    uint64_t inputHandle;
    uint64_t digitalActionHandle;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionData( struct cppISteamInput_SteamInput005_GetDigitalActionData_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t inputHandle;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionOrigins( struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params *params );

struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params
{
    void *linux_side;
    const char *_ret;
    uint64_t eActionHandle;
};
extern void cppISteamInput_SteamInput005_GetStringForDigitalActionName( struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionHandle( struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    uint64_t inputHandle;
    uint64_t analogActionHandle;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionData( struct cppISteamInput_SteamInput005_GetAnalogActionData_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t inputHandle;
    uint64_t actionSetHandle;
    uint64_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionOrigins( struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params *params );

struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
    uint32_t eSize;
    uint32_t unFlags;
};
extern void cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
    uint32_t unFlags;
};
extern void cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params *params );

struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput005_GetStringForActionOrigin( struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params
{
    void *linux_side;
    const char *_ret;
    uint64_t eActionHandle;
};
extern void cppISteamInput_SteamInput005_GetStringForAnalogActionName( struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params *params );

struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint64_t eAction;
};
extern void cppISteamInput_SteamInput005_StopAnalogActionMomentum( struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params *params );

struct cppISteamInput_SteamInput005_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetMotionData( struct cppISteamInput_SteamInput005_GetMotionData_params *params );

struct cppISteamInput_SteamInput005_TriggerVibration_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
};
extern void cppISteamInput_SteamInput005_TriggerVibration( struct cppISteamInput_SteamInput005_TriggerVibration_params *params );

struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
    uint16_t usLeftTriggerSpeed;
    uint16_t usRightTriggerSpeed;
};
extern void cppISteamInput_SteamInput005_TriggerVibrationExtended( struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params *params );

struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint32_t eHapticLocation;
    uint8_t nIntensity;
    char nGainDB;
    uint8_t nOtherIntensity;
    char nOtherGainDB;
};
extern void cppISteamInput_SteamInput005_TriggerSimpleHapticEvent( struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params *params );

struct cppISteamInput_SteamInput005_SetLEDColor_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint8_t nColorR;
    uint8_t nColorG;
    uint8_t nColorB;
    uint32_t nFlags;
};
extern void cppISteamInput_SteamInput005_SetLEDColor( struct cppISteamInput_SteamInput005_SetLEDColor_params *params );

struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params *params );

struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    uint64_t inputHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params *params );

struct cppISteamInput_SteamInput005_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_ShowBindingPanel( struct cppISteamInput_SteamInput005_ShowBindingPanel_params *params );

struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetInputTypeForHandle( struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params *params );

struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t nIndex;
};
extern void cppISteamInput_SteamInput005_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params *params );

struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t ulinputHandle;
};
extern void cppISteamInput_SteamInput005_GetGamepadIndexForController( struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params *params );

struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput005_GetStringForXboxOrigin( struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t inputHandle;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_TranslateActionOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDestinationInputType;
    uint32_t eSourceOrigin;
};
extern void cppISteamInput_SteamInput005_TranslateActionOrigin( struct cppISteamInput_SteamInput005_TranslateActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params
{
    void *linux_side;
    bool _ret;
    uint64_t inputHandle;
    int32_t *pMajor;
    int32_t *pMinor;
};
extern void cppISteamInput_SteamInput005_GetDeviceBindingRevision( struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params *params );

struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetRemotePlaySessionID( struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params *params );

struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params
{
    void *linux_side;
    uint16_t _ret;
};
extern void cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings( struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
