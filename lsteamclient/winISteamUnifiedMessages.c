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

#include "cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001.h"

typedef struct __winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001;

DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod, 24)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo, 20)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData, 24)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod, 12)
DEFINE_THISCALL_WRAPPER(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification, 16)

ClientUnifiedMessageHandle __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *_this, const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext)
{
    ClientUnifiedMessageHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(_this->linux_side, pchServiceMethod, pRequestBuffer, unRequestBufferSize, unContext);
    return _ret;
}

bool __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *_this, ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(_this->linux_side, hHandle, punResponseSize, peResult);
    return _ret;
}

bool __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *_this, ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(_this->linux_side, hHandle, pResponseBuffer, unResponseBufferSize, bAutoRelease);
    return _ret;
}

bool __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *_this, ClientUnifiedMessageHandle hHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(_this->linux_side, hHandle);
    return _ret;
}

bool __thiscall winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *_this, const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(_this->linux_side, pchServiceNotification, pNotificationBuffer, unNotificationBufferSize);
    return _ret;
}

extern vtable_ptr winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod)
        VTABLE_ADD_FUNC(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification)
    );
#ifndef __GNUC__
}
#endif

winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *create_winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001(void *linux_side)
{
    winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *r = alloc_mem_for_iface(sizeof(winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001), "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_vtable, 5, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001");
    r->linux_side = linux_side;
    return r;
}

