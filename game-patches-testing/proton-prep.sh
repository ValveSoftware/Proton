#!/bin/bash

    # VKD3D patches
    cd vkd3d
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/vkd3d-patches/wow-flicker.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/sottr-launch.patch
    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/dxvk-patches/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    #HOT FIXES

    # https://bugs.winehq.org/show_bug.cgi?id=45774
    git revert --no-commit 6ccb94392a8ef4bca701ae2a560f4ea1da677edd

    #WINE STAGING
    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W server-Desktop_Refcount \
    -W ws2_32-TransmitFile \
    -W winex11.drv-mouse-coorrds \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W dinput-SetActionMap-genre \
    -W dinput-axis-recalc \
    -W dinput-joy-mappings \
    -W dinput-reconnect-joystick \
    -W dinput-remap-joystick

    #WINE VULKAN
    echo "applying winevulkan patches"
    patch -Np1 < ../game-patches-testing/wine-patches/winevulkan-childwindow.patch

    #WINE FAUDIO
    echo "applying faudio patches"
    patch -Np1 < ../game-patches-testing/faudio-patches/faudio-ffmpeg.patch

    #WINE GAME PATCHES

    echo "mech warrior online"
    patch -Np1 < ../game-patches-testing/game-patches/mwo.patch

    echo "final fantasy XIV"
    patch -Np1 < ../game-patches-testing/game-patches/ffxiv-launcher.patch

    echo "assetto corsa"
    patch -Np1 < ../game-patches-testing/game-patches/assettocorsa-hud.patch

    echo "sword art online"
    patch -Np1 < ../game-patches-testing/game-patches/sword-art-online-gnutls.patch

    echo "steam crossover patch"
    patch -Np1 < ../game-patches-testing/game-patches/steam-crossover.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fsync_staging.patch

    #PROTON
    echo "applying proton patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-LAA_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-use_clock_monotonic.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-amd_ags.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-hide_prefix_update_window.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-FS_bypass_compositor.patch

    #rawinput patch
    patch -Np1 < ../game-patches-testing/wine-patches/user32-raw_input.patch

    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_realmodes.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-vk_bits_4.5+.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy_2.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-gamepad_additions.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch

    #PROTON HOTFIXES
    echo "applying proton hotfix patches"

    #https://github.com/ValveSoftware/wine/pull/65/files
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0001-dinput-Remove-is_xbox_gamepad-flag-from-SDL-joystick.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0002-dinput-Don-t-enumerate-joysticks-that-are-blackliste.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0003-winebus.sys-Ignore-blacklisted-SDL-joysticks-too.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0004-winebus.sys-Override-Steam-virtual-controller-vid-pi.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0005-dinput-Override-Steam-virtual-controller-name.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0006-winebus-Extract-bluetooth-info-from-uevent.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0007-winebus.sys-Bluetooth-doesn-t-report-USB-device-vers.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0008-dinput-Return-real-rawinput-path-for-dinput-device.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0009-dinput-Use-axis-ID-to-look-up-properties-not-data-of.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/0010-dinput-Fix-DS4-object-enumeration-order.patch


    #need for VR to compile
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d_staging.patch

    #wininet backport upstream changes post 4.15 release to allow large downloads
    patch -Np1 < ../game-patches-testing/wine-patches/wininet_tests-Remove_LPVOID_cast.patch
    patch -Np1 < ../game-patches-testing/wine-patches/wininet-Return_error_from_HttpQueryInfo_if_number_argument_is_invalid.patch
    patch -Np1 < ../game-patches-testing/wine-patches/wininet-Include_limits_to_define_UINT_MAX_and_ULONG_MAX.patch
    patch -Np1 < ../game-patches-testing/wine-patches/wininet-support_large_downloads.patch

    ./tools/make_requests

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #end
