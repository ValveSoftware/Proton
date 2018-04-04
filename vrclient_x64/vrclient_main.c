#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <limits.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "winnls.h"
#include "wine/debug.h"
#include "wine/library.h"

#include "vrclient_defs.h"
#include "vrclient_private.h"

#include "initguid.h"
#include "wined3d-interop.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}


#if 0
uint32 vrclient_unix_path_to_dos_path(uint32 api_result, char *inout, uint32 inout_bytes)
{
    WCHAR *converted;
    uint32 r;

    if(api_result == 0)
        return 0;

    converted = wine_get_dos_file_name(inout);
    if(!converted){
        WARN("Unable to convert unix filename to DOS: %s\n", inout);
        *inout = 0;
        return 0;
    }

    r = WideCharToMultiByte(CP_ACP, 0, converted, -1, inout, inout_bytes,
            NULL, NULL);

    HeapFree(GetProcessHeap(), 0, converted);

    if(r > 0)
        return r - 1;

    return 0;
}
#endif

#include "win_constructors.h"

static const struct {
    const char *iface_version;
    void *(*ctor)(void *);
} constructors[] = {
#include "win_constructors_table.dat"
};

void *create_win_interface(const char *name, void *linux_side)
{
    int i;

    TRACE("trying to create %s\n", name);

    if(!linux_side)
        return NULL;

    for(i = 0; i < sizeof(constructors) / sizeof(*constructors); ++i){
        if(!strcmp(name, constructors[i].iface_version))
            return constructors[i].ctor(linux_side);
    }

    ERR("Don't recognize interface name: %s\n", name);

    return NULL;
}

static void *vrclient_lib;
static void *(*vrclient_VRClientCoreFactory)(const char *name, int *return_code);

static int load_vrclient(void)
{
    char path[PATH_MAX];

    if(vrclient_lib)
        return 1;

    /* PROTON_VR_RUNTIME is provided by the proton setup script */
    if(!getenv("PROTON_VR_RUNTIME")){
        TRACE("Linux OpenVR runtime is not available\n");
        return 0;
    }

#ifdef _WIN64
    snprintf(path, PATH_MAX, "%s/bin/linux64/vrclient.so", getenv("PROTON_VR_RUNTIME"));
#else
    snprintf(path, PATH_MAX, "%s/bin/vrclient.so", getenv("PROTON_VR_RUNTIME"));
#endif
    TRACE("got openvr runtime path: %s\n", path);

    vrclient_lib = wine_dlopen(path, RTLD_NOW, NULL, 0);
    if(!vrclient_lib){
        ERR("unable to load vrclient.so\n");
        return 0;
    }

    vrclient_VRClientCoreFactory = wine_dlsym(vrclient_lib, "VRClientCoreFactory", NULL, 0);
    if(!vrclient_VRClientCoreFactory){
        ERR("unable to load VRClientCoreFactory method\n");
        return 0;
    }

    return 1;
}

void *CDECL VRClientCoreFactory(const char *name, int *return_code)
{
    TRACE("name: %s, return_code: %p\n", name, return_code);

    if(!load_vrclient())
        return NULL;

    return create_win_interface(name, vrclient_VRClientCoreFactory(name, return_code));
}

void get_dxgi_output_info(void *cpp_func, void *linux_side, int32_t *adapter_idx)
{
    TRACE("%p\n", adapter_idx);
    *adapter_idx = 0;
}

void get_dxgi_output_info2(void *cpp_func, void *linux_side, int32_t *adapter_idx, int32_t *output_idx)
{
    TRACE("%p, %p\n", adapter_idx, output_idx);
    *adapter_idx = 0;
    *output_idx = 0;
}

struct submit_data
{
    void *linux_side;

    EVRCompositorError (*submit)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags);

    EVREye eye;
    Texture_t texture;
    VRTextureBounds_t bounds;
    EVRSubmitFlags flags;
};

static CDECL void d3d11_texture_callback(unsigned int gl_texture, const void *data, unsigned int data_size)
{
    const struct submit_data *submit_data = data;
    VRCompositorError error = 0;
    VRTextureBounds_t bounds;
    Texture_t texture;

    TRACE("texture %u, data {%p, %u}\n", gl_texture, data, data_size);

    texture = submit_data->texture;
    texture.handle = (void *)(UINT_PTR)gl_texture;
    texture.eType = TextureType_OpenGL;

    /* Textures are upside-down in wined3d. */
    bounds = submit_data->bounds;
    bounds.vMin = submit_data->bounds.vMax;
    bounds.vMax = submit_data->bounds.vMin;

    error = submit_data->submit(submit_data->linux_side, submit_data->eye,
            &texture, &bounds, submit_data->flags);
    if (error)
        ERR("error %#x\n", error);
}

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, void *texture, Compositor_TextureBounds *bounds,
        struct compositor_data *user_data)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, void *texture, VRTextureBounds_t *bounds,
        struct compositor_data *user_data)
{
    TRACE("%p, %#x, %p, %p\n", linux_side, eye, texture, bounds);

