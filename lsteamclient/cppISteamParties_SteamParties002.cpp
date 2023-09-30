/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamParties_SteamParties002_GetNumActiveBeacons( void *args )
{
    struct ISteamParties_SteamParties002_GetNumActiveBeacons_params *params = (struct ISteamParties_SteamParties002_GetNumActiveBeacons_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumActiveBeacons(  );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_GetBeaconByIndex( void *args )
{
    struct ISteamParties_SteamParties002_GetBeaconByIndex_params *params = (struct ISteamParties_SteamParties002_GetBeaconByIndex_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetBeaconByIndex( params->unIndex );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_GetBeaconDetails( void *args )
{
    struct ISteamParties_SteamParties002_GetBeaconDetails_params *params = (struct ISteamParties_SteamParties002_GetBeaconDetails_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pLocation = *params->pLocation;
    params->_ret = iface->GetBeaconDetails( params->ulBeaconID, params->pSteamIDBeaconOwner, &u_pLocation, params->pchMetadata, params->cchMetadata );
    *params->pLocation = u_pLocation;
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_JoinParty( void *args )
{
    struct ISteamParties_SteamParties002_JoinParty_params *params = (struct ISteamParties_SteamParties002_JoinParty_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->JoinParty( params->ulBeaconID );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_GetNumAvailableBeaconLocations( void *args )
{
    struct ISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params = (struct ISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumAvailableBeaconLocations( params->puNumLocations );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_GetAvailableBeaconLocations( void *args )
{
    struct ISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params = (struct ISteamParties_SteamParties002_GetAvailableBeaconLocations_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pLocationList = *params->pLocationList;
    params->_ret = iface->GetAvailableBeaconLocations( &u_pLocationList, params->uMaxNumLocations );
    *params->pLocationList = u_pLocationList;
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_CreateBeacon( void *args )
{
    struct ISteamParties_SteamParties002_CreateBeacon_params *params = (struct ISteamParties_SteamParties002_CreateBeacon_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pBeaconLocation = *params->pBeaconLocation;
    params->_ret = iface->CreateBeacon( params->unOpenSlots, &u_pBeaconLocation, params->pchConnectString, params->pchMetadata );
    *params->pBeaconLocation = u_pBeaconLocation;
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_OnReservationCompleted( void *args )
{
    struct ISteamParties_SteamParties002_OnReservationCompleted_params *params = (struct ISteamParties_SteamParties002_OnReservationCompleted_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    iface->OnReservationCompleted( params->ulBeacon, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_CancelReservation( void *args )
{
    struct ISteamParties_SteamParties002_CancelReservation_params *params = (struct ISteamParties_SteamParties002_CancelReservation_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    iface->CancelReservation( params->ulBeacon, params->steamIDUser );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_ChangeNumOpenSlots( void *args )
{
    struct ISteamParties_SteamParties002_ChangeNumOpenSlots_params *params = (struct ISteamParties_SteamParties002_ChangeNumOpenSlots_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->ChangeNumOpenSlots( params->ulBeacon, params->unOpenSlots );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_DestroyBeacon( void *args )
{
    struct ISteamParties_SteamParties002_DestroyBeacon_params *params = (struct ISteamParties_SteamParties002_DestroyBeacon_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->DestroyBeacon( params->ulBeacon );
    return 0;
}

NTSTATUS ISteamParties_SteamParties002_GetBeaconLocationData( void *args )
{
    struct ISteamParties_SteamParties002_GetBeaconLocationData_params *params = (struct ISteamParties_SteamParties002_GetBeaconLocationData_params *)args;
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_BeaconLocation = params->BeaconLocation;
    params->_ret = iface->GetBeaconLocationData( u_BeaconLocation, params->eData, params->pchDataStringOut, params->cchDataStringOut );
    return 0;
}

