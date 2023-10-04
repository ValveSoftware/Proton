/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils002_GetAPICallResult, 28)

uint32_t __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils002_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils002_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils002_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils002_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils002_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils002_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils002_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils002_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils002_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils002_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils002_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils002_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils002_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils002_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils002_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils002_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils002_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils002_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils002_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils002_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils002_GetAPICallResult, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils002_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils002, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils002_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils002,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils002_GetAPICallResult)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils002_vtable, 14, "SteamUtils002");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils004_IsOverlayEnabled, 4)

uint32_t __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils004_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils004_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils004_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils004_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils004_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils004_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils004_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils004_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils004_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils004_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils004_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils004_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils004_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils004_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils004_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils004_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils004_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils004_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils004_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils004_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils004_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils004_IsOverlayEnabled, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils004_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils004, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils004_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils004,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils004_IsOverlayEnabled)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils004(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils004");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils004_vtable, 18, "SteamUtils004");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_ShowGamepadTextInput, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput, 12)

uint32_t __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils005_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils005_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils005_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils005_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils005_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils005_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils005_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils005_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils005_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils005_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils005_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils005_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils005_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils005_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils005_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils005_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils005_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax)
{
    struct ISteamUtils_SteamUtils005_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils005_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils005_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils005_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils005, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils005_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils005,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils005_GetEnteredGamepadTextInput)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils005(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils005");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils005_vtable, 23, "SteamUtils005");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_ShowGamepadTextInput, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils006_IsSteamRunningInVR, 4)

uint32_t __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils006_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils006_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils006_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils006_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils006_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils006_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils006_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils006_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils006_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils006_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils006_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils006_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils006_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils006_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils006_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils006_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils006_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax)
{
    struct ISteamUtils_SteamUtils006_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils006_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils006_GetSteamUILanguage(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_GetSteamUILanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_GetSteamUILanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils006_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils006_IsSteamRunningInVR_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils006_IsSteamRunningInVR, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils006_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils006, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils006_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils006,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils006_IsSteamRunningInVR)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils006(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils006");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils006_vtable, 25, "SteamUtils006");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils007_SetOverlayNotificationInset, 12)

uint32_t __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils007_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils007_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils007_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils007_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils007_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils007_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils007_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils007_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils007_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils007_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils007_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils007_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils007_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils007_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils007_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText)
{
    struct ISteamUtils_SteamUtils007_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
        .pchExistingText = pchExistingText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils007_GetSteamUILanguage(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_GetSteamUILanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_GetSteamUILanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils007_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils007_IsSteamRunningInVR_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_IsSteamRunningInVR, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils007_SetOverlayNotificationInset(struct w_steam_iface *_this, int32_t nHorizontalInset, int32_t nVerticalInset)
{
    struct ISteamUtils_SteamUtils007_SetOverlayNotificationInset_params params =
    {
        .linux_side = _this->u_iface,
        .nHorizontalInset = nHorizontalInset,
        .nVerticalInset = nVerticalInset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils007_SetOverlayNotificationInset, &params );
}

extern vtable_ptr winISteamUtils_SteamUtils007_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils007, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils007_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils007,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils007_SetOverlayNotificationInset)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils007(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils007");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils007_vtable, 26, "SteamUtils007");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils008_StartVRDashboard, 4)

uint32_t __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils008_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils008_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils008_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils008_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils008_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils008_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils008_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils008_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils008_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils008_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils008_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils008_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils008_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils008_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils008_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText)
{
    struct ISteamUtils_SteamUtils008_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
        .pchExistingText = pchExistingText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils008_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils008_GetSteamUILanguage(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_GetSteamUILanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_GetSteamUILanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils008_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_IsSteamRunningInVR_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_IsSteamRunningInVR, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils008_SetOverlayNotificationInset(struct w_steam_iface *_this, int32_t nHorizontalInset, int32_t nVerticalInset)
{
    struct ISteamUtils_SteamUtils008_SetOverlayNotificationInset_params params =
    {
        .linux_side = _this->u_iface,
        .nHorizontalInset = nHorizontalInset,
        .nVerticalInset = nVerticalInset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_SetOverlayNotificationInset, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils008_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_IsSteamInBigPictureMode_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_IsSteamInBigPictureMode, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils008_StartVRDashboard(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils008_StartVRDashboard_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils008_StartVRDashboard, &params );
}

extern vtable_ptr winISteamUtils_SteamUtils008_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils008, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils008_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils008,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils008_StartVRDashboard)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils008(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils008");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils008_vtable, 28, "SteamUtils008");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_StartVRDashboard, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_IsSteamChinaLauncher, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_InitFilterText, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_FilterText, 20)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils009_GetIPv6ConnectivityState, 8)

uint32_t __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils009_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils009_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils009_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils009_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils009_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils009_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils009_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils009_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils009_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils009_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils009_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils009_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText)
{
    struct ISteamUtils_SteamUtils009_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
        .pchExistingText = pchExistingText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils009_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils009_GetSteamUILanguage(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_GetSteamUILanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetSteamUILanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_IsSteamRunningInVR_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsSteamRunningInVR, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetOverlayNotificationInset(struct w_steam_iface *_this, int32_t nHorizontalInset, int32_t nVerticalInset)
{
    struct ISteamUtils_SteamUtils009_SetOverlayNotificationInset_params params =
    {
        .linux_side = _this->u_iface,
        .nHorizontalInset = nHorizontalInset,
        .nVerticalInset = nVerticalInset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_SetOverlayNotificationInset, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_IsSteamInBigPictureMode_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsSteamInBigPictureMode, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_StartVRDashboard(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_StartVRDashboard_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_StartVRDashboard, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils009_IsSteamChinaLauncher(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_IsSteamChinaLauncher_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_IsSteamChinaLauncher, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils009_InitFilterText(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils009_InitFilterText_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_InitFilterText, &params );
    return params._ret;
}

int32_t __thiscall winISteamUtils_SteamUtils009_FilterText(struct w_steam_iface *_this, char *pchOutFilteredText, uint32_t nByteSizeOutFilteredText, const char *pchInputMessage, int8_t bLegalOnly)
{
    struct ISteamUtils_SteamUtils009_FilterText_params params =
    {
        .linux_side = _this->u_iface,
        .pchOutFilteredText = pchOutFilteredText,
        .nByteSizeOutFilteredText = nByteSizeOutFilteredText,
        .pchInputMessage = pchInputMessage,
        .bLegalOnly = bLegalOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_FilterText, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils009_GetIPv6ConnectivityState(struct w_steam_iface *_this, uint32_t eProtocol)
{
    struct ISteamUtils_SteamUtils009_GetIPv6ConnectivityState_params params =
    {
        .linux_side = _this->u_iface,
        .eProtocol = eProtocol,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils009_GetIPv6ConnectivityState, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils009_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils009, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils009_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils009,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_StartVRDashboard)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_SetVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_IsSteamChinaLauncher)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_InitFilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_FilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils009_GetIPv6ConnectivityState)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils009(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils009");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils009_vtable, 34, "SteamUtils009");
    r->u_iface = u_iface;
    return r;
}

DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSecondsSinceAppActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetConnectedUniverse, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetServerRealTime, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPCountry, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetImageSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetImageRGBA, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetCSERIPPort, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetCurrentBatteryPower, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAppID, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetOverlayNotificationPosition, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsAPICallCompleted, 16)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAPICallFailureReason, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetAPICallResult, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_RunFrame, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPCCallCount, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetWarningMessageHook, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsOverlayEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_BOverlayNeedsPresent, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_CheckFileSignature, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_ShowGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetSteamUILanguage, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamRunningInVR, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetOverlayNotificationInset, 12)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamInBigPictureMode, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_StartVRDashboard, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamChinaLauncher, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_InitFilterText, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_FilterText, 28)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_GetIPv6ConnectivityState, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck, 4)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput, 24)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_SetGameLauncherMode, 8)
DEFINE_THISCALL_WRAPPER(winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput, 4)

uint32_t __thiscall winISteamUtils_SteamUtils010_GetSecondsSinceAppActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetSecondsSinceAppActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetSecondsSinceAppActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetSecondsSinceComputerActive_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetSecondsSinceComputerActive, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetConnectedUniverse(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetConnectedUniverse_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetConnectedUniverse, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetServerRealTime(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetServerRealTime_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetServerRealTime, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils010_GetIPCountry(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetIPCountry_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetIPCountry, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_GetImageSize(struct w_steam_iface *_this, int32_t iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct ISteamUtils_SteamUtils010_GetImageSize_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetImageSize, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_GetImageRGBA(struct w_steam_iface *_this, int32_t iImage, uint8_t *pubDest, int32_t nDestBufferSize)
{
    struct ISteamUtils_SteamUtils010_GetImageRGBA_params params =
    {
        .linux_side = _this->u_iface,
        .iImage = iImage,
        .pubDest = pubDest,
        .nDestBufferSize = nDestBufferSize,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetImageRGBA, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_GetCSERIPPort(struct w_steam_iface *_this, uint32_t *unIP, uint16_t *usPort)
{
    struct ISteamUtils_SteamUtils010_GetCSERIPPort_params params =
    {
        .linux_side = _this->u_iface,
        .unIP = unIP,
        .usPort = usPort,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetCSERIPPort, &params );
    return params._ret;
}

uint8_t __thiscall winISteamUtils_SteamUtils010_GetCurrentBatteryPower(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetCurrentBatteryPower_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetCurrentBatteryPower, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetAppID(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetAppID_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetAppID, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetOverlayNotificationPosition(struct w_steam_iface *_this, uint32_t eNotificationPosition)
{
    struct ISteamUtils_SteamUtils010_SetOverlayNotificationPosition_params params =
    {
        .linux_side = _this->u_iface,
        .eNotificationPosition = eNotificationPosition,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_SetOverlayNotificationPosition, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsAPICallCompleted(struct w_steam_iface *_this, uint64_t hSteamAPICall, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils010_IsAPICallCompleted_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsAPICallCompleted, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetAPICallFailureReason(struct w_steam_iface *_this, uint64_t hSteamAPICall)
{
    struct ISteamUtils_SteamUtils010_GetAPICallFailureReason_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetAPICallFailureReason, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_GetAPICallResult(struct w_steam_iface *_this, uint64_t hSteamAPICall, void *pCallback, int32_t cubCallback, int32_t iCallbackExpected, int8_t *pbFailed)
{
    struct ISteamUtils_SteamUtils010_GetAPICallResult_params params =
    {
        .linux_side = _this->u_iface,
        .hSteamAPICall = hSteamAPICall,
        .pCallback = pCallback,
        .cubCallback = cubCallback,
        .iCallbackExpected = iCallbackExpected,
        .pbFailed = pbFailed,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetAPICallResult, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_RunFrame(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_RunFrame_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_RunFrame, &params );
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetIPCCallCount(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetIPCCallCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetIPCCallCount, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetWarningMessageHook(struct w_steam_iface *_this, void (*W_CDECL pFunction)(int32_t, const char *))
{
    struct ISteamUtils_SteamUtils010_SetWarningMessageHook_params params =
    {
        .linux_side = _this->u_iface,
        .pFunction = pFunction,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_SetWarningMessageHook, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsOverlayEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsOverlayEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsOverlayEnabled, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_BOverlayNeedsPresent(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_BOverlayNeedsPresent_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_BOverlayNeedsPresent, &params );
    return params._ret;
}

uint64_t __thiscall winISteamUtils_SteamUtils010_CheckFileSignature(struct w_steam_iface *_this, const char *szFileName)
{
    struct ISteamUtils_SteamUtils010_CheckFileSignature_params params =
    {
        .linux_side = _this->u_iface,
        .szFileName = szFileName,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_CheckFileSignature, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_ShowGamepadTextInput(struct w_steam_iface *_this, uint32_t eInputMode, uint32_t eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText)
{
    struct ISteamUtils_SteamUtils010_ShowGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eInputMode = eInputMode,
        .eLineInputMode = eLineInputMode,
        .pchDescription = pchDescription,
        .unCharMax = unCharMax,
        .pchExistingText = pchExistingText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_ShowGamepadTextInput, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextLength_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetEnteredGamepadTextLength, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput(struct w_steam_iface *_this, char *pchText, uint32_t cchText)
{
    struct ISteamUtils_SteamUtils010_GetEnteredGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .pchText = pchText,
        .cchText = cchText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetEnteredGamepadTextInput, &params );
    return params._ret;
}

const char * __thiscall winISteamUtils_SteamUtils010_GetSteamUILanguage(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_GetSteamUILanguage_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetSteamUILanguage, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsSteamRunningInVR(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsSteamRunningInVR_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsSteamRunningInVR, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetOverlayNotificationInset(struct w_steam_iface *_this, int32_t nHorizontalInset, int32_t nVerticalInset)
{
    struct ISteamUtils_SteamUtils010_SetOverlayNotificationInset_params params =
    {
        .linux_side = _this->u_iface,
        .nHorizontalInset = nHorizontalInset,
        .nVerticalInset = nVerticalInset,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_SetOverlayNotificationInset, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsSteamInBigPictureMode(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsSteamInBigPictureMode_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsSteamInBigPictureMode, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_StartVRDashboard(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_StartVRDashboard_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_StartVRDashboard, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled(struct w_steam_iface *_this, int8_t bEnabled)
{
    struct ISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled_params params =
    {
        .linux_side = _this->u_iface,
        .bEnabled = bEnabled,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsSteamChinaLauncher(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsSteamChinaLauncher_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsSteamChinaLauncher, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_InitFilterText(struct w_steam_iface *_this, uint32_t unFilterOptions)
{
    struct ISteamUtils_SteamUtils010_InitFilterText_params params =
    {
        .linux_side = _this->u_iface,
        .unFilterOptions = unFilterOptions,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_InitFilterText, &params );
    return params._ret;
}

int32_t __thiscall winISteamUtils_SteamUtils010_FilterText(struct w_steam_iface *_this, uint32_t eContext, CSteamID sourceSteamID, const char *pchInputMessage, char *pchOutFilteredText, uint32_t nByteSizeOutFilteredText)
{
    struct ISteamUtils_SteamUtils010_FilterText_params params =
    {
        .linux_side = _this->u_iface,
        .eContext = eContext,
        .sourceSteamID = sourceSteamID,
        .pchInputMessage = pchInputMessage,
        .pchOutFilteredText = pchOutFilteredText,
        .nByteSizeOutFilteredText = nByteSizeOutFilteredText,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_FilterText, &params );
    return params._ret;
}

uint32_t __thiscall winISteamUtils_SteamUtils010_GetIPv6ConnectivityState(struct w_steam_iface *_this, uint32_t eProtocol)
{
    struct ISteamUtils_SteamUtils010_GetIPv6ConnectivityState_params params =
    {
        .linux_side = _this->u_iface,
        .eProtocol = eProtocol,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_GetIPv6ConnectivityState, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck, &params );
    return params._ret;
}

int8_t __thiscall winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput(struct w_steam_iface *_this, uint32_t eKeyboardMode, int32_t nTextFieldXPosition, int32_t nTextFieldYPosition, int32_t nTextFieldWidth, int32_t nTextFieldHeight)
{
    struct ISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
        .eKeyboardMode = eKeyboardMode,
        .nTextFieldXPosition = nTextFieldXPosition,
        .nTextFieldYPosition = nTextFieldYPosition,
        .nTextFieldWidth = nTextFieldWidth,
        .nTextFieldHeight = nTextFieldHeight,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput, &params );
    return params._ret;
}

void __thiscall winISteamUtils_SteamUtils010_SetGameLauncherMode(struct w_steam_iface *_this, int8_t bLauncherMode)
{
    struct ISteamUtils_SteamUtils010_SetGameLauncherMode_params params =
    {
        .linux_side = _this->u_iface,
        .bLauncherMode = bLauncherMode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_SetGameLauncherMode, &params );
}

int8_t __thiscall winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput(struct w_steam_iface *_this)
{
    struct ISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput, &params );
    return params._ret;
}

extern vtable_ptr winISteamUtils_SteamUtils010_vtable;

DEFINE_RTTI_DATA0(winISteamUtils_SteamUtils010, 0, ".?AVISteamUtils@@")

__ASM_BLOCK_BEGIN(winISteamUtils_SteamUtils010_vtables)
    __ASM_VTABLE(winISteamUtils_SteamUtils010,
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSecondsSinceAppActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSecondsSinceComputerActive)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetConnectedUniverse)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetServerRealTime)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPCountry)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetImageSize)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetImageRGBA)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetCSERIPPort)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetCurrentBatteryPower)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAppID)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetOverlayNotificationPosition)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsAPICallCompleted)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAPICallFailureReason)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetAPICallResult)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_RunFrame)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPCCallCount)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetWarningMessageHook)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsOverlayEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_BOverlayNeedsPresent)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_CheckFileSignature)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_ShowGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetEnteredGamepadTextLength)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetEnteredGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetSteamUILanguage)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamRunningInVR)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetOverlayNotificationInset)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamInBigPictureMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_StartVRDashboard)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetVRHeadsetStreamingEnabled)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamChinaLauncher)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_InitFilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_FilterText)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_GetIPv6ConnectivityState)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_IsSteamRunningOnSteamDeck)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_ShowFloatingGamepadTextInput)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_SetGameLauncherMode)
        VTABLE_ADD_FUNC(winISteamUtils_SteamUtils010_DismissFloatingGamepadTextInput)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winISteamUtils_SteamUtils010(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "SteamUtils010");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamUtils_SteamUtils010_vtable, 38, "SteamUtils010");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamUtils_rtti( char *base )
{
#ifdef __x86_64__
    init_winISteamUtils_SteamUtils002_rtti( base );
    init_winISteamUtils_SteamUtils004_rtti( base );
    init_winISteamUtils_SteamUtils005_rtti( base );
    init_winISteamUtils_SteamUtils006_rtti( base );
    init_winISteamUtils_SteamUtils007_rtti( base );
    init_winISteamUtils_SteamUtils008_rtti( base );
    init_winISteamUtils_SteamUtils009_rtti( base );
    init_winISteamUtils_SteamUtils010_rtti( base );
#endif /* __x86_64__ */
}
