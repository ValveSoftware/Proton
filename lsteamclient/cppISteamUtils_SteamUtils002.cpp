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
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetSecondsSinceAppActive();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetSecondsSinceComputerActive();
    return (_ret);
}

EUniverse cppISteamUtils_SteamUtils002_GetConnectedUniverse(void *linux_side)
{
    EUniverse _ret;
    _ret = ((ISteamUtils*)linux_side)->GetConnectedUniverse();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils002_GetServerRealTime(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetServerRealTime();
    return (_ret);
}

const char * cppISteamUtils_SteamUtils002_GetIPCountry(void *linux_side)
{
    const char * _ret;
    _ret = ((ISteamUtils*)linux_side)->GetIPCountry();
    return (_ret);
}

bool cppISteamUtils_SteamUtils002_GetImageSize(void *linux_side, int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetImageSize((int)iImage, (uint32 *)pnWidth, (uint32 *)pnHeight);
    return (_ret);
}

bool cppISteamUtils_SteamUtils002_GetImageRGBA(void *linux_side, int iImage, uint8 *pubDest, int nDestBufferSize)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetImageRGBA((int)iImage, (uint8 *)pubDest, (int)nDestBufferSize);
    return (_ret);
}

bool cppISteamUtils_SteamUtils002_GetCSERIPPort(void *linux_side, uint32 *unIP, uint16 *usPort)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetCSERIPPort((uint32 *)unIP, (uint16 *)usPort);
    return (_ret);
}

uint8 cppISteamUtils_SteamUtils002_GetCurrentBatteryPower(void *linux_side)
{
    uint8 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetCurrentBatteryPower();
    return (_ret);
}

uint32 cppISteamUtils_SteamUtils002_GetAppID(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAppID();
    return (_ret);
}

void cppISteamUtils_SteamUtils002_SetOverlayNotificationPosition(void *linux_side, ENotificationPosition eNotificationPosition)
{
    ((ISteamUtils*)linux_side)->SetOverlayNotificationPosition((ENotificationPosition)eNotificationPosition);
}

bool cppISteamUtils_SteamUtils002_IsAPICallCompleted(void *linux_side, SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->IsAPICallCompleted((SteamAPICall_t)hSteamAPICall, (bool *)pbFailed);
    return (_ret);
}

ESteamAPICallFailure cppISteamUtils_SteamUtils002_GetAPICallFailureReason(void *linux_side, SteamAPICall_t hSteamAPICall)
{
    ESteamAPICallFailure _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAPICallFailureReason((SteamAPICall_t)hSteamAPICall);
    return (_ret);
}

bool cppISteamUtils_SteamUtils002_GetAPICallResult(void *linux_side, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    bool _ret;
    _ret = ((ISteamUtils*)linux_side)->GetAPICallResult((SteamAPICall_t)hSteamAPICall, (void *)pCallback, (int)cubCallback, (int)iCallbackExpected, (bool *)pbFailed);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
