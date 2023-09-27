struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamParties_SteamParties002_GetNumActiveBeacons( struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params *params );

struct cppISteamParties_SteamParties002_GetBeaconByIndex_params
{
    void *linux_side;
    PartyBeaconID_t _ret;
    uint32 unIndex;
};
extern void cppISteamParties_SteamParties002_GetBeaconByIndex( struct cppISteamParties_SteamParties002_GetBeaconByIndex_params *params );

struct cppISteamParties_SteamParties002_GetBeaconDetails_params
{
    void *linux_side;
    bool _ret;
    PartyBeaconID_t ulBeaconID;
    CSteamID *pSteamIDBeaconOwner;
    winSteamPartyBeaconLocation_t_158 *pLocation;
    char *pchMetadata;
    int cchMetadata;
};
extern void cppISteamParties_SteamParties002_GetBeaconDetails( struct cppISteamParties_SteamParties002_GetBeaconDetails_params *params );

struct cppISteamParties_SteamParties002_JoinParty_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PartyBeaconID_t ulBeaconID;
};
extern void cppISteamParties_SteamParties002_JoinParty( struct cppISteamParties_SteamParties002_JoinParty_params *params );

struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params
{
    void *linux_side;
    bool _ret;
    uint32 *puNumLocations;
};
extern void cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params *params );

struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params
{
    void *linux_side;
    bool _ret;
    winSteamPartyBeaconLocation_t_158 *pLocationList;
    uint32 uMaxNumLocations;
};
extern void cppISteamParties_SteamParties002_GetAvailableBeaconLocations( struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params *params );

struct cppISteamParties_SteamParties002_CreateBeacon_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    uint32 unOpenSlots;
    winSteamPartyBeaconLocation_t_158 *pBeaconLocation;
    const char *pchConnectString;
    const char *pchMetadata;
};
extern void cppISteamParties_SteamParties002_CreateBeacon( struct cppISteamParties_SteamParties002_CreateBeacon_params *params );

struct cppISteamParties_SteamParties002_OnReservationCompleted_params
{
    void *linux_side;
    PartyBeaconID_t ulBeacon;
    CSteamID steamIDUser;
};
extern void cppISteamParties_SteamParties002_OnReservationCompleted( struct cppISteamParties_SteamParties002_OnReservationCompleted_params *params );

struct cppISteamParties_SteamParties002_CancelReservation_params
{
    void *linux_side;
    PartyBeaconID_t ulBeacon;
    CSteamID steamIDUser;
};
extern void cppISteamParties_SteamParties002_CancelReservation( struct cppISteamParties_SteamParties002_CancelReservation_params *params );

struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    PartyBeaconID_t ulBeacon;
    uint32 unOpenSlots;
};
extern void cppISteamParties_SteamParties002_ChangeNumOpenSlots( struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params *params );

struct cppISteamParties_SteamParties002_DestroyBeacon_params
{
    void *linux_side;
    bool _ret;
    PartyBeaconID_t ulBeacon;
};
extern void cppISteamParties_SteamParties002_DestroyBeacon( struct cppISteamParties_SteamParties002_DestroyBeacon_params *params );

struct cppISteamParties_SteamParties002_GetBeaconLocationData_params
{
    void *linux_side;
    bool _ret;
    winSteamPartyBeaconLocation_t_158 BeaconLocation;
    ESteamPartyBeaconLocationData eData;
    char *pchDataStringOut;
    int cchDataStringOut;
};
extern void cppISteamParties_SteamParties002_GetBeaconLocationData( struct cppISteamParties_SteamParties002_GetBeaconLocationData_params *params );

