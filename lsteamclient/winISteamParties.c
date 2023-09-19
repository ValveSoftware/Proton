/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamParties_SteamParties002.h"

DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetNumActiveBeacons, 4)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetBeaconByIndex, 8)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetBeaconDetails, 28)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_JoinParty, 12)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetNumAvailableBeaconLocations, 8)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetAvailableBeaconLocations, 12)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_CreateBeacon, 20)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_OnReservationCompleted, 20)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_CancelReservation, 20)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_ChangeNumOpenSlots, 16)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_DestroyBeacon, 12)
DEFINE_THISCALL_WRAPPER(winISteamParties_SteamParties002_GetBeaconLocationData, 28)

uint32_t __thiscall winISteamParties_SteamParties002_GetNumActiveBeacons(struct w_steam_iface *_this)
{
    struct cppISteamParties_SteamParties002_GetNumActiveBeacons_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetNumActiveBeacons( &params );
    return params._ret;
}

uint64_t __thiscall winISteamParties_SteamParties002_GetBeaconByIndex(struct w_steam_iface *_this, uint32_t unIndex)
{
    struct cppISteamParties_SteamParties002_GetBeaconByIndex_params params =
    {
        .linux_side = _this->u_iface,
        .unIndex = unIndex,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetBeaconByIndex( &params );
    return params._ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconDetails(struct w_steam_iface *_this, uint64_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, winSteamPartyBeaconLocation_t_158 *pLocation, char *pchMetadata, int32_t cchMetadata)
{
    struct cppISteamParties_SteamParties002_GetBeaconDetails_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeaconID = ulBeaconID,
        .pSteamIDBeaconOwner = pSteamIDBeaconOwner,
        .pLocation = pLocation,
        .pchMetadata = pchMetadata,
        .cchMetadata = cchMetadata,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetBeaconDetails( &params );
    return params._ret;
}

uint64_t __thiscall winISteamParties_SteamParties002_JoinParty(struct w_steam_iface *_this, uint64_t ulBeaconID)
{
    struct cppISteamParties_SteamParties002_JoinParty_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeaconID = ulBeaconID,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_JoinParty( &params );
    return params._ret;
}

bool __thiscall winISteamParties_SteamParties002_GetNumAvailableBeaconLocations(struct w_steam_iface *_this, uint32_t *puNumLocations)
{
    struct cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations_params params =
    {
        .linux_side = _this->u_iface,
        .puNumLocations = puNumLocations,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations( &params );
    return params._ret;
}

bool __thiscall winISteamParties_SteamParties002_GetAvailableBeaconLocations(struct w_steam_iface *_this, winSteamPartyBeaconLocation_t_158 *pLocationList, uint32_t uMaxNumLocations)
{
    struct cppISteamParties_SteamParties002_GetAvailableBeaconLocations_params params =
    {
        .linux_side = _this->u_iface,
        .pLocationList = pLocationList,
        .uMaxNumLocations = uMaxNumLocations,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetAvailableBeaconLocations( &params );
    return params._ret;
}

uint64_t __thiscall winISteamParties_SteamParties002_CreateBeacon(struct w_steam_iface *_this, uint32_t unOpenSlots, winSteamPartyBeaconLocation_t_158 *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)
{
    struct cppISteamParties_SteamParties002_CreateBeacon_params params =
    {
        .linux_side = _this->u_iface,
        .unOpenSlots = unOpenSlots,
        .pBeaconLocation = pBeaconLocation,
        .pchConnectString = pchConnectString,
        .pchMetadata = pchMetadata,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_CreateBeacon( &params );
    return params._ret;
}

void __thiscall winISteamParties_SteamParties002_OnReservationCompleted(struct w_steam_iface *_this, uint64_t ulBeacon, CSteamID steamIDUser)
{
    struct cppISteamParties_SteamParties002_OnReservationCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeacon = ulBeacon,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_OnReservationCompleted( &params );
}

void __thiscall winISteamParties_SteamParties002_CancelReservation(struct w_steam_iface *_this, uint64_t ulBeacon, CSteamID steamIDUser)
{
    struct cppISteamParties_SteamParties002_CancelReservation_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeacon = ulBeacon,
        .steamIDUser = steamIDUser,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_CancelReservation( &params );
}

uint64_t __thiscall winISteamParties_SteamParties002_ChangeNumOpenSlots(struct w_steam_iface *_this, uint64_t ulBeacon, uint32_t unOpenSlots)
{
    struct cppISteamParties_SteamParties002_ChangeNumOpenSlots_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeacon = ulBeacon,
        .unOpenSlots = unOpenSlots,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_ChangeNumOpenSlots( &params );
    return params._ret;
}

bool __thiscall winISteamParties_SteamParties002_DestroyBeacon(struct w_steam_iface *_this, uint64_t ulBeacon)
{
    struct cppISteamParties_SteamParties002_DestroyBeacon_params params =
    {
        .linux_side = _this->u_iface,
        .ulBeacon = ulBeacon,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_DestroyBeacon( &params );
    return params._ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconLocationData(struct w_steam_iface *_this, winSteamPartyBeaconLocation_t_158 BeaconLocation, uint32_t eData, char *pchDataStringOut, int32_t cchDataStringOut)
{
    struct cppISteamParties_SteamParties002_GetBeaconLocationData_params params =
    {
        .linux_side = _this->u_iface,
        .BeaconLocation = BeaconLocation,
        .eData = eData,
        .pchDataStringOut = pchDataStringOut,
        .cchDataStringOut = cchDataStringOut,
    };
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_GetBeaconLocationData( &params );
    return params._ret;
}

extern vtable_ptr winISteamParties_SteamParties002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamParties_SteamParties002,
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetNumActiveBeacons)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetBeaconByIndex)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetBeaconDetails)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_JoinParty)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetNumAvailableBeaconLocations)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetAvailableBeaconLocations)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_CreateBeacon)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_OnReservationCompleted)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_CancelReservation)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_ChangeNumOpenSlots)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_DestroyBeacon)
        VTABLE_ADD_FUNC(winISteamParties_SteamParties002_GetBeaconLocationData)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamParties_SteamParties002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamParties002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamParties_SteamParties002_vtable, 12, "SteamParties002");
    r->u_iface = u_iface;
    return r;
}

