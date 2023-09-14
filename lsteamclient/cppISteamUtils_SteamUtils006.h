struct cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils006_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils006_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetConnectedUniverse( struct cppISteamUtils_SteamUtils006_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils006_GetServerRealTime_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetServerRealTime( struct cppISteamUtils_SteamUtils006_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils006_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils006_GetIPCountry( struct cppISteamUtils_SteamUtils006_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils006_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils006_GetImageSize( struct cppISteamUtils_SteamUtils006_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils006_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils006_GetImageRGBA( struct cppISteamUtils_SteamUtils006_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils006_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils006_GetCSERIPPort( struct cppISteamUtils_SteamUtils006_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils006_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils006_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils006_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetAppID( struct cppISteamUtils_SteamUtils006_GetAppID_params *params );

struct cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils006_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils006_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils006_IsAPICallCompleted( struct cppISteamUtils_SteamUtils006_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils006_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    SteamAPICall_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils006_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils006_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils006_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils006_GetAPICallResult( struct cppISteamUtils_SteamUtils006_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils006_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils006_RunFrame( struct cppISteamUtils_SteamUtils006_RunFrame_params *params );

struct cppISteamUtils_SteamUtils006_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetIPCCallCount( struct cppISteamUtils_SteamUtils006_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils006_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamUtils_SteamUtils006_SetWarningMessageHook( struct cppISteamUtils_SteamUtils006_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils006_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils006_IsOverlayEnabled( struct cppISteamUtils_SteamUtils006_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils006_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils006_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils006_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils006_CheckFileSignature_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils006_CheckFileSignature( struct cppISteamUtils_SteamUtils006_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils006_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
};
extern void cppISteamUtils_SteamUtils006_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils006_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils006_GetEnteredGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils006_GetSteamUILanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils006_GetSteamUILanguage( struct cppISteamUtils_SteamUtils006_GetSteamUILanguage_params *params );

struct cppISteamUtils_SteamUtils006_IsSteamRunningInVR_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils006_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils006_IsSteamRunningInVR_params *params );

