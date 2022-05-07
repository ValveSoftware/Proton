#!/bin/bash

### (1) PREP SECTION ###

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "DXVK: add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    # this needs to be the last patch in the list.. because reasons?
    echo "DXVK:add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    # nvapi
    git revert --no-commit fdfb4b925f52fbec580dd30bef37fb22c219c667

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

    echo "WINE: -STAGING- applying staging patches"

    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W winex11-MWM_Decorations \
    -W winex11-key_translation \
    -W ntdll-Syscall_Emulation \
    -W ntdll-Junction_Points \
    -W server-File_Permissions \
    -W server-Stored_ACLs \
    -W eventfd_synchronization \
    -W d3dx11_43-D3DX11CreateTextureFromMemory \
    -W dbghelp-Debug_Symbols \
    -W dwrite-FontFallback \
    -W ntdll-DOS_Attributes \
    -W Pipelight \
    -W dinput-joy-mappings \
    -W server-Key_State \
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
    -W secur32-InitializeSecurityContextW \
    -W server-default_integrity \
    -W user32-rawinput-mouse \
    -W user32-rawinput-mouse-experimental \
    -W user32-recursive-activation \
    -W windows.networking.connectivity-new-dll \
    -W wineboot-ProxySettings \
    -W winex11-UpdateLayeredWindow \
    -W winex11-Vulkan_support \
    -W wintab32-improvements \
    -W xactengine3_7-PrepareWave \
    -W xactengine3_7-Notification \
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
    -W sapi-iteration-tokens

    # NOTE: Some patches are applied manually because they -do- apply, just not cleanly, ie with patch fuzz.
    # A detailed list of why the above patches are disabled is listed below:

    # winex11-_NET_ACTIVE_WINDOW - Causes origin to freeze
    # winex11-WM_WINDOWPOSCHANGING - Causes origin to freeze
    # winex11-MWM_Decorations - not compatible with fullscreen hack
    # winex11-key_translation - replaced by proton's keyboard patches
    # ntdll-Syscall_Emulation - already applied
    # ntdll-Junction_Points - breaks CEG drm
    # server-File_Permissions - requires ntdll-Junction_Points
    # server-Stored_ACLs - requires ntdll-Junction_Points
    # eventfd_synchronization - already applied
    # d3dx11_43-D3DX11CreateTextureFromMemory - manually applied

    # dbghelp-Debug_Symbols - see below:
    # Sancreed — 11/21/2021
    # Heads up, it appears that a bunch of Ubisoft Connect games (3/3 I had installed and could test) will crash
    # almost immediately on newer Wine Staging/TKG inside pe_load_debug_info function unless the dbghelp-Debug_Symbols staging # patchset is disabled.

    # dwrite-FontFallback - replaced by proton's font patches
    # ** ntdll-DOS_Attributes - applied manually
    # server-Key_State - replaced by proton shared memory patches
    # ** server-PeekMessage - applied manually
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
    # ** secur32-InitializeSecurityContextW - applied manually
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
    # ** xactengine3_7-Notification - applied manually
    # ** xactengine3_7-PrepareWave - applied manually
    # ** xactengine3_7-callbacks - applied manually -- added after 7.0
    # kernel32-CopyFileEx - breaks various installers
    # shell32-Progress_Dialog - relies on kernel32-CopyFileEx
    # shell32-ACE_Viewer - adds a UI tab, not needed, relies on kernel32-CopyFileEx
    # ** fltmgr.sys-FltBuildDefaultSecurityDescriptor - applied manually
    # ** inseng-Implementation - applied manually
    # ** ntdll-RtlQueryPackageIdentity - applied manually
    # ** packager-DllMain - applied manually
    # ** winemenubuilder-Desktop_Icon_Path - applied manually
    # ** wscript-support-d-u-switches - applied manually
    # ** sapi-iteration-tokens - applied manually because upstream contains fix for bless unleashed launcher

    echo "WINE: -STAGING- applying staging Compiler_Warnings revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    # d3dx11_43-D3DX11CreateTextureFromMemory
    patch -Np1 < ../patches/wine-hotfixes/staging/d3dx11_43-D3DX11CreateTextureFromMemory/0001-d3dx11_43-Implement-D3DX11GetImageInfoFromMemory.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/d3dx11_43-D3DX11CreateTextureFromMemory/0002-d3dx11_42-Implement-D3DX11CreateTextureFromMemory.patch

    # ntdll-DOS_Attributes
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0001-ntdll-Implement-retrieving-DOS-attributes-in-fd_-get.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0003-ntdll-Implement-storing-DOS-attributes-in-NtSetInfor.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0004-ntdll-Implement-storing-DOS-attributes-in-NtCreateFi.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0005-libport-Add-support-for-Mac-OS-X-style-extended-attr.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0006-libport-Add-support-for-FreeBSD-style-extended-attri.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0007-ntdll-Perform-the-Unix-style-hidden-file-check-withi.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-DOS_Attributes/0008-ntdll-Always-store-SAMBA_XATTR_DOS_ATTRIB-when-path-.patch

    # server-PeekMessage
    patch -Np1 < ../patches/wine-hotfixes/staging/server-PeekMessage/0001-server-Fix-handling-of-GetMessage-after-previous-Pee.patch

    # loader-KeyboardLayouts
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0001-loader-Add-Keyboard-Layouts-registry-enteries.patch
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0002-user32-Improve-GetKeyboardLayoutList.patch

    # ntdll-Exception
    patch -Np1 < ../wine-staging/patches/ntdll-Exception/0002-ntdll-OutputDebugString-should-throw-the-exception-a.patch

    # ntdll-Hide_Wine_Exports
    patch -Np1 < ../wine-staging/patches/ntdll-Hide_Wine_Exports/0001-ntdll-Add-support-for-hiding-wine-version-informatio.patch

    # ntdll-Serial_Port_Detection
    patch -Np1 < ../patches/wine-hotfixes/staging/ntdll-Serial_Port_Detection/0001-ntdll-Do-a-device-check-before-returning-a-default-s.patch

    # secur32-InitializeSecurityContextW
    patch -Np1 < ../wine-staging/patches/secur32-InitializeSecurityContextW/0001-secur32-Input-Parameter-should-be-NULL-on-first-call.patch

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
    patch -Np1 < ../wine-staging/patches/wineboot-ProxySettings/0001-wineboot-Initialize-proxy-settings-registry-key.patch

    # winex11-UpdateLayeredWindow
    patch -Np1 < ../wine-staging/patches/winex11-UpdateLayeredWindow/0001-winex11-Fix-alpha-blending-in-X11DRV_UpdateLayeredWi.patch

    # winex11-Vulkan_support
    patch -Np1 < ../patches/wine-hotfixes/staging/winex11-Vulkan_support/0001-winex11-Specify-a-default-vulkan-driver-if-one-not-f.patch

    # xactengine-initial
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine-initial/0001-x3daudio1_7-Create-import-library.patch

    # xactengine3_7-Notification
    patch -Np1 < ../wine-staging/patches/xactengine3_7-Notification/0001-xactengine3.7-Delay-Notication-for-WAVEBANKPREPARED.patch
    patch -Np1 < ../wine-staging/patches/xactengine3_7-Notification/0002-xactengine3_7-Record-context-for-each-notications.patch

    # xactengine3_7-PrepareWave
    patch -Np1 < ../wine-staging/patches/xactengine3_7-PrepareWave/0002-xactengine3_7-Implement-IXACT3Engine-PrepareStreamin.patch
    patch -Np1 < ../wine-staging/patches/xactengine3_7-PrepareWave/0003-xactengine3_7-Implement-IXACT3Engine-PrepareInMemory.patch

    # xactengine3_7-callbacks
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine3_7-callbacks/0001-Add-support-for-private-contexts.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine3_7-callbacks/0002-xactengine3_7-notifications.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine3_7-callbacks/0003-Send-NOTIFY_CUESTOP-when-Stop-is-called.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/xactengine3_7-callbacks/0004-xactengine3_7-Don-t-use-switch-with-constant-integer.patch

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

    # winemenubuilder-Desktop_Icon_Path
    patch -Np1 < ../patches/wine-hotfixes/staging/winemenubuilder-Desktop_Icon_Path/0001-winemenubuilder-Create-desktop-shortcuts-with-absolu.patch

    # wscript-support-d-u-switches
    patch -Np1 < ../patches/wine-hotfixes/staging/wscript-support-d-u-switches/0001-wscript-return-TRUE-for-d-and-u-stub-switches.patch

    # sapi-iteration-tokens
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0001-sapi-Implement-ISpRegDataKey-CreateKey.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0003-sapi-Implement-ISpRegDataKey-GetStringValue.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0004-sapi-EnumTokens-setup-enumeration-members.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0005-sapi-Implement-ISpObjectTokenEnumBuilder-Item.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0006-sapi-Implement-ISpObjectToken-GetId.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0007-sapi-Implement-ISpObjectToken-OpenKey.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0008-sapi-Add-default-voice-registry-key.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/sapi-iteration-tokens/0009-sapi-Return-dump-object-in-ISpObjectTokenEnumBuilder.patch

    # nvapi/nvcuda
    # this was added in 7.1, so it's not in the 7.0 tree
    patch -Np1 < ../patches/wine-hotfixes/staging/nvcuda/0016-nvcuda-Make-nvcuda-attempt-to-load-libcuda.so.1.patch

### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "WINE: -GAME FIXES- mech warrior online fix"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "WINE: -GAME FIXES- assetto corsa hud fix"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "WINE: -GAME FIXES- mk11 crash fix"
    # this is needed so that online multi-player does not crash
    patch -Np1 < ../patches/game-patches/mk11.patch

    echo "WINE: -GAME FIXES- killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    echo "WINE: -GAME FIXES- add cities XXL patches"
    patch -Np1 < ../patches/game-patches/v5-0001-windowscodecs-Correctly-handle-8bpp-custom-conver.patch

    echo "WINE: -GAME FIXES- add powerprof patches for FFVII Remake and SpecialK"
    patch -Np1 < ../patches/game-patches/FFVII-and-SpecialK-powerprof.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "WINE: -PROTON- fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

    echo "WINE: -PROTON- fake current res patches"
    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

    echo "WINE: -PROTON- add fsync patch to fix Elden Ring crashes"
    patch -Np1 < ../patches/proton/0001-fsync-Reuse-shared-mem-indices.patch

### END PROTON PATCH SECTION ###

### START MFPLAT PATCH SECTION ###

    # missing http: scheme workaround see: https://github.com/ValveSoftware/Proton/issues/5195
#    echo "WINE: -MFPLAT- The Good Life (1452500) workaround"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/thegoodlife-mfplat-http-scheme-workaround.patch

    # Needed for godfall intro