    return cpp_func(linux_side, eye, texture, bounds);
}

VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture, VRTextureBounds_t *bounds,
        struct compositor_data *user_data)
{
    TRACE("%p, %#x, %#x, %p, %p\n", linux_side, eye, api, texture, bounds);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API!\n");

    return cpp_func(linux_side, eye, api, texture, bounds);
}

VRCompositorError ivrcompositor_008_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *,
        VRTextureBounds_t *, VRSubmitFlags_t),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture,
        VRTextureBounds_t *bounds, VRSubmitFlags_t flags,
        struct compositor_data *user_data)
{
    TRACE("%p, %#x, %#x, %p, %p, %#x\n", linux_side, eye, api, texture, bounds, flags);

    if (api == API_DirectX)
        FIXME("Not implemented Direct3D API!\n");

    return cpp_func(linux_side, eye, api, texture, bounds, flags);
}

EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        struct compositor_data *user_data)
{
    IWineD3D11Texture2D *wine_texture;
    IWineD3D11Device *wined3d_device;
    struct submit_data submit_data;
    IUnknown *texture_iface;
    ID3D11Device *device;
    HRESULT hr;

    TRACE("%p, %#x, %p, %p, %#x\n", linux_side, eye, texture, bounds, flags);

    switch (texture->eType)
    {
        case TextureType_DirectX:
            TRACE("D3D11\n");

            if (flags & (Submit_TextureWithPose | Submit_TextureWithDepth))
            {
                FIXME("Submit with pose or depth is not supported.\n");
                flags &= ~(Submit_TextureWithPose | Submit_TextureWithDepth);
            }

            texture_iface = texture->handle;
            hr = texture_iface->lpVtbl->QueryInterface(texture_iface,
                    &IID_IWineD3D11Texture2D, (void **)&wine_texture);
            if (FAILED(hr))
            {
                ERR("Invalid D3D11 texture %p.\n", texture);
                return cpp_func(linux_side, eye, texture, bounds, flags);
            }

            wine_texture->lpVtbl->GetDevice(wine_texture, &device);
            if (user_data->d3d11_device != device)
            {
                if (user_data->d3d11_device)
                    FIXME("Previous submit was from different D3D11 device.\n");

                user_data->d3d11_device = device;

                if (SUCCEEDED(hr = device->lpVtbl->QueryInterface(device,
                        &IID_IWineD3D11Device, (void **)&wined3d_device)))
                {
                    user_data->wined3d_device = wined3d_device;
                    wined3d_device->lpVtbl->Release(wined3d_device);
                }
                else
                {
                    ERR("Failed to get device, hr %#x.\n", hr);
                    user_data->wined3d_device = NULL;
                }
            }
            device->lpVtbl->Release(device);

            submit_data.linux_side = linux_side;
            submit_data.submit = cpp_func;
            submit_data.eye = eye;
            submit_data.texture = *texture;
            submit_data.bounds = *bounds;
            submit_data.flags = flags;
            wine_texture->lpVtbl->access_gl_texture(wine_texture,
                    d3d11_texture_callback, &submit_data, sizeof(submit_data));

            wine_texture->lpVtbl->Release(wine_texture);

            return 0;
        default:
            return cpp_func(linux_side, eye, texture, bounds, flags);
    }
}

struct post_present_handoff_data
{
    void *linux_side;
    void (*post_present_handoff)(void *linux_side);
};

static CDECL void d3d11_post_present_handoff_callback(const void *data, unsigned int data_size)
{
    const struct post_present_handoff_data *callback_data = data;

    TRACE("data {%p, %u}\n", data, data_size);

    callback_data->post_present_handoff(callback_data->linux_side);
}

void ivrcompositor_post_present_handoff(void (*cpp_func)(void *),
        void *linux_side, struct compositor_data *user_data)
{
    struct post_present_handoff_data data;
    IWineD3D11Device *wined3d_device;

    TRACE("%p\n", linux_side);

    if ((wined3d_device = user_data->wined3d_device))
    {
        TRACE("wined3d device %p\n", wined3d_device);

        data.linux_side = linux_side;
        data.post_present_handoff = cpp_func;
        wined3d_device->lpVtbl->run_on_command_stream(wined3d_device,
                d3d11_post_present_handoff_callback, &data, sizeof(data));
        return;
    }

    cpp_func(linux_side);
}
