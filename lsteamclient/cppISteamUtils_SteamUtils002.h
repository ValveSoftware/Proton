/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
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
    uint32_t _ret;
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
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils002_GetImageSize( struct cppISteamUtils_SteamUtils002_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils002_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils002_GetImageRGBA( struct cppISteamUtils_SteamUtils002_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils002_GetCSERIPPort( struct cppISteamUtils_SteamUtils002_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils002_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils002_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils002_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
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
    uint64_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils002_IsAPICallCompleted( struct cppISteamUtils_SteamUtils002_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils002_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils002_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils002_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils002_GetAPICallResult( struct cppISteamUtils_SteamUtils002_GetAPICallResult_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
