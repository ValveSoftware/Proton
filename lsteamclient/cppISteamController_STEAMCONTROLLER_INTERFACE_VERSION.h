struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION;
struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params
{
    void *linux_side;
    bool _ret;
    const char *pchAbsolutePathToControllerConfigVDF;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init_params *params );

struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown_params *params );

struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame_params *params );

struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params
{
    void *linux_side;
    bool _ret;
    uint32_t unControllerIndex;
    SteamControllerState001_t *pState;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState_params *params );

struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params
{
    void *linux_side;
    uint32_t unControllerIndex;
    uint32_t eTargetPad;
    uint16_t usDurationMicroSec;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse_params *params );

struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params
{
    void *linux_side;
    const char *pchMode;
};
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode( struct cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode_params *params );

