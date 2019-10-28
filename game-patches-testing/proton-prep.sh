#!/bin/bash

    # VKD3D patches
    cd vkd3d
    git reset --hard HEAD
    git clean -xdf
    # unsure if this is still needed to fix flicker in wow
    # patch -Np1 < ../game-patches-testing/vkd3d-patches/wow-flicker.patch

    patch -Np1 < ../game-patches-testing/vkd3d-patches/171975.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/171985-1.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/171985-2.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-1.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-2.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-3.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-4.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-5.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172006-6.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172033.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172037.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172053-1.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172053-2.patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/172080.patch

    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/dxvk-patches/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../game-patches-testing/dxvk-patches/dxvk-async.patch
    cd ..

    # Valve DXVK patches
    cd d9vk
    git reset --hard HEAD
    git clean -xdf
    # revert this as it breaks "new game" in Warlock: Master of the Arcane
    git revert --no-commit 3909a78579e7fef47bdda38562595f7f36e6c0b6
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
    -W winex11-MWM_Decorations \
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

    echo "gta v launcher fix"
    patch -Np1 < ../game-patches-testing/game-patches/gtav-launcher.patch

    echo "steam crossover patch"
    patch -Np1 < ../game-patches-testing/game-patches/steam-crossover.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fsync_staging.patch

    patch -Np1 < ../game-patches-testing/wine-patches/user32-nolegacy.patch

    #PROTON
    echo "applying proton patches"
    #only use these 3 in 4.18+ build
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-kernelbase_reverts.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging_rpc.patch

    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-LAA_staging.patch

    # this needs to come after LAA patch

    echo "mortal kombat 11 patch"
    patch -Np1 < ../game-patches-testing/game-patches/mk11.patch

    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-use_clock_monotonic.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-amd_ags.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-hide_prefix_update_window.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_staging_vulkan.patch   
    patch -Np1 < ../game-patches-testing/proton-valve-patches/winex11.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-vk_bits_4.5+.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy_2.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-gamepad_additions.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-mf_hacks.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch

    #need for VR to compile
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d_staging.patch

    ./tools/make_requests

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #end
