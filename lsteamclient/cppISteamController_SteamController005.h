/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamController_SteamController005_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController005_Init( struct cppISteamController_SteamController005_Init_params *params );

struct cppISteamController_SteamController005_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController005_Shutdown( struct cppISteamController_SteamController005_Shutdown_params *params );

struct cppISteamController_SteamController005_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController005_RunFrame( struct cppISteamController_SteamController005_RunFrame_params *params );

struct cppISteamController_SteamController005_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t *handlesOut;
};
extern void cppISteamController_SteamController005_GetConnectedControllers( struct cppISteamController_SteamController005_GetConnectedControllers_params *params );

struct cppISteamController_SteamController005_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController005_ShowBindingPanel( struct cppISteamController_SteamController005_ShowBindingPanel_params *params );

struct cppISteamController_SteamController005_GetActionSetHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController005_GetActionSetHandle( struct cppISteamController_SteamController005_GetActionSetHandle_params *params );

struct cppISteamController_SteamController005_ActivateActionSet_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
};
extern void cppISteamController_SteamController005_ActivateActionSet( struct cppISteamController_SteamController005_ActivateActionSet_params *params );

struct cppISteamController_SteamController005_GetCurrentActionSet_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController005_GetCurrentActionSet( struct cppISteamController_SteamController005_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController005_GetDigitalActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController005_GetDigitalActionHandle( struct cppISteamController_SteamController005_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController005_GetDigitalActionData_params
{
    void *linux_side;
    ControllerDigitalActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t digitalActionHandle;
};
extern void cppISteamController_SteamController005_GetDigitalActionData( struct cppISteamController_SteamController005_GetDigitalActionData_params *params );

struct cppISteamController_SteamController005_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController005_GetDigitalActionOrigins( struct cppISteamController_SteamController005_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController005_GetAnalogActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController005_GetAnalogActionHandle( struct cppISteamController_SteamController005_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController005_GetAnalogActionData_params
{
    void *linux_side;
    ControllerAnalogActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t analogActionHandle;
};
extern void cppISteamController_SteamController005_GetAnalogActionData( struct cppISteamController_SteamController005_GetAnalogActionData_params *params );

struct cppISteamController_SteamController005_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController005_GetAnalogActionOrigins( struct cppISteamController_SteamController005_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController005_StopAnalogActionMomentum_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t eAction;
};
extern void cppISteamController_SteamController005_StopAnalogActionMomentum( struct cppISteamController_SteamController005_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController005_TriggerHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamController_SteamController005_TriggerHapticPulse( struct cppISteamController_SteamController005_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController005_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController005_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController005_TriggerRepeatedHapticPulse_params *params );

struct cppISteamController_SteamController005_TriggerVibration_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
};
extern void cppISteamController_SteamController005_TriggerVibration( struct cppISteamController_SteamController005_TriggerVibration_params *params );

struct cppISteamController_SteamController005_SetLEDColor_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint8_t nColorR;
    uint8_t nColorG;
    uint8_t nColorB;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController005_SetLEDColor( struct cppISteamController_SteamController005_SetLEDColor_params *params );

struct cppISteamController_SteamController005_GetGamepadIndexForController_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t ulControllerHandle;
};
extern void cppISteamController_SteamController005_GetGamepadIndexForController( struct cppISteamController_SteamController005_GetGamepadIndexForController_params *params );

struct cppISteamController_SteamController005_GetControllerForGamepadIndex_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t nIndex;
};
extern void cppISteamController_SteamController005_GetControllerForGamepadIndex( struct cppISteamController_SteamController005_GetControllerForGamepadIndex_params *params );

struct cppISteamController_SteamController005_GetMotionData_params
{
    void *linux_side;
    ControllerMotionData_t *_ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController005_GetMotionData( struct cppISteamController_SteamController005_GetMotionData_params *params );

struct cppISteamController_SteamController005_ShowDigitalActionOrigins_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
    uint64_t digitalActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController005_ShowDigitalActionOrigins( struct cppISteamController_SteamController005_ShowDigitalActionOrigins_params *params );

struct cppISteamController_SteamController005_ShowAnalogActionOrigins_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
    uint64_t analogActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController005_ShowAnalogActionOrigins( struct cppISteamController_SteamController005_ShowAnalogActionOrigins_params *params );

struct cppISteamController_SteamController005_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController005_GetStringForActionOrigin( struct cppISteamController_SteamController005_GetStringForActionOrigin_params *params );

struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController005_GetGlyphForActionOrigin( struct cppISteamController_SteamController005_GetGlyphForActionOrigin_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
