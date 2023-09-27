struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params
{
    void *linux_side;
    EUniverse _ret;
};
extern void cppISteamUtils_SteamUtils005_GetConnectedUniverse( struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils005_GetServerRealTime_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetServerRealTime( struct cppISteamUtils_SteamUtils005_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils005_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils005_GetIPCountry( struct cppISteamUtils_SteamUtils005_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils005_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint32 *pnWidth;
    uint32 *pnHeight;
};
extern void cppISteamUtils_SteamUtils005_GetImageSize( struct cppISteamUtils_SteamUtils005_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils005_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint8 *pubDest;
    int nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils005_GetImageRGBA( struct cppISteamUtils_SteamUtils005_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32 *unIP;
    uint16 *usPort;
};
extern void cppISteamUtils_SteamUtils005_GetCSERIPPort( struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils005_GetAppID_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetAppID( struct cppISteamUtils_SteamUtils005_GetAppID_params *params );

struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params
{
    void *linux_side;
    ENotificationPosition eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils005_IsAPICallCompleted( struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params
{
    void *linux_side;
    ESteamAPICallFailure _ret;
    SteamAPICall_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils005_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils005_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    void *pCallback;
    int cubCallback;
    int iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils005_GetAPICallResult( struct cppISteamUtils_SteamUtils005_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils005_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils005_RunFrame( struct cppISteamUtils_SteamUtils005_RunFrame_params *params );

struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetIPCCallCount( struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamUtils_SteamUtils005_SetWarningMessageHook( struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils005_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils005_IsOverlayEnabled( struct cppISteamUtils_SteamUtils005_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils005_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils005_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils005_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils005_CheckFileSignature_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils005_CheckFileSignature( struct cppISteamUtils_SteamUtils005_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    EGamepadTextInputMode eInputMode;
    EGamepadTextInputLineMode eLineInputMode;
    const char *pchDescription;
    uint32 unCharMax;
};
extern void cppISteamUtils_SteamUtils005_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32 cchText;
};
extern void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params );

