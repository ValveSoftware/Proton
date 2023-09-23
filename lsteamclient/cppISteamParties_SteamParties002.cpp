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

struct cppISteamParties_SteamParties002
{
#ifdef __cplusplus
    virtual uint32_t GetNumActiveBeacons(  ) = 0;
    virtual uint64_t GetBeaconByIndex( uint32_t ) = 0;
    virtual bool GetBeaconDetails( uint64_t, CSteamID *, SteamPartyBeaconLocation_t *, char *, int32_t ) = 0;
    virtual uint64_t JoinParty( uint64_t ) = 0;
    virtual bool GetNumAvailableBeaconLocations( uint32_t * ) = 0;
    virtual bool GetAvailableBeaconLocations( SteamPartyBeaconLocation_t *, uint32_t ) = 0;
    virtual uint64_t CreateBeacon( uint32_t, SteamPartyBeaconLocation_t *, const char *, const char * ) = 0;
    virtual void OnReservationCompleted( uint64_t, CSteamID ) = 0;
    virtual void CancelReservation( uint64_t, CSteamID ) = 0;
    virtual uint64_t ChangeNumOpenSlots( uint64_t, uint32_t ) = 0;
    virtual bool DestroyBeacon( uint64_t ) = 0;
    virtual bool GetBeaconLocationData( SteamPartyBeaconLocation_t, uint32_t, char *, int32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamParties_SteamParties002_GetNumActiveBeacons( struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumActiveBeacons(  );
}

void cppISteamParties_SteamParties002_GetBeaconByIndex( struct cppISteamParties_SteamParties002_GetBeaconByIndex_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetBeaconByIndex( params->unIndex );
}

void cppISteamParties_SteamParties002_GetBeaconDetails( struct cppISteamParties_SteamParties002_GetBeaconDetails_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    SteamPartyBeaconLocation_t lin_pLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pLocation, &lin_pLocation );
    params->_ret = iface->GetBeaconDetails( params->ulBeaconID, params->pSteamIDBeaconOwner, &lin_pLocation, params->pchMetadata, params->cchMetadata );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pLocation, params->pLocation );
}

void cppISteamParties_SteamParties002_JoinParty( struct cppISteamParties_SteamParties002_JoinParty_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->JoinParty( params->ulBeaconID );
}

void cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->GetNumAvailableBeaconLocations( params->puNumLocations );
}

void cppISteamParties_SteamParties002_GetAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    SteamPartyBeaconLocation_t lin_pLocationList;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pLocationList, &lin_pLocationList );
    params->_ret = iface->GetAvailableBeaconLocations( &lin_pLocationList, params->uMaxNumLocations );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pLocationList, params->pLocationList );
}

void cppISteamParties_SteamParties002_CreateBeacon( struct cppISteamParties_SteamParties002_CreateBeacon_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    SteamPartyBeaconLocation_t lin_pBeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( params->pBeaconLocation, &lin_pBeaconLocation );
    params->_ret = iface->CreateBeacon( params->unOpenSlots, &lin_pBeaconLocation, params->pchConnectString, params->pchMetadata );
    lin_to_win_struct_SteamPartyBeaconLocation_t_158( &lin_pBeaconLocation, params->pBeaconLocation );
}

void cppISteamParties_SteamParties002_OnReservationCompleted( struct cppISteamParties_SteamParties002_OnReservationCompleted_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    iface->OnReservationCompleted( params->ulBeacon, params->steamIDUser );
}

void cppISteamParties_SteamParties002_CancelReservation( struct cppISteamParties_SteamParties002_CancelReservation_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    iface->CancelReservation( params->ulBeacon, params->steamIDUser );
}

void cppISteamParties_SteamParties002_ChangeNumOpenSlots( struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->ChangeNumOpenSlots( params->ulBeacon, params->unOpenSlots );
}

void cppISteamParties_SteamParties002_DestroyBeacon( struct cppISteamParties_SteamParties002_DestroyBeacon_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    params->_ret = iface->DestroyBeacon( params->ulBeacon );
}

void cppISteamParties_SteamParties002_GetBeaconLocationData( struct cppISteamParties_SteamParties002_GetBeaconLocationData_params *params )
{
    struct cppISteamParties_SteamParties002 *iface = (struct cppISteamParties_SteamParties002 *)params->linux_side;
    SteamPartyBeaconLocation_t lin_BeaconLocation;
    win_to_lin_struct_SteamPartyBeaconLocation_t_158( &params->BeaconLocation, &lin_BeaconLocation );
    params->_ret = iface->GetBeaconLocationData( lin_BeaconLocation, params->eData, params->pchDataStringOut, params->cchDataStringOut );
}

#ifdef __cplusplus
}
#endif
