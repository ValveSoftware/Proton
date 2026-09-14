#ifndef __WINE_OPENXR_PRIVATE_H
#define __WINE_OPENXR_PRIVATE_H

#define WINE_XR_HOST

#include <pthread.h>
#include <stdbool.h>

#include "openxr_loader.h"
#include "openxr_thunks.h"

extern struct openxr_instance_funcs g_xr_host_instance_dispatch_table;

struct conversion_context {
  char buffer[2048];
  uint32_t used;
  struct list alloc_entries;
};

static inline void init_conversion_context(struct conversion_context *pool) {
  pool->used = 0;
  list_init(&pool->alloc_entries);
}

static inline void free_conversion_context(struct conversion_context *pool) {
  struct list *entry, *next;
  LIST_FOR_EACH_SAFE(entry, next, &pool->alloc_entries)
  free(entry);
}

static inline void *conversion_context_alloc(struct conversion_context *pool, size_t size) {
  if (pool->used + size <= sizeof(pool->buffer)) {
    void *ret = pool->buffer + pool->used;
    pool->used += (size + sizeof(UINT64) - 1) & ~(sizeof(UINT64) - 1);
    return ret;
  } else {
    struct list *entry;
    if (!(entry = malloc(sizeof(*entry) + size))) {
      return NULL;
    }
    list_add_tail(&pool->alloc_entries, entry);
    return entry + 1;
  }
}

NTSTATUS init_openxr(void *args);
NTSTATUS wow64_init_openxr(void *args);
NTSTATUS is_available_instance_function_openxr(void *args);
NTSTATUS is_available_instance_function_openxr32(void *args);
NTSTATUS get_vk_create_callback_ptrs(void *args);
extern void register_dispatchable_handle(uint64_t handle, struct openxr_instance_funcs *funcs);
extern void unregister_dispatchable_handle(uint64_t handle);
extern struct openxr_instance_funcs *get_dispatch_table(uint64_t handle);

#if (XR_PTR_SIZE == 8)
    static inline uint64_t uint64_from_xr_handle( void *handle )
    {
        return (uint64_t)handle;
    }
#else
    static inline uint64_t uint64_from_xr_handle( uint64_t handle )
    {
        return handle;
    }
#endif

typedef UINT32 PTR32;

typedef struct
{
    XrStructureType type;
    PTR32 next;
} XrBaseInStructure32;

typedef struct
{
    XrStructureType type;
    PTR32 next;
} XrBaseOutStructure32;

static inline void *find_next_struct32(void *s, XrStructureType t)
{
    XrBaseOutStructure32 *header;

    for (header = s; header; header = UlongToPtr(header->next))
    {
        if (header->type == t)
            return header;
    }

    return NULL;
}

static inline void *find_next_struct(const void *s, XrStructureType t)
{
    XrBaseOutStructure *header;

    for (header = (XrBaseOutStructure *)s; header; header = header->next)
    {
        if (header->type == t)
            return header;
    }

    return NULL;
}

XrSession xr_wrap_host_session( XrSession host );

#endif /* __WINE_OPENXR_PRIVATE_H */
