#!/bin/bash

    # VKD3D patches
    cd vkd3d
    git reset --hard HEAD
    git clean -xdf
    # wow root signatures patch
    patch -Np1 < ../game-patches-testing/vkd3d-patches/wow-rs.patch
    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/dxvk-patches/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../game-patches-testing/dxvk-patches/dxvk-async.patch
    cd ..

    # Valve D9VK patches
    cd d9vk
    git reset --hard HEAD
    git clean -xdf
    # Warlock: Master of the Arcane new game hang fix
    patch -Np1 < ../game-patches-testing/d9vk-patches/d3d9-device_local_memory.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    #FS HACK REVERTS NECESSARY
    git revert --no-commit 413aad39135b0b0f8255500b85fcc05337a5f138
    git revert --no-commit 9ae8da6bb4a8f66d55975fa0f14e5e413756d324
    git revert --no-commit de94cfa775f9f41d1d65cbd8e7bf861cd7f9a871
    git revert --no-commit 6dbb153ede48e77a87dddf37e5276276a701c5c3
    git revert --no-commit 81f8b6e8c215dc04a19438e4369fcba8f7f4f333

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

    echo "lego island fix"
    patch -Np1 < ../game-patches-testing/game-patches/lego-island.patch

    echo "wow d3d12 patch"
    patch -Np1 < ../game-patches-testing/game-patches/wow-d3d12.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fsync_staging.patch

    #PROTON
    echo "applying proton patches"

    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-kernelbase_reverts.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging_rpc.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-LAA_staging.patch

    # this needs to come after LAA patch
    echo "mortal kombat 11 patch"
    patch -Np1 < ../game-patches-testing/game-patches/mk11.patch

    #TKG FS Hack
    echo "fullscreen hack"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-FS_bypass_compositor.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_staging.patch

    echo "proton integer scaling"
    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-integer_scaling.patch

    echo "proton alt-tab"
    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-alt_tab_fix.patch

    #echo "vulkanbits"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-vk_bits_4.5+.patch

    echo "SDL Joystick"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy_2.patch

    echo "gamepad additions"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-gamepad_additions.patch

    echo "mf hacks"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-mf_hacks.patch

    echo "registry entries"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch

    #need for VR to compile
    echo "wined3d bits"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d_staging.patch

    ./tools/make_requests

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #patch -Np1 < ../game-patches-testing/proton-hotfixes/rbernon-rawinput.patch

    echo "overwatch fixes"
    patch -Np1 < ../game-patches-testing/game-patches/overwatch-input_fixes.patch


    #end
