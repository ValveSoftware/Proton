/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamParties_SteamParties002_GetNumActiveBeacons( struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params *params );

struct cppISteamParties_SteamParties002_GetBeaconByIndex_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unIndex;
};
extern void cppISteamParties_SteamParties002_GetBeaconByIndex( struct cppISteamParties_SteamParties002_GetBeaconByIndex_params *params );

struct cppISteamParties_SteamParties002_GetBeaconDetails_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulBeaconID;
    CSteamID *pSteamIDBeaconOwner;
    w_SteamPartyBeaconLocation_t *pLocation;
    char *pchMetadata;
    int32_t cchMetadata;
};
extern void cppISteamParties_SteamParties002_GetBeaconDetails( struct cppISteamParties_SteamParties002_GetBeaconDetails_params *params );

struct cppISteamParties_SteamParties002_JoinParty_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t ulBeaconID;
};
extern void cppISteamParties_SteamParties002_JoinParty( struct cppISteamParties_SteamParties002_JoinParty_params *params );

struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params
{
    void *linux_side;
    bool _ret;
    uint32_t *puNumLocations;
};
extern void cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params );

struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params
{
    void *linux_side;
    bool _ret;
    w_SteamPartyBeaconLocation_t *pLocationList;
    uint32_t uMaxNumLocations;
};
extern void cppISteamParties_SteamParties002_GetAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params );

struct cppISteamParties_SteamParties002_CreateBeacon_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unOpenSlots;
    w_SteamPartyBeaconLocation_t *pBeaconLocation;
    const char *pchConnectString;
    const char *pchMetadata;
};
extern void cppISteamParties_SteamParties002_CreateBeacon( struct cppISteamParties_SteamParties002_CreateBeacon_params *params );

struct cppISteamParties_SteamParties002_OnReservationCompleted_params
{
    void *linux_side;
    uint64_t ulBeacon;
    CSteamID steamIDUser;
};
extern void cppISteamParties_SteamParties002_OnReservationCompleted( struct cppISteamParties_SteamParties002_OnReservationCompleted_params *params );

struct cppISteamParties_SteamParties002_CancelReservation_params
{
    void *linux_side;
    uint64_t ulBeacon;
    CSteamID steamIDUser;
};
extern void cppISteamParties_SteamParties002_CancelReservation( struct cppISteamParties_SteamParties002_CancelReservation_params *params );

struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t ulBeacon;
    uint32_t unOpenSlots;
};
extern void cppISteamParties_SteamParties002_ChangeNumOpenSlots( struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params *params );

struct cppISteamParties_SteamParties002_DestroyBeacon_params
{
    void *linux_side;
    bool _ret;
    uint64_t ulBeacon;
};
extern void cppISteamParties_SteamParties002_DestroyBeacon( struct cppISteamParties_SteamParties002_DestroyBeacon_params *params );

struct cppISteamParties_SteamParties002_GetBeaconLocationData_params
{
    void *linux_side;
    bool _ret;
    w_SteamPartyBeaconLocation_t BeaconLocation;
    uint32_t eData;
    char *pchDataStringOut;
    int32_t cchDataStringOut;
};
extern void cppISteamParties_SteamParties002_GetBeaconLocationData( struct cppISteamParties_SteamParties002_GetBeaconLocationData_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
