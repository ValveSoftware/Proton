struct cppISteamController_SteamController008_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController008_Init( struct cppISteamController_SteamController008_Init_params *params );

struct cppISteamController_SteamController008_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController008_Shutdown( struct cppISteamController_SteamController008_Shutdown_params *params );

struct cppISteamController_SteamController008_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController008_RunFrame( struct cppISteamController_SteamController008_RunFrame_params *params );

struct cppISteamController_SteamController008_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    ControllerHandle_t *handlesOut;
};
extern void cppISteamController_SteamController008_GetConnectedControllers( struct cppISteamController_SteamController008_GetConnectedControllers_params *params );

struct cppISteamController_SteamController008_GetActionSetHandle_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController008_GetActionSetHandle( struct cppISteamController_SteamController008_GetActionSetHandle_params *params );

struct cppISteamController_SteamController008_ActivateActionSet_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
};
extern void cppISteamController_SteamController008_ActivateActionSet( struct cppISteamController_SteamController008_ActivateActionSet_params *params );

struct cppISteamController_SteamController008_GetCurrentActionSet_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController008_GetCurrentActionSet( struct cppISteamController_SteamController008_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController008_ActivateActionSetLayer_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController008_ActivateActionSetLayer( struct cppISteamController_SteamController008_ActivateActionSetLayer_params *params );

struct cppISteamController_SteamController008_DeactivateActionSetLayer_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamController_SteamController008_DeactivateActionSetLayer( struct cppISteamController_SteamController008_DeactivateActionSetLayer_params *params );

struct cppISteamController_SteamController008_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController008_DeactivateAllActionSetLayers( struct cppISteamController_SteamController008_DeactivateAllActionSetLayers_params *params );

struct cppISteamController_SteamController008_GetActiveActionSetLayers_params
{
    void *linux_side;
    int32_t _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t *handlesOut;
};
extern void cppISteamController_SteamController008_GetActiveActionSetLayers( struct cppISteamController_SteamController008_GetActiveActionSetLayers_params *params );

struct cppISteamController_SteamController008_GetDigitalActionHandle_params
{
    void *linux_side;
    ControllerDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController008_GetDigitalActionHandle( struct cppISteamController_SteamController008_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController008_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamController_SteamController008_GetDigitalActionData( struct cppISteamController_SteamController008_GetDigitalActionData_params *params );

struct cppISteamController_SteamController008_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController008_GetDigitalActionOrigins( struct cppISteamController_SteamController008_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController008_GetAnalogActionHandle_params
{
    void *linux_side;
    ControllerAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController008_GetAnalogActionHandle( struct cppISteamController_SteamController008_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController008_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamController_SteamController008_GetAnalogActionData( struct cppISteamController_SteamController008_GetAnalogActionData_params *params );

struct cppISteamController_SteamController008_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController008_GetAnalogActionOrigins( struct cppISteamController_SteamController008_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController008_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController008_GetGlyphForActionOrigin( struct cppISteamController_SteamController008_GetGlyphForActionOrigin_params *params );

struct cppISteamController_SteamController008_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController008_GetStringForActionOrigin( struct cppISteamController_SteamController008_GetStringForActionOrigin_params *params );

struct cppISteamController_SteamController008_StopAnalogActionMomentum_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t eAction;
};
extern void cppISteamController_SteamController008_StopAnalogActionMomentum( struct cppISteamController_SteamController008_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController008_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController008_GetMotionData( struct cppISteamController_SteamController008_GetMotionData_params *params );

struct cppISteamController_SteamController008_TriggerHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamController_SteamController008_TriggerHapticPulse( struct cppISteamController_SteamController008_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController008_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController008_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController008_TriggerRepeatedHapticPulse_params *params );

struct cppISteamController_SteamController008_TriggerVibration_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
};
extern void cppISteamController_SteamController008_TriggerVibration( struct cppISteamController_SteamController008_TriggerVibration_params *params );

struct cppISteamController_SteamController008_SetLEDColor_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    uint8_t nColorR;
    uint8_t nColorG;
    uint8_t nColorB;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController008_SetLEDColor( struct cppISteamController_SteamController008_SetLEDColor_params *params );

struct cppISteamController_SteamController008_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController008_ShowBindingPanel( struct cppISteamController_SteamController008_ShowBindingPanel_params *params );

struct cppISteamController_SteamController008_GetInputTypeForHandle_params
{
    void *linux_side;
    uint32_t _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController008_GetInputTypeForHandle( struct cppISteamController_SteamController008_GetInputTypeForHandle_params *params );

struct cppISteamController_SteamController008_GetControllerForGamepadIndex_params
{
    void *linux_side;
    ControllerHandle_t _ret;
    int32_t nIndex;
};
extern void cppISteamController_SteamController008_GetControllerForGamepadIndex( struct cppISteamController_SteamController008_GetControllerForGamepadIndex_params *params );

struct cppISteamController_SteamController008_GetGamepadIndexForController_params
{
    void *linux_side;
    int32_t _ret;
    ControllerHandle_t ulControllerHandle;
};
extern void cppISteamController_SteamController008_GetGamepadIndexForController( struct cppISteamController_SteamController008_GetGamepadIndexForController_params *params );

struct cppISteamController_SteamController008_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController008_GetStringForXboxOrigin( struct cppISteamController_SteamController008_GetStringForXboxOrigin_params *params );

struct cppISteamController_SteamController008_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController008_GetGlyphForXboxOrigin( struct cppISteamController_SteamController008_GetGlyphForXboxOrigin_params *params );

struct cppISteamController_SteamController008_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    ControllerHandle_t controllerHandle;
    uint32_t eOrigin;
};
extern void cppISteamController_SteamController008_GetActionOriginFromXboxOrigin( struct cppISteamController_SteamController008_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamController_SteamController008_TranslateActionOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDestinationInputType;
    uint32_t eSourceOrigin;
};
extern void cppISteamController_SteamController008_TranslateActionOrigin( struct cppISteamController_SteamController008_TranslateActionOrigin_params *params );

struct cppISteamController_SteamController008_GetControllerBindingRevision_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
    int32_t *pMajor;
    int32_t *pMinor;
};
extern void cppISteamController_SteamController008_GetControllerBindingRevision( struct cppISteamController_SteamController008_GetControllerBindingRevision_params *params );

