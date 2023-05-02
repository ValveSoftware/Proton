#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_106/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_106
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils004.h"
uint32 cppISteamUtils_SteamUtils004_GetSecondsSinceAppActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
}

uint32 cppISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
}

EUniverse cppISteamUtils_SteamUtils004_GetConnectedUniverse(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetConnectedUniverse();
}

uint32 cppISteamUtils_SteamUtils004_GetServerRealTime(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetServerRealTime();
}

const char * cppISteamUtils_SteamUtils004_GetIPCountry(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCountry();
}

bool cppISteamUtils_SteamUtils004_GetImageSize(void *linux_side, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    return ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
}

bool cppISteamUtils_SteamUtils004_GetImageRGBA(void *linux_side, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    return ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
}

bool cppISteamUtils_SteamUtils004_GetCSERIPPort(void *linux_side, uint32 * unIP, uint16 * usPort)
{
    return ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
}

uint8 cppISteamUtils_SteamUtils004_GetCurrentBatteryPower(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
}

uint32 cppISteamUtils_SteamUtils004_GetAppID(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetAppID();
}

void cppISteamUtils_SteamUtils004_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils004_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils004_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    return ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
}

bool cppISteamUtils_SteamUtils004_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
}

void cppISteamUtils_SteamUtils004_RunFrame(void *linux_side)
{
    ((ISteamUtils*)linux_side)->RunFrame();
}

uint32 cppISteamUtils_SteamUtils004_GetIPCCallCount(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCCallCount();
}

void cppISteamUtils_SteamUtils004_SetWarningMessageHook(void *linux_side, SteamAPIWarningMessageHook_t pFunction)
{
    pFunction = (SteamAPIWarningMessageHook_t)manual_convert_SteamAPIWarningMessageHook_t((void*)pFunction);
    ((ISteamUtils*)linux_side)->SetWarningMessageHook((SteamAPIWarningMessageHook_t)pFunction);
}

bool cppISteamUtils_SteamUtils004_IsOverlayEnabled(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->IsOverlayEnabled();
}

#ifdef __cplusplus
}
#endif
