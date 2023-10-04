/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_LoadRenderModel, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_GetRenderModelName, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount, 4)

int8_t __thiscall winIVRRenderModels_IVRRenderModels_001_LoadRenderModel(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_090 *pRenderModel)
{
    struct IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pRenderModel = pRenderModel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_001_LoadRenderModel, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_001_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_090 *pRenderModel)
{
    struct IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_001_FreeRenderModel, &params );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_001_GetRenderModelName(struct w_steam_iface *_this, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .unRenderModelIndex = unRenderModelIndex,
        .pchRenderModelName = pchRenderModelName,
        .unRenderModelNameLen = unRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_001_GetRenderModelName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount(struct w_steam_iface *_this)
{
    struct IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_001_GetRenderModelCount, &params );
    return params._ret;
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_001_vtable;

DEFINE_RTTI_DATA0(winIVRRenderModels_IVRRenderModels_001, 0, ".?AVIVRRenderModels@@")

__ASM_BLOCK_BEGIN(winIVRRenderModels_IVRRenderModels_001_vtables)
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_001,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_LoadRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(4);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 4 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRRenderModels_IVRRenderModels_001_LoadRenderModel, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRRenderModels_IVRRenderModels_001_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRRenderModels_IVRRenderModels_001_GetRenderModelName, 3, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount, 0, FALSE, FALSE);
    for (i = 0; i < 4; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_LoadRenderModel, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_LoadTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_FreeTexture, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetRenderModelName, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentCount, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentState, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent, 12)

extern int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_LoadRenderModel(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_0912 **ppRenderModel);

extern void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel);

extern int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_LoadTexture(struct w_steam_iface *_this, int32_t textureId, w_RenderModel_TextureMap_t_090 **ppTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeTexture(struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture);

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetRenderModelName(struct w_steam_iface *_this, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_002_GetRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .unRenderModelIndex = unRenderModelIndex,
        .pchRenderModelName = pchRenderModelName,
        .unRenderModelNameLen = unRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetRenderModelName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount(struct w_steam_iface *_this)
{
    struct IVRRenderModels_IVRRenderModels_002_GetRenderModelCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetRenderModelCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentCount(struct w_steam_iface *_this, const char *pchRenderModelName)
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentCount_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetComponentCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentName(struct w_steam_iface *_this, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .unComponentIndex = unComponentIndex,
        .pchComponentName = pchComponentName,
        .unComponentNameLen = unComponentNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetComponentName, &params );
    return params._ret;
}

uint64_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetComponentButtonMask, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pchComponentRenderModelName = pchComponentRenderModelName,
        .unComponentRenderModelNameLen = unComponentRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentState(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const w_VRControllerState001_t *pControllerState, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRRenderModels_IVRRenderModels_002_GetComponentState_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pControllerState = pControllerState,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_GetComponentState, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_RenderModelHasComponent, &params );
    return params._ret;
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_002_vtable;

DEFINE_RTTI_DATA0(winIVRRenderModels_IVRRenderModels_002, 0, ".?AVIVRRenderModels@@")

__ASM_BLOCK_BEGIN(winIVRRenderModels_IVRRenderModels_002_vtables)
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_002,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_LoadRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_LoadTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRRenderModels_IVRRenderModels_002_LoadRenderModel, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRRenderModels_IVRRenderModels_002_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRRenderModels_IVRRenderModels_002_LoadTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRRenderModels_IVRRenderModels_002_FreeTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRRenderModels_IVRRenderModels_002_GetRenderModelName, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount, 0, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRRenderModels_IVRRenderModels_002_GetComponentCount, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRRenderModels_IVRRenderModels_002_GetComponentName, 4, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName, 4, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRRenderModels_IVRRenderModels_002_GetComponentState, 4, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent, 2, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeTexture, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetRenderModelName, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentCount, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentState, 24)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent, 12)

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_0912 **ppRenderModel);

