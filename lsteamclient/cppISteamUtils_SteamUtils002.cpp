#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamUtils_SteamUtils002.h"
uint32 cppISteamUtils_SteamUtils002_GetSecondsSinceAppActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
}

uint32 cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
}

EUniverse cppISteamUtils_SteamUtils002_GetConnectedUniverse(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetConnectedUniverse();
}

uint32 cppISteamUtils_SteamUtils002_GetServerRealTime(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetServerRealTime();
}

const char * cppISteamUtils_SteamUtils002_GetIPCountry(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetIPCountry();
}

bool cppISteamUtils_SteamUtils002_GetImageSize(void *linux_side, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
    return ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
}

bool cppISteamUtils_SteamUtils002_GetImageRGBA(void *linux_side, int iImage, uint8 * pubDest, int nDestBufferSize)
{
    return ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
}

bool cppISteamUtils_SteamUtils002_GetCSERIPPort(void *linux_side, uint32 * unIP, uint16 * usPort)
{
    return ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
}

uint8 cppISteamUtils_SteamUtils002_GetCurrentBatteryPower(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
}

uint32 cppISteamUtils_SteamUtils002_GetAppID(void *linux_side)
{
    return ((ISteamUtils*)linux_side)->GetAppID();
}

void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils002_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils002_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    return ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
}

bool cppISteamUtils_SteamUtils002_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
    return ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
}

#ifdef __cplusplus
}
#endif
