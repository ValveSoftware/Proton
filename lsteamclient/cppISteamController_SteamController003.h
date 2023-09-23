struct cppISteamController_SteamController003;
struct cppISteamController_SteamController003_Init_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController003_Init( struct cppISteamController_SteamController003_Init_params *params );

struct cppISteamController_SteamController003_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_SteamController003_Shutdown( struct cppISteamController_SteamController003_Shutdown_params *params );

struct cppISteamController_SteamController003_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_SteamController003_RunFrame( struct cppISteamController_SteamController003_RunFrame_params *params );

struct cppISteamController_SteamController003_GetConnectedControllers_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t *handlesOut;
};
extern void cppISteamController_SteamController003_GetConnectedControllers( struct cppISteamController_SteamController003_GetConnectedControllers_params *params );

struct cppISteamController_SteamController003_ShowBindingPanel_params
{
    void *linux_side;
    bool _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController003_ShowBindingPanel( struct cppISteamController_SteamController003_ShowBindingPanel_params *params );

struct cppISteamController_SteamController003_GetActionSetHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionSetName;
};
extern void cppISteamController_SteamController003_GetActionSetHandle( struct cppISteamController_SteamController003_GetActionSetHandle_params *params );

struct cppISteamController_SteamController003_ActivateActionSet_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
};
extern void cppISteamController_SteamController003_ActivateActionSet( struct cppISteamController_SteamController003_ActivateActionSet_params *params );

struct cppISteamController_SteamController003_GetCurrentActionSet_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t controllerHandle;
};
extern void cppISteamController_SteamController003_GetCurrentActionSet( struct cppISteamController_SteamController003_GetCurrentActionSet_params *params );

struct cppISteamController_SteamController003_GetDigitalActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController003_GetDigitalActionHandle( struct cppISteamController_SteamController003_GetDigitalActionHandle_params *params );

struct cppISteamController_SteamController003_GetDigitalActionData_params
{
    void *linux_side;
    ControllerDigitalActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t digitalActionHandle;
};
extern void cppISteamController_SteamController003_GetDigitalActionData( struct cppISteamController_SteamController003_GetDigitalActionData_params *params );

struct cppISteamController_SteamController003_GetDigitalActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController003_GetDigitalActionOrigins( struct cppISteamController_SteamController003_GetDigitalActionOrigins_params *params );

struct cppISteamController_SteamController003_GetAnalogActionHandle_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszActionName;
};
extern void cppISteamController_SteamController003_GetAnalogActionHandle( struct cppISteamController_SteamController003_GetAnalogActionHandle_params *params );

struct cppISteamController_SteamController003_GetAnalogActionData_params
{
    void *linux_side;
    ControllerAnalogActionData_t *_ret;
    uint64_t controllerHandle;
    uint64_t analogActionHandle;
};
extern void cppISteamController_SteamController003_GetAnalogActionData( struct cppISteamController_SteamController003_GetAnalogActionData_params *params );

struct cppISteamController_SteamController003_GetAnalogActionOrigins_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t controllerHandle;
    uint64_t actionSetHandle;
    uint64_t analogActionHandle;
    uint32_t *originsOut;
};
extern void cppISteamController_SteamController003_GetAnalogActionOrigins( struct cppISteamController_SteamController003_GetAnalogActionOrigins_params *params );

struct cppISteamController_SteamController003_StopAnalogActionMomentum_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint64_t eAction;
};
extern void cppISteamController_SteamController003_StopAnalogActionMomentum( struct cppISteamController_SteamController003_StopAnalogActionMomentum_params *params );

struct cppISteamController_SteamController003_TriggerHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamController_SteamController003_TriggerHapticPulse( struct cppISteamController_SteamController003_TriggerHapticPulse_params *params );

struct cppISteamController_SteamController003_TriggerRepeatedHapticPulse_params
{
    void *linux_side;
    uint64_t controllerHandle;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
    uint16_t usOffMicroSec;
    uint16_t unRepeat;
    uint32_t nFlags;
};
extern void cppISteamController_SteamController003_TriggerRepeatedHapticPulse( struct cppISteamController_SteamController003_TriggerRepeatedHapticPulse_params *params );

