/*
 * Copyright (c) 2015, 2019, 2020, 2021, 2022 Valve Corporation
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

#include "ntstatus.h"
#define WIN32_NO_STATUS
#include <windows.h>
#include <winsvc.h>
#include <winternl.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#define _USE_GNU
#include <dlfcn.h>

#pragma push_macro("_WIN32")
#pragma push_macro("__cdecl")
#pragma push_macro("strncpy")
#undef _WIN32
#undef __cdecl
#undef strncpy
#include "steam_api.h"
#pragma pop_macro("_WIN32")
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")

#include "wine/debug.h"

#pragma push_macro("wcsncpy")
#undef wcsncpy
#include "json/json.h"
#pragma pop_macro("wcsncpy")

#include "wine/unixlib.h"
#include "wine/heap.h"
#include "wine/vulkan.h"
#include "openvr.h"
#include "../src/ivrclientcore.h"

#include <msi.h>

WINE_DEFAULT_DEBUG_CHANNEL(steam);

/* from shlobj.h, which breaks because of DECLSPEC_IMPORT EXTERN_C in C++ */
#define CSIDL_LOCAL_APPDATA 0x001c
#define CSIDL_FLAG_CREATE   0x8000

EXTERN_C WINSHELLAPI HRESULT WINAPI SHGetFolderPathA(HWND hwnd, int nFolder, HANDLE hToken, DWORD dwFlags, LPSTR pszPath);
EXTERN_C WINSHELLAPI HRESULT WINAPI SHGetFolderPathW(HWND hwnd, int nFolder, HANDLE hToken, DWORD dwFlags, LPWSTR pszPath);
#define SHGetFolderPath WINELIB_NAME_AW(SHGetFolderPath)

static const WCHAR PROTON_VR_RUNTIME_W[] = {'P','R','O','T','O','N','_','V','R','_','R','U','N','T','I','M','E',0};
static const WCHAR VR_PATHREG_OVERRIDE_W[] = {'V','R','_','P','A','T','H','R','E','G','_','O','V','E','R','R','I','D','E',0};
static const WCHAR VR_OVERRIDE_W[] = {'V','R','_','O','V','E','R','R','I','D','E',0};
static const WCHAR VR_CONFIG_PATH_W[] = {'V','R','_','C','O','N','F','I','G','_','P','A','T','H',0};
static const WCHAR VR_LOG_PATH_W[] = {'V','R','_','L','O','G','_','P','A','T','H',0};

static bool env_nonzero(const char *env)
{
    const char *v = getenv(env);
    return v != NULL && *v && v[0] != '0';
}

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
        DispatchMessageW(&msg);
    }

    return 0;
}

/* requires steam API to be initialized */
static void setup_steam_registry(void)
{
    const char *ui_lang, *language, *languages, *locale = NULL;
    uint32 appid;
    char buf[256];
    HKEY key;
    LSTATUS status;
    const int system_locale_appids[] = {
        1284210 /* Guild Wars 2 */
    };

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

    language = SteamApps()->GetCurrentGameLanguage();
    languages = SteamApps()->GetAvailableGameLanguages();
    WINE_TRACE( "Game language %s, available %s\n", wine_dbgstr_a(language), wine_dbgstr_a(languages) );

    if (strchr(languages, ',') == NULL) /* If there is a list of languages then respect that */
    {
        for (int i = 0; i < (sizeof(system_locale_appids) / sizeof(*system_locale_appids)); i++)
        {
            if (system_locale_appids[i] == appid)
            {
                WINE_TRACE("Not changing system locale for application %i\n",appid);
                language = NULL;
            }
        }
    }

    if (!language) locale = NULL;
    else if (!strcmp( language, "arabic" )) locale = "ar_001.UTF-8";
    else if (!strcmp( language, "bulgarian" )) locale = "bg_BG.UTF-8";
    else if (!strcmp( language, "schinese" )) locale = "zh_CN.UTF-8";
    else if (!strcmp( language, "tchinese" )) locale = "zh_TW.UTF-8";
    else if (!strcmp( language, "czech" )) locale = "cs_CZ.UTF-8";
    else if (!strcmp( language, "danish" )) locale = "da_DK.UTF-8";
    else if (!strcmp( language, "dutch" )) locale = "nl_NL.UTF-8";
    else if (!strcmp( language, "english" )) locale = "en_US.UTF-8";
    else if (!strcmp( language, "finnish" )) locale = "fi_FI.UTF-8";
    else if (!strcmp( language, "french" )) locale = "fr_FR.UTF-8";
    else if (!strcmp( language, "german" )) locale = "de_DE.UTF-8";
    else if (!strcmp( language, "greek" )) locale = "el_GR.UTF-8";
    else if (!strcmp( language, "hungarian" )) locale = "hu_HU.UTF-8";
    else if (!strcmp( language, "italian" )) locale = "it_IT.UTF-8";
    else if (!strcmp( language, "japanese" )) locale = "ja_JP.UTF-8";
    else if (!strcmp( language, "koreana" )) locale = "ko_KR.UTF-8";
    else if (!strcmp( language, "norwegian" )) locale = "nb_NO.UTF-8";
    else if (!strcmp( language, "polish" )) locale = "pl_PL.UTF-8";
    else if (!strcmp( language, "portuguese" )) locale = "pt_PT.UTF-8";
    else if (!strcmp( language, "brazilian" )) locale = "pt_BR.UTF-8";
    else if (!strcmp( language, "romanian" )) locale = "ro_RO.UTF-8";
    else if (!strcmp( language, "russian" )) locale = "ru_RU.UTF-8";
    else if (!strcmp( language, "spanish" )) locale = "es_ES.UTF-8";
    else if (!strcmp( language, "latam" )) locale = "es_419.UTF-8";
    else if (!strcmp( language, "swedish" )) locale = "sv_SE.UTF-8";
    else if (!strcmp( language, "thai" )) locale = "th_TH.UTF-8";
    else if (!strcmp( language, "turkish" )) locale = "tr_TR.UTF-8";
    else if (!strcmp( language, "ukrainian" )) locale = "uk_UA.UTF-8";
    else if (!strcmp( language, "vietnamese" )) locale = "vi_VN.UTF-8";
    else WINE_FIXME( "Unsupported game language %s\n", wine_dbgstr_a(language) );

    /* HACK: Bug 23597 Granado Espada Japan (1219160) launcher needs Japanese locale to display correctly */
    if (appid == 1219160)
        locale = "ja_JP.UTF-8";

    if (locale)
    {
        WINE_FIXME( "Game language %s, defaulting LC_CTYPE / LC_MESSAGES to %s.\n", wine_dbgstr_a(language), locale );
        setenv( "LC_CTYPE", locale, FALSE );
        setenv( "LC_MESSAGES", locale, FALSE );
    }
}

