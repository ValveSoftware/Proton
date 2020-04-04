#!/bin/bash

#TKG patch order:

#549 clock monotonic
#567 bypass compositor
#718 vulkan childwindow
#1044 fsync staging
#1066 fsync spincount
#1078 - fs hack
#1125 rawinput
#1207 LAA
#1221 winex11-MWM
#1229 steam client swap
#1236 protonify rpc
#1237 protonify
#1239 steam bits
#1332 SDL
#1333 SDL2
#1339 gamepad additions
#1375 vr
#1386 vk bits
#1387 fs hack integer scaling
#1391 winevulkan
#1396 msvcrt native builtin
#1411 win10
#1417 dxvk_config


    # steam_helper patches
    #git checkout steam_helper
    #cd steam_helper
    #cd ..

    # warframe controller fix
    git checkout lsteamclient
    cd lsteamclient
    patch -Np1 < ../patches/proton-hotfixes/steamclient-disable_SteamController007_if_no_controller.patch
    cd ..

    # VKD3D patches
    cd vkd3d
    git reset --hard HEAD
    git clean -xdf
    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../patches/dxvk/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-add_new_dxvk_config_library.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

# warframe launcher fix 1
    git revert --no-commit bae4776c571cf975be1689594f4caf93ad23e0ca
    git revert --no-commit 5e218fe758fe6beed5c7ad73405eccf33c307e6d

    #WINE STAGING

# Enable these for now in favor over proton gamepad additions
#    -W dinput-SetActionMap-genre \
#    -W dinput-axis-recalc \
#    -W dinput-joy-mappings \
#    -W dinput-reconnect-joystick \
#    -W dinput-remap-joystick \

# warframe launcher fix 2
#    -W ntdll-avoid-fstatat

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
    -W winex11-key_translation \
    -W dinput-SetActionMap-genre \
    -W dinput-axis-recalc \
    -W dinput-joy-mappings \
    -W dinput-reconnect-joystick \
    -W dinput-remap-joystick \
    -W ntdll-avoid-fstatat

    #WINE FAUDIO
    echo "applying faudio patches"
    patch -Np1 < ../patches/faudio/faudio-ffmpeg.patch

    ### GAME PATCH SECTION ###
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "final fantasy XIV"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher.patch

    #disabled, not working
    #echo "final fantasy XV"
    #patch -Np1 < ../patches/game-patches/ffxv-steam-fix.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "sword art online"
    patch -Np1 < ../patches/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" 
    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch

    echo "blackops 2 fix"
    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    echo "NFSW launcher fix"
    patch -Np1 < ../patches/game-patches/NFSWLauncherfix.patch

    #Wine-Bug: https://bugs.winehq.org/show_bug.cgi?id=48817
    echo "applying sunset overdrive patch"
    patch -Np1 < ../patches/game-patches/sunset-overdrive.patch

    echo "fix steep and AC Odyssey fullscreen"
    patch -Np1 < ../patches/wine-hotfixes/0001-Add-some-semi-stubs-in-user32.patch

    echo "gta4 input patch"
    patch -Np1 < ../patches/game-patches/gta4_gamepad_workaround.patch


    ### END GAME PATCH SECTION ###
    
    echo "clock monotonic, amd ags"
    patch -Np1 < ../patches/proton/proton-use_clock_monotonic.patch
    patch -Np1 < ../patches/proton/proton-amd_ags.patch

    #PROTON
    #disabled, not working
    #echo "mk11 patch"
    #patch -Np1 < ../patches/game-patches/mk11.patch
    
    echo "bypass compositor"
    patch -Np1 < ../patches/proton/proton-FS_bypass_compositor.patch

    echo "applying winevulkan childwindow"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton/proton-fsync_staging.patch
    patch -Np1 < ../patches/proton/proton-fsync-spincounts.patch
    
    echo "revert necessary for fshack"
    patch -Np1 < ../patches/proton-hotfixes/wine-winex11.drv_Calculate_mask_in_X11DRV_resize_desktop.patch

    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/valve_proton_fullscreen_hack-staging.patch

    echo "raw input"
    patch -Np1 < ../patches/proton/proton-rawinput.patch
    
    echo "staging winex11-key_translation"
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0001-winex11-Match-keyboard-in-Unicode.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0002-winex11-Fix-more-key-translation.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0003-winex11.drv-Fix-main-Russian-keyboard-layout.patch
    
    echo "LAA"
    patch -Np1 < ../patches/proton/proton-LAA_staging.patch

    echo "staging winex11-MWM_Decorations"
    patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-MWM_Decorations.patch
    
    # staging winex11-_NET_ACTIVE_WINDOW - disabled, currently not working
    #patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-_NET_ACTIVE_WINDOW.patch

    # staging winex11-WM_WINDOWPOSCHANGING - disabled, currently not working
    #patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-WM_WINDOWPOSCHANGING.patch

    echo "steamclient swap"
    patch -Np1 < ../patches/proton/proton-steamclient_swap.patch

    echo "protonify rpc"
    patch -Np1 < ../patches/proton/proton-protonify_staging_rpc.patch

    echo "protonify"
    patch -Np1 < ../patches/proton/proton-protonify_staging.patch
    
    echo "steam bits"
    patch -Np1 < ../patches/proton/proton-steam-bits.patch

    echo "SDL Joystick"
    patch -Np1 < ../patches/proton/proton-sdl_joy.patch
    patch -Np1 < ../patches/proton/proton-sdl_joy_2.patch
    
    #disable for now
    #echo "proton gamepad additions"
    #patch -Np1 < ../patches/proton/proton-gamepad-additions.patch

    echo "Valve VR patches"
    patch -Np1 < ../patches/proton/proton-vr.patch

    echo "Valve vulkan patches"
    patch -Np1 < ../patches/proton/proton-vk-bits-4.5.patch

    echo "FS Hack integer scaling"
    patch -Np1 < ../patches/proton/proton_fs_hack_integer_scaling.patch
    
    echo "proton winevulkan"
    patch -Np1 < ../patches/proton/proton-winevulkan.patch
    
    echo "msvcrt overrides"
    patch -Np1 < ../patches/proton/proton-msvcrt_nativebuiltin.patch

    echo "valve registry entries"
    patch -Np1 < ../patches/proton/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../patches/proton/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch
    
    echo "set prefix win10"
    patch -Np1 < ../patches/proton/proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/proton-dxvk_config.patch

    echo "hide wine prefix update"
    patch -Np1 < ../patches/proton/proton-hide_wine_prefix_update_window.patch

    echo "applying WoW vkd3d wine patches"
    patch -Np1 < ../patches/wine-hotfixes/D3D12SerializeVersionedRootSignature.patch
    patch -Np1 < ../patches/wine-hotfixes/D3D12CreateVersionedRootSignatureDeserializer.patch

    echo "guy's media foundation alpha patches"
    # apply esync patches
    for _f in ../patches/wine-hotfixes/guy_mediafoundation_alpha/*.patch; do
        patch -Np1 < "${_f}"
    done

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    ./dlls/winevulkan/make_vulkan
    ./tools/make_requests
    autoreconf -f

    #end
