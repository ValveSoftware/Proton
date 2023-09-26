#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
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

static EVRRenderModelError load_linux_texture_map( void *linux_side, TextureID_t texture_id,
                                                   struct winRenderModel_TextureMap_t_1237 **texture_map,
                                                   unsigned int version )
{
    EVRRenderModelError ret;

    switch (version)
    {
    case 4:
    {
        struct winRenderModel_TextureMap_t_0918 *orig_map;
        if ((ret = cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( linux_side, texture_id, &orig_map )))
            return ret;
        *texture_map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map) );
        memcpy( *texture_map, orig_map, sizeof(*orig_map) );
        cppIVRRenderModels_IVRRenderModels_004_FreeTexture( linux_side, orig_map );
        return 0;
    }
    case 5:
    {
        struct winRenderModel_TextureMap_t_1015 *orig_map;
        if ((ret = cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( linux_side, texture_id, &orig_map )))
            return ret;
        *texture_map = HeapAlloc( GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(**texture_map) );
        memcpy( *texture_map, orig_map, sizeof(*orig_map) );
        cppIVRRenderModels_IVRRenderModels_005_FreeTexture( linux_side, orig_map );
        return 0;
    }
    case 6:
        return cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( linux_side, texture_id,
                                                                         (winRenderModel_TextureMap_t_1267 **)texture_map );
    }

    FIXME( "Unsupported IVRRenderModels version! %u\n", version );
    return VRRenderModelError_NotSupported;
}

static void free_linux_texture_map( void *linux_side, struct winRenderModel_TextureMap_t_1237 *texture_map,
                                    unsigned int version )
{
    switch (version)
    {
    case 4: HeapFree( GetProcessHeap(), 0, texture_map ); break;
    case 5: HeapFree( GetProcessHeap(), 0, texture_map ); break;
    case 6:
        cppIVRRenderModels_IVRRenderModels_006_FreeTexture( linux_side, (winRenderModel_TextureMap_t_1267 *)texture_map );
        break;
    default: FIXME( "Unsupported IVRRenderModels version! %u\n", version ); break;
    }
}

EVRRenderModelError ivrrendermodels_load_texture_d3d11_async( EVRRenderModelError (*cpp_func)( void *, TextureID_t, void *, void ** ),
                                                              void *linux_side, TextureID_t texture_id,
                                                              void *device, void **dst_texture, unsigned int version )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map;
    EVRRenderModelError error;
    D3D11_TEXTURE2D_DESC desc;
    ID3D11Device *d3d11_device = device;
    ID3D11Texture2D *texture;
    HRESULT hr;

    error = load_linux_texture_map( linux_side, texture_id, &texture_map, version );
    if (error == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return error;
    }
    if (error != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", error );
        return error;
    }

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
        free_linux_texture_map( linux_side, texture_map, version );
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

    free_linux_texture_map( linux_side, texture_map, version );

    return error;
}

EVRRenderModelError ivrrendermodels_load_into_texture_d3d11_async( EVRRenderModelError (*cpp_func)( void *, TextureID_t, void * ),
                                                                   void *linux_side, TextureID_t texture_id,
                                                                   void *dst_texture, unsigned int version )
{
    struct winRenderModel_TextureMap_t_1237 *texture_map;
    IUnknown *unk = dst_texture;
    EVRRenderModelError error;
    ID3D11Texture2D *texture;

    if (!dst_texture) return VRRenderModelError_InvalidArg;

    error = load_linux_texture_map( linux_side, texture_id, &texture_map, version );
    if (error == VRRenderModelError_Loading)
    {
        TRACE( "Loading.\n" );
        return error;
    }
    if (error != VRRenderModelError_None)
    {
        WARN( "Failed to load texture %#x.\n", error );
        return error;
    }

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

    free_linux_texture_map( linux_side, texture_map, version );

    return error;
}

void ivrrendermodels_free_texture_d3d11( void (*cpp_func)( void *, void * ), void *linux_side,
                                         void *dst_texture, unsigned int version )
{
    ID3D11Texture2D *d3d11_texture = dst_texture;
    d3d11_texture->lpVtbl->Release( d3d11_texture );
}
