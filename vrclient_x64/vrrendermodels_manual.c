#include <stdarg.h>
#include <stddef.h>

#include "windef.h"
#include "winbase.h"

#define COBJMACROS
#include "d3d11_4.h"
#include "dxvk-interop.h"
#include "vrclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static uint32_t load_into_texture_d3d11( ID3D11Texture2D *texture, const w_RenderModel_TextureMap_t_1237 *data )
{
    D3D11_TEXTURE2D_DESC texture_desc;
    ID3D11DeviceContext *context;
    ID3D11Device *device;

    texture->lpVtbl->GetDesc( texture, &texture_desc );

    TRACE( "Format %#x, width %u, height %u.\n", texture_desc.Format, texture_desc.Width,  texture_desc.Height );
    TRACE( "Array size %u, miplevels %u.\n", texture_desc.ArraySize, texture_desc.MipLevels );

    if (texture_desc.Format != DXGI_FORMAT_R8G8B8A8_UNORM_SRGB)
    {
        FIXME( "Unexpected format %#x.\n", texture_desc.Format );
        return VRRenderModelError_NotSupported;
    }
    if (texture_desc.Width != data->unWidth)
    {
        FIXME( "Unexpected width %u.\n", texture_desc.Width );
        return VRRenderModelError_NotSupported;
    }
    if (texture_desc.Height != data->unHeight)
    {
        FIXME( "Unexpected height %u.\n", texture_desc.Height );
        return VRRenderModelError_NotSupported;
    }

    if (data->format) FIXME( "Unsupported texture map format %d.\n", data->format );
    if (data->unMipLevels) FIXME( "Unsupported unMipLevels %u.\n", data->unMipLevels );

    texture->lpVtbl->GetDevice( texture, &device );
    device->lpVtbl->GetImmediateContext( device, &context );
    device->lpVtbl->Release( device );

    context->lpVtbl->UpdateSubresource( context, (ID3D11Resource *)texture, 0, NULL,
                                        data->rubTextureMapData, data->unWidth * 4 * sizeof(uint8_t), 0 );

    context->lpVtbl->Release( context );
    return VRRenderModelError_None;
}

static uint32_t ivrrendermodels_load_texture_d3d11_async( void *device, w_RenderModel_TextureMap_t_1237 *texture_map,
                                                          void **dst_texture )
{
    uint32_t error;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Device *d3d11_device = device;
    ID3D11Texture2D *texture;
    HRESULT hr;

    desc.Width = texture_map->unWidth;
    desc.Height = texture_map->unHeight;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;
    desc.SampleDesc.Count = 1;
    desc.SampleDesc.Quality = 0;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    desc.CPUAccessFlags = 0;
    desc.MiscFlags = 0;

    hr = d3d11_device->lpVtbl->CreateTexture2D( d3d11_device, &desc, NULL, &texture );
    if (FAILED(hr))
    {
        WARN( "Failed to create D3D11 texture %#x\n", hr );
        return VRRenderModelError_InvalidTexture;
    }

    error = load_into_texture_d3d11( texture, texture_map );
    if (error == VRRenderModelError_None)
    {
        *dst_texture = texture;
    }
    else
    {
        texture->lpVtbl->Release( texture );
        *dst_texture = NULL;
    }

    return error;
}

static uint32_t ivrrendermodels_load_into_texture_d3d11_async( void *dst_texture, w_RenderModel_TextureMap_t_1237 *texture_map )
{
    IUnknown *unk = dst_texture;
    uint32_t error;
    ID3D11Texture2D *texture;

    if (SUCCEEDED(unk->lpVtbl->QueryInterface( unk, &IID_ID3D11Texture2D, (void **)&texture )))
    {
        error = load_into_texture_d3d11( texture, texture_map );
        texture->lpVtbl->Release( texture );
    }
    else
    {
        FIXME( "Expected 2D texture.\n" );
        error = VRRenderModelError_NotSupported;
    }

    return error;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_090 **ppTexture );
void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture );

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                                   void *pD3D11Device, void **ppD3D11Texture2D )
{
    w_RenderModel_TextureMap_t_1237 texture_map = {0};
    w_RenderModel_TextureMap_t_090 *texture_map_090;
    uint32_t _ret;

    TRACE( "%p\n", _this );

    _ret = winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( _this, textureId, &texture_map_090 );
    if (_ret == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return _ret;
    }
    if (_ret != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", _ret );
        return _ret;
    }

    texture_map.unWidth = texture_map_090->unWidth;
    texture_map.unHeight = texture_map_090->unHeight;
    texture_map.rubTextureMapData = texture_map_090->rubTextureMapData;
    _ret = ivrrendermodels_load_texture_d3d11_async( pD3D11Device, &texture_map, ppD3D11Texture2D );
    winIVRRenderModels_IVRRenderModels_004_FreeTexture( _this, texture_map_090 );

    return _ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_090 **ppTexture );