extern void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(struct w_steam_iface *_this, int32_t textureId, w_RenderModel_TextureMap_t_090 **ppTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTexture(struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async(struct w_steam_iface *_this, int32_t textureId, void *pD3D11Device, void **ppD3D11Texture2D);

extern void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11(struct w_steam_iface *_this, void *pD3D11Texture2D);

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetRenderModelName(struct w_steam_iface *_this, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_004_GetRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .unRenderModelIndex = unRenderModelIndex,
        .pchRenderModelName = pchRenderModelName,
        .unRenderModelNameLen = unRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetRenderModelName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount(struct w_steam_iface *_this)
{
    struct IVRRenderModels_IVRRenderModels_004_GetRenderModelCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetRenderModelCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentCount(struct w_steam_iface *_this, const char *pchRenderModelName)
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentCount_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetComponentCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentName(struct w_steam_iface *_this, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .unComponentIndex = unComponentIndex,
        .pchComponentName = pchComponentName,
        .unComponentNameLen = unComponentNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetComponentName, &params );
    return params._ret;
}

uint64_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetComponentButtonMask, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pchComponentRenderModelName = pchComponentRenderModelName,
        .unComponentRenderModelNameLen = unComponentRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentState(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const w_VRControllerState001_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRRenderModels_IVRRenderModels_004_GetComponentState_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pControllerState = pControllerState,
        .pState = pState,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_GetComponentState, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_RenderModelHasComponent, &params );
    return params._ret;
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_004_vtable;

DEFINE_RTTI_DATA0(winIVRRenderModels_IVRRenderModels_004, 0, ".?AVIVRRenderModels@@")

__ASM_BLOCK_BEGIN(winIVRRenderModels_IVRRenderModels_004_vtables)
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_004,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(14);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 14 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRRenderModels_IVRRenderModels_004_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRRenderModels_IVRRenderModels_004_FreeTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRRenderModels_IVRRenderModels_004_GetRenderModelName, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount, 0, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRRenderModels_IVRRenderModels_004_GetComponentCount, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRRenderModels_IVRRenderModels_004_GetComponentName, 4, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName, 4, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRRenderModels_IVRRenderModels_004_GetComponentState, 5, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent, 2, FALSE, FALSE);
    for (i = 0; i < 14; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeTexture, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelName, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentCount, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentState, 24)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum, 8)

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_0912 **ppRenderModel);

extern void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(struct w_steam_iface *_this, int32_t textureId, w_RenderModel_TextureMap_t_090 **ppTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTexture(struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async(struct w_steam_iface *_this, int32_t textureId, void *pD3D11Device, void **ppD3D11Texture2D);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async(struct w_steam_iface *_this, int32_t textureId, void *pDstTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11(struct w_steam_iface *_this, void *pD3D11Texture2D);

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelName(struct w_steam_iface *_this, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .unRenderModelIndex = unRenderModelIndex,
        .pchRenderModelName = pchRenderModelName,
        .unRenderModelNameLen = unRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetRenderModelName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount(struct w_steam_iface *_this)
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetRenderModelCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentCount(struct w_steam_iface *_this, const char *pchRenderModelName)
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentCount_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetComponentCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentName(struct w_steam_iface *_this, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .unComponentIndex = unComponentIndex,
        .pchComponentName = pchComponentName,
        .unComponentNameLen = unComponentNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetComponentName, &params );
    return params._ret;
}

uint64_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetComponentButtonMask, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pchComponentRenderModelName = pchComponentRenderModelName,
        .unComponentRenderModelNameLen = unComponentRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentState(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const w_VRControllerState001_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRRenderModels_IVRRenderModels_005_GetComponentState_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pControllerState = pControllerState,
        .pState = pState,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetComponentState, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_RenderModelHasComponent, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL(struct w_steam_iface *_this, const char *pchRenderModelName, char *pchThumbnailURL, uint32_t unThumbnailURLLen, uint32_t *peError)
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchThumbnailURL = pchThumbnailURL,
        .unThumbnailURLLen = unThumbnailURLLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath(struct w_steam_iface *_this, const char *pchRenderModelName, char *pchOriginalPath, uint32_t unOriginalPathLen, uint32_t *peError)
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchOriginalPath = pchOriginalPath,
        .unOriginalPathLen = unOriginalPathLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath, &params );
    return params._ret;
}

const char * __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum, &params );
    return params._ret;
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_005_vtable;

DEFINE_RTTI_DATA0(winIVRRenderModels_IVRRenderModels_005, 0, ".?AVIVRRenderModels@@")

__ASM_BLOCK_BEGIN(winIVRRenderModels_IVRRenderModels_005_vtables)
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_005,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(18);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 18 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRRenderModels_IVRRenderModels_005_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRRenderModels_IVRRenderModels_005_FreeTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRRenderModels_IVRRenderModels_005_GetRenderModelName, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRRenderModels_IVRRenderModels_005_GetComponentCount, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRRenderModels_IVRRenderModels_005_GetComponentName, 4, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRRenderModels_IVRRenderModels_005_GetComponentState, 5, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath, 4, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum, 1, FALSE, FALSE);
    for (i = 0; i < 18; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_FreeRenderModel, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_FreeTexture, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetRenderModelName, 16)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetRenderModelCount, 4)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentCount, 8)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath, 28)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetComponentState, 24)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent, 12)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath, 20)
DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum, 8)

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async(struct w_steam_iface *_this, const char *pchRenderModelName, w_RenderModel_t_0912 **ppRenderModel);

extern void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeRenderModel(struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async(struct w_steam_iface *_this, int32_t textureId, w_RenderModel_TextureMap_t_1237 **ppTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTexture(struct w_steam_iface *_this, w_RenderModel_TextureMap_t_1237 *pTexture);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async(struct w_steam_iface *_this, int32_t textureId, void *pD3D11Device, void **ppD3D11Texture2D);

extern uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async(struct w_steam_iface *_this, int32_t textureId, void *pDstTexture);

extern void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11(struct w_steam_iface *_this, void *pD3D11Texture2D);

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetRenderModelName(struct w_steam_iface *_this, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_006_GetRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .unRenderModelIndex = unRenderModelIndex,
        .pchRenderModelName = pchRenderModelName,
        .unRenderModelNameLen = unRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetRenderModelName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetRenderModelCount(struct w_steam_iface *_this)
{
    struct IVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetRenderModelCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentCount(struct w_steam_iface *_this, const char *pchRenderModelName)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentCount_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentName(struct w_steam_iface *_this, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .unComponentIndex = unComponentIndex,
        .pchComponentName = pchComponentName,
        .unComponentNameLen = unComponentNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentName, &params );
    return params._ret;
}

uint64_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentButtonMask, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pchComponentRenderModelName = pchComponentRenderModelName,
        .unComponentRenderModelNameLen = unComponentRenderModelNameLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, uint64_t devicePath, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .devicePath = devicePath,
        .pState = pState,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetComponentState(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const w_VRControllerState001_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRRenderModels_IVRRenderModels_006_GetComponentState_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pControllerState = pControllerState,
        .pState = pState,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetComponentState, &params );
    return params._ret;
}

int8_t __thiscall winIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName)
{
    struct IVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_RenderModelHasComponent, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL(struct w_steam_iface *_this, const char *pchRenderModelName, char *pchThumbnailURL, uint32_t unThumbnailURLLen, uint32_t *peError)
{
    struct IVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchThumbnailURL = pchThumbnailURL,
        .unThumbnailURLLen = unThumbnailURLLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL, &params );
    return params._ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath(struct w_steam_iface *_this, const char *pchRenderModelName, char *pchOriginalPath, uint32_t unOriginalPathLen, uint32_t *peError)
{
    struct IVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchOriginalPath = pchOriginalPath,
        .unOriginalPathLen = unOriginalPathLen,
        .peError = peError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath, &params );
    return params._ret;
}

const char * __thiscall winIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum(struct w_steam_iface *_this, uint32_t error)
{
    struct IVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .error = error,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum, &params );
    return params._ret;
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_006_vtable;

DEFINE_RTTI_DATA0(winIVRRenderModels_IVRRenderModels_006, 0, ".?AVIVRRenderModels@@")

__ASM_BLOCK_BEGIN(winIVRRenderModels_IVRRenderModels_006_vtables)
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_006,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRRenderModels_IVRRenderModels_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(19);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 19 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRRenderModels_IVRRenderModels_006_FreeRenderModel, 1, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRRenderModels_IVRRenderModels_006_FreeTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRRenderModels_IVRRenderModels_006_GetRenderModelName, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRRenderModels_IVRRenderModels_006_GetRenderModelCount, 0, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRRenderModels_IVRRenderModels_006_GetComponentCount, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRRenderModels_IVRRenderModels_006_GetComponentName, 4, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath, 5, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRRenderModels_IVRRenderModels_006_GetComponentState, 5, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL, 4, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath, 4, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum, 1, FALSE, FALSE);
    for (i = 0; i < 19; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRRenderModels_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRRenderModels_IVRRenderModels_001_rtti( base );
    init_winIVRRenderModels_IVRRenderModels_002_rtti( base );
    init_winIVRRenderModels_IVRRenderModels_004_rtti( base );
    init_winIVRRenderModels_IVRRenderModels_005_rtti( base );
    init_winIVRRenderModels_IVRRenderModels_006_rtti( base );
#endif /* __x86_64__ */
}
