#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "dxvk-interop.h"
#include "vrclient_defs.h"
#include "vrclient_private.h"

#define COBJMACROS
#include "d3d11_4.h"

#include "flatapi.h"

#include "struct_converters.h"

/* 0918 is binary compatible with 1015 */
typedef struct winRenderModel_t_0918 winRenderModel_t_0918;
typedef struct winRenderModel_TextureMap_t_0918 winRenderModel_TextureMap_t_0918;
#include "cppIVRRenderModels_IVRRenderModels_004.h"

typedef struct winRenderModel_t_1015 winRenderModel_t_1015;
typedef struct winRenderModel_TextureMap_t_1015 winRenderModel_TextureMap_t_1015;
#include "cppIVRRenderModels_IVRRenderModels_005.h"

/* this is converted to 1267 during load_linux_texture_map, so ensure new
 * structure is compatible before updating this number */
typedef struct winRenderModel_t_1267 winRenderModel_t_1267;
typedef struct winRenderModel_TextureMap_t_1267 winRenderModel_TextureMap_t_1267;
#include "cppIVRRenderModels_IVRRenderModels_006.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#pragma pack( push, 8 )
struct winRenderModel_TextureMap_t_0918
{
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t *rubTextureMapData;
} __attribute__((ms_struct));

struct winRenderModel_TextureMap_t_1015
{
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t *rubTextureMapData;
} __attribute__((ms_struct));

struct winRenderModel_TextureMap_t_1237
{
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t *rubTextureMapData;
    EVRRenderModelTextureFormat format;
    uint16_t unMipLevels;
} __attribute__((ms_struct));
#pragma pack( pop )

static EVRRenderModelError load_into_texture_d3d11( ID3D11Texture2D *texture, const struct winRenderModel_TextureMap_t_1237 *data )
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

static EVRRenderModelError load_linux_texture_map_004( void *linux_side, TextureID_t texture_id,
                                                       struct winRenderModel_TextureMap_t_1237 **texture_map )
{
    struct winRenderModel_TextureMap_t_0918 *orig_map;
    struct cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params load_params =
    {
        .linux_side = linux_side,
        .textureId = texture_id,
        .ppTexture = &orig_map,
    };
    struct cppIVRRenderModels_IVRRenderModels_004_FreeTexture_params free_params =
    {
        .linux_side = linux_side,
    };
    cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( &load_params );
    if (load_params._ret) return load_params._ret;
    *texture_map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map) );
    memcpy( *texture_map, orig_map, sizeof(*orig_map) );
    free_params.pTexture = orig_map;
    cppIVRRenderModels_IVRRenderModels_004_FreeTexture( &free_params );
    return 0;
}

static void free_linux_texture_map_004( void *linux_side, struct winRenderModel_TextureMap_t_1237 *texture_map )
{
    HeapFree( GetProcessHeap(), 0, texture_map );
}

static EVRRenderModelError load_linux_texture_map_005( void *linux_side, TextureID_t texture_id,
                                                       struct winRenderModel_TextureMap_t_1237 **texture_map )
{
    struct winRenderModel_TextureMap_t_1015 *orig_map;
    struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params load_params =
    {
        .linux_side = linux_side,
        .textureId = texture_id,
        .ppTexture = &orig_map,
    };
    struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params free_params =
    {
        .linux_side = linux_side,
    };
    cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( &load_params );
    if (load_params._ret) return load_params._ret;
    *texture_map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map) );
    memcpy( *texture_map, orig_map, sizeof(*orig_map) );
    free_params.pTexture = orig_map;
    cppIVRRenderModels_IVRRenderModels_005_FreeTexture( &free_params );
    return 0;
}

static void free_linux_texture_map_005( void *linux_side, struct winRenderModel_TextureMap_t_1237 *texture_map )
{
    HeapFree( GetProcessHeap(), 0, texture_map );
}

static EVRRenderModelError load_linux_texture_map_006( void *linux_side, TextureID_t texture_id,
                                                       struct winRenderModel_TextureMap_t_1237 **texture_map )
{
    struct cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params load_params =
    {
        .linux_side = linux_side,
        .textureId = texture_id,
        .ppTexture = (struct winRenderModel_TextureMap_t_1267 **)texture_map,
    };
    cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( &load_params );
    return load_params._ret;
}

static void free_linux_texture_map_006( void *linux_side, struct winRenderModel_TextureMap_t_1237 *texture_map )
{
    struct cppIVRRenderModels_IVRRenderModels_006_FreeTexture_params params =
    {
        .linux_side = linux_side,
        .pTexture = (struct winRenderModel_TextureMap_t_1267 *)texture_map,
    };

    cppIVRRenderModels_IVRRenderModels_006_FreeTexture( &params );
}

static EVRRenderModelError ivrrendermodels_load_texture_d3d11_async( void *device, struct winRenderModel_TextureMap_t_1237 *texture_map, void **dst_texture )
{
    EVRRenderModelError error;
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

static EVRRenderModelError ivrrendermodels_load_into_texture_d3d11_async( void *dst_texture, struct winRenderModel_TextureMap_t_1237 *texture_map )
{
    IUnknown *unk = dst_texture;
    EVRRenderModelError error;
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

EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async( struct w_steam_iface *_this, TextureID_t textureId,
                                                                                              void *pD3D11Device, void **ppD3D11Texture2D )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map = NULL;
    EVRRenderModelError _ret;
    TRACE( "%p\n", _this );

    _ret = load_linux_texture_map_004( _this->u_iface, textureId, &texture_map );
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

    free_linux_texture_map_004( _this->u_iface, texture_map );

    return _ret;
}

EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async( struct w_steam_iface *_this, TextureID_t textureId,
                                                                                              void *pD3D11Device, void **ppD3D11Texture2D )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map = NULL;
    EVRRenderModelError _ret;
    TRACE( "%p\n", _this );

    _ret = load_linux_texture_map_005( _this->u_iface, textureId, &texture_map );
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

    free_linux_texture_map_005( _this->u_iface, texture_map );

    return _ret;
}

EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async( struct w_steam_iface *_this, TextureID_t textureId,
                                                                                              void *pD3D11Device, void **ppD3D11Texture2D )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map = NULL;
    EVRRenderModelError _ret;
    TRACE( "%p\n", _this );

    _ret = load_linux_texture_map_006( _this->u_iface, textureId, &texture_map );
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

    free_linux_texture_map_006( _this->u_iface, texture_map );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}

EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async( struct w_steam_iface *_this, TextureID_t textureId,
                                                                                                  void *pDstTexture )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map = NULL;
    EVRRenderModelError _ret;

    TRACE( "%p\n", _this );

    if (!pDstTexture) return VRRenderModelError_InvalidArg;

    _ret = load_linux_texture_map_005( _this->u_iface, textureId, &texture_map );
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

    free_linux_texture_map_005( _this->u_iface, texture_map );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}

EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async( struct w_steam_iface *_this, TextureID_t textureId,
                                                                                                  void *pDstTexture )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map = NULL;
    EVRRenderModelError _ret;

    TRACE( "%p\n", _this );

    if (!pDstTexture) return VRRenderModelError_InvalidArg;

    _ret = load_linux_texture_map_006( _this->u_iface, textureId, &texture_map );
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

    free_linux_texture_map_006( _this->u_iface, texture_map );

    return _ret;
}

void __thiscall winIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11( struct w_steam_iface *_this, void *pD3D11Texture2D )
{
    ID3D11Texture2D *d3d11_texture = pD3D11Texture2D;
    TRACE( "%p\n", _this );
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}
