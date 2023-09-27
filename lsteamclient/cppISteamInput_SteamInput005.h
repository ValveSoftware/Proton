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
    uint32 unTimeout;
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
    int _ret;
    InputHandle_t *handlesOut;
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
    SteamInputActionEventCallbackPointer pCallback;
};
extern void cppISteamInput_SteamInput005_EnableActionEventCallbacks( struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params *params );

struct cppISteamInput_SteamInput005_GetActionSetHandle_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamInput_SteamInput005_GetActionSetHandle( struct cppISteamInput_SteamInput005_GetActionSetHandle_params *params );

struct cppISteamInput_SteamInput005_ActivateActionSet_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
};
extern void cppISteamInput_SteamInput005_ActivateActionSet( struct cppISteamInput_SteamInput005_ActivateActionSet_params *params );

struct cppISteamInput_SteamInput005_GetCurrentActionSet_params
{
    void *linux_side;
    InputActionSetHandle_t _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetCurrentActionSet( struct cppISteamInput_SteamInput005_GetCurrentActionSet_params *params );

struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput005_ActivateActionSetLayer( struct cppISteamInput_SteamInput005_ActivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetLayerHandle;
};
extern void cppISteamInput_SteamInput005_DeactivateActionSetLayer( struct cppISteamInput_SteamInput005_DeactivateActionSetLayer_params *params );

struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params
{
    void *linux_side;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_DeactivateAllActionSetLayers( struct cppISteamInput_SteamInput005_DeactivateAllActionSetLayers_params *params );

struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t *handlesOut;
};
extern void cppISteamInput_SteamInput005_GetActiveActionSetLayers( struct cppISteamInput_SteamInput005_GetActiveActionSetLayers_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params
{
    void *linux_side;
    InputDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionHandle( struct cppISteamInput_SteamInput005_GetDigitalActionHandle_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionData_params
{
    void *linux_side;
    InputDigitalActionData_t *_ret;
    InputHandle_t inputHandle;
    InputDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionData( struct cppISteamInput_SteamInput005_GetDigitalActionData_params *params );

struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputDigitalActionHandle_t digitalActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput005_GetDigitalActionOrigins( struct cppISteamInput_SteamInput005_GetDigitalActionOrigins_params *params );

struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params
{
    void *linux_side;
    const char *_ret;
    InputDigitalActionHandle_t eActionHandle;
};
extern void cppISteamInput_SteamInput005_GetStringForDigitalActionName( struct cppISteamInput_SteamInput005_GetStringForDigitalActionName_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params
{
    void *linux_side;
    InputAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionHandle( struct cppISteamInput_SteamInput005_GetAnalogActionHandle_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionData_params
{
    void *linux_side;
    InputAnalogActionData_t *_ret;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionData( struct cppISteamInput_SteamInput005_GetAnalogActionData_params *params );

struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    InputHandle_t inputHandle;
    InputActionSetHandle_t actionSetHandle;
    InputAnalogActionHandle_t analogActionHandle;
    EInputActionOrigin *originsOut;
};
extern void cppISteamInput_SteamInput005_GetAnalogActionOrigins( struct cppISteamInput_SteamInput005_GetAnalogActionOrigins_params *params );

struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
    ESteamInputGlyphSize eSize;
    uint32 unFlags;
};
extern void cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
    uint32 unFlags;
};
extern void cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params *params );

struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params
{
    void *linux_side;
    const char *_ret;
    EInputActionOrigin eOrigin;
};
extern void cppISteamInput_SteamInput005_GetStringForActionOrigin( struct cppISteamInput_SteamInput005_GetStringForActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params
{
    void *linux_side;
    const char *_ret;
    InputAnalogActionHandle_t eActionHandle;
};
extern void cppISteamInput_SteamInput005_GetStringForAnalogActionName( struct cppISteamInput_SteamInput005_GetStringForAnalogActionName_params *params );

struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    InputAnalogActionHandle_t eAction;
};
extern void cppISteamInput_SteamInput005_StopAnalogActionMomentum( struct cppISteamInput_SteamInput005_StopAnalogActionMomentum_params *params );

struct cppISteamInput_SteamInput005_GetMotionData_params
{
    void *linux_side;
    InputMotionData_t *_ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetMotionData( struct cppISteamInput_SteamInput005_GetMotionData_params *params );

struct cppISteamInput_SteamInput005_TriggerVibration_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
};
extern void cppISteamInput_SteamInput005_TriggerVibration( struct cppISteamInput_SteamInput005_TriggerVibration_params *params );

struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    unsigned short usLeftSpeed;
    unsigned short usRightSpeed;
    unsigned short usLeftTriggerSpeed;
    unsigned short usRightTriggerSpeed;
};
extern void cppISteamInput_SteamInput005_TriggerVibrationExtended( struct cppISteamInput_SteamInput005_TriggerVibrationExtended_params *params );

struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    EControllerHapticLocation eHapticLocation;
    uint8 nIntensity;
    char nGainDB;
    uint8 nOtherIntensity;
    char nOtherGainDB;
};
extern void cppISteamInput_SteamInput005_TriggerSimpleHapticEvent( struct cppISteamInput_SteamInput005_TriggerSimpleHapticEvent_params *params );

struct cppISteamInput_SteamInput005_SetLEDColor_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    uint8 nColorR;
    uint8 nColorG;
    uint8 nColorB;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput005_SetLEDColor( struct cppISteamInput_SteamInput005_SetLEDColor_params *params );

struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse_params *params );

struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    InputHandle_t inputHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse( struct cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse_params *params );

struct cppISteamInput_SteamInput005_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_ShowBindingPanel( struct cppISteamInput_SteamInput005_ShowBindingPanel_params *params );

struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params
{
    void *linux_side;
    ESteamInputType _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetInputTypeForHandle( struct cppISteamInput_SteamInput005_GetInputTypeForHandle_params *params );

struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params
{
    void *linux_side;
    InputHandle_t _ret;
    int nIndex;
};
extern void cppISteamInput_SteamInput005_GetControllerForGamepadIndex( struct cppISteamInput_SteamInput005_GetControllerForGamepadIndex_params *params );

struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params
{
    void *linux_side;
    int _ret;
    InputHandle_t ulinputHandle;
};
extern void cppISteamInput_SteamInput005_GetGamepadIndexForController( struct cppISteamInput_SteamInput005_GetGamepadIndexForController_params *params );

struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput005_GetStringForXboxOrigin( struct cppISteamInput_SteamInput005_GetStringForXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params
{
    void *linux_side;
    const char *_ret;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    InputHandle_t inputHandle;
    EXboxOrigin eOrigin;
};
extern void cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin( struct cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin_params *params );

struct cppISteamInput_SteamInput005_TranslateActionOrigin_params
{
    void *linux_side;
    EInputActionOrigin _ret;
    ESteamInputType eDestinationInputType;
    EInputActionOrigin eSourceOrigin;
};
extern void cppISteamInput_SteamInput005_TranslateActionOrigin( struct cppISteamInput_SteamInput005_TranslateActionOrigin_params *params );

struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params
{
    void *linux_side;
    bool _ret;
    InputHandle_t inputHandle;
    int *pMajor;
    int *pMinor;
};
extern void cppISteamInput_SteamInput005_GetDeviceBindingRevision( struct cppISteamInput_SteamInput005_GetDeviceBindingRevision_params *params );

struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params
{
    void *linux_side;
    uint32 _ret;
    InputHandle_t inputHandle;
};
extern void cppISteamInput_SteamInput005_GetRemotePlaySessionID( struct cppISteamInput_SteamInput005_GetRemotePlaySessionID_params *params );

struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params
{
    void *linux_side;
    uint16 _ret;
};
extern void cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings( struct cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings_params *params );

