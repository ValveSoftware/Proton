/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamController_SteamController007_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController007_Init( struct cppISteamController_SteamController007_Init_params *params );

struct cppISteamController_SteamController007_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController007_Shutdown( struct cppISteamController_SteamController007_Shutdown_params *params );

struct cppISteamController_SteamController007_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController007_RunFrame( struct cppISteamController_SteamController007_RunFrame_params *params );

struct cppISteamController_SteamController007_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t *handlesOut;
};
extern void cppISteamController_SteamController007_GetConnectedControllers( struct cppISteamController_SteamController007_GetConnectedControllers_params *params );

struct cppISteamController_SteamController007_GetActionSetHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController007_GetActionSetHandle( struct cppISteamController_SteamController007_GetActionSetHandle_params *params );

struct cppISteamController_SteamController007_ActivateActionSet_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
};
extern void cppISteamController_SteamController007_ActivateActionSet( struct cppISteamController_SteamController007_ActivateActionSet_params *params );

struct cppISteamController_SteamController007_GetCurrentActionSet_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController007_GetCurrentActionSet( struct cppISteamController_SteamController007_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController007_ActivateActionSetLayer_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController007_ActivateActionSetLayer( struct cppISteamController_SteamController007_ActivateActionSetLayer_params *params );

struct cppISteamController_SteamController007_DeactivateActionSetLayer_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController007_DeactivateActionSetLayer( struct cppISteamController_SteamController007_DeactivateActionSetLayer_params *params );

struct cppISteamController_SteamController007_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController007_DeactivateAllActionSetLayers( struct cppISteamController_SteamController007_DeactivateAllActionSetLayers_params *params );

struct cppISteamController_SteamController007_GetActiveActionSetLayers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t *handlesOut;
};
extern void cppISteamController_SteamController007_GetActiveActionSetLayers( struct cppISteamController_SteamController007_GetActiveActionSetLayers_params *params );

struct cppISteamController_SteamController007_GetDigitalActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController007_GetDigitalActionHandle( struct cppISteamController_SteamController007_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController007_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t digitalActionHandle;
};
extern void cppISteamController_SteamController007_GetDigitalActionData( struct cppISteamController_SteamController007_GetDigitalActionData_params *params );

struct cppISteamController_SteamController007_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController007_GetDigitalActionOrigins( struct cppISteamController_SteamController007_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController007_GetAnalogActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController007_GetAnalogActionHandle( struct cppISteamController_SteamController007_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController007_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t analogActionHandle;
};
extern void cppISteamController_SteamController007_GetAnalogActionData( struct cppISteamController_SteamController007_GetAnalogActionData_params *params );

struct cppISteamController_SteamController007_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController007_GetAnalogActionOrigins( struct cppISteamController_SteamController007_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController007_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController007_GetGlyphForActionOrigin( struct cppISteamController_SteamController007_GetGlyphForActionOrigin_params *params );

struct cppISteamController_SteamController007_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController007_GetStringForActionOrigin( struct cppISteamController_SteamController007_GetStringForActionOrigin_params *params );

struct cppISteamController_SteamController007_StopAnalogActionMomentum_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t eAction;
};
extern void cppISteamController_SteamController007_StopAnalogActionMomentum( struct cppISteamController_SteamController007_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController007_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController007_GetMotionData( struct cppISteamController_SteamController007_GetMotionData_params *params );

struct cppISteamController_SteamController007_TriggerHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamController_SteamController007_TriggerHapticPulse( struct cppISteamController_SteamController007_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController007_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController007_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController007_TriggerRepeatedHapticPulse_params *params );

struct cppISteamController_SteamController007_TriggerVibration_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
};
extern void cppISteamController_SteamController007_TriggerVibration( struct cppISteamController_SteamController007_TriggerVibration_params *params );

struct cppISteamController_SteamController007_SetLEDColor_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint8_t nColorR;
    uint8_t nColorG;
    uint8_t nColorB;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController007_SetLEDColor( struct cppISteamController_SteamController007_SetLEDColor_params *params );

struct cppISteamController_SteamController007_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController007_ShowBindingPanel( struct cppISteamController_SteamController007_ShowBindingPanel_params *params );

struct cppISteamController_SteamController007_GetInputTypeForHandle_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController007_GetInputTypeForHandle( struct cppISteamController_SteamController007_GetInputTypeForHandle_params *params );

struct cppISteamController_SteamController007_GetControllerForGamepadIndex_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t nIndex;
};
extern void cppISteamController_SteamController007_GetControllerForGamepadIndex( struct cppISteamController_SteamController007_GetControllerForGamepadIndex_params *params );

struct cppISteamController_SteamController007_GetGamepadIndexForController_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t ulControllerHandle;
};
extern void cppISteamController_SteamController007_GetGamepadIndexForController( struct cppISteamController_SteamController007_GetGamepadIndexForController_params *params );

struct cppISteamController_SteamController007_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController007_GetStringForXboxOrigin( struct cppISteamController_SteamController007_GetStringForXboxOrigin_params *params );

struct cppISteamController_SteamController007_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController007_GetGlyphForXboxOrigin( struct cppISteamController_SteamController007_GetGlyphForXboxOrigin_params *params );

struct cppISteamController_SteamController007_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t controllerHandle;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController007_GetActionOriginFromXboxOrigin( struct cppISteamController_SteamController007_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamController_SteamController007_TranslateActionOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDestinationInputType;
    uint32_t eSourceOrigin;
};
extern void cppISteamController_SteamController007_TranslateActionOrigin( struct cppISteamController_SteamController007_TranslateActionOrigin_params *params );

struct cppISteamController_SteamController007_GetControllerBindingRevision_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
    int32_t *pMajor;
    int32_t *pMinor;
};
extern void cppISteamController_SteamController007_GetControllerBindingRevision( struct cppISteamController_SteamController007_GetControllerBindingRevision_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
