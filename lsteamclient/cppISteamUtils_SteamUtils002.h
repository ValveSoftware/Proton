struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils002_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils002_GetConnectedUniverse( struct cppISteamUtils_SteamUtils002_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils002_GetServerRealTime_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils002_GetServerRealTime( struct cppISteamUtils_SteamUtils002_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils002_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils002_GetIPCountry( struct cppISteamUtils_SteamUtils002_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils002_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint32 *pnWidth;
    uint32 *pnHeight;
};
extern void cppISteamUtils_SteamUtils002_GetImageSize( struct cppISteamUtils_SteamUtils002_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils002_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int iImage;
    uint8 *pubDest;
    int nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils002_GetImageRGBA( struct cppISteamUtils_SteamUtils002_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32 *unIP;
    uint16 *usPort;
};
extern void cppISteamUtils_SteamUtils002_GetCSERIPPort( struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8 _ret;
};
extern void cppISteamUtils_SteamUtils002_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils002_GetAppID_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUtils_SteamUtils002_GetAppID( struct cppISteamUtils_SteamUtils002_GetAppID_params *params );

struct cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils002_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils002_IsAPICallCompleted( struct cppISteamUtils_SteamUtils002_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    SteamAPICall_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils002_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils002_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    SteamAPICall_t hSteamAPICall;
    void *pCallback;
    int cubCallback;
    int iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils002_GetAPICallResult( struct cppISteamUtils_SteamUtils002_GetAPICallResult_params *params );

