#!/bin/bash

### (1) PREP SECTION ###

    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    
    echo "DXVK: Fix Secret World: Legends patcher crash"
    patch -Np1 < ../patches/dxvk/secret-world.patch
    cd ..

    cd vkd3d-proton
    git reset --hard HEAD
    git clean -xdf
    
    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

# Bring back configure files. Staging uses them to regenerate fresh ones
# https://github.com/ValveSoftware/wine/commit/e813ca5771658b00875924ab88d525322e50d39f

    git revert --no-commit e813ca5771658b00875924ab88d525322e50d39f

### END PROBLEMATIC COMMIT REVERT SECTION ###

### (2-2) WINE STAGING APPLY SECTION ###

    echo "WINE: -STAGING- applying staging patches"

    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W user32-alttab-focus \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W winex11-MWM_Decorations \
    -W ntdll-Syscall_Emulation \
    -W ntdll-Junction_Points \
    -W server-File_Permissions \
    -W server-Stored_ACLs \
    -W eventfd_synchronization \
    -W d3dx11_43-D3DX11CreateTextureFromMemory \
    -W dbghelp-Debug_Symbols \
    -W ddraw-Device_Caps \
    -W Pipelight \
    -W dinput-joy-mappings \
    -W server-PeekMessage \
    -W server-Realtime_Priority \
    -W server-Signal_Thread \
    -W loader-KeyboardLayouts \
    -W msxml3-FreeThreadedXMLHTTP60 \
    -W ntdll-ForceBottomUpAlloc \
    -W ntdll-WRITECOPY \
    -W ntdll-Builtin_Prot \
    -W ntdll-CriticalSection \
    -W ntdll-Exception \
    -W ntdll-Hide_Wine_Exports \
    -W ntdll-Serial_Port_Detection \
    -W server-default_integrity \
    -W user32-rawinput-mouse \
    -W user32-rawinput-mouse-experimental \
    -W user32-recursive-activation \
    -W windows.networking.connectivity-new-dll \
    -W wineboot-ProxySettings \
    -W winex11-UpdateLayeredWindow \
    -W winex11-Vulkan_support \
    -W winex11-wglShareLists \
    -W wintab32-improvements \
    -W xactengine3_7-PrepareWave \
    -W xactengine-initial \
    -W kernel32-CopyFileEx \
    -W shell32-Progress_Dialog \
    -W shell32-ACE_Viewer \
    -W fltmgr.sys-FltBuildDefaultSecurityDescriptor \
    -W inseng-Implementation \
    -W ntdll-RtlQueryPackageIdentity \
    -W packager-DllMain \
    -W winemenubuilder-Desktop_Icon_Path \
    -W wscript-support-d-u-switches \
    -W wininet-Cleanup \
    -W sapi-ISpObjectToken-CreateInstance \
    -W cryptext-CryptExtOpenCER \
    -W shell32-NewMenu_Interface \
    -W wintrust-WTHelperGetProvCertFromChain \
    -W user32-FlashWindowEx \
    -W wined3d-zero-inf-shaders \
    -W kernel32-Debugger \
    -W mfplat-streaming-support \
    -W ntdll-Placeholders \
    -W ntdll-NtDevicePath \
    -W ntdll-wine-frames \
    -W winemenubuilder-integration \
    -W winspool.drv-ClosePrinter \
    -W winmm-mciSendCommandA \
    -W winemenubuilder-Desktop_Icon_Path \
    -W winemenubuilder-integration \
    -W winex11-XEMBED \
    -W winex11-CandidateWindowPos \
    -W winex11-Window_Style \
    -W winex11-ime-check-thread-data \
    -W winex11.drv-Query_server_position \
    -W user32-Mouse_Message_Hwnd

    # NOTE: Some patches are applied manually because they -do- apply, just not cleanly, ie with patch fuzz.
    # A detailed list of why the above patches are disabled is listed below:

    # winex11-_NET_ACTIVE_WINDOW - Causes origin to freeze
    # winex11-WM_WINDOWPOSCHANGING - Causes origin to freeze
    # user32-alttab-focus - relies on winex11-_NET_ACTIVE_WINDOW -- may be able to be added now that EA Desktop has replaced origin?
    # winex11-MWM_Decorations - not compatible with fullscreen hack
    # winex11-key_translation - replaced by proton's keyboard patches, disabled in 8.0
    # winex11-wglShareLists - applied manually
    # ntdll-Syscall_Emulation - already applied
    # ntdll-Junction_Points - breaks CEG drm
    # server-File_Permissions - requires ntdll-Junction_Points
    # server-Stored_ACLs - requires ntdll-Junction_Points
    # eventfd_synchronization - already applied
    # d3dx11_43-D3DX11CreateTextureFromMemory - manually applied
    # ddraw-Device_Caps - conflicts with proton's changes
    # ddraw-version-check - conflicts with proton's changes, disabled in 8.0

    # dbghelp-Debug_Symbols - see below:
    # Sancreed — 11/21/2021
    # Heads up, it appears that a bunch of Ubisoft Connect games (3/3 I had installed and could test) will crash
    # almost immediately on newer Wine Staging/TKG inside pe_load_debug_info function unless the dbghelp-Debug_Symbols staging # patchset is disabled.

    # ** ntdll-DOS_Attributes - disabled in 8.0
    # server-PeekMessage - eplaced by proton's version
    # server-Realtime_Priority - replaced by proton's patches
    # server-Signal_Thread - breaks steamclient for some games -- notably DBFZ
    # Pipelight - for MS Silverlight, not needed
    # dinput-joy-mappings - disabled in favor of proton's gamepad patches
    # ** loader-KeyboardLayouts - applied manually -- needed to prevent Overwatch huge FPS drop
    # msxml3-FreeThreadedXMLHTTP60 - already applied
    # ntdll-ForceBottomUpAlloc - already applied
    # ntdll-WRITECOPY - already applied
    # ntdll-Builtin_Prot - already applied
    # ntdll-CriticalSection - breaks ffxiv and deep rock galactic
    # ** ntdll-Exception - applied manually
    # ** ntdll-Hide_Wine_Exports - applied manually
    # ** ntdll-Serial_Port_Detection - applied manually
    # server-default_integrity - causes steam.exe to stay open after game closes
    # user32-rawinput-mouse - already applied
    # user32-rawinput-mouse-experimental - already applied
    # user32-recursive-activation - already applied
    # ** windows.networking.connectivity-new-dll - applied manually
    # ** wineboot-ProxySettings - applied manually
    # ** winex11-UpdateLayeredWindow - applied manually
    # ** winex11-Vulkan_support - applied manually
    # wintab32-improvements - for wacom tablets, not needed
    # ** xactengine-initial - applied manually
    # ** xactengine3_7-PrepareWave - applied manually
    # kernel32-CopyFileEx - breaks various installers
    # shell32-Progress_Dialog - relies on kernel32-CopyFileEx
    # shell32-ACE_Viewer - adds a UI tab, not needed, relies on kernel32-CopyFileEx
    # ** fltmgr.sys-FltBuildDefaultSecurityDescriptor - applied manually
    # ** inseng-Implementation - applied manually
    # ** ntdll-RtlQueryPackageIdentity - applied manually
    # ** packager-DllMain - applied manually
    # ** winemenubuilder-Desktop_Icon_Path - applied manually
    # ** wscript-support-d-u-switches - applied manually
    # ** wininet-Cleanup - applied manually
    # sapi-ISpObjectToken-CreateInstance - already applied
    # cryptext-CryptExtOpenCER - applied manually
    # ** wintrust-WTHelperGetProvCertFromChain - applied manually
    # ** shell32-NewMenu_Interface - applied manually
    # ** user32-FlashWindowEx - applied manually
    # wined3d-zero-inf-shaders - already applied
    # ** kernel32-Debugger - applied manually
    # mfplat-streaming-support - already applied
    # ntdll-Placeholders - already applied
    # ntdll-NtDevicePath - already applied
    # ntdll-wine-frames - already applied
    # ** winemenubuilder-integration - applied manually
    # winspool.drv-ClosePrinter - not required, only adds trace lines, for printers.
    # winmm-mciSendCommandA - not needed, only applies to win 9x mode
    # ** winex11-XEMBED - applied manually
    #
    # Paul Gofman — Yesterday at 3:49 PM
    # that’s only for desktop integration, spamming native menu’s with wine apps which won’t probably start from there anyway
    # winemenubuilder-integration -- winemenubuilder is disabled in proton and is not needed
    # winemenubuilder-Desktop_Icon_Path -- winemenubuilder is disabled in proton and is not needed
    # winemenubuilder-integration -- winemenubuilder is disabled in proton and is not needed

    echo "WINE: -STAGING- applying staging Compiler_Warnings revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    # d3dx11_43-D3DX11CreateTextureFromMemory
    patch -Np1 < ../patches/wine-hotfixes/staging/d3dx11_43-D3DX11CreateTextureFromMemory/0001-d3dx11_43-Implement-D3DX11GetImageInfoFromMemory.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/d3dx11_43-D3DX11CreateTextureFromMemory/0002-d3dx11_42-Implement-D3DX11CreateTextureFromMemory.patch

    # loader-KeyboardLayouts
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0001-loader-Add-Keyboard-Layouts-registry-enteries.patch
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0002-user32-Improve-GetKeyboardLayoutList.patch

    # ntdll-Exception
    patch -Np1 < ../wine-staging/patches/ntdll-Exception/0002-ntdll-OutputDebugString-should-throw-the-exception-a.patch

    # ntdll-Hide_Wine_Exports
    patch -Np1 < ../wine-staging/patches/ntdll-Hide_Wine_Exports/0001-ntdll-Add-support-for-hiding-wine-version-informatio.patch

    # ntdll-Serial_Port_Detection
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-Serial_Port_Detection/0001-ntdll-Do-a-device-check-before-returning-a-default-s.patch

    # mouse rawinput
    # per discussion with remi:
    #---
    #GloriousEggroll — Today at 4:05 PM
    #@rbernon are there any specific rawinput patches from staging that are not in proton? i have someone saying they had better mouse rawinput functionality in my previous wine-staging builds
    #rbernon — Today at 4:07 PM
    #there's some yes, with truly raw values
    #proton still uses transformed value with the desktop mouse acceleration to not change user settings unexpectedly
    #---
    # /wine-staging/patches/user32-rawinput-mouse-experimental/0006-winex11.drv-Send-relative-RawMotion-events-unprocess.patch
    # we use a rebased version for proton
    patch -Np1 < ../patches/wine-hotfixes/staging/rawinput/0006-winex11.drv-Send-relative-RawMotion-events-unprocess.patch

    # windows.networking.connectivity-new-dll
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0001-include-Add-windows.networking.connectivity.idl.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0002-include-Add-windows.networking.idl.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0003-windows.networking.connectivity-Add-stub-dll.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0004-windows.networking.connectivity-Implement-IActivatio.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0005-windows.networking.connectivity-Implement-INetworkIn.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0006-windows.networking.connectivity-Registry-DLL.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0007-windows.networking.connectivity-Implement-INetworkIn.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/windows.networking.connectivity-new-dll/0008-windows.networking.connectivity-IConnectionProfile-G.patch

    # wineboot-ProxySettings
    patch -Np1 < ../patches/wine-hotfixes/staging/wineboot-ProxySettings/0001-wineboot-Initialize-proxy-settings-registry-key.patch

    # winex11-Vulkan_support
    patch -Np1 < ../patches/wine-hotfixes/staging/winex11-Vulkan_support/0001-winex11-Specify-a-default-vulkan-driver-if-one-not-f.patch

    # xactengine-initial
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine-initial/0001-x3daudio1_7-Create-import-library.patch

    # xactengine3_7-PrepareWave
    patch -Np1 < ../wine-staging/patches/xactengine3_7-PrepareWave/0002-xactengine3_7-Implement-IXACT3Engine-PrepareStreamin.patch
    patch -Np1 < ../wine-staging/patches/xactengine3_7-PrepareWave/0003-xactengine3_7-Implement-IXACT3Engine-PrepareInMemory.patch

    # fltmgr.sys-FltBuildDefaultSecurityDescriptor
    patch -Np1 < ../patches/wine-hotfixes/staging/fltmgr.sys-FltBuildDefaultSecurityDescriptor/0001-fltmgr.sys-Implement-FltBuildDefaultSecurityDescript.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/fltmgr.sys-FltBuildDefaultSecurityDescriptor/0002-fltmgr.sys-Create-import-library.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/fltmgr.sys-FltBuildDefaultSecurityDescriptor/0003-ntoskrnl.exe-Add-FltBuildDefaultSecurityDescriptor-t.patch

    # inseng-Implementation
    patch -Np1 < ../patches/wine-hotfixes/staging/inseng-Implementation/0001-inseng-Implement-CIF-reader-and-download-functions.patch

    # ntdll-RtlQueryPackageIdentity
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-RtlQueryPackageIdentity/0003-ntdll-tests-Add-basic-tests-for-RtlQueryPackageIdent.patch

    # packager-DllMain
    patch -Np1 < ../patches/wine-hotfixes/staging/packager-DllMain/0001-packager-Prefer-native-version.patch

    # wscript-support-d-u-switches
    patch -Np1 < ../patches/wine-hotfixes/staging/wscript-support-d-u-switches/0001-wscript-return-TRUE-for-d-and-u-stub-switches.patch

    # wininet-Cleanup
    patch -Np1 < ../patches/wine-hotfixes/staging/wininet-Cleanup/0001-wininet-tests-Add-more-tests-for-cookies.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/wininet-Cleanup/0002-wininet-tests-Test-auth-credential-reusage-with-host.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/wininet-Cleanup/0003-wininet-tests-Check-cookie-behaviour-when-overriding.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/wininet-Cleanup/0004-wininet-Strip-filename-if-no-path-is-set-in-cookie.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/wininet-Cleanup/0005-wininet-Replacing-header-fields-should-fail-if-they-.patch

    # cryptext-CryptExtOpenCER
    patch -Np1 < ../patches/wine-hotfixes/staging/cryptext-CryptExtOpenCER/0001-cryptext-Implement-CryptExtOpenCER.patch

    # wintrust-WTHelperGetProvCertFromChain
    patch -Np1 < ../patches/wine-hotfixes/staging/wintrust-WTHelperGetProvCertFromChain/0001-wintrust-Add-parameter-check-in-WTHelperGetProvCertF.patch

    # shell32-NewMenu_Interface
    patch -Np1 < ../patches/wine-hotfixes/staging/shell32-NewMenu_Interface/0001-shell32-Implement-NewMenu-with-new-folder-item.patch
    
    # user32-FlashWindowEx
    patch -Np1 < ../patches/wine-hotfixes/staging/user32-FlashWindowEx/0001-user32-Improve-FlashWindowEx-message-and-return-valu.patch
    
    # kernel32-Debugger
    patch -Np1 < ../wine-staging/patches/kernel32-Debugger/0001-kernel32-Always-start-debugger-on-WinSta0.patch
    
### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "WINE: -GAME FIXES- assetto corsa hud fix"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "WINE: -GAME FIXES- killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    echo "WINE: -GAME FIXES- add file search workaround hack for Phantasy Star Online 2"
    patch -Np1 < ../patches/game-patches/pso2_hack.patch

    echo "WINE: -GAME FIXES- Add Star Citizen EAC patch and wrap it around SteamGameId=starcitizen envvar"
    patch -Np1 < ../patches/game-patches/star-citizen-eac.patch

### END GAME PATCH SECTION ###

### (2-4) WINE HOTFIX/BACKPORT SECTION ###

### END WINE HOTFIX/BACKPORT SECTION ###

### (2-5) WINE PENDING UPSTREAM SECTION ###

    # https://github.com/Frogging-Family/wine-tkg-git/commit/ca0daac62037be72ae5dd7bf87c705c989eba2cb
    echo "WINE: -PENDING- unity crash hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/unity_crash_hotfix.patch
    
    # https://bugs.winehq.org/show_bug.cgi?id=51683
    echo "WINE: -PENDING- Guild Wars 2 patch"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-guild_wars_2.patch

### END WINE PENDING UPSTREAM SECTION ###


### (2-6) PROTON-GE ADDITIONAL CUSTOM PATCHES ###

#    echo "WINE: -FSR- fullscreen hack fsr patch"
#    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

#    echo "WINE: -FSR- fake current res patches"
#    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

#    echo "WINE: -FSR- add 32:9 FSR resolutions"
#    patch -Np1 < ../patches/proton/69-proton-fsr-add-329-res.patch

#    echo "WINE: -FSR- add FSR resolutions by aspect ratio instead of current screen width"
#    patch -Np1 < ../patches/proton/70-proton-add_fsr_res_by_aspect_ratio.patch
    
#    echo "WINE: -FSR- enable FSR flag by default (fixes broken fs hack scaling in some games like Apex and FFXIV)"
#    patch -Np1 < ../patches/proton/71-invert-fsr-logic.patch
    
#    echo "WINE: -FSR- set 'balanced' default mode if no mode is set, and dont set any default mode if a custom mode is set"
#    patch -Np1 < ../patches/proton/72-fsr-use-balanced-default-mode.patch

### END PROTON-GE ADDITIONAL CUSTOM PATCHES ###
### END WINE PATCHING ###
