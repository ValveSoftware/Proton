#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_147
#include "struct_converters.h"
#include "cppISteamParties_SteamParties002.h"
uint32 cppISteamParties_SteamParties002_GetNumActiveBeacons(void *linux_side)
{
    return ((ISteamParties*)linux_side)->GetNumActiveBeacons();
}

PartyBeaconID_t cppISteamParties_SteamParties002_GetBeaconByIndex(void *linux_side, uint32 unIndex)
{
    return ((ISteamParties*)linux_side)->GetBeaconByIndex((uint32)unIndex);
}

bool cppISteamParties_SteamParties002_GetBeaconDetails(void *linux_side, PartyBeaconID_t ulBeaconID, CSteamID * pSteamIDBeaconOwner, winSteamPartyBeaconLocation_t_147 * pLocation, char * pchMetadata, int cchMetadata)
{
    SteamPartyBeaconLocation_t lin_pLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_147(pLocation, &lin_pLocation);
    bool retval = ((ISteamParties*)linux_side)->GetBeaconDetails((PartyBeaconID_t)ulBeaconID, (CSteamID *)pSteamIDBeaconOwner, &lin_pLocation, (char *)pchMetadata, (int)cchMetadata);
    lin_to_win_struct_SteamPartyBeaconLocation_t_147(&lin_pLocation, pLocation);
    return retval;
}

SteamAPICall_t cppISteamParties_SteamParties002_JoinParty(void *linux_side, PartyBeaconID_t ulBeaconID)
{
    return ((ISteamParties*)linux_side)->JoinParty((PartyBeaconID_t)ulBeaconID);
}

bool cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations(void *linux_side, uint32 * puNumLocations)
{
    return ((ISteamParties*)linux_side)->GetNumAvailableBeaconLocations((uint32 *)puNumLocations);
}

bool cppISteamParties_SteamParties002_GetAvailableBeaconLocations(void *linux_side, winSteamPartyBeaconLocation_t_147 * pLocationList, uint32 uMaxNumLocations)
{
    SteamPartyBeaconLocation_t lin_pLocationList;
    win_to_lin_struct_SteamPartyBeaconLocation_t_147(pLocationList, &lin_pLocationList);
    bool retval = ((ISteamParties*)linux_side)->GetAvailableBeaconLocations(&lin_pLocationList, (uint32)uMaxNumLocations);
    lin_to_win_struct_SteamPartyBeaconLocation_t_147(&lin_pLocationList, pLocationList);
    return retval;
}

SteamAPICall_t cppISteamParties_SteamParties002_CreateBeacon(void *linux_side, uint32 unOpenSlots, winSteamPartyBeaconLocation_t_147 * pBeaconLocation, const char * pchConnectString, const char * pchMetadata)
{
    SteamPartyBeaconLocation_t lin_pBeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_147(pBeaconLocation, &lin_pBeaconLocation);
    SteamAPICall_t retval = ((ISteamParties*)linux_side)->CreateBeacon((uint32)unOpenSlots, &lin_pBeaconLocation, (const char *)pchConnectString, (const char *)pchMetadata);
    lin_to_win_struct_SteamPartyBeaconLocation_t_147(&lin_pBeaconLocation, pBeaconLocation);
    return retval;
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
    return ((ISteamParties*)linux_side)->ChangeNumOpenSlots((PartyBeaconID_t)ulBeacon, (uint32)unOpenSlots);
}

bool cppISteamParties_SteamParties002_DestroyBeacon(void *linux_side, PartyBeaconID_t ulBeacon)
{
    return ((ISteamParties*)linux_side)->DestroyBeacon((PartyBeaconID_t)ulBeacon);
}

bool cppISteamParties_SteamParties002_GetBeaconLocationData(void *linux_side, winSteamPartyBeaconLocation_t_147 BeaconLocation, ESteamPartyBeaconLocationData eData, char * pchDataStringOut, int cchDataStringOut)
{
    SteamPartyBeaconLocation_t lin_BeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_147(&BeaconLocation, &lin_BeaconLocation);
    bool retval = ((ISteamParties*)linux_side)->GetBeaconLocationData(lin_BeaconLocation, (ESteamPartyBeaconLocationData)eData, (char *)pchDataStringOut, (int)cchDataStringOut);
    lin_to_win_struct_SteamPartyBeaconLocation_t_147(&lin_BeaconLocation, &BeaconLocation);
    return retval;
}

#ifdef __cplusplus
}
#endif
