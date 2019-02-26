extern bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(void *, const char *);
extern bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(void *);
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(void *);
extern bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(void *, uint32, SteamControllerState001_t *);
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(void *, uint32, ESteamControllerPad, unsigned short);
extern void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(void *, const char *);
