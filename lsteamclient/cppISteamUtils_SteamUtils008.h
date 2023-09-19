struct cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils008_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetConnectedUniverse( struct cppISteamUtils_SteamUtils008_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils008_GetServerRealTime_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetServerRealTime( struct cppISteamUtils_SteamUtils008_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils008_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils008_GetIPCountry( struct cppISteamUtils_SteamUtils008_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils008_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils008_GetImageSize( struct cppISteamUtils_SteamUtils008_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils008_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils008_GetImageRGBA( struct cppISteamUtils_SteamUtils008_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils008_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils008_GetCSERIPPort( struct cppISteamUtils_SteamUtils008_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils008_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils008_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils008_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetAppID( struct cppISteamUtils_SteamUtils008_GetAppID_params *params );

struct cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils008_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils008_IsAPICallCompleted( struct cppISteamUtils_SteamUtils008_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils008_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils008_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils008_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils008_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils008_GetAPICallResult( struct cppISteamUtils_SteamUtils008_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils008_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils008_RunFrame( struct cppISteamUtils_SteamUtils008_RunFrame_params *params );

struct cppISteamUtils_SteamUtils008_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetIPCCallCount( struct cppISteamUtils_SteamUtils008_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils008_SetWarningMessageHook_params
{
    void *linux_side;
    void (*__cdecl pFunction)(int32_t, const char *);
};
extern void cppISteamUtils_SteamUtils008_SetWarningMessageHook( struct cppISteamUtils_SteamUtils008_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils008_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils008_IsOverlayEnabled( struct cppISteamUtils_SteamUtils008_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils008_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils008_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils008_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils008_CheckFileSignature_params
{
    void *linux_side;
    uint64_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils008_CheckFileSignature( struct cppISteamUtils_SteamUtils008_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils008_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
};
extern void cppISteamUtils_SteamUtils008_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils008_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils008_GetSteamUILanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils008_GetSteamUILanguage( struct cppISteamUtils_SteamUtils008_GetSteamUILanguage_params *params );

struct cppISteamUtils_SteamUtils008_IsSteamRunningInVR_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils008_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils008_IsSteamRunningInVR_params *params );

struct cppISteamUtils_SteamUtils008_SetOverlayNotificationInset_params
{
    void *linux_side;
    int32_t nHorizontalInset;
    int32_t nVerticalInset;
};
extern void cppISteamUtils_SteamUtils008_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils008_SetOverlayNotificationInset_params *params );

struct cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params *params );

struct cppISteamUtils_SteamUtils008_StartVRDashboard_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils008_StartVRDashboard( struct cppISteamUtils_SteamUtils008_StartVRDashboard_params *params );

