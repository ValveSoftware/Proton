#ifndef __VRCLIENT_UNIXLIB_H
#define __VRCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <assert.h>

#include <windef.h>
#include <winbase.h>
#include <winternl.h>

#include "vrclient_structs.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "wine/unixlib.h"

#include <pshpack1.h>

struct render_model
{
    union
    {
        w_RenderModel_t_0912 w_0912;
    };
    union
    {
        u_RenderModel_t_0912 *u_0912;
    };
};

struct render_model_texture_map
{
    union
    {
        w_RenderModel_TextureMap_t_090 w_090;
        w_RenderModel_TextureMap_t_1237 w_1237;
    };
    union
    {
        u_RenderModel_TextureMap_t_090 *u_090;
        u_RenderModel_TextureMap_t_1237 *u_1237;
    };
};

struct vrclient_init_params
{
    int8_t _ret;
    HMODULE winevulkan;
    char *unix_path;
};

struct vrclient_HmdSystemFactory_params
{
    void *_ret;
    const char *name;
    int *return_code;
};

struct vrclient_VRClientCoreFactory_params
{
    void *_ret;
    const char *name;
    int *return_code;
};

#include <poppack.h>

#define VRCLIENT_CALL( code, args )                                        \
    ({                                                                     \
        NTSTATUS status = WINE_UNIX_CALL( unix_ ## code, args );           \
        if (status) WARN( #code " failed, status %#x\n", (UINT)status );   \
        assert( !status );                                                 \
        status;                                                            \
    })

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unixlib_generated.h"

#endif /* __VRCLIENT_UNIXLIB_H */
