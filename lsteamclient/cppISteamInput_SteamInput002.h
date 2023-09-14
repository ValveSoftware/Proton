struct cppISteamInput_SteamInput002_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput002_Init( struct cppISteamInput_SteamInput002_Init_params *params );

struct cppISteamInput_SteamInput002_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput002_Shutdown( struct cppISteamInput_SteamInput002_Shutdown_params *params );

struct cppISteamInput_SteamInput002_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamInput_SteamInput002_RunFrame( struct cppISteamInput_SteamInput002_RunFrame_params *params );

struct cppISteamInput_SteamInput002_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    InputHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput002_GetConnectedControllers( struct cppISteamInput_SteamInput002_GetConnectedControllers_params *params );

struct cppISteamInput_SteamInput002_GetActionSetHandle_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamInput_SteamInput002_GetActionSetHandle( struct cppISteamInput_SteamInput002_GetActionSetHandle_params *params );

struct cppISteamInput_SteamInput002_ActivateActionSet_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
};
extern void cppISteamInput_SteamInput002_ActivateActionSet( struct cppISteamInput_SteamInput002_ActivateActionSet_params *params );

struct cppISteamInput_SteamInput002_GetCurrentActionSet_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_GetCurrentActionSet( struct cppISteamInput_SteamInput002_GetCurrentActionSet_params *params );

struct cppISteamInput_SteamInput002_ActivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput002_ActivateActionSetLayer( struct cppISteamInput_SteamInput002_ActivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput002_DeactivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput002_DeactivateActionSetLayer( struct cppISteamInput_SteamInput002_DeactivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput002_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput002_DeactivateAllActionSetLayers_params *params );

struct cppISteamInput_SteamInput002_GetActiveActionSetLayers_params
{
    void *linux_side;
    int32_t _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput002_GetActiveActionSetLayers( struct cppISteamInput_SteamInput002_GetActiveActionSetLayers_params *params );

struct cppISteamInput_SteamInput002_GetDigitalActionHandle_params
{
    void *linux_side;
    InputDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput002_GetDigitalActionHandle( struct cppISteamInput_SteamInput002_GetDigitalActionHandle_params *params );

struct cppISteamInput_SteamInput002_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    InputHandle_t inputHandle;
    InputDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamInput_SteamInput002_GetDigitalActionData( struct cppISteamInput_SteamInput002_GetDigitalActionData_params *params );

struct cppISteamInput_SteamInput002_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputDigitalActionHandle_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamInput_SteamInput002_GetDigitalActionOrigins( struct cppISteamInput_SteamInput002_GetDigitalActionOrigins_params *params );

struct cppISteamInput_SteamInput002_GetAnalogActionHandle_params
{
    void *linux_side;
    InputAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput002_GetAnalogActionHandle( struct cppISteamInput_SteamInput002_GetAnalogActionHandle_params *params );

struct cppISteamInput_SteamInput002_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamInput_SteamInput002_GetAnalogActionData( struct cppISteamInput_SteamInput002_GetAnalogActionData_params *params );

struct cppISteamInput_SteamInput002_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputAnalogActionHandle_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamInput_SteamInput002_GetAnalogActionOrigins( struct cppISteamInput_SteamInput002_GetAnalogActionOrigins_params *params );

struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput002_GetGlyphForActionOrigin( struct cppISteamInput_SteamInput002_GetGlyphForActionOrigin_params *params );

struct cppISteamInput_SteamInput002_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput002_GetStringForActionOrigin( struct cppISteamInput_SteamInput002_GetStringForActionOrigin_params *params );

struct cppISteamInput_SteamInput002_StopAnalogActionMomentum_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t eAction;
};
extern void cppISteamInput_SteamInput002_StopAnalogActionMomentum( struct cppISteamInput_SteamInput002_StopAnalogActionMomentum_params *params );

struct cppISteamInput_SteamInput002_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_GetMotionData( struct cppISteamInput_SteamInput002_GetMotionData_params *params );

struct cppISteamInput_SteamInput002_TriggerVibration_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint16_t usLeftSpeed;
    uint16_t usRightSpeed;
};
extern void cppISteamInput_SteamInput002_TriggerVibration( struct cppISteamInput_SteamInput002_TriggerVibration_params *params );

struct cppISteamInput_SteamInput002_SetLEDColor_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint8_t nColorR;
    uint8_t nColorG;
    uint8_t nColorB;
    uint32_t nFlags;
};
extern void cppISteamInput_SteamInput002_SetLEDColor( struct cppISteamInput_SteamInput002_SetLEDColor_params *params );

struct cppISteamInput_SteamInput002_TriggerHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamInput_SteamInput002_TriggerHapticPulse( struct cppISteamInput_SteamInput002_TriggerHapticPulse_params *params );

struct cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput002_TriggerRepeatedHapticPulse_params *params );

struct cppISteamInput_SteamInput002_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_ShowBindingPanel( struct cppISteamInput_SteamInput002_ShowBindingPanel_params *params );

struct cppISteamInput_SteamInput002_GetInputTypeForHandle_params
{
    void *linux_side;
    uint32_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_GetInputTypeForHandle( struct cppISteamInput_SteamInput002_GetInputTypeForHandle_params *params );

struct cppISteamInput_SteamInput002_GetControllerForGamepadIndex_params
{
    void *linux_side;
    InputHandle_t _ret;
    int32_t nIndex;
};
extern void cppISteamInput_SteamInput002_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput002_GetControllerForGamepadIndex_params *params );

struct cppISteamInput_SteamInput002_GetGamepadIndexForController_params
{
    void *linux_side;
    int32_t _ret;
    InputHandle_t ulinputHandle;
};
extern void cppISteamInput_SteamInput002_GetGamepadIndexForController( struct cppISteamInput_SteamInput002_GetGamepadIndexForController_params *params );

struct cppISteamInput_SteamInput002_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput002_GetStringForXboxOrigin( struct cppISteamInput_SteamInput002_GetStringForXboxOrigin_params *params );

struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput002_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput002_GetGlyphForXboxOrigin_params *params );

struct cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    InputHandle_t inputHandle;
    uint32_t eOrigin;
};
extern void cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput002_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamInput_SteamInput002_TranslateActionOrigin_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eDestinationInputType;
    uint32_t eSourceOrigin;
};
extern void cppISteamInput_SteamInput002_TranslateActionOrigin( struct cppISteamInput_SteamInput002_TranslateActionOrigin_params *params );

struct cppISteamInput_SteamInput002_GetDeviceBindingRevision_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
    int32_t *pMajor;
    int32_t *pMinor;
};
extern void cppISteamInput_SteamInput002_GetDeviceBindingRevision( struct cppISteamInput_SteamInput002_GetDeviceBindingRevision_params *params );

struct cppISteamInput_SteamInput002_GetRemotePlaySessionID_params
{
    void *linux_side;
    uint32_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput002_GetRemotePlaySessionID( struct cppISteamInput_SteamInput002_GetRemotePlaySessionID_params *params );

