struct cppISteamInput_SteamInput006_Init_params
{
    void *linux_side;
    bool _ret;
    bool bExplicitlyCallRunFrame;
};
extern void cppISteamInput_SteamInput006_Init( struct cppISteamInput_SteamInput006_Init_params *params );

struct cppISteamInput_SteamInput006_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput006_Shutdown( struct cppISteamInput_SteamInput006_Shutdown_params *params );

struct cppISteamInput_SteamInput006_SetInputActionManifestFilePath_params
{
    void *linux_side;
    bool _ret;
    const char *pchInputActionManifestAbsolutePath;
};
extern void cppISteamInput_SteamInput006_SetInputActionManifestFilePath( struct cppISteamInput_SteamInput006_SetInputActionManifestFilePath_params *params );

struct cppISteamInput_SteamInput006_RunFrame_params
{
    void *linux_side;
    bool bReservedValue;
};
extern void cppISteamInput_SteamInput006_RunFrame( struct cppISteamInput_SteamInput006_RunFrame_params *params );

struct cppISteamInput_SteamInput006_BWaitForData_params
{
    void *linux_side;
    bool _ret;
    bool bWaitForever;
    uint32 unTimeout;
};
extern void cppISteamInput_SteamInput006_BWaitForData( struct cppISteamInput_SteamInput006_BWaitForData_params *params );

struct cppISteamInput_SteamInput006_BNewDataAvailable_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamInput_SteamInput006_BNewDataAvailable( struct cppISteamInput_SteamInput006_BNewDataAvailable_params *params );

struct cppISteamInput_SteamInput006_GetConnectedControllers_params
{
    void *linux_side;
    int _ret;
    InputHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput006_GetConnectedControllers( struct cppISteamInput_SteamInput006_GetConnectedControllers_params *params );

struct cppISteamInput_SteamInput006_EnableDeviceCallbacks_params
{
    void *linux_side;
};
extern void cppISteamInput_SteamInput006_EnableDeviceCallbacks( struct cppISteamInput_SteamInput006_EnableDeviceCallbacks_params *params );

struct cppISteamInput_SteamInput006_EnableActionEventCallbacks_params
{
    void *linux_side;
    SteamInputActionEventCallbackPointer pCallback;
};
extern void cppISteamInput_SteamInput006_EnableActionEventCallbacks( struct cppISteamInput_SteamInput006_EnableActionEventCallbacks_params *params );

struct cppISteamInput_SteamInput006_GetActionSetHandle_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamInput_SteamInput006_GetActionSetHandle( struct cppISteamInput_SteamInput006_GetActionSetHandle_params *params );

struct cppISteamInput_SteamInput006_ActivateActionSet_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
};
extern void cppISteamInput_SteamInput006_ActivateActionSet( struct cppISteamInput_SteamInput006_ActivateActionSet_params *params );

struct cppISteamInput_SteamInput006_GetCurrentActionSet_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_GetCurrentActionSet( struct cppISteamInput_SteamInput006_GetCurrentActionSet_params *params );

struct cppISteamInput_SteamInput006_ActivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput006_ActivateActionSetLayer( struct cppISteamInput_SteamInput006_ActivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput006_DeactivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput006_DeactivateActionSetLayer( struct cppISteamInput_SteamInput006_DeactivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput006_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput006_DeactivateAllActionSetLayers_params *params );

struct cppISteamInput_SteamInput006_GetActiveActionSetLayers_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput006_GetActiveActionSetLayers( struct cppISteamInput_SteamInput006_GetActiveActionSetLayers_params *params );

struct cppISteamInput_SteamInput006_GetDigitalActionHandle_params
{
    void *linux_side;
    InputDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput006_GetDigitalActionHandle( struct cppISteamInput_SteamInput006_GetDigitalActionHandle_params *params );

struct cppISteamInput_SteamInput006_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    InputHandle_t inputHandle;
    InputDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamInput_SteamInput006_GetDigitalActionData( struct cppISteamInput_SteamInput006_GetDigitalActionData_params *params );

struct cppISteamInput_SteamInput006_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputDigitalActionHandle_t digitalActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput006_GetDigitalActionOrigins( struct cppISteamInput_SteamInput006_GetDigitalActionOrigins_params *params );

struct cppISteamInput_SteamInput006_GetStringForDigitalActionName_params
{
    void *linux_side;
    const char *_ret;
    InputDigitalActionHandle_t eActionHandle;
};
extern void cppISteamInput_SteamInput006_GetStringForDigitalActionName( struct cppISteamInput_SteamInput006_GetStringForDigitalActionName_params *params );

struct cppISteamInput_SteamInput006_GetAnalogActionHandle_params
{
    void *linux_side;
    InputAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput006_GetAnalogActionHandle( struct cppISteamInput_SteamInput006_GetAnalogActionHandle_params *params );

struct cppISteamInput_SteamInput006_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamInput_SteamInput006_GetAnalogActionData( struct cppISteamInput_SteamInput006_GetAnalogActionData_params *params );

struct cppISteamInput_SteamInput006_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputAnalogActionHandle_t analogActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput006_GetAnalogActionOrigins( struct cppISteamInput_SteamInput006_GetAnalogActionOrigins_params *params );

struct cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
    ESteamInputGlyphSize eSize;
    uint32 unFlags;
};
extern void cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin_params *params );

struct cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
    uint32 unFlags;
};
extern void cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin_params *params );

