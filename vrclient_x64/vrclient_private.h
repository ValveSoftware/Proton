#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <vulkan/vulkan.h>

#ifndef __cplusplus
#include "unixlib.h"
#include "wine/debug.h"
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

void *create_LinuxMatchmakingServerListResponse(void *win);

#ifndef __cplusplus
typedef struct ID3D11Device ID3D11Device;
typedef struct IDXGIVkInteropDevice IDXGIVkInteropDevice;
typedef struct ID3D12DXVKInteropDevice ID3D12DXVKInteropDevice;
typedef struct ID3D12CommandQueue ID3D12CommandQueue;

struct client_core_data
{
    CRITICAL_SECTION critical_section;
    struct generic_interface *created_interfaces;
    SIZE_T created_interface_count;
    SIZE_T created_interfaces_size;
};

#define VK_PROCS                \
    X(vkAllocateCommandBuffers) \
    X(vkBeginCommandBuffer)     \
    X(vkEndCommandBuffer)       \
    X(vkQueueSubmit)            \
    X(vkQueueWaitIdle)          \
    X(vkFreeCommandBuffers)     \
    X(vkCmdPipelineBarrier)     \
    X(vkCreateCommandPool)      \
    X(vkDestroyCommandPool)     \
    X(vkDestroyFence)           \
    X(vkCreateFence)            \
    X(vkWaitForFences)          \
    X(vkResetFences)

struct compositor_data
{
    ID3D11Device *d3d11_device;
    /* Vulkan queues aren't thread safe whereas D3D ones are. And
     * the OpenVR runtime could use the Vulkan queue in some functions.
     * So we need to lock the vulkan queues to prevent unsafe access using
     * IDXGIVkInteropDevice or ID3D12DXVKInteropDevice interfaces. */
    IDXGIVkInteropDevice *dxvk_device;
    ID3D12DXVKInteropDevice *d3d12_device;
    ID3D12CommandQueue *d3d12_queue;
    BOOL d3d11_explicit_handoff, handoff_called;
    void *client_core_linux_side;

#define X(proc) PFN_##proc p_##proc;
    VK_PROCS
#undef X
    VkDevice vk_device;
    VkQueue vk_queue;
    VkCommandPool vk_command_pool;
    VkCommandBuffer vk_command_buffers[4];
    VkFence vk_fences[4];
    int command_buffer_index;

#ifndef __x86_64__
    /* Digital action state change fixup hack. */
    struct
    {
        uint64_t action;
        uint64_t origin;
        LARGE_INTEGER update_qpf_time;
        BOOL previous_state;
    } digital_actions_state[128];
    unsigned int digital_action_count;
    LARGE_INTEGER qpf_freq;
#endif
};

extern struct compositor_data compositor_data;

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
    union
    {
        struct client_core_data user_data; /* for IVRClientCore */
    };
};

typedef struct w_steam_iface *(*iface_constructor)( void * );
extern iface_constructor find_iface_constructor( const char *iface_version );
typedef void (*iface_destructor)( struct w_steam_iface * );
extern iface_destructor find_iface_destructor( const char *iface_version );

extern void init_rtti( char *base );

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);
void free_compositor_data_d3d12_device(void);

struct generic_interface
{
    struct w_steam_iface *object;
    void (*dtor)(struct w_steam_iface *);
};

#ifdef __dxvk_interop_h__
extern w_Texture_t vrclient_translate_texture_dxvk( const w_Texture_t *texture, w_VRVulkanTextureData_t *vkdata,
                                                    IDXGIVkInteropSurface *dxvk_surface, IDXGIVkInteropDevice **p_dxvk_device,
                                                    VkImageLayout *image_layout, VkImageCreateInfo *image_info );
#endif /* __dxvk_interop_h__ */

#ifdef __ID3D12DXVKInteropDevice_INTERFACE_DEFINED__
extern w_Texture_t vrclient_translate_texture_d3d12( const w_Texture_t *texture, w_VRVulkanTextureData_t *vkdata,
                                                     ID3D12DXVKInteropDevice *d3d12_device, ID3D12Resource *d3d12_resource,
                                                     ID3D12CommandQueue *d3d12_queue, VkImageLayout *image_layout,
                                                     VkImageCreateInfo *image_info );
#endif /* __ID3D12DXVKInteropDevice_INTERFACE_DEFINED__ */

#include "vrclient_generated.h"

#endif  /* __cplusplus */
