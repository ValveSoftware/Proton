/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamParties_SteamParties002.h"

void cppISteamParties_SteamParties002_GetNumActiveBeacons( struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumActiveBeacons(  );
}

void cppISteamParties_SteamParties002_GetBeaconByIndex( struct cppISteamParties_SteamParties002_GetBeaconByIndex_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetBeaconByIndex( params->unIndex );
}

void cppISteamParties_SteamParties002_GetBeaconDetails( struct cppISteamParties_SteamParties002_GetBeaconDetails_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pLocation = *params->pLocation;
    params->_ret = iface->GetBeaconDetails( params->ulBeaconID, params->pSteamIDBeaconOwner, &u_pLocation, params->pchMetadata, params->cchMetadata );
    *params->pLocation = u_pLocation;
}

void cppISteamParties_SteamParties002_JoinParty( struct cppISteamParties_SteamParties002_JoinParty_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->JoinParty( params->ulBeaconID );
}

void cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumAvailableBeaconLocations( params->puNumLocations );
}

void cppISteamParties_SteamParties002_GetAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pLocationList = *params->pLocationList;
    params->_ret = iface->GetAvailableBeaconLocations( &u_pLocationList, params->uMaxNumLocations );
    *params->pLocationList = u_pLocationList;
}

void cppISteamParties_SteamParties002_CreateBeacon( struct cppISteamParties_SteamParties002_CreateBeacon_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_pBeaconLocation = *params->pBeaconLocation;
    params->_ret = iface->CreateBeacon( params->unOpenSlots, &u_pBeaconLocation, params->pchConnectString, params->pchMetadata );
    *params->pBeaconLocation = u_pBeaconLocation;
}

void cppISteamParties_SteamParties002_OnReservationCompleted( struct cppISteamParties_SteamParties002_OnReservationCompleted_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    iface->OnReservationCompleted( params->ulBeacon, params->steamIDUser );
}

void cppISteamParties_SteamParties002_CancelReservation( struct cppISteamParties_SteamParties002_CancelReservation_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    iface->CancelReservation( params->ulBeacon, params->steamIDUser );
}

void cppISteamParties_SteamParties002_ChangeNumOpenSlots( struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->ChangeNumOpenSlots( params->ulBeacon, params->unOpenSlots );
}

void cppISteamParties_SteamParties002_DestroyBeacon( struct cppISteamParties_SteamParties002_DestroyBeacon_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->DestroyBeacon( params->ulBeacon );
}

void cppISteamParties_SteamParties002_GetBeaconLocationData( struct cppISteamParties_SteamParties002_GetBeaconLocationData_params *params )
{
    struct u_ISteamParties_SteamParties002 *iface = (struct u_ISteamParties_SteamParties002 *)params->linux_side;
    u_SteamPartyBeaconLocation_t u_BeaconLocation = params->BeaconLocation;
    params->_ret = iface->GetBeaconLocationData( u_BeaconLocation, params->eData, params->pchDataStringOut, params->cchDataStringOut );
}

