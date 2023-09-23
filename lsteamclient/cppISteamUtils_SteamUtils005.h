struct cppISteamUtils_SteamUtils005;
struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetConnectedUniverse( struct cppISteamUtils_SteamUtils005_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils005_GetServerRealTime_params
{
    void *linux_side;
    uint32_t _ret;
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
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils005_GetImageSize( struct cppISteamUtils_SteamUtils005_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils005_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils005_GetImageRGBA( struct cppISteamUtils_SteamUtils005_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils005_GetCSERIPPort( struct cppISteamUtils_SteamUtils005_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils005_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils005_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetAppID( struct cppISteamUtils_SteamUtils005_GetAppID_params *params );

struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils005_IsAPICallCompleted( struct cppISteamUtils_SteamUtils005_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils005_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils005_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils005_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
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
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetIPCCallCount( struct cppISteamUtils_SteamUtils005_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils005_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
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
    uint64_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils005_CheckFileSignature( struct cppISteamUtils_SteamUtils005_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
};
extern void cppISteamUtils_SteamUtils005_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils005_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params *params );

