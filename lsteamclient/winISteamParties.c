/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamParties_SteamParties002.h"

typedef struct __winISteamParties_SteamParties002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamParties_SteamParties002;

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

uint32 __thiscall winISteamParties_SteamParties002_GetNumActiveBeacons(winISteamParties_SteamParties002 *_this)
{
    uint32 _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetNumActiveBeacons(_this->linux_side);
    return _ret;
}

PartyBeaconID_t __thiscall winISteamParties_SteamParties002_GetBeaconByIndex(winISteamParties_SteamParties002 *_this, uint32 unIndex)
{
    PartyBeaconID_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconByIndex(_this->linux_side, unIndex);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconDetails(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeaconID, CSteamID *pSteamIDBeaconOwner, winSteamPartyBeaconLocation_t_158 *pLocation, char *pchMetadata, int cchMetadata)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconDetails(_this->linux_side, ulBeaconID, pSteamIDBeaconOwner, pLocation, pchMetadata, cchMetadata);
    return _ret;
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_JoinParty(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeaconID)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_JoinParty(_this->linux_side, ulBeaconID);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetNumAvailableBeaconLocations(winISteamParties_SteamParties002 *_this, uint32 *puNumLocations)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetNumAvailableBeaconLocations(_this->linux_side, puNumLocations);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetAvailableBeaconLocations(winISteamParties_SteamParties002 *_this, winSteamPartyBeaconLocation_t_158 *pLocationList, uint32 uMaxNumLocations)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetAvailableBeaconLocations(_this->linux_side, pLocationList, uMaxNumLocations);
    return _ret;
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_CreateBeacon(winISteamParties_SteamParties002 *_this, uint32 unOpenSlots, winSteamPartyBeaconLocation_t_158 *pBeaconLocation, const char *pchConnectString, const char *pchMetadata)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_CreateBeacon(_this->linux_side, unOpenSlots, pBeaconLocation, pchConnectString, pchMetadata);
    return _ret;
}

void __thiscall winISteamParties_SteamParties002_OnReservationCompleted(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_OnReservationCompleted(_this->linux_side, ulBeacon, steamIDUser);
}

void __thiscall winISteamParties_SteamParties002_CancelReservation(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeacon, CSteamID steamIDUser)
{
    TRACE("%p\n", _this);
    cppISteamParties_SteamParties002_CancelReservation(_this->linux_side, ulBeacon, steamIDUser);
}

SteamAPICall_t __thiscall winISteamParties_SteamParties002_ChangeNumOpenSlots(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeacon, uint32 unOpenSlots)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_ChangeNumOpenSlots(_this->linux_side, ulBeacon, unOpenSlots);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_DestroyBeacon(winISteamParties_SteamParties002 *_this, PartyBeaconID_t ulBeacon)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_DestroyBeacon(_this->linux_side, ulBeacon);
    return _ret;
}

bool __thiscall winISteamParties_SteamParties002_GetBeaconLocationData(winISteamParties_SteamParties002 *_this, winSteamPartyBeaconLocation_t_158 BeaconLocation, ESteamPartyBeaconLocationData eData, char *pchDataStringOut, int cchDataStringOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamParties_SteamParties002_GetBeaconLocationData(_this->linux_side, BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
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

winISteamParties_SteamParties002 *create_winISteamParties_SteamParties002(void *linux_side)
{
    winISteamParties_SteamParties002 *r = alloc_mem_for_iface(sizeof(winISteamParties_SteamParties002), "SteamParties002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamParties_SteamParties002_vtable, 12, "SteamParties002");
    r->linux_side = linux_side;
    return r;
}