struct cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy_params *params );

struct cppISteamInput_SteamInput006_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput006_GetStringForActionOrigin( struct cppISteamInput_SteamInput006_GetStringForActionOrigin_params *params );

struct cppISteamInput_SteamInput006_GetStringForAnalogActionName_params
{
    void *linux_side;
    const char *_ret;
    InputAnalogActionHandle_t eActionHandle;
};
extern void cppISteamInput_SteamInput006_GetStringForAnalogActionName( struct cppISteamInput_SteamInput006_GetStringForAnalogActionName_params *params );

struct cppISteamInput_SteamInput006_StopAnalogActionMomentum_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t eAction;
};
extern void cppISteamInput_SteamInput006_StopAnalogActionMomentum( struct cppISteamInput_SteamInput006_StopAnalogActionMomentum_params *params );

struct cppISteamInput_SteamInput006_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_GetMotionData( struct cppISteamInput_SteamInput006_GetMotionData_params *params );

struct cppISteamInput_SteamInput006_TriggerVibration_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
};
extern void cppISteamInput_SteamInput006_TriggerVibration( struct cppISteamInput_SteamInput006_TriggerVibration_params *params );

struct cppISteamInput_SteamInput006_TriggerVibrationExtended_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
    unsigned short usLeftTriggerSpeed;
    unsigned short usRightTriggerSpeed;
};
extern void cppISteamInput_SteamInput006_TriggerVibrationExtended( struct cppISteamInput_SteamInput006_TriggerVibrationExtended_params *params );

struct cppISteamInput_SteamInput006_TriggerSimpleHapticEvent_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    EControllerHapticLocation eHapticLocation;
    uint8 nIntensity;
    char nGainDB;
    uint8 nOtherIntensity;
    char nOtherGainDB;
};
extern void cppISteamInput_SteamInput006_TriggerSimpleHapticEvent( struct cppISteamInput_SteamInput006_TriggerSimpleHapticEvent_params *params );

struct cppISteamInput_SteamInput006_SetLEDColor_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint8 nColorR;
    uint8 nColorG;
    uint8 nColorB;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput006_SetLEDColor( struct cppISteamInput_SteamInput006_SetLEDColor_params *params );

struct cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse( struct cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse_params *params );

struct cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse_params *params );

struct cppISteamInput_SteamInput006_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_ShowBindingPanel( struct cppISteamInput_SteamInput006_ShowBindingPanel_params *params );

struct cppISteamInput_SteamInput006_GetInputTypeForHandle_params
{
    void *linux_side;
    ESteamInputType _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_GetInputTypeForHandle( struct cppISteamInput_SteamInput006_GetInputTypeForHandle_params *params );

struct cppISteamInput_SteamInput006_GetControllerForGamepadIndex_params
{
    void *linux_side;
    InputHandle_t _ret;
    int nIndex;
};
extern void cppISteamInput_SteamInput006_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput006_GetControllerForGamepadIndex_params *params );

struct cppISteamInput_SteamInput006_GetGamepadIndexForController_params
{
    void *linux_side;
    int _ret;
    InputHandle_t ulinputHandle;
};
extern void cppISteamInput_SteamInput006_GetGamepadIndexForController( struct cppISteamInput_SteamInput006_GetGamepadIndexForController_params *params );

struct cppISteamInput_SteamInput006_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput006_GetStringForXboxOrigin( struct cppISteamInput_SteamInput006_GetStringForXboxOrigin_params *params );

struct cppISteamInput_SteamInput006_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput006_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput006_GetGlyphForXboxOrigin_params *params );

struct cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    InputHandle_t inputHandle;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamInput_SteamInput006_TranslateActionOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    ESteamInputType eDestinationInputType;
    EInputActionOrigin eSourceOrigin;
};
extern void cppISteamInput_SteamInput006_TranslateActionOrigin( struct cppISteamInput_SteamInput006_TranslateActionOrigin_params *params );

struct cppISteamInput_SteamInput006_GetDeviceBindingRevision_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
    int *pMajor;
    int *pMinor;
};
extern void cppISteamInput_SteamInput006_GetDeviceBindingRevision( struct cppISteamInput_SteamInput006_GetDeviceBindingRevision_params *params );

struct cppISteamInput_SteamInput006_GetRemotePlaySessionID_params
{
    void *linux_side;
    uint32 _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput006_GetRemotePlaySessionID( struct cppISteamInput_SteamInput006_GetRemotePlaySessionID_params *params );

struct cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings_params
{
    void *linux_side;
    uint16 _ret;
};
extern void cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings( struct cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings_params *params );

struct cppISteamInput_SteamInput006_SetDualSenseTriggerEffect_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    const ScePadTriggerEffectParam *pParam;
};
extern void cppISteamInput_SteamInput006_SetDualSenseTriggerEffect( struct cppISteamInput_SteamInput006_SetDualSenseTriggerEffect_params *params );