void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture );

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                                   void *pD3D11Device, void **ppD3D11Texture2D )
{
    w_RenderModel_TextureMap_t_1237 texture_map = {0};
    w_RenderModel_TextureMap_t_090 *texture_map_090;
    uint32_t _ret;

    TRACE( "%p\n", _this );

    _ret = winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( _this, textureId, &texture_map_090 );
    if (_ret == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return _ret;
    }
    if (_ret != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", _ret );
        return _ret;
    }

    texture_map.unWidth = texture_map_090->unWidth;
    texture_map.unHeight = texture_map_090->unHeight;
    texture_map.rubTextureMapData = texture_map_090->rubTextureMapData;
    _ret = ivrrendermodels_load_texture_d3d11_async( pD3D11Device, &texture_map, ppD3D11Texture2D );
    winIVRRenderModels_IVRRenderModels_005_FreeTexture( _this, texture_map_090 );

    return _ret;
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_1237 **ppTexture );
void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_1237 *pTexture );

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                                   void *pD3D11Device, void **ppD3D11Texture2D )
{
    w_RenderModel_TextureMap_t_1237 *texture_map;
    uint32_t _ret;

    TRACE( "%p\n", _this );

    _ret = winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( _this, textureId, &texture_map );
    if (_ret == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return _ret;
    }
    if (_ret != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", _ret );
        return _ret;
    }

    _ret = ivrrendermodels_load_texture_d3d11_async( pD3D11Device, texture_map, ppD3D11Texture2D );
    winIVRRenderModels_IVRRenderModels_006_FreeTexture( _this, texture_map );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct w_steam_iface *_this,
                                                                                       int32_t textureId, void *pDstTexture )
{
    w_RenderModel_TextureMap_t_1237 texture_map = {0};
    w_RenderModel_TextureMap_t_090 *texture_map_090;
    uint32_t _ret;

    TRACE( "%p\n", _this );

    if (!pDstTexture) return VRRenderModelError_InvalidArg;

    TRACE( "%p\n", _this );

    _ret = winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( _this, textureId, &texture_map_090 );
    if (_ret == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return _ret;
    }
    if (_ret != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", _ret );
        return _ret;
    }

    texture_map.unWidth = texture_map_090->unWidth;
    texture_map.unHeight = texture_map_090->unHeight;
    texture_map.rubTextureMapData = texture_map_090->rubTextureMapData;
    _ret = ivrrendermodels_load_into_texture_d3d11_async( pDstTexture, &texture_map );
    winIVRRenderModels_IVRRenderModels_005_FreeTexture( _this, texture_map_090 );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async( struct w_steam_iface *_this,
                                                                                       int32_t textureId, void *pDstTexture )
{
    w_RenderModel_TextureMap_t_1237 *texture_map = NULL;
    uint32_t _ret;

    TRACE( "%p\n", _this );

    if (!pDstTexture) return VRRenderModelError_InvalidArg;

    _ret = winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( _this, textureId, &texture_map );
    if (_ret == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return _ret;
    }
    if (_ret != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", _ret );
        return _ret;
    }

    _ret = ivrrendermodels_load_into_texture_d3d11_async( pDstTexture, texture_map );
    winIVRRenderModels_IVRRenderModels_006_FreeTexture( _this, texture_map );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}

/* LoadRenderModel(_Async) / FreeRenderModel */

int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_LoadRenderModel( struct w_steam_iface *_this, const char *pchRenderModelName,
                                                                        w_RenderModel_t_0912 **ppRenderModel )
{
    struct render_model *model;
    struct IVRRenderModels_IVRRenderModels_002_LoadRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .ppRenderModel = ppRenderModel,
    };
    TRACE( "%p\n", _this );
    if (ppRenderModel && (model = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*model) ))) *ppRenderModel = &model->w_0912;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_LoadRenderModel, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeRenderModel( struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel )
{
    struct render_model *model = CONTAINING_RECORD( pRenderModel, struct render_model, w_0912 );
    struct IVRRenderModels_IVRRenderModels_002_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_FreeRenderModel, &params );
    HeapFree( GetProcessHeap(), 0, model );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async( struct w_steam_iface *_this, const char *pchRenderModelName,
                                                                                  w_RenderModel_t_0912 **ppRenderModel )
{
    struct render_model *model;
    struct IVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .ppRenderModel = ppRenderModel,
    };
    TRACE( "%p\n", _this );
    if (ppRenderModel && (model = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*model) ))) *ppRenderModel = &model->w_0912;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeRenderModel( struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel )
{
    struct render_model *model = CONTAINING_RECORD( pRenderModel, struct render_model, w_0912 );
    struct IVRRenderModels_IVRRenderModels_004_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_FreeRenderModel, &params );
    HeapFree( GetProcessHeap(), 0, model );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async( struct w_steam_iface *_this, const char *pchRenderModelName,
                                                                                  w_RenderModel_t_0912 **ppRenderModel )
{
    struct render_model *model;
    struct IVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .ppRenderModel = ppRenderModel,
    };
    TRACE( "%p\n", _this );
    if (ppRenderModel && (model = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*model) ))) *ppRenderModel = &model->w_0912;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeRenderModel( struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel )
{
    struct render_model *model = CONTAINING_RECORD( pRenderModel, struct render_model, w_0912 );
    struct IVRRenderModels_IVRRenderModels_005_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_FreeRenderModel, &params );
    HeapFree( GetProcessHeap(), 0, model );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async( struct w_steam_iface *_this, const char *pchRenderModelName,
                                                                                  w_RenderModel_t_0912 **ppRenderModel )
{
    struct render_model *model;
    struct IVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .ppRenderModel = ppRenderModel,
    };
    TRACE( "%p\n", _this );
    if (ppRenderModel && (model = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*model) ))) *ppRenderModel = &model->w_0912;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeRenderModel( struct w_steam_iface *_this, w_RenderModel_t_0912 *pRenderModel )
{
    struct render_model *model = CONTAINING_RECORD( pRenderModel, struct render_model, w_0912 );
    struct IVRRenderModels_IVRRenderModels_006_FreeRenderModel_params params =
    {
        .linux_side = _this->u_iface,
        .pRenderModel = pRenderModel,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_FreeRenderModel, &params );
    HeapFree( GetProcessHeap(), 0, model );
}

