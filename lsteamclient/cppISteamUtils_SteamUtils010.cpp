#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_157/steam_api.h"
#include "steamworks_sdk_157/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_157
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils010.h"
uint32 cppISteamUtils_SteamUtils010_GetSecondsSinceAppActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
}

uint32 cppISteamUtils_SteamUtils010_GetSecondsSinceComputerActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
}

EUniverse cppISteamUtils_SteamUtils010_GetConnectedUniverse(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetConnectedUniverse();
}

uint32 cppISteamUtils_SteamUtils010_GetServerRealTime(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetServerRealTime();
}

const char * cppISteamUtils_SteamUtils010_GetIPCountry(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCountry();
}

bool cppISteamUtils_SteamUtils010_GetImageSize(void *linux_side, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    return ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
}

bool cppISteamUtils_SteamUtils010_GetImageRGBA(void *linux_side, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    return ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
}

bool cppISteamUtils_SteamUtils010_GetCSERIPPort(void *linux_side, uint32 * unIP, uint16 * usPort)
{
    return ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
}

uint8 cppISteamUtils_SteamUtils010_GetCurrentBatteryPower(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
}

uint32 cppISteamUtils_SteamUtils010_GetAppID(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetAppID();
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils010_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils010_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    return ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
}

bool cppISteamUtils_SteamUtils010_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
}

void cppISteamUtils_SteamUtils010_RunFrame(void *linux_side)
{
    ((ISteamUtils*)linux_side)->RunFrame();
}

uint32 cppISteamUtils_SteamUtils010_GetIPCCallCount(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCCallCount();
}

void cppISteamUtils_SteamUtils010_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamUtils*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamUtils_SteamUtils010_IsOverlayEnabled(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsOverlayEnabled();
}

bool cppISteamUtils_SteamUtils010_BOverlayNeedsPresent(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->BOverlayNeedsPresent();
}

SteamAPICall_t cppISteamUtils_SteamUtils010_CheckFileSignature(void *linux_side, const char * szFileName)
{
    return ((ISteamUtils*)linux_side)->CheckFileSignature((const char *)szFileName);
}

bool cppISteamUtils_SteamUtils010_ShowGamepadTextInput(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)
{
    return ((ISteamUtils*)linux_side)->ShowGamepadTextInput((EGamepadTextInputMode)eInputMode, (EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32)unCharMax, (const char *)pchExistingText);
}

uint32 cppISteamUtils_SteamUtils010_GetEnteredGamepadTextLength(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetEnteredGamepadTextLength();
}

bool cppISteamUtils_SteamUtils010_GetEnteredGamepadTextInput(void *linux_side, char * pchText, uint32 cchText)
{
    return ((ISteamUtils*)linux_side)->GetEnteredGamepadTextInput((char *)pchText, (uint32)cchText);
}

const char * cppISteamUtils_SteamUtils010_GetSteamUILanguage(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSteamUILanguage();
}

bool cppISteamUtils_SteamUtils010_IsSteamRunningInVR(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsSteamRunningInVR();
}

void cppISteamUtils_SteamUtils010_SetOverlayNotificationInset(void *linux_side, int nHorizontalInset, int nVerticalInset)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationInset((int)nHorizontalInset, (int)nVerticalInset);
}

bool cppISteamUtils_SteamUtils010_IsSteamInBigPictureMode(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsSteamInBigPictureMode();
}

void cppISteamUtils_SteamUtils010_StartVRDashboard(void *linux_side)
{
    ((ISteamUtils*)linux_side)->StartVRDashboard();
}

bool cppISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsVRHeadsetStreamingEnabled();
}

void cppISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled(void *linux_side, bool bEnabled)
{
    ((ISteamUtils*)linux_side)->SetVRHeadsetStreamingEnabled((bool)bEnabled);
}

bool cppISteamUtils_SteamUtils010_IsSteamChinaLauncher(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsSteamChinaLauncher();
}

bool cppISteamUtils_SteamUtils010_InitFilterText(void *linux_side, uint32 unFilterOptions)
{
    return ((ISteamUtils*)linux_side)->InitFilterText((uint32)unFilterOptions);
}

int cppISteamUtils_SteamUtils010_FilterText(void *linux_side, ETextFilteringContext eContext, CSteamID sourceSteamID, const char * pchInputMessage, char * pchOutFilteredText, uint32 nByteSizeOutFilteredText)
{
    return ((ISteamUtils*)linux_side)->FilterText((ETextFilteringContext)eContext, (CSteamID)sourceSteamID, (const char *)pchInputMessage, (char *)pchOutFilteredText, (uint32)nByteSizeOutFilteredText);
}

ESteamIPv6ConnectivityState cppISteamUtils_SteamUtils010_GetIPv6ConnectivityState(void *linux_side, ESteamIPv6ConnectivityProtocol eProtocol)
{
    return ((ISteamUtils*)linux_side)->GetIPv6ConnectivityState((ESteamIPv6ConnectivityProtocol)eProtocol);
}

bool cppISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsSteamRunningOnSteamDeck();
}

bool cppISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput(void *linux_side, EFloatingGamepadTextInputMode eKeyboardMode, int nTextFieldXPosition, int nTextFieldYPosition, int nTextFieldWidth, int nTextFieldHeight)
{
    return ((ISteamUtils*)linux_side)->ShowFloatingGamepadTextInput((EFloatingGamepadTextInputMode)eKeyboardMode, (int)nTextFieldXPosition, (int)nTextFieldYPosition, (int)nTextFieldWidth, (int)nTextFieldHeight);
}

void cppISteamUtils_SteamUtils010_SetGameLauncherMode(void *linux_side, bool bLauncherMode)
{
    ((ISteamUtils*)linux_side)->SetGameLauncherMode((bool)bLauncherMode);
}

bool cppISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->DismissFloatingGamepadTextInput();
}

#ifdef __cplusplus
}
#endif
