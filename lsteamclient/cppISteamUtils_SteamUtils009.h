/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive( struct cppISteamUtils_SteamUtils009_GetSecondsSinceAppActive_params *params );

struct cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive( struct cppISteamUtils_SteamUtils009_GetSecondsSinceComputerActive_params *params );

struct cppISteamUtils_SteamUtils009_GetConnectedUniverse_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetConnectedUniverse( struct cppISteamUtils_SteamUtils009_GetConnectedUniverse_params *params );

struct cppISteamUtils_SteamUtils009_GetServerRealTime_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetServerRealTime( struct cppISteamUtils_SteamUtils009_GetServerRealTime_params *params );

struct cppISteamUtils_SteamUtils009_GetIPCountry_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils009_GetIPCountry( struct cppISteamUtils_SteamUtils009_GetIPCountry_params *params );

struct cppISteamUtils_SteamUtils009_GetImageSize_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint32_t *pnWidth;
    uint32_t *pnHeight;
};
extern void cppISteamUtils_SteamUtils009_GetImageSize( struct cppISteamUtils_SteamUtils009_GetImageSize_params *params );

struct cppISteamUtils_SteamUtils009_GetImageRGBA_params
{
    void *linux_side;
    bool _ret;
    int32_t iImage;
    uint8_t *pubDest;
    int32_t nDestBufferSize;
};
extern void cppISteamUtils_SteamUtils009_GetImageRGBA( struct cppISteamUtils_SteamUtils009_GetImageRGBA_params *params );

struct cppISteamUtils_SteamUtils009_GetCSERIPPort_params
{
    void *linux_side;
    bool _ret;
    uint32_t *unIP;
    uint16_t *usPort;
};
extern void cppISteamUtils_SteamUtils009_GetCSERIPPort( struct cppISteamUtils_SteamUtils009_GetCSERIPPort_params *params );

struct cppISteamUtils_SteamUtils009_GetCurrentBatteryPower_params
{
    void *linux_side;
    uint8_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetCurrentBatteryPower( struct cppISteamUtils_SteamUtils009_GetCurrentBatteryPower_params *params );

struct cppISteamUtils_SteamUtils009_GetAppID_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetAppID( struct cppISteamUtils_SteamUtils009_GetAppID_params *params );

struct cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition_params
{
    void *linux_side;
    uint32_t eNotificationPosition;
};
extern void cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition( struct cppISteamUtils_SteamUtils009_SetOverlayNotificationPosition_params *params );

struct cppISteamUtils_SteamUtils009_IsAPICallCompleted_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils009_IsAPICallCompleted( struct cppISteamUtils_SteamUtils009_IsAPICallCompleted_params *params );

struct cppISteamUtils_SteamUtils009_GetAPICallFailureReason_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamAPICall;
};
extern void cppISteamUtils_SteamUtils009_GetAPICallFailureReason( struct cppISteamUtils_SteamUtils009_GetAPICallFailureReason_params *params );

struct cppISteamUtils_SteamUtils009_GetAPICallResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamAPICall;
    void *pCallback;
    int32_t cubCallback;
    int32_t iCallbackExpected;
    bool *pbFailed;
};
extern void cppISteamUtils_SteamUtils009_GetAPICallResult( struct cppISteamUtils_SteamUtils009_GetAPICallResult_params *params );

struct cppISteamUtils_SteamUtils009_RunFrame_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils009_RunFrame( struct cppISteamUtils_SteamUtils009_RunFrame_params *params );

struct cppISteamUtils_SteamUtils009_GetIPCCallCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetIPCCallCount( struct cppISteamUtils_SteamUtils009_GetIPCCallCount_params *params );

struct cppISteamUtils_SteamUtils009_SetWarningMessageHook_params
{
    void *linux_side;
    void (*W_CDECL pFunction)(int32_t, const char *);
};
extern void cppISteamUtils_SteamUtils009_SetWarningMessageHook( struct cppISteamUtils_SteamUtils009_SetWarningMessageHook_params *params );

struct cppISteamUtils_SteamUtils009_IsOverlayEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_IsOverlayEnabled( struct cppISteamUtils_SteamUtils009_IsOverlayEnabled_params *params );

struct cppISteamUtils_SteamUtils009_BOverlayNeedsPresent_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_BOverlayNeedsPresent( struct cppISteamUtils_SteamUtils009_BOverlayNeedsPresent_params *params );

struct cppISteamUtils_SteamUtils009_CheckFileSignature_params
{
    void *linux_side;
    uint64_t _ret;
    const char *szFileName;
};
extern void cppISteamUtils_SteamUtils009_CheckFileSignature( struct cppISteamUtils_SteamUtils009_CheckFileSignature_params *params );

struct cppISteamUtils_SteamUtils009_ShowGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    uint32_t eInputMode;
    uint32_t eLineInputMode;
    const char *pchDescription;
    uint32_t unCharMax;
    const char *pchExistingText;
};
extern void cppISteamUtils_SteamUtils009_ShowGamepadTextInput( struct cppISteamUtils_SteamUtils009_ShowGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength( struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextLength_params *params );

struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput_params
{
    void *linux_side;
    bool _ret;
    char *pchText;
    uint32_t cchText;
};
extern void cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput( struct cppISteamUtils_SteamUtils009_GetEnteredGamepadTextInput_params *params );

struct cppISteamUtils_SteamUtils009_GetSteamUILanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamUtils_SteamUtils009_GetSteamUILanguage( struct cppISteamUtils_SteamUtils009_GetSteamUILanguage_params *params );

struct cppISteamUtils_SteamUtils009_IsSteamRunningInVR_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_IsSteamRunningInVR( struct cppISteamUtils_SteamUtils009_IsSteamRunningInVR_params *params );

struct cppISteamUtils_SteamUtils009_SetOverlayNotificationInset_params
{
    void *linux_side;
    int32_t nHorizontalInset;
    int32_t nVerticalInset;
};
extern void cppISteamUtils_SteamUtils009_SetOverlayNotificationInset( struct cppISteamUtils_SteamUtils009_SetOverlayNotificationInset_params *params );

struct cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode( struct cppISteamUtils_SteamUtils009_IsSteamInBigPictureMode_params *params );

struct cppISteamUtils_SteamUtils009_StartVRDashboard_params
{
    void *linux_side;
};
extern void cppISteamUtils_SteamUtils009_StartVRDashboard( struct cppISteamUtils_SteamUtils009_StartVRDashboard_params *params );

struct cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled_params *params );

struct cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled_params
{
    void *linux_side;
    bool bEnabled;
};
extern void cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled( struct cppISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled_params *params );

struct cppISteamUtils_SteamUtils009_IsSteamChinaLauncher_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_IsSteamChinaLauncher( struct cppISteamUtils_SteamUtils009_IsSteamChinaLauncher_params *params );

struct cppISteamUtils_SteamUtils009_InitFilterText_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUtils_SteamUtils009_InitFilterText( struct cppISteamUtils_SteamUtils009_InitFilterText_params *params );

struct cppISteamUtils_SteamUtils009_FilterText_params
{
    void *linux_side;
    int32_t _ret;
    char *pchOutFilteredText;
    uint32_t nByteSizeOutFilteredText;
    const char *pchInputMessage;
    bool bLegalOnly;
};
extern void cppISteamUtils_SteamUtils009_FilterText( struct cppISteamUtils_SteamUtils009_FilterText_params *params );

struct cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eProtocol;
};
extern void cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState( struct cppISteamUtils_SteamUtils009_GetIPv6ConnectivityState_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
