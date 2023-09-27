#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "dxvk-interop.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"
#include "cppIVRSystem_IVRSystem_003.h"
#include "cppIVRSystem_IVRSystem_004.h"
#include "cppIVRSystem_IVRSystem_005.h"
#include "cppIVRSystem_IVRSystem_006.h"
#include "cppIVRSystem_IVRSystem_009.h"
#include "cppIVRSystem_IVRSystem_010.h"
#include "cppIVRSystem_IVRSystem_011.h"
#include "cppIVRSystem_IVRSystem_012.h"
#include "cppIVRSystem_IVRSystem_014.h"
#include "cppIVRSystem_IVRSystem_015.h"
#include "cppIVRSystem_IVRSystem_016.h"
#include "cppIVRSystem_IVRSystem_017.h"
#include "cppIVRSystem_IVRSystem_019.h"
#include "cppIVRSystem_IVRSystem_020.h"
#include "cppIVRSystem_IVRSystem_021.h"
#include "cppIVRSystem_IVRSystem_022.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static VkInstance_T *unwrap_instance( ETextureType type, VkInstance_T *instance )
{
    if (type == TextureType_Vulkan) return get_native_VkInstance( instance );
    return instance;
}

static uint64_t wrap_device( ETextureType type, VkInstance_T *instance, uint64_t device )
{
    if (type == TextureType_Vulkan)
    {
        VkPhysicalDevice_T *phys_device = (VkPhysicalDevice_T *)( intptr_t)device;
        return (uint64_t)( intptr_t)get_wrapped_VkPhysicalDevice( instance, phys_device );
    }

    return device;
}

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

void __thiscall winIVRSystem_IVRSystem_017_GetOutputDevice( struct w_steam_iface *_this, uint64_t *pnDevice,
                                                            ETextureType textureType, VkInstance_T *pInstance )
{
    struct cppIVRSystem_IVRSystem_017_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = unwrap_instance( textureType, pInstance ),
    };

    TRACE( "%p\n", _this );

    cppIVRSystem_IVRSystem_017_GetOutputDevice( &params );
    *pnDevice = wrap_device( textureType, pInstance, *pnDevice );
}

void __thiscall winIVRSystem_IVRSystem_019_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_019_GetOutputDevice( struct w_steam_iface *_this, uint64_t *pnDevice,
                                                            ETextureType textureType, VkInstance_T *pInstance )
{
    struct cppIVRSystem_IVRSystem_019_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = unwrap_instance( textureType, pInstance ),
    };

    TRACE( "%p\n", _this );

    cppIVRSystem_IVRSystem_019_GetOutputDevice( &params );
    *pnDevice = wrap_device( textureType, pInstance, *pnDevice );
}

void __thiscall winIVRSystem_IVRSystem_020_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_020_GetOutputDevice( struct w_steam_iface *_this, uint64_t *pnDevice,
                                                            ETextureType textureType, VkInstance_T *pInstance )
{
    struct cppIVRSystem_IVRSystem_020_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = unwrap_instance( textureType, pInstance ),
    };

    TRACE( "%p\n", _this );

    cppIVRSystem_IVRSystem_020_GetOutputDevice( &params );
    *pnDevice = wrap_device( textureType, pInstance, *pnDevice );
}

void __thiscall winIVRSystem_IVRSystem_021_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_021_GetOutputDevice( struct w_steam_iface *_this, uint64_t *pnDevice,
                                                            ETextureType textureType, VkInstance_T *pInstance )
{
    struct cppIVRSystem_IVRSystem_021_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = unwrap_instance( textureType, pInstance ),
    };

    TRACE( "%p\n", _this );

    cppIVRSystem_IVRSystem_021_GetOutputDevice( &params );
    *pnDevice = wrap_device( textureType, pInstance, *pnDevice );
}

void __thiscall winIVRSystem_IVRSystem_022_GetDXGIOutputInfo( struct w_steam_iface *_this, int32_t *pnAdapterIndex )
{
    FIXME( "%p\n", _this );
    *pnAdapterIndex = 0;
}

void __thiscall winIVRSystem_IVRSystem_022_GetOutputDevice( struct w_steam_iface *_this, uint64_t *pnDevice,
                                                            ETextureType textureType, VkInstance_T *pInstance )
{
    struct cppIVRSystem_IVRSystem_022_GetOutputDevice_params params =
    {
        .linux_side = _this->u_iface,
        .pnDevice = pnDevice,
        .textureType = textureType,
        .pInstance = unwrap_instance( textureType, pInstance ),
    };

    TRACE( "%p\n", _this );

    cppIVRSystem_IVRSystem_022_GetOutputDevice( &params );
    *pnDevice = wrap_device( textureType, pInstance, *pnDevice );
}
