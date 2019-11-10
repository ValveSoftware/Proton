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
    # revert this as it breaks Warlock: Master of the Arcane
    #git revert --no-commit 9d571bf74aa80a15baa98a6bc20305e068e13c73
    #git revert --no-commit c2a42cc7b9d60ebfda1198e1bd28e09a2fd72545
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    #HOT FIXES

    # https://bugs.winehq.org/show_bug.cgi?id=45774
    git revert --no-commit 6ccb94392a8ef4bca701ae2a560f4ea1da677edd


    # necessary reverts for proton kernelbase
    git revert --no-commit b0199ea2fe8f9b77aee7ab4f68c9ae1755442586
    git revert --no-commit 608d086f1b1bb7168e9322c65224c23f34e75f29
    git revert --no-commit b7db0b52cee65a008f503ce727befcad3ba8d28a
    git revert --no-commit 3ede217e5cd80b18f709339aea281356579756cb
    git revert --no-commit 87307de2173ee813daca9bd93ec750f17d3eda94
    git revert --no-commit 3dadd980bfbb2fb05a1a695decd06a429ddda97c
    git revert --no-commit e5354008f46bc0e345c06ac06a7a7780faa9398b
    git revert --no-commit 461b5e56f95eb095d97e4af1cb1c5fd64bb2862a


    # necessary reverts for TKG FS Hack
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

    echo "leends of runeterra fix"
    patch -Np1 < ../game-patches-testing/game-patches/legendsofruneterra.patch

    echo "steam crossover patch"
    patch -Np1 < ../game-patches-testing/game-patches/steam-crossover.patch

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

    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-use_clock_monotonic.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-amd_ags.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-hide_prefix_update_window.patch

    #rawinput WIP do not enable
    #echo "raw input patch"
    #patch -Np1 < ../game-patches-testing/proton-hotfixes/rbernon-rawinput.patch

    #TKG FS Hack
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-FS_bypass_compositor.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fullscreen_hack_staging.patch

    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-alt_tab_fix.patch

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
