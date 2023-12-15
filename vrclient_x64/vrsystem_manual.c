#include "vrclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

void __thiscall winIVRSystem_IVRSystem_003_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex,
                                                              int32_t *pnAdapterOutputIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
    *pnAdapterOutputIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_004_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex,
                                                              int32_t *pnAdapterOutputIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
    *pnAdapterOutputIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_005_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex,
                                                              int32_t *pnAdapterOutputIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
    *pnAdapterOutputIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_006_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex,
                                                              int32_t *pnAdapterOutputIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
    *pnAdapterOutputIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_009_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_010_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_011_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_012_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_014_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_015_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_016_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_017_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_019_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_020_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_021_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_022_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_0918 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_0918 event;
    struct IVRSystem_IVRSystem_011_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_011_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_0918 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_0918 event;
    struct IVRSystem_IVRSystem_011_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_011_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_103 event;
    struct IVRSystem_IVRSystem_012_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_012_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_103 event;
    struct IVRSystem_IVRSystem_012_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_012_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_103 event;
    struct IVRSystem_IVRSystem_014_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_014_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_103 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_103 event;
    struct IVRSystem_IVRSystem_014_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_014_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_106 event;
    struct IVRSystem_IVRSystem_015_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_015_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_106 event;
    struct IVRSystem_IVRSystem_015_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_015_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_106 event;
    struct IVRSystem_IVRSystem_016_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_016_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_106 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_106 event;
    struct IVRSystem_IVRSystem_016_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_016_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_1011 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_1011 event;
    struct IVRSystem_IVRSystem_017_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_017_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1011 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_1011 event;
    struct IVRSystem_IVRSystem_017_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_017_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_1322 event;
    struct IVRSystem_IVRSystem_019_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_019_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_1322 event;
    struct IVRSystem_IVRSystem_019_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_019_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_1322 event;
    struct IVRSystem_IVRSystem_020_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_020_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1322 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_1322 event;
    struct IVRSystem_IVRSystem_020_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_020_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_11030 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_11030 event;
    struct IVRSystem_IVRSystem_021_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_021_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_11030 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_11030 event;
    struct IVRSystem_IVRSystem_021_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_021_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_PollNextEvent( struct w_steam_iface *_this, w_VREvent_t_1168 *pEvent, uint32_t uncbVREvent )
{
    w_VREvent_t_1168 event;
    struct IVRSystem_IVRSystem_022_PollNextEvent_params params =
    {
        .linux_side = _this->u_iface,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_PollNextEvent, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}

int8_t __thiscall winIVRSystem_IVRSystem_022_PollNextEventWithPose( struct w_steam_iface *_this, uint32_t eOrigin, w_VREvent_t_1168 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose )
{
    w_VREvent_t_1168 event;
    struct IVRSystem_IVRSystem_022_PollNextEventWithPose_params params =
    {
        .linux_side = _this->u_iface,
        .eOrigin = eOrigin,
        .pEvent = pEvent ? &event : NULL,
        .uncbVREvent = uncbVREvent,
        .pTrackedDevicePose = pTrackedDevicePose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRSystem_IVRSystem_022_PollNextEventWithPose, &params );
    if (pEvent) memcpy( pEvent, &event, uncbVREvent );
    return params._ret;
}
