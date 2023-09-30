#include "unix_private.h"

#include "cppIVRRenderModels_IVRRenderModels_002.hpp"
#include "cppIVRRenderModels_IVRRenderModels_004.hpp"
#include "cppIVRRenderModels_IVRRenderModels_005.hpp"
#include "cppIVRRenderModels_IVRRenderModels_006.hpp"

/* LoadRenderModel(_Async) / FreeRenderModel */

void cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    struct render_model *model = params->ppRenderModel ? CONTAINING_RECORD( *params->ppRenderModel, struct render_model, w_0912 ) : NULL;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, params->ppRenderModel ? &model->u_0912 : nullptr );
    if (params->_ret == 0 && model) model->w_0912 = *model->u_0912;
}

void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    struct render_model *model = CONTAINING_RECORD( params->pRenderModel, struct render_model, w_0912 );
    iface->FreeRenderModel( model->u_0912 );
}

void cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    struct render_model *model = params->ppRenderModel ? CONTAINING_RECORD( *params->ppRenderModel, struct render_model, w_0912 ) : NULL;
    params->_ret = iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &model->u_0912 : nullptr );
    if (params->_ret == 0 && model) model->w_0912 = *model->u_0912;
}

void cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    struct render_model *model = CONTAINING_RECORD( params->pRenderModel, struct render_model, w_0912 );
    iface->FreeRenderModel( model->u_0912 );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    struct render_model *model = params->ppRenderModel ? CONTAINING_RECORD( *params->ppRenderModel, struct render_model, w_0912 ) : NULL;
    params->_ret = iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &model->u_0912 : nullptr );
    if (params->_ret == 0 && model) model->w_0912 = *model->u_0912;
}

void cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    struct render_model *model = CONTAINING_RECORD( params->pRenderModel, struct render_model, w_0912 );
    iface->FreeRenderModel( model->u_0912 );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    struct render_model *model = params->ppRenderModel ? CONTAINING_RECORD( *params->ppRenderModel, struct render_model, w_0912 ) : NULL;
    params->_ret = iface->LoadRenderModel_Async( params->pchRenderModelName, params->ppRenderModel ? &model->u_0912 : nullptr );
    if (params->_ret == 0 && model) model->w_0912 = *model->u_0912;
}

void cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    struct render_model *model = CONTAINING_RECORD( params->pRenderModel, struct render_model, w_0912 );
    iface->FreeRenderModel( model->u_0912 );
}


/* LoadTexture(_Async) / FreeTexture */

void cppIVRRenderModels_IVRRenderModels_002_LoadTexture( struct cppIVRRenderModels_IVRRenderModels_002_LoadTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    struct render_model_texture_map *map = params->ppTexture ? CONTAINING_RECORD( *params->ppTexture, struct render_model_texture_map, w_090 ) : NULL;
    params->_ret = iface->LoadTexture( params->textureId, params->ppTexture ? &map->u_090 : nullptr );
    if (params->_ret == 0 && map) map->w_090 = *map->u_090;
}

void cppIVRRenderModels_IVRRenderModels_002_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_002_FreeTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_002 *iface = (struct u_IVRRenderModels_IVRRenderModels_002 *)params->linux_side;
    struct render_model_texture_map *map = CONTAINING_RECORD( params->pTexture, struct render_model_texture_map, w_090 );
    iface->FreeTexture( map->u_090 );
}

void cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    struct render_model_texture_map *map = params->ppTexture ? CONTAINING_RECORD( *params->ppTexture, struct render_model_texture_map, w_090 ) : NULL;
    params->_ret = iface->LoadTexture_Async( params->textureId, params->ppTexture ? &map->u_090 : nullptr );
    if (params->_ret == 0 && map) map->w_090 = *map->u_090;
}

void cppIVRRenderModels_IVRRenderModels_004_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_004_FreeTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_004 *iface = (struct u_IVRRenderModels_IVRRenderModels_004 *)params->linux_side;
    struct render_model_texture_map *map = CONTAINING_RECORD( params->pTexture, struct render_model_texture_map, w_090 );
    iface->FreeTexture( map->u_090 );
}

void cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    struct render_model_texture_map *map = params->ppTexture ? CONTAINING_RECORD( *params->ppTexture, struct render_model_texture_map, w_090 ) : NULL;
    params->_ret = iface->LoadTexture_Async( params->textureId, params->ppTexture ? &map->u_090 : nullptr );
    if (params->_ret == 0 && map) map->w_090 = *map->u_090;
}

void cppIVRRenderModels_IVRRenderModels_005_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_005_FreeTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_005 *iface = (struct u_IVRRenderModels_IVRRenderModels_005 *)params->linux_side;
    struct render_model_texture_map *map = CONTAINING_RECORD( params->pTexture, struct render_model_texture_map, w_090 );
    iface->FreeTexture( map->u_090 );
}

void cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    struct render_model_texture_map *map = params->ppTexture ? CONTAINING_RECORD( *params->ppTexture, struct render_model_texture_map, w_1237 ) : NULL;
    params->_ret = iface->LoadTexture_Async( params->textureId, params->ppTexture ? &map->u_1237 : nullptr );
    if (params->_ret == 0 && map) map->w_1237 = *map->u_1237;
}

void cppIVRRenderModels_IVRRenderModels_006_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_006_FreeTexture_params *params )
{
    struct u_IVRRenderModels_IVRRenderModels_006 *iface = (struct u_IVRRenderModels_IVRRenderModels_006 *)params->linux_side;
    struct render_model_texture_map *map = CONTAINING_RECORD( params->pTexture, struct render_model_texture_map, w_1237 );
    iface->FreeTexture( map->u_1237 );
}
