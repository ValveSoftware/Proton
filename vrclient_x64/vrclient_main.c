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

#include "vrclient_private.h"

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
