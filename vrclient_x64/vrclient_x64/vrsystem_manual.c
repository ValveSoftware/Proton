#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "flatapi.h"

#include "struct_converters.h"

void ivrsystem_get_output_device( void (*cpp_func)( void *, uint64_t *, ETextureType, VkInstance_T * ),
                                  void *linux_side, uint64_t *out_device, ETextureType type,
                                  VkInstance_T *wrapped_instance, unsigned int version )
{
    switch (type)
    {
    case TextureType_Vulkan:
    {
        VkInstance_T *native_instance;

        native_instance = get_native_VkInstance( wrapped_instance );

        cpp_func( linux_side, out_device, type, native_instance );

        *out_device = (uint64_t)(intptr_t)
            get_wrapped_VkPhysicalDevice( wrapped_instance, (VkPhysicalDevice_T *)(intptr_t)*out_device );

        return;
    }
    default: cpp_func( linux_side, out_device, type, wrapped_instance ); return;
    }
}
