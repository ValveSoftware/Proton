/*
 * Copyright (c) 2015, 2019, 2020 Valve Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* This is a stub steam.exe implementation for use inside Proton. It provides
 * a small subset of the actual Steam functionality for games that expect
 * Windows version of Steam running. */

#include <windows.h>
#include <shlobj.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <dlfcn.h>

#pragma push_macro("_WIN32")
#pragma push_macro("__cdecl")
#undef _WIN32
#undef __cdecl
#include "steam_api.h"
#pragma pop_macro("_WIN32")
#pragma pop_macro("__cdecl")

#include "wine/debug.h"

#include "json/json.h"

#include "wine/heap.h"
#include "wine/vulkan.h"
#include "openvr.h"
#include "../src/ivrclientcore.h"

WINE_DEFAULT_DEBUG_CHANNEL(steam);

EXTERN_C HANDLE CDECL __wine_make_process_system(void);

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))

static void set_active_process_pid(void)
{
    DWORD pid = GetCurrentProcessId();
    RegSetKeyValueA(HKEY_CURRENT_USER, "Software\\Valve\\Steam\\ActiveProcess", "pid", REG_DWORD, &pid, sizeof(pid));
}

static DWORD WINAPI create_steam_window(void *arg)
{
    static WNDCLASSEXW wndclass = { sizeof(WNDCLASSEXW) };
    static const WCHAR class_nameW[] = {'v','g','u','i','P','o','p','u','p','W','i','n','d','o','w',0};
    static const WCHAR steamW[] = {'S','t','e','a','m',0};
    MSG msg;

    wndclass.lpfnWndProc = DefWindowProcW;
    wndclass.lpszClassName = class_nameW;

    RegisterClassExW(&wndclass);
    CreateWindowW(class_nameW, steamW, WS_POPUP, 40, 40,
                  400, 300, NULL, NULL, NULL, NULL);

    while (GetMessageW(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

static void setup_steam_registry(void)
{
    const char *ui_lang;
    uint32 appid;
    char buf[256];
    HKEY key;
    LSTATUS status;

    if (!SteamAPI_Init())
    {
        WINE_ERR("SteamAPI_Init failed\n");
        return;
    }

    ui_lang = SteamUtils()->GetSteamUILanguage();
    WINE_TRACE("UI language: %s\n", wine_dbgstr_a(ui_lang));
    RegSetKeyValueA(HKEY_CURRENT_USER, "Software\\Valve\\Steam", "language",
                    REG_SZ, ui_lang, strlen(ui_lang) + 1);

    appid = SteamUtils()->GetAppID();
    WINE_TRACE("appid: %u\n", appid);
    sprintf(buf, "Software\\Valve\\Steam\\Apps\\%u", appid);
    status = RegCreateKeyA(HKEY_CURRENT_USER, buf, &key);
    if (!status)
    {
        DWORD value;
        value = 1;
        RegSetKeyValueA(key, NULL, "Installed", REG_DWORD, &value, sizeof(value));
        RegSetKeyValueA(key, NULL, "Running", REG_DWORD, &value, sizeof(value));
        value = 0;
        RegSetKeyValueA(key, NULL, "Updating", REG_DWORD, &value, sizeof(value));
        RegCloseKey(key);
    }
    else WINE_ERR("Could not create key: %u\n", status);

    SteamAPI_Shutdown();
}

static std::string get_linux_vr_path(void)
{
    const char *e;

    static const char *openvr_path = "/openvr/openvrpaths.vrpath";

    e = getenv("VR_PATHREG_OVERRIDE");
    if(e && *e)
        return e;

    e = getenv("XDG_CONFIG_HOME");
    if(e && *e)
        return std::string(e) + openvr_path;

    e = getenv("HOME");
    if(e && *e)
        return std::string(e) + "/.config" + openvr_path;

    return "";
}

static bool get_windows_vr_path(WCHAR *out_path, bool create)
{
    if(FAILED(SHGetFolderPathW(NULL, CSIDL_LOCAL_APPDATA | CSIDL_FLAG_CREATE,
                    NULL, 0, out_path)))
        return false;

    lstrcatW(out_path, L"\\openvr");

    if(create)
        CreateDirectoryW(out_path, NULL);

    lstrcatW(out_path, L"\\openvrpaths.vrpath");

    return true;
}

static WCHAR *str_to_wchar(const std::string &str)
{
    DWORD sz = MultiByteToWideChar(CP_UNIXCP, 0, str.c_str(), -1, NULL, 0);
    if(!sz)
        return NULL;

    WCHAR *ret = (WCHAR *)HeapAlloc(GetProcessHeap(), 0, sizeof(WCHAR) * sz);
    if(!ret)
        return NULL;

    sz = MultiByteToWideChar(CP_UNIXCP, 0, str.c_str(), -1, ret, sz);
    if(!sz)
    {
        HeapFree(GetProcessHeap(), 0, ret);
        return NULL;
    }

    return ret;
}

static std::string read_text_file(const WCHAR *filename)
{
    HANDLE ifile = CreateFileW(filename, GENERIC_READ,
            FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, NULL,
            OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if(ifile == INVALID_HANDLE_VALUE)
        return "";

    LARGE_INTEGER size;

    if(!GetFileSizeEx(ifile, &size))
    {
        CloseHandle(ifile);
        return "";
    }

    char *buf = (char *)HeapAlloc(GetProcessHeap(), 0, size.u.LowPart);
    if(!buf)
    {
        CloseHandle(ifile);
        return "";
    }

    DWORD readed;

    if(!ReadFile(ifile, buf, size.u.LowPart, &readed, NULL))
    {
        HeapFree(GetProcessHeap(), 0, buf);
        CloseHandle(ifile);
        return "";
    }

    CloseHandle(ifile);

    DWORD outsize = 1;
    for(DWORD i = 1; i < readed; ++i)
    {
        if(buf[i] == '\n' && buf[i - 1] == '\r') // CRLF
            buf[outsize - 1] = '\n';
        else
            buf[outsize++] = buf[i];
    }

    std::string ret(buf, outsize);

    HeapFree(GetProcessHeap(), 0, buf);

    return ret;
}

static bool write_string_to_file(const WCHAR *filename, const std::string &contents)
{
    HANDLE ofile = CreateFileW(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL, NULL);
    if(ofile == INVALID_HANDLE_VALUE)
        return false;

    DWORD written;

    if(!WriteFile(ofile, contents.data(), (DWORD)contents.length(), &written, NULL))
    {
        CloseHandle(ofile);
        return false;
    }

    CloseHandle(ofile);

    return true;
}

static bool convert_path_to_win(std::string &s)
{
    WCHAR *path = wine_get_dos_file_name(s.c_str());
    if(!path)
        return false;

    DWORD sz = WideCharToMultiByte(CP_UTF8, 0, path, -1, NULL, 0, NULL, NULL);
    if(!sz)
    {
        HeapFree(GetProcessHeap(), 0, path);
        return false;
    }

    char *pathUTF8 = (char *)HeapAlloc(GetProcessHeap(), 0, sz);
    if(!pathUTF8)
    {
        HeapFree(GetProcessHeap(), 0, path);
        return false;
    }

    sz = WideCharToMultiByte(CP_UTF8, 0, path, -1, pathUTF8, sz, NULL, NULL);
    if(!sz)
    {
        HeapFree(GetProcessHeap(), 0, pathUTF8);
        HeapFree(GetProcessHeap(), 0, path);
        return false;
    }

    s = pathUTF8;

    HeapFree(GetProcessHeap(), 0, pathUTF8);
    HeapFree(GetProcessHeap(), 0, path);

    return true;
}

static void convert_json_array_paths(Json::Value &arr)
{
    for(uint32_t i = 0; i < arr.size(); ++i)
    {
        std::string path(arr[i].asString());
        if(convert_path_to_win(path))
            arr[i] = path;
    }
}

static void convert_environment_path(const char *nameA, const WCHAR *nameW)
{
    /* get linux-side variable */
    const char *e = getenv(nameA);
    if(!e || !*e)
        return;

    /* convert to win and set */
    WCHAR *path = wine_get_dos_file_name(e);
    if(!path)
        return;

    SetEnvironmentVariableW(nameW, path);

    HeapFree(GetProcessHeap(), 0, path);
}

static void set_env_from_unix(const WCHAR *name, const std::string &val)
{
    WCHAR valW[MAX_PATH];
    DWORD sz;

    sz = MultiByteToWideChar(CP_UTF8, 0, val.c_str(), -1, valW, MAX_PATH);
    if(!sz)
    {
        WINE_WARN("Invalid utf8 seq in vr runtime key\n");
        return;
    }

    SetEnvironmentVariableW(name, valW);
}

static bool convert_linux_vrpaths(void)
{
    /* read in linux vrpaths */
    std::string linux_vrpaths = get_linux_vr_path();
    if(linux_vrpaths.empty())
    {
        WINE_TRACE("Couldn't get openvr vrpaths path\n");
        return false;
    }

    WCHAR *linux_vrpathsW = str_to_wchar(linux_vrpaths);
    if(!linux_vrpathsW)
        return false;

    std::string contents = read_text_file(linux_vrpathsW);
    HeapFree(GetProcessHeap(), 0, linux_vrpathsW);
    if(contents.empty())
    {
        WINE_TRACE("openvr vrpaths is empty\n");
        return false;
    }

    Json::Value root;
    Json::Reader reader;

    if(!reader.parse(contents, root))
    {
        WINE_WARN("Invalid openvr vrpaths JSON\n");
        return false;
    }

    /* pass original runtime path into Wine */
    if(root.isMember("runtime") && root["runtime"].isArray() && root["runtime"].size() > 0)
    {
        set_env_from_unix(L"PROTON_VR_RUNTIME", root["runtime"][0].asString());
    }

    /* set hard-coded paths */
    root["runtime"] = Json::Value(Json::ValueType::arrayValue);
    root["runtime"][0] = "C:\\vrclient\\";
    root["runtime"][1] = "C:\\vrclient";

    /* map linux paths into windows filesystem */
    if(root.isMember("config") && root["config"].isArray())
        convert_json_array_paths(root["config"]);

    if(root.isMember("log") && root["log"].isArray())
        convert_json_array_paths(root["log"]);

    /* external_drivers is currently unsupported in Proton */
    root["external_drivers"] = Json::Value(Json::ValueType::nullValue);

    /* write out windows vrpaths */
    SetEnvironmentVariableW(L"VR_PATHREG_OVERRIDE", NULL);
    SetEnvironmentVariableW(L"VR_OVERRIDE", NULL);
    convert_environment_path("VR_CONFIG_PATH", L"VR_CONFIG_PATH");
    convert_environment_path("VR_LOG_PATH", L"VR_LOG_PATH");
    Json::StyledWriter writer;

    WCHAR windows_vrpaths[MAX_PATH];
    if(!get_windows_vr_path(windows_vrpaths, true))
        return false;

    contents = writer.write(root);

    write_string_to_file(windows_vrpaths, contents);

    return true;
}

static void setup_vrpaths(void)
{
    bool success = false;

    try{
        success = convert_linux_vrpaths();
    }catch(std::exception e){
        WINE_ERR("got error parsing vrpaths file\n");
        success = false;
    }

    if(!success)
    {
        /* delete the windows file only if the linux conversion fails */
        WCHAR windows_vrpaths[MAX_PATH];
        if(get_windows_vr_path(windows_vrpaths, false))
        {
            DeleteFileW(windows_vrpaths);
        }
    }
}

static BOOL set_vr_status(HKEY key, DWORD value)
{
    LSTATUS status;

    if ((status = RegSetValueExA(key, "state", 0, REG_DWORD, (BYTE *)&value, sizeof(value))))
    {
        WINE_ERR("Could not set state value, status %#x.\n", status);
        return FALSE;
    }
    return TRUE;
}

void* load_vrclient(void)
{
    WCHAR pathW[PATH_MAX];
    char *pathU;
    DWORD sz;

#ifdef _WIN64
    static const char append_path[] = "/bin/linux64/vrclient.so";
#else
    static const char append_path[] = "/bin/vrclient.so";
#endif

    /* PROTON_VR_RUNTIME is provided by the proton setup script */
    if(!GetEnvironmentVariableW(L"PROTON_VR_RUNTIME", pathW, ARRAY_SIZE(pathW)))
    {
        WINE_TRACE("Linux OpenVR runtime is not available\n");
        return 0;
    }

    sz = WideCharToMultiByte(CP_UNIXCP, 0, pathW, -1, NULL, 0, NULL, NULL);
    if(!sz)
    {
        WINE_ERR("Can't convert path to unixcp! %s\n", wine_dbgstr_w(pathW));
        return NULL;
    }

    pathU = (char *)HeapAlloc(GetProcessHeap(), 0, sz + sizeof(append_path));

    sz = WideCharToMultiByte(CP_UNIXCP, 0, pathW, -1, pathU, sz, NULL, NULL);
    if(!sz)
    {
        WINE_ERR("Can't convert path to unixcp! %s\n", wine_dbgstr_w(pathW));
        return NULL;
    }

    strcat(pathU, append_path);

    WINE_TRACE("got openvr runtime path: %s\n", pathU);

    return dlopen(pathU, RTLD_NOW);
}

static char *strdupA(const char *s)
{
    size_t l = strlen(s) + 1;
    char *r = (char *)heap_alloc(l);
    memcpy(r, s, l);
    return r;
}

static void parse_extensions(const char *in, uint32_t *out_count,
        char ***out_strs)
{
    char *iter, *start;
    char **list, *str = strdupA(in);
    uint32_t extension_count = 0, o = 0;

    iter = str;
    while(*iter){
        if(*iter++ == ' ')
            extension_count++;
    }
    /* count the one ending in NUL */
    if(iter != str)
        extension_count++;
    if(!extension_count){
        *out_count = 0;
        *out_strs = NULL;
        return;
    }

    list = (char **)heap_alloc(extension_count * sizeof(*list));

    start = iter = str;
    do{
        if(*iter == ' '){
            *iter = 0;
            list[o++] = start;
            WINE_TRACE("added %s to list\n", list[o-1]);
            iter++;
            start = iter;
        }else if(*iter == 0){
            list[o++] = start;
            WINE_TRACE("added %s to list\n", list[o-1]);
            break;
        }else{
            iter++;
        }
    }while(1);

    *out_count = extension_count;
    *out_strs = list;
}

extern "C"
{
    VkPhysicalDevice WINAPI __wine_get_native_VkPhysicalDevice(VkPhysicalDevice phys_dev);
};

static DWORD WINAPI initialize_vr_data(void *arg)
{
    vr::IVRClientCore* (*vrclient_VRClientCoreFactory)(const char *name, int *return_code);
    uint32_t instance_extensions_count, device_count;
    VkPhysicalDevice *phys_devices = NULL;
    VkPhysicalDeviceProperties prop = {};
    VkInstanceCreateInfo inst_info = {};
    char **instance_extensions = NULL;
    VkApplicationInfo app_info = {};
    char *buffer = NULL, *new_buffer;
    vr::IVRClientCore* client_core;
    vr::IVRCompositor* compositor;
    VkInstance vk_instance = NULL;
    BOOL vr_initialized = FALSE;
    HKEY vr_key = (HKEY)arg;
    vr::EVRInitError error;
    HMODULE hvulkan = NULL;
    DWORD vr_status = ~0u;
    const char *env_str;
    unsigned int app_id;
    unsigned int length;
    void *lib_vrclient;
    int return_code;
    LSTATUS status;
    unsigned int i;
    char str[256];
    VkResult res;

    WINE_TRACE("Starting VR info initialization.\n");

    if (!(lib_vrclient = load_vrclient()))
    {
        WINE_ERR("Could not load libopenvr_api.so.\n");
        set_vr_status(vr_key, ~0u);
        RegCloseKey(vr_key);
        return 0;
    }

    if (!(vrclient_VRClientCoreFactory = reinterpret_cast<decltype(vrclient_VRClientCoreFactory)>
            (dlsym(lib_vrclient, "VRClientCoreFactory"))))
    {
        WINE_ERR("Could not find function %s.\n", vrclient_VRClientCoreFactory);
        goto done;
    }
    if (!(client_core = vrclient_VRClientCoreFactory(vr::IVRClientCore_Version, &return_code)))
    {
        WINE_ERR("Could not get IVRClientCore, error %d.\n", return_code);
    }

    if ((env_str = getenv("SteamGameId")))
        app_id = atoi(env_str);
    else
        app_id = 1245040; /* Proton 5.0 */

    /* Without overriding the app_key vrclient waits 2 seconds for a valid appkey before returning. */
    sprintf(str, "{ \"app_key\" : \"steam.app.%u\" }", app_id);
    error = client_core->Init(vr::VRApplication_Background, str);
    if (error != vr::VRInitError_None)
    {
        if (error == vr::VRInitError_Init_NoServerForBackgroundApp)
            WINE_TRACE("VR server is not available.\n");
        else
            WINE_ERR("VR init failed, error %u.\n", error);
        goto done;
    }
    vr_initialized = TRUE;

    compositor = reinterpret_cast<vr::IVRCompositor*>(client_core->GetGenericInterface(vr::IVRCompositor_Version, &error));
    if (!compositor)
    {
        WINE_ERR("Could not get compositor, error %u.\n", error);
        goto done;
    }

    length = compositor->GetVulkanInstanceExtensionsRequired(nullptr, 0);
    if (!(buffer = (char *)heap_alloc(length)))
    {
        WINE_ERR("No memory.\n");
        goto done;
    }
    *buffer = 0;
    compositor->GetVulkanInstanceExtensionsRequired(buffer, length);
    WINE_TRACE("Instance extensions %s.\n", buffer);

    if ((status = RegSetValueExA(vr_key, "openvr_vulkan_instance_extensions", 0, REG_SZ, (BYTE *)buffer, length)))
    {
        WINE_ERR("Could not set openvr_vulkan_instance_extensions value, status %#x.\n", status);
        return FALSE;
    }

    if (!(hvulkan = LoadLibraryA("winevulkan.dll")))
    {
        WINE_ERR("Could not load winevulkan.\n");
        goto done;
    }

#define USE_VULKAN_PROC(name) decltype(name) *p##name;\
    if (!(p##name = reinterpret_cast<decltype(name) *>(GetProcAddress(hvulkan, "wine_"#name)))\
            && !(p##name = reinterpret_cast<decltype(name) *>(GetProcAddress(hvulkan, #name))))\
    {\
        WINE_ERR("Could not find function %s.\n", #name);\
        goto done;\
    }
    USE_VULKAN_PROC(vkCreateInstance)
    USE_VULKAN_PROC(vkDestroyInstance)
    USE_VULKAN_PROC(vkEnumeratePhysicalDevices)
    USE_VULKAN_PROC(vkGetPhysicalDeviceProperties)
    USE_VULKAN_PROC(__wine_get_native_VkPhysicalDevice)
#undef USE_OPENVR_PROC

    parse_extensions(buffer, &instance_extensions_count, &instance_extensions);

    app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app_info.pApplicationName = "proton_vrhelper";
    app_info.applicationVersion = 1;
    app_info.pEngineName = "proton_vrhelper";
    app_info.engineVersion = 1;
    app_info.apiVersion = VK_MAKE_VERSION(1, 1, 0);

    inst_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    inst_info.pApplicationInfo = &app_info;
    inst_info.enabledExtensionCount = instance_extensions_count;
    inst_info.ppEnabledExtensionNames = instance_extensions;

    if ((res = pvkCreateInstance(&inst_info, NULL, &vk_instance)) != VK_SUCCESS)
    {
        WINE_ERR("Could not create VK instance, res %d.\n", res);
        goto done;
    }

    if ((res = pvkEnumeratePhysicalDevices(vk_instance, &device_count, NULL)) != VK_SUCCESS)
    {
        WINE_ERR("Could not enumerate physical devices, res %d.\n", res);
        goto done;
    }
    if (!(phys_devices = (VkPhysicalDevice *)heap_alloc(device_count * sizeof(*phys_devices))))
    {
        WINE_ERR("No memory.\n");
        goto done;
    }
    if ((res = pvkEnumeratePhysicalDevices(vk_instance, &device_count, phys_devices)) != VK_SUCCESS)
    {
        WINE_ERR("Could not enumerate physical devices, res %d.\n", res);
        goto done;
    }

    for (i = 0; i < device_count; ++i)
    {
        char name[256];
        LUID luid;

        pvkGetPhysicalDeviceProperties(phys_devices[i], &prop);
        if (prop.apiVersion < VK_MAKE_VERSION(1, 1, 0))
        {
            WINE_TRACE("Skipping Vulkan 1.0 adapter %s.\n", prop.deviceName);
            continue;
        }

        length = compositor->GetVulkanDeviceExtensionsRequired(p__wine_get_native_VkPhysicalDevice(phys_devices[i]), nullptr, 0);
        if (!(new_buffer = (char *)heap_realloc(buffer, length)))
        {
            WINE_ERR("No memory.\n");
            goto done;
        }
        buffer = new_buffer;
        compositor->GetVulkanDeviceExtensionsRequired(p__wine_get_native_VkPhysicalDevice(phys_devices[i]), buffer, length);
        sprintf(name, "PCIID:%04x:%04x", prop.vendorID, prop.deviceID);
        WINE_TRACE("%s: %s.\n", name, buffer);

        if ((status = RegSetValueExA(vr_key, name, 0, REG_SZ, (BYTE *)buffer, length)))
        {
            WINE_ERR("Could not set %s value, status %#x.\n", name, status);
            return FALSE;
        }
    }

    vr_status = 1;

done:
    set_vr_status(vr_key, vr_status);

    heap_free(phys_devices);

    if (vk_instance)
        pvkDestroyInstance(vk_instance, NULL);

    if (instance_extensions)
    {
        heap_free(instance_extensions[0]);
        heap_free(instance_extensions);
    }
    if (hvulkan)
        FreeLibrary(hvulkan);
    heap_free(buffer);
    if (vr_initialized)
        client_core->Cleanup();
    WINE_TRACE("Completed VR info initialization.\n");
    dlclose(lib_vrclient);
    RegCloseKey(vr_key);
    return 0;
}

static void setup_vr_registry(void)
{
    LSTATUS status;
    HANDLE thread;
    HKEY vr_key;
    DWORD disp;

    if ((status = RegCreateKeyExA(HKEY_CURRENT_USER, "Software\\Wine\\VR", 0, NULL, REG_OPTION_VOLATILE,
            KEY_ALL_ACCESS, NULL, &vr_key, &disp)))
    {
        WINE_ERR("Could not create key, status %#x.\n", status);
        return;
    }
    if (disp != REG_CREATED_NEW_KEY)
    {
        WINE_ERR("VR key already exists, disp %#x.\n", disp);
        RegCloseKey(vr_key);
        return;
    }

    if (!set_vr_status(vr_key, 0))
    {
        RegCloseKey(vr_key);
        return;
    }

    if (!(thread = CreateThread(NULL, 0, initialize_vr_data, (void *)vr_key, 0, NULL)))
    {
        WINE_ERR("Could not create thread, error %u.\n", GetLastError());
        RegCloseKey(vr_key);
        return;
    }
    CloseHandle(thread);

    WINE_TRACE("Queued VR info initialization.\n");
}

static WCHAR *strchrW(WCHAR *h, WCHAR n)
{
    do
    {
        if(*h == n)
            return h;
    } while (*h++);

    return NULL;
}

int strncmpW(const WCHAR *l, const WCHAR *r, int n)
{
    if(n <= 0)
        return 0;

    while(--n > 0 && *l && *l == *r){
        l++;
        r++;
    }

    return *l - *r;
}

static WCHAR *find_quote(WCHAR *str)
{
    WCHAR *end = strchrW(str, '"'), *ch;
    int odd;
    while (end)
    {
        odd = 0;
        ch = end - 1;
        while (ch >= str && *ch == '\\')
        {
            odd = !odd;
            --ch;
        }
        if (!odd)
            return end;
        end = strchrW(end + 1, '"');
    }
    return NULL;
}

static BOOL WINAPI console_ctrl_handler(DWORD dwCtrlType)
{
    return TRUE;
}

static BOOL streq_niw(const WCHAR *l, const WCHAR *r, size_t len)
{
    while(len > 0){
        if(towlower(*l) != towlower(*r))
            return FALSE;
        ++l; ++r; --len;
    }
    return TRUE;
}

static BOOL should_use_shell_execute(const WCHAR *cmdline)
{
    BOOL use_shell_execute = TRUE;
    BOOL quoted = FALSE;
    const WCHAR *executable_name_end = cmdline;

    /* find the end of the first arg...*/
    while (*executable_name_end != '\0' &&
           (*executable_name_end != ' ' || quoted) &&
           (*executable_name_end != '"' || !quoted))
    {
        quoted ^= *executable_name_end == '"';

        executable_name_end++;
    }

    /* backtrack to before the end of the arg
     * and check if we end in .exe or not
     * and determine whether to use ShellExecute
     * based on that */
    executable_name_end -= strlen(".exe");

    if (executable_name_end >= cmdline)
    {
        static const WCHAR exeW[] = {'.','e','x','e',0};

        if (streq_niw(executable_name_end, exeW, sizeof(exeW) / sizeof(*exeW) - 1))
            use_shell_execute = FALSE;
    }

    return use_shell_execute;
}

static HANDLE run_process(BOOL *should_await)
{
    WCHAR *cmdline = GetCommandLineW();
    STARTUPINFOW si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    DWORD flags = CREATE_UNICODE_ENVIRONMENT;
    BOOL use_shell_execute = TRUE;

    /* skip argv[0] */
    if (*cmdline == '"')
    {
        cmdline = find_quote(cmdline + 1);
        if (cmdline) cmdline++;
    }
    else
    {
        cmdline = strchrW(cmdline, ' ');
    }
    if (!cmdline)
    {
        WINE_ERR("Invalid command\n");
        return INVALID_HANDLE_VALUE;
    }
    while (*cmdline == ' ') cmdline++;

    /* convert absolute unix path to dos */
    if (cmdline[0] == '/' ||
            (cmdline[0] == '"' && cmdline[1] == '/'))
    {
        WCHAR *scratchW;
        char *scratchA;
        WCHAR *start, *end, *dos, *remainder, *new_cmdline;
        size_t argv0_len;
        int r;
        DWORD_PTR console;
        SHFILEINFOW sfi;

        static const WCHAR dquoteW[] = {'"',0};

        WINE_TRACE("Converting unix command: %s\n", wine_dbgstr_w(cmdline));

        if (cmdline[0] == '"')
        {
            start = cmdline + 1;
            end = find_quote(start);
            if (!end)
            {
                WINE_ERR("Unmatched quote? %s\n", wine_dbgstr_w(cmdline));
                goto run;
            }
            remainder = end + 1;
        }
        else
        {
            start = cmdline;
            end = strchrW(start, ' ');
            if (!end)
                end = strchrW(start, '\0');
            remainder = end;
        }

        argv0_len = end - start;

        scratchW = (WCHAR *)HeapAlloc(GetProcessHeap(), 0, (argv0_len + 1) * sizeof(WCHAR));
        memcpy(scratchW, start, argv0_len * sizeof(WCHAR));
        scratchW[argv0_len] = '\0';

        r = WideCharToMultiByte(CP_UNIXCP, 0, scratchW, -1,
                NULL, 0, NULL, NULL);
        if (!r)
        {
            WINE_ERR("Char conversion size failed?\n");
            goto run;
        }

        scratchA = (char *)HeapAlloc(GetProcessHeap(), 0, r);

        r = WideCharToMultiByte(CP_UNIXCP, 0, scratchW, -1,
                scratchA, r, NULL, NULL);
        if (!r)
        {
            WINE_ERR("Char conversion failed?\n");
            goto run;
        }

        dos = wine_get_dos_file_name(scratchA);

        CoInitialize(NULL);

        console = SHGetFileInfoW(dos, 0, &sfi, sizeof(sfi), SHGFI_EXETYPE);
        if (console)
        {
            if (!HIWORD(console))
                flags |= CREATE_NEW_CONSOLE;
        }

        new_cmdline = (WCHAR *)HeapAlloc(GetProcessHeap(), 0,
                (lstrlenW(dos) + 3 + lstrlenW(remainder) + 1) * sizeof(WCHAR));
        lstrcpyW(new_cmdline, dquoteW);
        lstrcatW(new_cmdline, dos);
        lstrcatW(new_cmdline, dquoteW);
        lstrcatW(new_cmdline, remainder);

        cmdline = new_cmdline;
    }

run:
    WINE_TRACE("Running command %s\n", wine_dbgstr_w(cmdline));

    SetConsoleCtrlHandler( console_ctrl_handler, TRUE );

    use_shell_execute = should_use_shell_execute(cmdline);

    /* only await the process finishing if we launch a process directly...
     * Steam simply calls ShellExecuteA with the same parameters.
     * this avoids the edge case where we could ShellExecute and
     * then that process ends up ShellExecuting something as a throw away */
    *should_await = !use_shell_execute;

    WINE_TRACE("Executing via %s\n",
        wine_dbgstr_a(use_shell_execute ? "ShellExecuteW" : "CreateProcessW"));

    if (use_shell_execute)
    {
        static const WCHAR verb[] = { 'o', 'p', 'e', 'n', 0 };
        ShellExecuteW(NULL, verb, cmdline, NULL, NULL, SW_SHOWNORMAL);

        return INVALID_HANDLE_VALUE;
    }
    else
    {
        if (!CreateProcessW(NULL, cmdline, NULL, NULL, FALSE, flags, NULL, NULL, &si, &pi))
        {
            WINE_ERR("Failed to create process %s: %u\n", wine_dbgstr_w(cmdline), GetLastError());
            return INVALID_HANDLE_VALUE;
        }

        CloseHandle(pi.hThread);

        return pi.hProcess;
    }
}

int main(int argc, char *argv[])
{
    HANDLE wait_handle = INVALID_HANDLE_VALUE;
    HANDLE event = INVALID_HANDLE_VALUE;
    BOOL game_process = FALSE;

    WINE_TRACE("\n");

    if (getenv("SteamGameId"))
    {
        /* do setup only for game process */
        event = CreateEventA(NULL, FALSE, FALSE, "Steam3Master_SharedMemLock");

        CreateThread(NULL, 0, create_steam_window, NULL, 0, NULL);

        set_active_process_pid();
        setup_steam_registry();

        wait_handle = __wine_make_process_system();
        game_process = TRUE;
    }

    if (argc > 1)
    {
        HANDLE child;
        BOOL should_await;

        setup_vrpaths();

        if (game_process)
            setup_vr_registry();

        child = run_process(&should_await);

        if (should_await)
        {
            if (child == INVALID_HANDLE_VALUE)
                return 1;

            if (wait_handle == INVALID_HANDLE_VALUE)
                wait_handle = child;
            else
                CloseHandle(child);
        }
    }

    if(wait_handle != INVALID_HANDLE_VALUE)
    {
        FreeConsole();
        WaitForSingleObject(wait_handle, INFINITE);
    }

    if (event != INVALID_HANDLE_VALUE)
        CloseHandle(event);

    return 0;
}