#    echo "mfplat godfall fix"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch


### END MFPLAT PATCH SECTION ###


### (2-5) WINE HOTFIX SECTION ###

    # https://github.com/Frogging-Family/wine-tkg-git/commit/ca0daac62037be72ae5dd7bf87c705c989eba2cb
    echo "WINE: -HOTFIX- unity crash hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/unity_crash_hotfix.patch

    echo "WINE: -HOTFIX- 32 bit compilation crashes with newer libldap, upstream patch fixes it"
    patch -Np1 < ../patches/wine-hotfixes/upstream/32-bit-ldap-upstream-fix.patch

    echo "WINE: -HOTFIX- fix audio regression caused by 0e7fd41"
    patch -Np1 < ../patches/wine-hotfixes/upstream/Fix-regression-introduced-by-0e7fd41.patch

#    disabled, not compatible with fshack, not compatible with fsr, missing dependencies inside proton.
#    patch -Np1 < ../patches/wine-hotfixes/testing/wine_wayland_driver.patch

#    # https://bugs.winehq.org/show_bug.cgi?id=51687
#    patch -Np1 < ../patches/wine-hotfixes/pending/Return_nt_filename_and_resolve_DOS_drive_path.patch

### END WINE HOTFIX SECTION ###

### (2-6) WINE PENDING UPSTREAM SECTION ###


### END WINE PENDING UPSTREAM SECTION ###


### (2-7) WINE CUSTOM PATCHES ###

### END WINE CUSTOM PATCHES ###
### END WINE PATCHING ###
