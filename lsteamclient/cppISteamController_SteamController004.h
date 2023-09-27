struct cppISteamController_SteamController004_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController004_Init( struct cppISteamController_SteamController004_Init_params *params );

struct cppISteamController_SteamController004_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController004_Shutdown( struct cppISteamController_SteamController004_Shutdown_params *params );

struct cppISteamController_SteamController004_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController004_RunFrame( struct cppISteamController_SteamController004_RunFrame_params *params );

struct cppISteamController_SteamController004_GetConnectedControllers_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t *handlesOut;
};
extern void cppISteamController_SteamController004_GetConnectedControllers( struct cppISteamController_SteamController004_GetConnectedControllers_params *params );

struct cppISteamController_SteamController004_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController004_ShowBindingPanel( struct cppISteamController_SteamController004_ShowBindingPanel_params *params );

struct cppISteamController_SteamController004_GetActionSetHandle_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController004_GetActionSetHandle( struct cppISteamController_SteamController004_GetActionSetHandle_params *params );

struct cppISteamController_SteamController004_ActivateActionSet_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
};
extern void cppISteamController_SteamController004_ActivateActionSet( struct cppISteamController_SteamController004_ActivateActionSet_params *params );

struct cppISteamController_SteamController004_GetCurrentActionSet_params
{
    void *linux_side;
    ControllerActionSetHandle_t _ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController004_GetCurrentActionSet( struct cppISteamController_SteamController004_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController004_GetDigitalActionHandle_params
{
    void *linux_side;
    ControllerDigitalActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController004_GetDigitalActionHandle( struct cppISteamController_SteamController004_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController004_GetDigitalActionData_params
{
    void *linux_side;
    ControllerDigitalActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
};
extern void cppISteamController_SteamController004_GetDigitalActionData( struct cppISteamController_SteamController004_GetDigitalActionData_params *params );

struct cppISteamController_SteamController004_GetDigitalActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController004_GetDigitalActionOrigins( struct cppISteamController_SteamController004_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController004_GetAnalogActionHandle_params
{
    void *linux_side;
    ControllerAnalogActionHandle_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController004_GetAnalogActionHandle( struct cppISteamController_SteamController004_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController004_GetAnalogActionData_params
{
    void *linux_side;
    ControllerAnalogActionData_t *_ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
};
extern void cppISteamController_SteamController004_GetAnalogActionData( struct cppISteamController_SteamController004_GetAnalogActionData_params *params );

struct cppISteamController_SteamController004_GetAnalogActionOrigins_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t controllerHandle;
    ControllerActionSetHandle_t actionSetHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    EControllerActionOrigin *originsOut;
};
extern void cppISteamController_SteamController004_GetAnalogActionOrigins( struct cppISteamController_SteamController004_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController004_StopAnalogActionMomentum_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t eAction;
};
extern void cppISteamController_SteamController004_StopAnalogActionMomentum( struct cppISteamController_SteamController004_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController004_TriggerHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
};
extern void cppISteamController_SteamController004_TriggerHapticPulse( struct cppISteamController_SteamController004_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController004_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    ControllerHandle_t controllerHandle;
    ESteamControllerPad eTargetPad;
    unsigned short usDurationMicroSec;
    unsigned short usOffMicroSec;
    unsigned short unRepeat;
    unsigned int nFlags;
};
extern void cppISteamController_SteamController004_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController004_TriggerRepeatedHapticPulse_params *params );

struct cppISteamController_SteamController004_GetGamepadIndexForController_params
{
    void *linux_side;
    int _ret;
    ControllerHandle_t ulControllerHandle;
};
extern void cppISteamController_SteamController004_GetGamepadIndexForController( struct cppISteamController_SteamController004_GetGamepadIndexForController_params *params );

struct cppISteamController_SteamController004_GetControllerForGamepadIndex_params
{
    void *linux_side;
    ControllerHandle_t _ret;
    int nIndex;
};
extern void cppISteamController_SteamController004_GetControllerForGamepadIndex( struct cppISteamController_SteamController004_GetControllerForGamepadIndex_params *params );

struct cppISteamController_SteamController004_GetMotionData_params
{
    void *linux_side;
    ControllerMotionData_t *_ret;
    ControllerHandle_t controllerHandle;
};
extern void cppISteamController_SteamController004_GetMotionData( struct cppISteamController_SteamController004_GetMotionData_params *params );

struct cppISteamController_SteamController004_ShowDigitalActionOrigins_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
    ControllerDigitalActionHandle_t digitalActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController004_ShowDigitalActionOrigins( struct cppISteamController_SteamController004_ShowDigitalActionOrigins_params *params );

struct cppISteamController_SteamController004_ShowAnalogActionOrigins_params
{
    void *linux_side;
    bool _ret;
    ControllerHandle_t controllerHandle;
    ControllerAnalogActionHandle_t analogActionHandle;
    float flScale;
    float flXPosition;
    float flYPosition;
};
extern void cppISteamController_SteamController004_ShowAnalogActionOrigins( struct cppISteamController_SteamController004_ShowAnalogActionOrigins_params *params );

