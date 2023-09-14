struct cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils004_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils004_GetConnectedUniverse( struct cppISteamUtils_SteamUtils004_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils004_GetServerRealTime_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetServerRealTime( struct cppISteamUtils_SteamUtils004_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils004_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils004_GetIPCountry( struct cppISteamUtils_SteamUtils004_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils004_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint32 *pnWidth;
    uint32 *pnHeight;
};
extern void cppISteamUtils_SteamUtils004_GetImageSize( struct cppISteamUtils_SteamUtils004_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils004_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint8 *pubDest;
    int nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils004_GetImageRGBA( struct cppISteamUtils_SteamUtils004_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils004_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32 *unIP;
    uint16 *usPort;
};
extern void cppISteamUtils_SteamUtils004_GetCSERIPPort( struct cppISteamUtils_SteamUtils004_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils004_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils004_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils004_GetAppID_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetAppID( struct cppISteamUtils_SteamUtils004_GetAppID_params *params );

struct cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils004_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils004_IsAPICallCompleted( struct cppISteamUtils_SteamUtils004_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils004_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    SteamAPICall_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils004_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils004_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils004_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    void *pCallback;
    int cubCallback;
    int iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils004_GetAPICallResult( struct cppISteamUtils_SteamUtils004_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils004_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils004_RunFrame( struct cppISteamUtils_SteamUtils004_RunFrame_params *params );

struct cppISteamUtils_SteamUtils004_GetIPCCallCount_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils004_GetIPCCallCount( struct cppISteamUtils_SteamUtils004_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils004_SetWarningMessageHook_params
{
    void *linux_side;
    SteamAPIWarningMessageHook_t pFunction;
};
extern void cppISteamUtils_SteamUtils004_SetWarningMessageHook( struct cppISteamUtils_SteamUtils004_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils004_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils004_IsOverlayEnabled( struct cppISteamUtils_SteamUtils004_IsOverlayEnabled_params *params );