static void copy_to_win(const char *unix_path, const WCHAR *win_path)
{
    WCHAR *src_path = wine_get_dos_file_name(unix_path);
    if (!src_path)
        return;

    CopyFileW(src_path, win_path, FALSE);

    HeapFree(GetProcessHeap(), 0, src_path);
}

/* requires steam API to be initialized */
static void setup_battleye_bridge(void)
{
    const unsigned int be_runtime_appid = 1161040;
    char path[2048];
    char *path_end;

    if (!SteamApps()->BIsAppInstalled(be_runtime_appid))
        return;

    if (!SteamApps()->GetAppInstallDir(be_runtime_appid, path, sizeof(path)))
        return;

    WINE_TRACE("Found battleye runtime at %s\n", path);

    setenv("PROTON_BATTLEYE_RUNTIME", path, 1);
}

static void setup_eac_bridge(void)
{
    const unsigned int eac_runtime_appid = 1826330;
    char path[2048];
    char *path_end;

    if (!SteamApps()->BIsAppInstalled(eac_runtime_appid))
        return;

    if (!SteamApps()->GetAppInstallDir(eac_runtime_appid, path, sizeof(path)))
        return;

    WINE_TRACE("Found easyanticheat runtime at %s\n", path);

    setenv("PROTON_EAC_RUNTIME", path, 1);
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
    static const WCHAR openvrpathsW[] = {'\\','o','p','e','n','v','r','p','a','t','h','s','.','v','r','p','a','t','h',0};
    static const WCHAR openvrW[] = {'\\','o','p','e','n','v','r',0};

    if(FAILED(SHGetFolderPathW(NULL, CSIDL_LOCAL_APPDATA | CSIDL_FLAG_CREATE,
                    NULL, 0, out_path)))
        return false;

    lstrcatW(out_path, openvrW);

    if(create)
        CreateDirectoryW(out_path, NULL);

    lstrcatW(out_path, openvrpathsW);

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
    const char *vr_override = getenv("VR_OVERRIDE");
    if(vr_override)
    {
        set_env_from_unix(PROTON_VR_RUNTIME_W, vr_override);
    }
    else if(root.isMember("runtime") && root["runtime"].isArray() && root["runtime"].size() > 0)
    {
        set_env_from_unix(PROTON_VR_RUNTIME_W, root["runtime"][0].asString());
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
    SetEnvironmentVariableW(VR_PATHREG_OVERRIDE_W, NULL);
    SetEnvironmentVariableW(VR_OVERRIDE_W, NULL);
    convert_environment_path("VR_CONFIG_PATH", VR_CONFIG_PATH_W);
    convert_environment_path("VR_LOG_PATH", VR_LOG_PATH_W);
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
    if(!GetEnvironmentVariableW(PROTON_VR_RUNTIME_W, pathW, ARRAY_SIZE(pathW)))
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
    VkPhysicalDevice __wine_get_native_VkPhysicalDevice(VkPhysicalDevice phys_dev);
};

static void *get_winevulkan_unix_lib_handle(HMODULE hvulkan)
{
    unixlib_handle_t unix_funcs;
    NTSTATUS status;
    Dl_info info;

    status = NtQueryVirtualMemory(GetCurrentProcess(), hvulkan, (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/,
            &unix_funcs, sizeof(unix_funcs), NULL);
    if (status)
    {
        WINE_ERR("NtQueryVirtualMemory status %#x.\n", (int)status);
        return NULL;
    }
    if (!dladdr((void *)(ULONG_PTR)unix_funcs, &info))
    {
        WINE_ERR("dladdr failed.\n");
        return NULL;
    }
    WINE_TRACE("path %s.\n", info.dli_fname);
    return dlopen(info.dli_fname, RTLD_NOW);
}

static DWORD WINAPI initialize_vr_data(void *arg)
{
    int (WINAPI *p__wineopenxr_get_extensions_internal)(char **instance_extensions, char **device_extensions, uint32_t *physdev_vid, uint32_t *physdev_pid);
    vr::IVRClientCore* (*vrclient_VRClientCoreFactory)(const char *name, int *return_code);
    uint32_t instance_extensions_count, device_count;
    VkPhysicalDevice *phys_devices = NULL;
    VkPhysicalDeviceProperties prop = {};
    VkInstanceCreateInfo inst_info = {};
    char **instance_extensions = NULL;
    VkApplicationInfo app_info = {};
    char *buffer = NULL, *new_buffer;
    vr::IVRClientCore* client_core;
    char *xr_inst_ext, *xr_dev_ext;
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
    HMODULE hwineopenxr;
    void *lib_vrclient;
    void *unix_handle;
    DWORD hmd_present;
    int return_code;
    LSTATUS status;
    unsigned int i;
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
        WINE_ERR("Could not find function VRClientCoreFactory.\n");
        goto done;
    }
    if (!(client_core = vrclient_VRClientCoreFactory(vr::IVRClientCore_Version, &return_code)))
    {
        WINE_ERR("Could not get IVRClientCore, error %d.\n", return_code);
    }

    /* Without overriding the app_key vrclient waits 2 seconds for a valid appkey before returning. */
    error = client_core->Init(vr::VRApplication_Background, NULL);
    if (error != vr::VRInitError_None)
    {
        if (error == vr::VRInitError_Init_NoServerForBackgroundApp)
            WINE_TRACE("VR server is not available.\n");
        else
            WINE_ERR("VR init failed, error %u.\n", error);
        goto done;
    }
    vr_initialized = TRUE;

    hmd_present = !!client_core->BIsHmdPresent();
    WINE_TRACE("hmd_present %#x.\n", hmd_present);
    if ((status = RegSetValueExA(vr_key, "is_hmd_present", 0, REG_DWORD, (BYTE *)&hmd_present, sizeof(hmd_present))))
        WINE_ERR("Could not set is_hmd_present value, status %#x.\n", status);

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
#undef USE_VULKAN_PROC

    if (!(unix_handle = get_winevulkan_unix_lib_handle(hvulkan)))
    {
        WINE_ERR("winevulkan.so not found.\n");
        goto done;
    }
    decltype(__wine_get_native_VkPhysicalDevice) *p__wine_get_native_VkPhysicalDevice;
    p__wine_get_native_VkPhysicalDevice = reinterpret_cast<decltype(__wine_get_native_VkPhysicalDevice) *>
            (dlsym(unix_handle, "__wine_get_native_VkPhysicalDevice"));

    dlclose(unix_handle);
    if (!p__wine_get_native_VkPhysicalDevice)
    {
        WINE_ERR("__wine_get_native_VkPhysicalDevice not found.\n");
        goto done;
    }

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
            goto done;
        }
    }

    if ((hwineopenxr = LoadLibraryA("wineopenxr.dll")))
    {
        p__wineopenxr_get_extensions_internal = reinterpret_cast<decltype(p__wineopenxr_get_extensions_internal)>
                (GetProcAddress(hwineopenxr, "__wineopenxr_get_extensions_internal"));
        if (p__wineopenxr_get_extensions_internal)
        {
            uint32_t vid, pid;
            if (!p__wineopenxr_get_extensions_internal(&xr_inst_ext, &xr_dev_ext, &vid, &pid))
            {
                WINE_TRACE("Got XR extensions.\n");
                if ((status = RegSetValueExA(vr_key, "openxr_vulkan_instance_extensions", 0, REG_SZ,
                        (BYTE *)xr_inst_ext, strlen(xr_inst_ext) + 1)))
                {
                    WINE_ERR("Could not set openxr_vulkan_instance_extensions value, status %#x.\n", status);
                    goto done;
                }
                if ((status = RegSetValueExA(vr_key, "openxr_vulkan_device_extensions", 0, REG_SZ,
                        (BYTE *)xr_dev_ext, strlen(xr_dev_ext) + 1)))
                {
                    WINE_ERR("Could not set openxr_vulkan_device_extensions value, status %#x.\n", status);
                    goto done;
                }
                if ((status = RegSetValueExA(vr_key, "openxr_vulkan_device_vid", 0, REG_DWORD,
                        (BYTE *)&vid, sizeof(vid))))
                {
                    WINE_ERR("Could not set openxr_vulkan_device_vid value, status %#x.\n", status);
                    goto done;
                }
                if ((status = RegSetValueExA(vr_key, "openxr_vulkan_device_pid", 0, REG_DWORD,
                        (BYTE *)&pid, sizeof(pid))))
                {
                    WINE_ERR("Could not set openxr_vulkan_device_pid value, status %#x.\n", status);
                    goto done;
                }
            }
        }
        else
        {
            WINE_ERR("__wineopenxr_get_extensions_internal not found in wineopenxr.dll.\n");
        }
        FreeLibrary(hwineopenxr);
    }
    else
    {
        WINE_WARN("Could not load wineopenxr.dll, err %u.\n", GetLastError());
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
    WCHAR pathW[PATH_MAX];
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

    if(GetEnvironmentVariableW(PROTON_VR_RUNTIME_W, pathW, ARRAY_SIZE(pathW)))
    {
        if ((status = RegSetValueExW(vr_key, PROTON_VR_RUNTIME_W, 0, REG_SZ,
                (BYTE *)pathW, (lstrlenW(pathW) + 1) * sizeof(WCHAR))))
        {
            WINE_ERR("Could not set PROTON_VR_RUNTIME value, status %#x.\n", status);
            set_vr_status(vr_key, ~0u);
            RegCloseKey(vr_key);
            return;
        }
    }
    else
    {
        WINE_TRACE("Linux OpenVR runtime is not available\n");
        set_vr_status(vr_key, ~0u);
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

static WCHAR* get_end_of_excutable_name(WCHAR *cmdline)
{
    BOOL quoted = FALSE;
    WCHAR *executable_name_end = cmdline;

    /* find the end of the first arg...*/
    while (*executable_name_end != '\0' &&
           (*executable_name_end != ' ' || quoted))
    {
        quoted ^= *executable_name_end == '"';

        executable_name_end++;
    }

    return executable_name_end;
}

static BOOL should_use_shell_execute(WCHAR *cmdline)
{
    BOOL use_shell_execute = TRUE;
    const WCHAR *executable_name_end = (const WCHAR*)get_end_of_excutable_name(cmdline);

    /* if the executable is quoted backtrack a bit */
    if (*(executable_name_end - 1) == '"')
        --executable_name_end;


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

static HANDLE run_process(BOOL *should_await, BOOL game_process)
{
    static const WCHAR link2eaW[] = {'l','i','n','k','2','e','a',':','/','/',0};
    static const WCHAR link2ea_pathW[] =
    {
        'S','o','f','t','w','a','r','e','\\','C','l','a','s','s','e','s','\\','l','i','n','k','2','e','a',0
    };
    static const WCHAR ea_desktop_pathW[] =
    {
        'S','o','f','t','w','a','r','e','\\','E','l','e','c','t','r','o','n','i','c',' ','A','r','t','s',
        '\\','E','A',' ','D','e','s','k','t','o','p',0
    };
    static const WCHAR ea_core_pathW[] =
    {
        'S','o','f','t','w','a','r','e','\\','E','l','e','c','t','r','o','n','i','c',' ','A','r','t','s',
        '\\','E','A',' ','C','o','r','e',0
    };
    static const WCHAR IsUnavailableW[] = {'I','s','U','n','a','v','a','i','l','a','b','l','e',0};
    WCHAR *cmdline = GetCommandLineW();
    STARTUPINFOW si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    DWORD flags = CREATE_UNICODE_ENVIRONMENT;
    BOOL use_shell_execute = TRUE, link2ea = FALSE;
    BOOL hide_window;

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
    if (use_shell_execute && lstrlenW(cmdline) > 10 && !memcmp(cmdline, link2eaW, 10 *sizeof(WCHAR)))
    {
        HDESK desktop = GetThreadDesktop(GetCurrentThreadId());
        DWORD is_unavailable, type, size;
        SC_HANDLE manager, service;
        SERVICE_STATUS status;
        DWORD timeout = 3000;
        HKEY eakey;
        BOOL ret;

        link2ea = TRUE;
        if (!SetUserObjectInformationA(desktop, 1000, &timeout, sizeof(timeout)))
            WINE_ERR("Failed to set desktop timeout, err %u.\n", GetLastError());

        if (!RegOpenKeyExW(HKEY_LOCAL_MACHINE, ea_desktop_pathW, 0, KEY_ALL_ACCESS, &eakey))
        {
            size = sizeof(is_unavailable);
            if (!RegQueryValueExW(eakey, IsUnavailableW, NULL, &type, (BYTE *)&is_unavailable, &size)
                    && type == REG_DWORD && is_unavailable)
            {
                WINE_ERR("EA Desktop\\IsUnavailable is set, clearing.\n");
                is_unavailable = 0;
                RegSetValueExW(eakey, IsUnavailableW, 0, REG_DWORD, (BYTE *)&is_unavailable, sizeof(is_unavailable));
            }
            RegCloseKey(eakey);
        }
        if ((manager = OpenSCManagerA(NULL, SERVICES_ACTIVE_DATABASEA, SERVICE_QUERY_STATUS)))
        {
            if ((service = OpenServiceA(manager, "EABackgroundService", SERVICE_QUERY_STATUS)))
            {
                if (QueryServiceStatus(service, &status))
                {
                    TRACE("dwCurrentState %#x.\n", status.dwCurrentState);
                    if (status.dwCurrentState == SERVICE_STOP_PENDING || status.dwCurrentState == SERVICE_STOPPED)
                    {
                        ret = DeleteFileA("C:\\ProgramData\\EA Desktop\\backgroundservice.ini");
                        WARN("Tried to delete backgroundservice.ini, ret %d, error %u.\n", ret, GetLastError());
                    }
                }
                else ERR("Could not query service status, error %u.\n", GetLastError());
                CloseServiceHandle(service);
            }
            else TRACE("Could not open EABackgroundService, error %u.\n", GetLastError());
            CloseServiceHandle(manager);
        }
        else ERR("Could not open service manager, error %u.\n", GetLastError());
    }
    hide_window = env_nonzero("PROTON_HIDE_PROCESS_WINDOW");

    /* only await the process finishing if we launch a process directly...
     * Steam simply calls ShellExecuteA with the same parameters.
     * this avoids the edge case where we could ShellExecute and
     * then that process ends up ShellExecuting something as a throw away */
    *should_await = !use_shell_execute;

    WINE_TRACE("Executing via %s\n",
        wine_dbgstr_a(use_shell_execute ? "ShellExecuteW" : "CreateProcessW"));

    if (use_shell_execute)
    {
        WCHAR *param = NULL;
        WCHAR *executable_name_end = get_end_of_excutable_name(cmdline);
        if (*executable_name_end != '\0')
        {
            *executable_name_end = '\0';
            param = executable_name_end+1;
        }
        static const WCHAR verb[] = { 'o', 'p', 'e', 'n', 0 };
        INT_PTR ret;

        if ((ret = (INT_PTR)ShellExecuteW(NULL, verb, cmdline, param, NULL, hide_window ? SW_HIDE : SW_SHOWNORMAL)) < 32)
        {
            WINE_ERR("Failed to execute %s, ret %u.\n", wine_dbgstr_w(cmdline), (unsigned int)ret);
            if (game_process && ret == SE_ERR_NOASSOC && link2ea)
            {
                static const WCHAR msi_guidW[] = {'{','C','2','6','2','2','0','8','5','-','A','B','D','2','-','4','9','E','5','-','8','A','B','9','-','D','3','D','6','A','6','4','2','C','0','9','1','}',0};
                static const WCHAR REMOVE_ALL_W[] = {'R','E','M','O','V','E','=','A','L','L',0};

                /* Try to uninstall EA desktop so it is set up from prerequisites on the next run. */
                UINT ret = MsiConfigureProductExW(msi_guidW, 0, INSTALLSTATE_DEFAULT, REMOVE_ALL_W);

                WINE_TRACE("MsiConfigureProductExW ret %u.\n", ret);
                /* If uninstall failed this should trigger interactive repair window on the EA setup run. */
                RegDeleteTreeW(HKEY_LOCAL_MACHINE, link2ea_pathW);
                RegDeleteTreeW(HKEY_LOCAL_MACHINE, ea_desktop_pathW);
                RegDeleteTreeW(HKEY_LOCAL_MACHINE, ea_core_pathW);
            }
        }
        return INVALID_HANDLE_VALUE;
    }
    else
    {
        if (hide_window)
        {
            si.dwFlags |= STARTF_USESHOWWINDOW;
            si.wShowWindow = SW_HIDE;
        }

        if (!CreateProcessW(NULL, cmdline, NULL, NULL, FALSE, flags, NULL, NULL, &si, &pi))
        {
            WINE_ERR("Failed to create process %s: %u\n", wine_dbgstr_w(cmdline), GetLastError());
            return INVALID_HANDLE_VALUE;
        }

        CloseHandle(pi.hThread);

        return pi.hProcess;
    }
}

/* Forward stub steam.exe commands to the native steam client */
static BOOL steam_command_handler(int argc, char *argv[])
{
    typedef NTSTATUS (WINAPI *__WINE_UNIX_SPAWNVP)(char *const argv[], int wait);
    static __WINE_UNIX_SPAWNVP p__wine_unix_spawnvp;
    NTSTATUS status = STATUS_UNSUCCESSFUL;
    BOOL restart_self = FALSE;
    char **unix_argv;
    HMODULE module;
    const char *sgi;
    int i, j;
    static char *unix_steam[] =
    {
        (char *)"steam-runtime-steam-remote",
        (char *)"steam",
        NULL,
    };

    /* If there are command line options, only forward steam:// and options start with - */
    if (argc > 1 && StrStrIA(argv[1], "steam://") != argv[1] && argv[1][0] != '-')
        return FALSE;

    if (argc > 2 && !strcmp(argv[1], "--") && (sgi = getenv("SteamGameId")))
    {
        char s[64];

        snprintf(s, sizeof(s), "steam://launch/%s", sgi);
        if (!(restart_self = !strcmp(argv[2], s)))
        {
            snprintf(s, sizeof(s), "steam://rungameid/%s", sgi);
            restart_self = !strcmp(argv[2], s);
        }
    }
    if (restart_self)
    {
        HANDLE event;

        event = OpenEventA(SYNCHRONIZE, FALSE, "PROTON_STEAM_EXE_RESTART_APP");
        if (event)
        {
            SetEvent(event);
            CloseHandle(event);
            WINE_TRACE("Signalled app restart.\n");
        }
        else
            WINE_ERR("Restart event not found.\n");
        return TRUE;
    }

    if (!p__wine_unix_spawnvp)
    {
        module = GetModuleHandleA("ntdll.dll");
        p__wine_unix_spawnvp = (__WINE_UNIX_SPAWNVP)GetProcAddress(module, "__wine_unix_spawnvp");
        if (!p__wine_unix_spawnvp)
        {
            WINE_ERR("Failed to load __wine_unix_spawnvp().\n");
            return FALSE;
        }
    }

    if (!(unix_argv = static_cast<char **>(malloc((argc + 1) * sizeof(*unix_argv)))))
    {
        WINE_ERR("Out of memory.\n");
        return FALSE;
    }

    for (i = 1; i < argc; ++i)
        unix_argv[i] = argv[i];
    unix_argv[argc] = NULL;

    for (i = 0; i < ARRAY_SIZE(unix_steam); ++i)
    {
        unix_argv[0] = unix_steam[i];

        WINE_TRACE("Trying");
        for (j = 0; j < argc; ++j)
            WINE_TRACE(" %s", wine_dbgstr_a(unix_argv[j]));
        WINE_TRACE("\n");

        status = p__wine_unix_spawnvp(unix_argv, TRUE);
        if (status == STATUS_SUCCESS)
            break;
    }
    free(unix_argv);

    if (status == STATUS_SUCCESS)
    {
        WINE_TRACE("Forwarded command to native steam.\n");
    }
    else
    {
        WINE_ERR("Forwarding");
        for (i = 0; i < argc; ++i)
            WINE_ERR(" %s", wine_dbgstr_a(argv[i]));
        WINE_ERR(" to native steam failed, status %#x.\n", status);
    }
    return TRUE;
}

static void setup_steam_files(void)
{
    static const WCHAR config_pathW[] =
    {
        'C',':','\\','P','r','o','g','r','a','m',' ','F','i','l','e','s',' ','(','x','8','6',')','\\','S','t','e','a','m',
        '\\','c','o','n','f','i','g',0,
    };
    static const WCHAR steamapps_pathW[] =
    {
        'C',':','\\','P','r','o','g','r','a','m',' ','F','i','l','e','s',' ','(','x','8','6',')','\\','S','t','e','a','m',
        '\\','s','t','e','a','m','a','p','p','s',0,
    };
    static const WCHAR libraryfolders_nameW[] =
    {
        'C',':','\\','P','r','o','g','r','a','m',' ','F','i','l','e','s',' ','(','x','8','6',')','\\','S','t','e','a','m',
        '\\','s','t','e','a','m','a','p','p','s','\\','l','i','b','r','a','r','y','f','o','l','d','e','r','s','.','v','d','f',0,
    };
    const char *steam_install_path = getenv("STEAM_COMPAT_CLIENT_INSTALL_PATH");
    const char *steam_library_paths = getenv("STEAM_COMPAT_LIBRARY_PATHS");
    const char *start, *end, *next;
    unsigned int i, index = 0;
    std::string contents;
    char idx_str[10];

    if (!CreateDirectoryW(config_pathW, NULL) && GetLastError() != ERROR_ALREADY_EXISTS)
    {
        WINE_ERR("Failed to create config directory, GetLastError() %u.\n", GetLastError());
        return;
    }

    if (!CreateDirectoryW(steamapps_pathW, NULL) && GetLastError() != ERROR_ALREADY_EXISTS)
    {
        WINE_ERR("Failed to create steamapps directory, GetLastError() %u.\n", GetLastError());
        return;
    }

    contents += "\"LibraryFolders\"\n{\n";

    WINE_TRACE("steam_install_path %s.\n", wine_dbgstr_a(steam_install_path));

    if (steam_install_path)
    {
        std::string s = steam_install_path;

        if (convert_path_to_win(s))
        {
            sprintf(idx_str, "%u", index);
            ++index;

            for (i = 0; i < s.length(); ++i)
            {
                if (s[i] == '\\')
                {
                    s.insert(i, 1, '\\');
                    ++i;
                }
            }

            contents += std::string("\t\"") + idx_str + "\"\n\t{\n\t\t\"path\"\t\t\"" + s + "\"\n\t}\n";
        }
        else
        {
            WINE_ERR("Could not convert %s to win path.\n", wine_dbgstr_a(s.c_str()));
        }
    }

    WINE_TRACE("steam_library_paths %s.\n", wine_dbgstr_a(steam_library_paths));

    start = steam_library_paths;
    while (start && *start)
    {
        std::string s;

        if (!(next = strchr(start, ':')))
            next = start + strlen(start);
        end = next;

        if (end != start && end[-1] == '/')
            --end;

        while (end != start && end[-1] != '/' )
            --end;
        if (end != start)
            --end;

        s.append(start, end - start);
        if (convert_path_to_win(s))
        {
            sprintf(idx_str, "%u", index);
            ++index;

            for (i = 0; i < s.length(); ++i)
            {
                if (s[i] == '\\')
                {
                    s.insert(i, 1, '\\');
                    ++i;
                }
            }

            contents += std::string("\t\"") + idx_str + "\"\n\t{\n\t\t\"path\"\t\t\"" + s + "\"\n\t}\n";
        }
        else
        {
            WINE_ERR("Could not convert %s to win path.\n", wine_dbgstr_a(s.c_str()));
        }
        if (*next == ':')
            ++next;
        start = next;
    }

    contents += "}\n";

    if (!write_string_to_file(libraryfolders_nameW, contents))
        WINE_ERR("Could not write %s.\n", wine_dbgstr_w(libraryfolders_nameW));
}

#ifndef DIRECTORY_QUERY
#define DIRECTORY_QUERY 0x0001
#endif

static HANDLE find_ack_event(void)
{
    static const WCHAR steam_ack_event[] = {'S','T','E','A','M','_','S','T','A','R','T','_','A','C','K','_','E','V','E','N','T',0};
    static const WCHAR name[] = {'\\','B','a','s','e','N','a','m','e','d','O','b','j','e','c','t','s','\\','S','e','s','s','i','o','n','\\','1',0};
    DIRECTORY_BASIC_INFORMATION *di;
    OBJECT_ATTRIBUTES attr;
    HANDLE dir, ret = NULL;
    ULONG context, size;
    UNICODE_STRING str;
    char buffer[1024];
    NTSTATUS status;

    di = (DIRECTORY_BASIC_INFORMATION *)buffer;

    RtlInitUnicodeString(&str, name);
    InitializeObjectAttributes(&attr, &str, 0, 0, NULL);
    status = NtOpenDirectoryObject( &dir, DIRECTORY_QUERY, &attr );
    if (status)
    {
        WINE_WARN("Failed to open directory %s, status %#x.\n", wine_dbgstr_w(name), status);
        return NULL;
    }

    status = NtQueryDirectoryObject(dir, di, sizeof(buffer), TRUE, TRUE, &context, &size);
    while (!status)
    {
        if (!strncmpW(di->ObjectName.Buffer, steam_ack_event, ARRAY_SIZE(steam_ack_event) - 1))
        {
            WINE_TRACE("Found event %s.\n", wine_dbgstr_w(di->ObjectName.Buffer));
            ret = OpenEventW(SYNCHRONIZE, FALSE, di->ObjectName.Buffer);
            if (!ret)
                WINE_WARN("Failed to create event, err %u.\n", GetLastError());
            break;
        }
        status = NtQueryDirectoryObject(dir, di, sizeof(buffer), TRUE, FALSE, &context, &size);
    }
    if (status && status != STATUS_NO_MORE_ENTRIES)
        WINE_WARN("NtQueryDirectoryObject failed, status %#x.\n", status);
    WINE_TRACE("ret %p.\n", ret);

    CloseHandle(dir);
    return ret;
}

static DWORD WINAPI steam_drm_thread(void *arg)
{
    HANDLE consume, produce;
    HANDLE start_ack = NULL;
    HANDLE child = arg;
    DWORD pid;
    LONG prev;

    consume = CreateSemaphoreA(NULL, 0, 512, "STEAM_DIPC_CONSUME");
    if (!consume)
    {
        WINE_ERR("Failed to create consume semaphore, err %u.\n", GetLastError());
        return -1;
    }
    produce = CreateSemaphoreA(NULL, 1, 512, "SREAM_DIPC_PRODUCE");
    if (!produce)
    {
        CloseHandle(consume);
        WINE_ERR("Failed to create produce semaphore, err %u.\n", GetLastError());
        return -1;
    }

    pid = GetProcessId(child);

    WINE_TRACE("Child pid %04x.\n", pid);

    while (WaitForSingleObject(consume, INFINITE) == WAIT_OBJECT_0)
    {
        WINE_TRACE("Got event.\n");

        if (!start_ack)
            start_ack = find_ack_event();
        if (start_ack)
            SetEvent(start_ack);
        ReleaseSemaphore(produce, 1, &prev);
        WINE_TRACE("prev %d.\n", prev);
    }

    return 0;
}

BOOL is_ptraced(void)
{
    char key[50];
    int value;
    FILE *fp = fopen("/proc/self/status", "r");
    BOOL ret = FALSE;

    if (!fp) return FALSE;

    while (fscanf(fp, " %s	%d\n", key, &value) > 0)
    {
        if (!strcmp("TracerPid:", key))
        {
            ret = (value != 0);
            break;
        }
    }

    fclose(fp);
    return ret;
}

int main(int argc, char *argv[])
{
    HANDLE wait_handle = INVALID_HANDLE_VALUE;
    HANDLE event2 = INVALID_HANDLE_VALUE;
    HANDLE event = INVALID_HANDLE_VALUE;
    HANDLE child = INVALID_HANDLE_VALUE;
    BOOL game_process = FALSE;
    DWORD rc = 0;

    WINE_TRACE("\n");

    if (steam_command_handler(argc, argv))
        return 0;

    if (getenv("SteamGameId"))
    {
        /* do setup only for game process */
        event = CreateEventA(NULL, FALSE, FALSE, "Steam3Master_SharedMemLock");

        /* For 2K Launcher. */
        event2 = CreateEventA(NULL, FALSE, FALSE, "Global\\Valve_SteamIPC_Class");

        CreateThread(NULL, 0, create_steam_window, NULL, 0, NULL);

        set_active_process_pid();

        if (SteamAPI_Init())
        {
            setup_steam_registry();
            setup_battleye_bridge();
            setup_eac_bridge();
        }
        else
        {
            WINE_ERR("SteamAPI_Init failed\n");
        }

        setup_steam_files();

        if (env_nonzero("PROTON_WAIT_ATTACH"))
        {
            unsigned int sleep_count = 0;
            WINE_TRACE("PROTON_WAIT_ATTACH is set, waiting for debugger...\n");
            while (!IsDebuggerPresent() && !is_ptraced())
            {
                Sleep(100);
                ++sleep_count;
                if (sleep_count >= 10)
                {
                    WINE_TRACE("still waiting for debugger...\n");
                    sleep_count = 0;
                }
            }
        }

        SteamAPI_Shutdown();

        game_process = TRUE;
    }

    if (argc > 1)
    {
        BOOL should_await;

        setup_vrpaths();

        if (game_process)
            setup_vr_registry();

        child = run_process(&should_await, game_process);

        if (should_await)
        {
            if (child == INVALID_HANDLE_VALUE)
                return 1;

            wait_handle = child;
        }

        if (game_process)
            CreateThread(NULL, 0, steam_drm_thread, child, 0, NULL);
    }

    if (game_process)
        NtSetInformationProcess( GetCurrentProcess(), (PROCESSINFOCLASS)1000 /* ProcessWineMakeProcessSystem */,
                                 &wait_handle, sizeof(HANDLE *) );

    if(wait_handle != INVALID_HANDLE_VALUE)
    {
        HANDLE waits[2];
        DWORD ret;
        int wait_count;

        waits[0] = wait_handle;
        waits[1] = NULL;
        wait_count = 1;
        if (game_process)
        {
            if ((waits[1] = CreateEventA(NULL, FALSE, FALSE, "PROTON_STEAM_EXE_RESTART_APP")))
            {
                ++wait_count;
            }
            else
            {
                WINE_ERR("Failed to create restart event, err %lu.\n", GetLastError());
            }
        }
        FreeConsole();
        while ((ret = WaitForMultipleObjects(wait_count, waits, FALSE, INFINITE) != WAIT_OBJECT_0))
        {
            BOOL should_await;

            if (ret != WAIT_OBJECT_0 + 1)
            {
                WINE_ERR("Wait failed.\n");
                break;
            }
            if (child != INVALID_HANDLE_VALUE)
            {
                if (WaitForSingleObject(child, 0) == WAIT_TIMEOUT)
                {
                    WINE_ERR("Child is still running, not restarting.\n");
                    continue;
                }
                CloseHandle(child);
            }
            child = run_process(&should_await, game_process);
        }
        CloseHandle(waits[1]);
    }

    if (event != INVALID_HANDLE_VALUE)
        CloseHandle(event);
    if (event2 != INVALID_HANDLE_VALUE)
        CloseHandle(event2);

    if (child != INVALID_HANDLE_VALUE)
    {
        GetExitCodeProcess(child, &rc);
        CloseHandle(child);
    }

    return rc;
}
