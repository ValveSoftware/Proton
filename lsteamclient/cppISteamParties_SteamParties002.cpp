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
void cppISteamParties_SteamParties002_GetNumActiveBeacons( struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->GetNumActiveBeacons(  );
}

void cppISteamParties_SteamParties002_GetBeaconByIndex( struct cppISteamParties_SteamParties002_GetBeaconByIndex_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->GetBeaconByIndex( (uint32)params->unIndex );
}

void cppISteamParties_SteamParties002_GetBeaconDetails( struct cppISteamParties_SteamParties002_GetBeaconDetails_params *params )
{
    SteamPartyBeaconLocation_t lin_pLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pLocation, &lin_pLocation );
    params->_ret = ((ISteamParties*)params->linux_side)->GetBeaconDetails( (PartyBeaconID_t)params->ulBeaconID, (CSteamID *)params->pSteamIDBeaconOwner, &lin_pLocation, (char *)params->pchMetadata, (int)params->cchMetadata );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pLocation, params->pLocation );
}

void cppISteamParties_SteamParties002_JoinParty( struct cppISteamParties_SteamParties002_JoinParty_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->JoinParty( (PartyBeaconID_t)params->ulBeaconID );
}

void cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->GetNumAvailableBeaconLocations( (uint32 *)params->puNumLocations );
}

void cppISteamParties_SteamParties002_GetAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params )
{
    SteamPartyBeaconLocation_t lin_pLocationList;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pLocationList, &lin_pLocationList );
    params->_ret = ((ISteamParties*)params->linux_side)->GetAvailableBeaconLocations( &lin_pLocationList, (uint32)params->uMaxNumLocations );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pLocationList, params->pLocationList );
}

void cppISteamParties_SteamParties002_CreateBeacon( struct cppISteamParties_SteamParties002_CreateBeacon_params *params )
{
    SteamPartyBeaconLocation_t lin_pBeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pBeaconLocation, &lin_pBeaconLocation );
    params->_ret = ((ISteamParties*)params->linux_side)->CreateBeacon( (uint32)params->unOpenSlots, &lin_pBeaconLocation, (const char *)params->pchConnectString, (const char *)params->pchMetadata );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pBeaconLocation, params->pBeaconLocation );
}

void cppISteamParties_SteamParties002_OnReservationCompleted( struct cppISteamParties_SteamParties002_OnReservationCompleted_params *params )
{
    ((ISteamParties*)params->linux_side)->OnReservationCompleted( (PartyBeaconID_t)params->ulBeacon, (CSteamID)params->steamIDUser );
}

void cppISteamParties_SteamParties002_CancelReservation( struct cppISteamParties_SteamParties002_CancelReservation_params *params )
{
    ((ISteamParties*)params->linux_side)->CancelReservation( (PartyBeaconID_t)params->ulBeacon, (CSteamID)params->steamIDUser );
}

void cppISteamParties_SteamParties002_ChangeNumOpenSlots( struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->ChangeNumOpenSlots( (PartyBeaconID_t)params->ulBeacon, (uint32)params->unOpenSlots );
}

void cppISteamParties_SteamParties002_DestroyBeacon( struct cppISteamParties_SteamParties002_DestroyBeacon_params *params )
{
    params->_ret = ((ISteamParties*)params->linux_side)->DestroyBeacon( (PartyBeaconID_t)params->ulBeacon );
}

void cppISteamParties_SteamParties002_GetBeaconLocationData( struct cppISteamParties_SteamParties002_GetBeaconLocationData_params *params )
{
    SteamPartyBeaconLocation_t lin_BeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( &params->BeaconLocation, &lin_BeaconLocation );
    params->_ret = ((ISteamParties*)params->linux_side)->GetBeaconLocationData( lin_BeaconLocation, (ESteamPartyBeaconLocationData)params->eData, (char *)params->pchDataStringOut, (int)params->cchDataStringOut );
}

#ifdef __cplusplus
}
#endif
