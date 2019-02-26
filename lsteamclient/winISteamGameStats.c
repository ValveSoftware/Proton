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

#include "cppISteamGameStats_SteamGameStats001.h"

typedef struct __winISteamGameStats_SteamGameStats001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamGameStats_SteamGameStats001;

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_GetNewSession, 24)
SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_GetNewSession(winISteamGameStats_SteamGameStats001 *_this, int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_GetNewSession(_this->linux_side, nAccountType, ulAccountID, nAppID, rtTimeStarted);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_EndSession, 20)
SteamAPICall_t __thiscall winISteamGameStats_SteamGameStats001_EndSession(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_EndSession(_this->linux_side, ulSessionID, rtTimeEnded, nReasonCode);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID, const char * pstrName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt(_this->linux_side, ulSessionID, pstrName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeString, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeString(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID, const char * pstrName, const char * pstrData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddSessionAttributeString(_this->linux_side, ulSessionID, pstrName, pstrData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID, const char * pstrName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(_this->linux_side, ulSessionID, pstrName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddNewRow, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddNewRow(winISteamGameStats_SteamGameStats001 *_this, uint64 * pulRowID, uint64 ulSessionID, const char * pstrTableName)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddNewRow(_this->linux_side, pulRowID, ulSessionID, pstrTableName);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitRow, 12)
EResult __thiscall winISteamGameStats_SteamGameStats001_CommitRow(winISteamGameStats_SteamGameStats001 *_this, uint64 ulRowID)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_CommitRow(_this->linux_side, ulRowID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_CommitOutstandingRows, 12)
EResult __thiscall winISteamGameStats_SteamGameStats001_CommitOutstandingRows(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_CommitOutstandingRows(_this->linux_side, ulSessionID);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt(winISteamGameStats_SteamGameStats001 *_this, uint64 ulRowID, const char * pstrName, int32 nData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddRowAttributeInt(_this->linux_side, ulRowID, pstrName, nData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAtributeString, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAtributeString(winISteamGameStats_SteamGameStats001 *_this, uint64 ulRowID, const char * pstrName, const char * pstrData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddRowAtributeString(_this->linux_side, ulRowID, pstrName, pstrData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeFloat, 20)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeFloat(winISteamGameStats_SteamGameStats001 *_this, uint64 ulRowID, const char * pstrName, float fData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat(_this->linux_side, ulRowID, pstrName, fData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64, 24)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(winISteamGameStats_SteamGameStats001 *_this, uint64 ulSessionID, const char * pstrName, int64 llData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(_this->linux_side, ulSessionID, pstrName, llData);
}

DEFINE_THISCALL_WRAPPER(winISteamGameStats_SteamGameStats001_AddRowAttributeInt64, 24)
EResult __thiscall winISteamGameStats_SteamGameStats001_AddRowAttributeInt64(winISteamGameStats_SteamGameStats001 *_this, uint64 ulRowID, const char * pstrName, int64 llData)
{
    TRACE("%p\n", _this);
    return cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64(_this->linux_side, ulRowID, pstrName, llData);
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

winISteamGameStats_SteamGameStats001 *create_winISteamGameStats_SteamGameStats001(void *linux_side)
{
    winISteamGameStats_SteamGameStats001 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winISteamGameStats_SteamGameStats001));
    TRACE("-> %p\n", r);
    r->vtable = &winISteamGameStats_SteamGameStats001_vtable;
    r->linux_side = linux_side;
    return r;
}

