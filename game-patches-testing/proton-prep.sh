#!/bin/bash

    # VKD3D patches
    cd vkd3d
    git reset --hard HEAD
    git clean -xdf
    #Don't apply wow patches for now, they tend to crash other vkd3d games
    #patch -Np1 < ../game-patches-testing/vkd3d-patches/Support_RS_1.0_Volatile.patch
    #patch -Np1 < ../game-patches-testing/vkd3d-patches/wow-flicker.patch
    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/dxvk-patches/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../game-patches-testing/dxvk-patches/proton-add_new_dxvk_config_library.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    #FS HACK REVERTS NECESSARY
    git revert --no-commit 427152ec7b4ee85631617b693dbf1deea763c0ba
    git revert --no-commit b7b4bacaf99661e07c2f07a0260680b4e8bed4f8
    git revert --no-commit acf03ed9da0f7d3f94de9b47c44366be3ee47f8e
    git revert --no-commit 914b5519b1cd96f9ae19f1eec226e94af96354b9
    git revert --no-commit 99d047724e768822d6508573cd82a5c75b30bdcb
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
    -W user32-rawinput-mouse \
    -W user32-rawinput-nolegacy \
    -W user32-rawinput-mouse-experimental \
    -W user32-rawinput-hid \
    -W winex11-key_translation 

    #VKD3D-WINE
    #Don't apply these for now,they are part of the wow patches
    #echo "applying vkd3d wine patches"
    #patch -Np1 < ../game-patches-testing/wine-patches/D3D12SerializeVersionedRootSignature.patch
    #patch -Np1 < ../game-patches-testing/wine-patches/D3D12CreateVersionedRootSignatureDeserializer.patch

    #WINE VULKAN
    echo "applying winevulkan patches"
    patch -Np1 < ../game-patches-testing/wine-patches/winevulkan-childwindow.patch

    #WINE FAUDIO
    echo "applying faudio patches"
    patch -Np1 < ../game-patches-testing/faudio-patches/faudio-ffmpeg.patch
    #patch -Np1 < ../game-patches-testing/audio-temp/1_0.patch
    #patch -Np1 < ../game-patches-testing/audio-temp/1_1.patch
    #patch -Np1 < ../game-patches-testing/audio-temp/1_2.patch
    #patch -Np1 < ../game-patches-testing/audio-temp/1_3.patch
    #patch -Np1 < ../game-patches-testing/audio-temp/1_4.patch


    #WINE GAME PATCHES

    echo "mech warrior online" - tested OK
    patch -Np1 < ../game-patches-testing/game-patches/mwo.patch

    echo "final fantasy XIV" - tested OK
    patch -Np1 < ../game-patches-testing/game-patches/ffxiv-launcher.patch

    echo "final fantasy XV" - tested OK
    patch -Np1 < ../game-patches-testing/game-patches/ffxv-steam-fix.patch

    echo "assetto corsa"
    patch -Np1 < ../game-patches-testing/game-patches/assettocorsa-hud.patch

    echo "sword art online" - tested OK
    patch -Np1 < ../game-patches-testing/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" - tested OK
    patch -Np1 < ../game-patches-testing/game-patches/origin-downloads_fix.patch

    echo "gta v loading fix"
    patch -Np1 < ../game-patches-testing/game-patches/gtav-load-fix.patch

    echo "monster hunter world fix"
    patch -Np1 < ../game-patches-testing/game-patches/mhw_fix.patch

    echo "bcrypt fix for honor, steep"
    patch -Np1 < ../game-patches-testing/game-patches/0001-bcrypt-Implement-BCryptSecretAgreement-with-libgcryp.patch
    patch -Np1 < ../game-patches-testing/game-patches/0002-bcrypt-Implement-BCryptSecretAgreement-with-libgcryp.patch

    echo "bnet beta win10 crash fix"
    patch -Np1 < ../game-patches-testing/game-patches/bnet-beta_win10_crash_fix.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-fsync_staging.patch

    #PROTON
    echo "applying proton patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-steamclient_swap.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging_rpc.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-protonify_staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-LAA_staging.patch

    echo "mk11 patch"
    patch -Np1 < ../game-patches-testing/game-patches/mk11.patch

    echo "clock monotonic, amd ags, hide prefix update"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-use_clock_monotonic.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-amd_ags.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-hide_prefix_update_window.patch

    echo "fullscreen hack"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-FS_bypass_compositor.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/valve_proton_fullscreen_hack-staging.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-vk_bits_4.5+.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-integer_scaling.patch

    echo "raw input"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-rawinput.patch

    echo "applying staging patches that need to be applied after proton rawinput and fullscreen hack"

    # staging winex11-key_translation
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0001-winex11-Match-keyboard-in-Unicode.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0002-winex11-Fix-more-key-translation.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0003-winex11.drv-Fix-main-Russian-keyboard-layout.patch

    # staging winex11.drv-mouse-coorrds
    #patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-staging_winex11.drv-mouse-coorrds.patch

    # staging winex11-MWM_Decorations
    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-staging_winex11-MWM_Decorations.patch

    # staging winex11-_NET_ACTIVE_WINDOW
    patch -Np1 < ../wine-staging/patches/winex11-_NET_ACTIVE_WINDOW/0001-winex11.drv-Add-support-for-_NET_ACTIVE_WINDOW.patch
    patch -Np1 < ../game-patches-testing/proton-hotfixes/proton-staging_winex11-_NET_ACTIVE_WINDOW-0002.patch

    echo "SDL Joystick"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy_2.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-sdl_joy_3.patch

    echo "mf hacks"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-mf_hacks.patch

    #echo "msvcrt overrides" - disabled, breaks some games
    #patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-msvcrt_nativebuiltin.patch

    echo "valve registry entries"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch

    echo "fix steep fullscreen"
    patch -Np1 < ../game-patches-testing/wine-patches/0001-Add-some-semi-stubs-in-user32.patch

    echo "Valve wined3d VR patches"
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d.patch 
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d_2.patch 
    patch -Np1 < ../game-patches-testing/proton-valve-patches/proton-wined3d_3.patch

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    ./tools/make_requests
    autoreconf -f

    #end
