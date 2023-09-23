#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamParties_SteamParties002.h"
uint32 cppISteamParties_SteamParties002_GetNumActiveBeacons(void *linux_side)
{
    uint32 _ret;
    _ret = ((ISteamParties*)linux_side)->GetNumActiveBeacons();
    return (_ret);
}

PartyBeaconID_t cppISteamParties_SteamParties002_GetBeaconByIndex(void *linux_side, uint32 unIndex)
{
    PartyBeaconID_t _ret;
    _ret = ((ISteamParties*)linux_side)->GetBeaconByIndex((uint32)unIndex);
    return (_ret);
}

bool cppISteamParties_SteamParties002_GetBeaconDetails(void *linux_side, PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, winSteamPartyBeaconLocation_t_158 *pLocation, char *pchMetadata, int cchMetadata)
{
    bool _ret;
    SteamPartyBeaconLocation_t lin_pLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158(pLocation, &lin_pLocation);
    _ret = ((ISteamParties*)linux_side)->GetBeaconDetails((PartyBeaconID_t)ulBeaconID, (CSteamID *)pSteamIDBeaconOwner, &lin_pLocation, (char *)pchMetadata, (int)cchMetadata);
    lin_to_win_struct_SteamPartyBeaconLocation_t_158(&lin_pLocation, pLocation);
    return (_ret);
}

SteamAPICall_t cppISteamParties_SteamParties002_JoinParty(void *linux_side, PartyBeaconID_t ulBeaconID)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamParties*)linux_side)->JoinParty((PartyBeaconID_t)ulBeaconID);
    return (_ret);
}

bool cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations(void *linux_side, uint32 *puNumLocations)
{
    bool _ret;
    _ret = ((ISteamParties*)linux_side)->GetNumAvailableBeaconLocations((uint32 *)puNumLocations);
    return (_ret);
}

bool cppISteamParties_SteamParties002_GetAvailableBeaconLocations(void *linux_side, winSteamPartyBeaconLocation_t_158 *pLocationList, uint32 uMaxNumLocations)
{
    bool _ret;
    SteamPartyBeaconLocation_t lin_pLocationList;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158(pLocationList, &lin_pLocationList);
    _ret = ((ISteamParties*)linux_side)->GetAvailableBeaconLocations(&lin_pLocationList, (uint32)uMaxNumLocations);
    lin_to_win_struct_SteamPartyBeaconLocation_t_158(&lin_pLocationList, pLocationList);
    return (_ret);
}

SteamAPICall_t cppISteamParties_SteamParties002_CreateBeacon(void *linux_side, uint32 unOpenSlots, winSteamPartyBeaconLocation_t_158 *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)
{
    SteamAPICall_t _ret;
    SteamPartyBeaconLocation_t lin_pBeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158(pBeaconLocation, &lin_pBeaconLocation);
    _ret = ((ISteamParties*)linux_side)->CreateBeacon((uint32)unOpenSlots, &lin_pBeaconLocation, (const char *)pchConnectString, (const char *)pchMetadata);
    lin_to_win_struct_SteamPartyBeaconLocation_t_158(&lin_pBeaconLocation, pBeaconLocation);
    return (_ret);
}

void cppISteamParties_SteamParties002_OnReservationCompleted(void *linux_side, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    ((ISteamParties*)linux_side)->OnReservationCompleted((PartyBeaconID_t)ulBeacon, (CSteamID)steamIDUser);
}

void cppISteamParties_SteamParties002_CancelReservation(void *linux_side, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    ((ISteamParties*)linux_side)->CancelReservation((PartyBeaconID_t)ulBeacon, (CSteamID)steamIDUser);
}

SteamAPICall_t cppISteamParties_SteamParties002_ChangeNumOpenSlots(void *linux_side, PartyBeaconID_t ulBeacon, uint32 unOpenSlots)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamParties*)linux_side)->ChangeNumOpenSlots((PartyBeaconID_t)ulBeacon, (uint32)unOpenSlots);
    return (_ret);
}

bool cppISteamParties_SteamParties002_DestroyBeacon(void *linux_side, PartyBeaconID_t ulBeacon)
{
    bool _ret;
    _ret = ((ISteamParties*)linux_side)->DestroyBeacon((PartyBeaconID_t)ulBeacon);
    return (_ret);
}

bool cppISteamParties_SteamParties002_GetBeaconLocationData(void *linux_side, winSteamPartyBeaconLocation_t_158 BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut)
{
    bool _ret;
    SteamPartyBeaconLocation_t lin_BeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158(&BeaconLocation, &lin_BeaconLocation);
    _ret = ((ISteamParties*)linux_side)->GetBeaconLocationData(lin_BeaconLocation, (ESteamPartyBeaconLocationData)eData, (char *)pchDataStringOut, (int)cchDataStringOut);
    lin_to_win_struct_SteamPartyBeaconLocation_t_158(&lin_BeaconLocation, &BeaconLocation);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
