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

uint32 __thiscall winISteamParties_SteamParties002_GetNumActiveBeacons(struct w_steam_iface *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetNumActiveBeacons(_this->u_iface);
    return _ret;
}

PartyBeaconID_t __thiscall winISteamParties_SteamParties002_GetBeaconByIndex(struct w_steam_iface *_this, uint32 unIndex)
{
    PartyBeaconID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconByIndex(_this->u_iface, unIndex);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconDetails(struct w_steam_iface *_this, PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, winSteamPartyBeaconLocation_t_158 *pLocation, char *pchMetadata, int cchMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconDetails(_this->u_iface, ulBeaconID, pSteamIDBeaconOwner, pLocation, pchMetadata, cchMetadata);
    return _ret;
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_JoinParty(struct w_steam_iface *_this, PartyBeaconID_t ulBeaconID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_JoinParty(_this->u_iface, ulBeaconID);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetNumAvailableBeaconLocations(struct w_steam_iface *_this, uint32 *puNumLocations)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations(_this->u_iface, puNumLocations);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetAvailableBeaconLocations(struct w_steam_iface *_this, winSteamPartyBeaconLocation_t_158 *pLocationList, uint32 uMaxNumLocations)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetAvailableBeaconLocations(_this->u_iface, pLocationList, uMaxNumLocations);
    return _ret;
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_CreateBeacon(struct w_steam_iface *_this, uint32 unOpenSlots, winSteamPartyBeaconLocation_t_158 *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_CreateBeacon(_this->u_iface, unOpenSlots, pBeaconLocation, pchConnectString, pchMetadata);
    return _ret;
}

void __thiscall winISteamParties_SteamParties002_OnReservationCompleted(struct w_steam_iface *_this, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_OnReservationCompleted(_this->u_iface, ulBeacon, steamIDUser);
}

void __thiscall winISteamParties_SteamParties002_CancelReservation(struct w_steam_iface *_this, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_CancelReservation(_this->u_iface, ulBeacon, steamIDUser);
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_ChangeNumOpenSlots(struct w_steam_iface *_this, PartyBeaconID_t ulBeacon, uint32 unOpenSlots)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_ChangeNumOpenSlots(_this->u_iface, ulBeacon, unOpenSlots);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_DestroyBeacon(struct w_steam_iface *_this, PartyBeaconID_t ulBeacon)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_DestroyBeacon(_this->u_iface, ulBeacon);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconLocationData(struct w_steam_iface *_this, winSteamPartyBeaconLocation_t_158 BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconLocationData(_this->u_iface, BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
    return _ret;
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

