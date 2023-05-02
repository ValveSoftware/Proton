#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_123a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_123a
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils005.h"
uint32 cppISteamUtils_SteamUtils005_GetSecondsSinceAppActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
}

uint32 cppISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
}

EUniverse cppISteamUtils_SteamUtils005_GetConnectedUniverse(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetConnectedUniverse();
}

uint32 cppISteamUtils_SteamUtils005_GetServerRealTime(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetServerRealTime();
}

const char * cppISteamUtils_SteamUtils005_GetIPCountry(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCountry();
}

bool cppISteamUtils_SteamUtils005_GetImageSize(void *linux_side, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    return ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
}

bool cppISteamUtils_SteamUtils005_GetImageRGBA(void *linux_side, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    return ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
}

bool cppISteamUtils_SteamUtils005_GetCSERIPPort(void *linux_side, uint32 * unIP, uint16 * usPort)
{
    return ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
}

uint8 cppISteamUtils_SteamUtils005_GetCurrentBatteryPower(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
}

uint32 cppISteamUtils_SteamUtils005_GetAppID(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetAppID();
}

void cppISteamUtils_SteamUtils005_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils005_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils005_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    return ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
}

bool cppISteamUtils_SteamUtils005_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
}

void cppISteamUtils_SteamUtils005_RunFrame(void *linux_side)
{
    ((ISteamUtils*)linux_side)->RunFrame();
}

uint32 cppISteamUtils_SteamUtils005_GetIPCCallCount(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCCallCount();
}

void cppISteamUtils_SteamUtils005_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamUtils*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamUtils_SteamUtils005_IsOverlayEnabled(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsOverlayEnabled();
}

bool cppISteamUtils_SteamUtils005_BOverlayNeedsPresent(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->BOverlayNeedsPresent();
}

SteamAPICall_t cppISteamUtils_SteamUtils005_CheckFileSignature(void *linux_side, const char * szFileName)
{
    return ((ISteamUtils*)linux_side)->CheckFileSignature((const char *)szFileName);
}

bool cppISteamUtils_SteamUtils005_ShowGamepadTextInput(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax)
{
    return ((ISteamUtils*)linux_side)->ShowGamepadTextInput((EGamepadTextInputMode)eInputMode, (EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32)unCharMax);
}

uint32 cppISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetEnteredGamepadTextLength();
}

bool cppISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(void *linux_side, char * pchText, uint32 cchText)
{
    return ((ISteamUtils*)linux_side)->GetEnteredGamepadTextInput((char *)pchText, (uint32)cchText);
}

#ifdef __cplusplus
}
#endif
