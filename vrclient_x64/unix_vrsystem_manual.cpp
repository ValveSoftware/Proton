#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static VkInstance_T *unwrap_instance( uint32_t type, VkInstance_T *instance )
{
    if (type == TextureType_Vulkan) return p_get_native_VkInstance( instance );
    return instance;
}

static uint64_t wrap_device( uint32_t type, VkInstance_T *instance, uint64_t device )
{
    if (type == TextureType_Vulkan)
    {
        VkPhysicalDevice_T *phys_device = (VkPhysicalDevice_T *)( intptr_t)device;
        return (uint64_t)(intptr_t)p_get_wrapped_VkPhysicalDevice( instance, phys_device );
    }

    return device;
}

template< typename Iface, typename Params >
static NTSTATUS IVRSystem_GetOutputDevice( Iface *iface, Params *params, bool wow64 )
{
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRSystem, 017, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 019, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 020, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 021, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 022, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 023, GetOutputDevice );
VRCLIENT_UNIX_IMPL( IVRSystem, 026, GetOutputDevice );
