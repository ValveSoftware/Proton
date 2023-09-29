#ifndef __VRCLIENT_UNIX_PRIVATE_H
#define __VRCLIENT_UNIX_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>

#include <windef.h>
#include <winbase.h>

#include "vrclient_structs.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern w_RenderModel_t_090 *struct_RenderModel_t_090_wrap(u_RenderModel_t_090 *l);
extern u_RenderModel_t_090 *struct_RenderModel_t_090_unwrap(w_RenderModel_t_090 *w);
extern w_RenderModel_t_0912 *struct_RenderModel_t_0912_wrap(u_RenderModel_t_0912 *l);
extern u_RenderModel_t_0912 *struct_RenderModel_t_0912_unwrap(w_RenderModel_t_0912 *w);

extern w_RenderModel_TextureMap_t_090 *struct_RenderModel_TextureMap_t_090_wrap(u_RenderModel_TextureMap_t_090 *l);
extern u_RenderModel_TextureMap_t_090 *struct_RenderModel_TextureMap_t_090_unwrap(w_RenderModel_TextureMap_t_090 *l);
extern w_RenderModel_TextureMap_t_1237 *struct_RenderModel_TextureMap_t_1237_wrap(u_RenderModel_TextureMap_t_1237 *l);
extern u_RenderModel_TextureMap_t_1237 *struct_RenderModel_TextureMap_t_1237_unwrap(w_RenderModel_TextureMap_t_1237 *w);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __VRCLIENT_UNIX_PRIVATE_H */
