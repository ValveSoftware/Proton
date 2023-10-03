#include "unix_private.h"

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

NTSTATUS IVRSystem_IVRSystem_017_GetOutputDevice( void *args )
{
    struct IVRSystem_IVRSystem_017_GetOutputDevice_params *params = (struct IVRSystem_IVRSystem_017_GetOutputDevice_params *)args;
    struct u_IVRSystem_IVRSystem_017 *iface = (struct u_IVRSystem_IVRSystem_017 *)params->linux_side;
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_019_GetOutputDevice( void *args )
{
    struct IVRSystem_IVRSystem_019_GetOutputDevice_params *params = (struct IVRSystem_IVRSystem_019_GetOutputDevice_params *)args;
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetOutputDevice( void *args )
{
    struct IVRSystem_IVRSystem_020_GetOutputDevice_params *params = (struct IVRSystem_IVRSystem_020_GetOutputDevice_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_021_GetOutputDevice( void *args )
{
    struct IVRSystem_IVRSystem_021_GetOutputDevice_params *params = (struct IVRSystem_IVRSystem_021_GetOutputDevice_params *)args;
    struct u_IVRSystem_IVRSystem_021 *iface = (struct u_IVRSystem_IVRSystem_021 *)params->linux_side;
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetOutputDevice( void *args )
{
    struct IVRSystem_IVRSystem_022_GetOutputDevice_params *params = (struct IVRSystem_IVRSystem_022_GetOutputDevice_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    VkInstance_T *host_instance = unwrap_instance( params->textureType, params->pInstance );
    uint64_t host_device;

    iface->GetOutputDevice( &host_device, params->textureType, host_instance );
    *params->pnDevice = wrap_device( params->textureType, params->pInstance, host_device );
    return 0;
}
