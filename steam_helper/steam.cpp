/*
 * Copyright (c) 2019, Valve Corporation
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
#include <string.h>
#include <stdio.h>

#pragma push_macro("_WIN32")
#pragma push_macro("__cdecl")
#undef _WIN32
#undef __cdecl
#include "steam_api.h"
#pragma pop_macro("_WIN32")
#pragma pop_macro("__cdecl")

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steam);

EXTERN_C HANDLE CDECL __wine_make_process_system(void);

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

static WCHAR *find_quote(WCHAR *str)
{
    WCHAR *end = wcschr(str, '"'), *ch;
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
        end = wcschr(end + 1, '"');
    }
    return NULL;
}

static BOOL WINAPI console_ctrl_handler(DWORD dwCtrlType)
{
    return TRUE;
}

static BOOL should_use_shell_execute(WCHAR* cmdline)
{
    BOOL use_shell_execute = TRUE;

    BOOL quoted = FALSE;
    WCHAR* executable_name_end = cmdline;
    
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

        WINE_TRACE("Command ends in %s, (quoted: %s) \n",
            wine_dbgstr_w(executable_name_end),
            wine_dbgstr_a(quoted ? "yes" : "no"));

        if (!wcsncmp(executable_name_end, exeW, wcslen(exeW)))
            use_shell_execute = FALSE;
    }

    return use_shell_execute;
}

static HANDLE run_process(BOOL* should_await)
{
    WCHAR *cmdline = GetCommandLineW();
    STARTUPINFOW si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    DWORD flags = 0;

    /* skip argv[0] */
    if (*cmdline == '"')
    {
        cmdline = find_quote(cmdline + 1);
        if (cmdline) cmdline++;
    }
    else
    {
        cmdline = wcschr(cmdline, ' ');
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
            end = wcschr(start, ' ');
            if (!end)
                end = wcschr(start, '\0');
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
        if (console && !HIWORD(console))
            flags |= CREATE_NEW_CONSOLE;

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

    BOOL use_shell_execute = should_use_shell_execute(cmdline);

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

    WINE_TRACE("\n");

    if (getenv("SteamGameId"))
    {
        /* do setup only for game process */
        CreateThread(NULL, 0, create_steam_window, NULL, 0, NULL);

        set_active_process_pid();
        setup_steam_registry();

        wait_handle = __wine_make_process_system();
    }

    if (argc > 1)
    {
        BOOL should_await;

        HANDLE child = run_process(&should_await);

        if (should_await)
        {
            if (child == INVALID_HANDLE_VALUE)
                return 1;

            if (wait_handle == INVALID_HANDLE_VALUE)
                wait_handle = child;
            else
                CloseHandle(child);
        }
        else if (wait_handle == INVALID_HANDLE_VALUE)
            wait_handle = __wine_make_process_system();
    }

    WaitForSingleObject(wait_handle, INFINITE);

    return 0;
}
