/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamGameStats_SteamGameStats001.h"

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_GetNewSession, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_EndSession, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeString, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddNewRow, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitRow, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitOutstandingRows, 12)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAtributeString, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeFloat, 20)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64, 24)
DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt64, 24)

SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_GetNewSession(struct w_steam_iface *_this, int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_GetNewSession(_this->u_iface, nAccountType, ulAccountID, nAppID, rtTimeStarted);
    return _ret;
}

SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_EndSession(struct w_steam_iface *_this, uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)
{
    SteamAPICall_t _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_EndSession(_this->u_iface, ulSessionID, rtTimeEnded, nReasonCode);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, int32 nData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt(_this->u_iface, ulSessionID, pstrName, nData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeString(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, const char *pstrData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddSessionAttributeString(_this->u_iface, ulSessionID, pstrName, pstrData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, float fData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(_this->u_iface, ulSessionID, pstrName, fData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddNewRow(struct w_steam_iface *_this, uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddNewRow(_this->u_iface, pulRowID, ulSessionID, pstrTableName);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_CommitRow(struct w_steam_iface *_this, uint64 ulRowID)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_CommitRow(_this->u_iface, ulRowID);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_CommitOutstandingRows(struct w_steam_iface *_this, uint64 ulSessionID)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_CommitOutstandingRows(_this->u_iface, ulSessionID);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, int32 nData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddRowAttributeInt(_this->u_iface, ulRowID, pstrName, nData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAtributeString(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, const char *pstrData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddRowAtributeString(_this->u_iface, ulRowID, pstrName, pstrData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeFloat(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, float fData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat(_this->u_iface, ulRowID, pstrName, fData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(struct w_steam_iface *_this, uint64 ulSessionID, const char *pstrName, int64 llData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(_this->u_iface, ulSessionID, pstrName, llData);
    return _ret;
}

EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt64(struct w_steam_iface *_this, uint64 ulRowID, const char *pstrName, int64 llData)
{
    EResult _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64(_this->u_iface, ulRowID, pstrName, llData);
    return _ret;
}

extern vtable_ptr winISteamGameStats_SteamGameStats001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamGameStats_SteamGameStats001,
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_GetNewSession)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_EndSession)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeString)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddNewRow)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_CommitRow)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_CommitOutstandingRows)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeInt)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAtributeString)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeFloat)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64)
        VTABLE_ADD_FUNC(winISteamGameStats_SteamGameStats001_AddRowAttributeInt64)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamGameStats_SteamGameStats001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamGameStats001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamGameStats_SteamGameStats001_vtable, 13, "SteamGameStats001");
    r->u_iface = u_iface;
    return r;
}