/* LoadTexture(_Async) / FreeTexture */

int8_t __thiscall winIVRRenderModels_IVRRenderModels_002_LoadTexture( struct w_steam_iface *_this, int32_t textureId,
                                                                    w_RenderModel_TextureMap_t_090 **ppTexture )
{
    struct render_model_texture_map *map;
    struct IVRRenderModels_IVRRenderModels_002_LoadTexture_params params =
    {
        .linux_side = _this->u_iface,
        .textureId = textureId,
        .ppTexture = ppTexture,
    };
    TRACE( "%p\n", _this );
    if (ppTexture && (map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*map) ))) *ppTexture = &map->w_090;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_LoadTexture, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture )
{
    struct render_model_texture_map *map = CONTAINING_RECORD( pTexture, struct render_model_texture_map, w_090 );
    struct IVRRenderModels_IVRRenderModels_002_FreeTexture_params params =
    {
        .linux_side = _this->u_iface,
        .pTexture = pTexture,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_002_FreeTexture, &params );
    HeapFree( GetProcessHeap(), 0, map );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_090 **ppTexture )
{
    struct render_model_texture_map *map;
    struct IVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params params =
    {
        .linux_side = _this->u_iface,
        .textureId = textureId,
        .ppTexture = ppTexture,
    };
    TRACE( "%p\n", _this );
    if (ppTexture && (map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*map) ))) *ppTexture = &map->w_090;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_LoadTexture_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture )
{
    struct render_model_texture_map *map = CONTAINING_RECORD( pTexture, struct render_model_texture_map, w_090 );
    struct IVRRenderModels_IVRRenderModels_004_FreeTexture_params params =
    {
        .linux_side = _this->u_iface,
        .pTexture = pTexture,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_004_FreeTexture, &params );
    HeapFree( GetProcessHeap(), 0, map );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_090 **ppTexture )
{
    struct render_model_texture_map *map;
    struct IVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params params =
    {
        .linux_side = _this->u_iface,
        .textureId = textureId,
        .ppTexture = ppTexture,
    };
    TRACE( "%p\n", _this );
    if (ppTexture && (map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*map) ))) *ppTexture = &map->w_090;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_LoadTexture_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_090 *pTexture )
{
    struct render_model_texture_map *map = CONTAINING_RECORD( pTexture, struct render_model_texture_map, w_090 );
    struct IVRRenderModels_IVRRenderModels_005_FreeTexture_params params =
    {
        .linux_side = _this->u_iface,
        .pTexture = pTexture,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_005_FreeTexture, &params );
    HeapFree( GetProcessHeap(), 0, map );
}

uint32_t __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( struct w_steam_iface *_this, int32_t textureId,
                                                                              w_RenderModel_TextureMap_t_1237 **ppTexture )
{
    struct render_model_texture_map *map;
    struct IVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params params =
    {
        .linux_side = _this->u_iface,
        .textureId = textureId,
        .ppTexture = ppTexture,
    };
    TRACE( "%p\n", _this );
    if (ppTexture && (map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*map) ))) *ppTexture = &map->w_1237;
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_LoadTexture_Async, &params );
    return params._ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTexture( struct w_steam_iface *_this, w_RenderModel_TextureMap_t_1237 *pTexture )
{
    struct render_model_texture_map *map = CONTAINING_RECORD( pTexture, struct render_model_texture_map, w_1237 );
    struct IVRRenderModels_IVRRenderModels_006_FreeTexture_params params =
    {
        .linux_side = _this->u_iface,
        .pTexture = pTexture,
    };
    TRACE( "%p\n", _this );
    VRCLIENT_CALL( IVRRenderModels_IVRRenderModels_006_FreeTexture, &params );
    HeapFree( GetProcessHeap(), 0, map );
}
