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

    cd gst-plugins-ugly
    git reset --hard HEAD
    git clean -xdf
    echo "add Guy's patch to fix wmv playback in gst-plugins-ugly"
    patch -Np1 < ../patches/gstreamer/asfdemux-always_re-initialize_metadata_and_global_metadata.patch
    cd ..

    # steam_helper patches
    #git checkout steam_helper
    #cd steam_helper
    #cd ..

    # warframe controller fix
    git checkout lsteamclient
    cd lsteamclient
    patch -Np1 < ../patches/proton-hotfixes/steamclient-disable_SteamController007_if_no_controller.patch
    patch -Np1 < ../patches/proton-hotfixes/steamclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
    cd ..

    # vrclient
    git checkout vrclient_x64
    cd vrclient_x64
    patch -Np1 < ../patches/proton-hotfixes/vrclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
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

    # winepath was broken with this commit
    git revert --no-commit e22bcac706be3afac67f4faac3aca79fd67c3d6f

    # causes mp4 playback to break
    git revert --no-commit 387bf24376ac7da9c72c22e1724a03f546a2d0c6

    #WINE STAGING

# Enable these for now in favor over proton gamepad additions
#    -W dinput-SetActionMap-genre \
#    -W dinput-axis-recalc \
#    -W dinput-joy-mappings \
#    -W dinput-reconnect-joystick \
#    -W dinput-remap-joystick \

# warframe launcher fix 0.0mb hang fix
#    -W ntdll-avoid-fstatat

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W server-Desktop_Refcount \
    -W ws2_32-TransmitFile \
    -W winex11-MWM_Decorations \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W winex11-key_translation \
    -W ntdll-avoid-fstatat


    #WINE FAUDIO
    echo "applying faudio patches"
    patch -Np1 < ../patches/faudio/faudio-ffmpeg.patch


    ### GAME PATCH SECTION ###
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "final fantasy XV"
    patch -Np1 < ../patches/game-patches/ffxv-steam-fix.patch

#   TODO: Check on this - don't own game. Need to validate
    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "sword art online"
    patch -Np1 < ../patches/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" 
    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch

#   TODO: Check on this - don't own game. Need to validate
    echo "blackops 2 fix"
    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

#   TODO: Check on this - don't own game. Need to validate
    echo "NFSW launcher fix"
    patch -Np1 < ../patches/game-patches/NFSWLauncherfix.patch

    echo "fix steep and AC Odyssey fullscreen"
    patch -Np1 < ../patches/wine-hotfixes/0001-Add-some-semi-stubs-in-user32.patch

#   TODO: Check on this - don't own game. Need to validate. Unknown if necessary outside of proton specific gamepad patches. Seems to cause input issues in FFXV
#    echo "gta4 input patch"
#    patch -Np1 < ../patches/game-patches/gta4_gamepad_workaround.patch


    ### END GAME PATCH SECTION ###
    
    echo "clock monotonic, amd ags"
    patch -Np1 < ../patches/proton/proton-use_clock_monotonic.patch
    patch -Np1 < ../patches/proton/proton-amd_ags.patch

    #PROTON
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch
    
    echo "bypass compositor"
    patch -Np1 < ../patches/proton/proton-FS_bypass_compositor.patch

    echo "applying winevulkan childwindow"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton/proton-fsync_staging.patch
#    patch -Np1 < ../patches/proton/proton-fsync-spincounts.patch
    
    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/valve_proton_fullscreen_hack-staging.patch
    
    echo "staging winex11-key_translation"
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0001-winex11-Match-keyboard-in-Unicode.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0002-winex11-Fix-more-key-translation.patch
    patch -Np1 < ../wine-staging/patches/winex11-key_translation/0003-winex11.drv-Fix-main-Russian-keyboard-layout.patch
    
    echo "LAA"
    patch -Np1 < ../patches/proton/proton-LAA_staging.patch

    echo "staging winex11-MWM_Decorations"
    patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-MWM_Decorations.patch
    
#   TODO: Fix this
    # staging winex11-_NET_ACTIVE_WINDOW - disabled, currently not working
    #patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-_NET_ACTIVE_WINDOW.patch

#   TODO: Fix this
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

    echo "seccomp"
    patch -Np1 < ../patches/proton/proton-seccomp-envvar.patch

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
    for _f in ../patches/wine-hotfixes/guy_mediafoundation_alpha/*.patch; do
        patch -Np1 < "${_f}"
    done

    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/wine-hotfixes/proton_mediafoundation_dllreg.patch


# the patch below reverts the following commits:

# f64e34b01456de26e5a8f60e8494cbe839964071
# de47a5969be3d78d2043abb75b7659241b8e434a
# d01b177bee7da2fa4a924e4b3bb4481cb31748df
# b87256cd1db21a59484248a193b6ad12ca2853ca

# because they cause wineboot to error on creating a default prefix after compiling:

# obj-wine64$ WINEPREFIX=$PWD/test ./wine64 wineboot
# wine: created the configuration directory '/home/vagrant/build-Proton-5.5-GE-2/obj-wine64/test'
# wine: could not load kernel32.dll, status c000007b

# the reason is because of outdated glibc used in steam runtime:

# <rbernon> GloriousEggroll zf: the issue comes from steamrt eglibc that incorrectly adds a leaf attribute to dlopen, which makes gcc assume the 
# call have no side effects on the current translation unit and, and makes it optimize some global assignments around it that are normally used by wine to track the outcome of the load
# <rbernon> other / more recent glibc do not have leaf attributes on dlopen, so it's probably an eglibc bug, but it's still a bit hard to workaround

    echo "ntdll revert for proton wineboot fix"
    patch -Np1 < ../patches/wine-hotfixes/0001-ntdll-re-enable_wine_dl_functions_to_fix_wineboot_in.patch


    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    ./dlls/winevulkan/make_vulkan
    ./tools/make_requests
    autoreconf -f

    #end
