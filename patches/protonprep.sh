#!/bin/bash

#TKG patch order:

#549 clock monotonic
#567 bypass compositor
#718 vulkan childwindow
#1044 fsync staging
#1066 fsync spincount
#1078 fs hack
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
    patch -Np1 < ../patches/gstreamer/asfdemux-Re-initialize_demux-adapter_in_gst_asf_demux_reset.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-Only_forward_SEEK_event_when_in_push_mode.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-gst_asf_demux_reset_GST_FORMAT_TIME_fix.patch
    cd ..

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
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    echo "proton gamepad conflict fix"
    git revert --no-commit da7d60bf97fb8726828e57f852e8963aacde21e9
            
    echo "fshack reverts"
    git revert --no-commit 6f9d20806e821ab07c8adf81ae6630fae94b00ef
    git revert --no-commit 145cfce1135a7e59cc4c89cd05b572403f188161
    git revert --no-commit e3eb89d5ebb759e975698b97ed8b547a9de3853f
    git revert --no-commit 707fcb99a60015fcbb20c83e9031bc5be7a58618
    git revert --no-commit 8cd6245b7633abccd68f73928544ae4de6f76d52
    git revert --no-commit 26b26a2e0efcb776e7b0115f15580d2507b10400
    git revert --no-commit fd6f50c0d3e96947846ca82ed0c9bd79fd8e5b80
    git revert --no-commit 2538b0100fbbe1223e7c18a52bade5cfe5f8d3e3
    
    echo "rawinput reverts"
    git revert --no-commit 306c40e67319cae8e4c448ec8fc8d3996f87943f
    git revert --no-commit 26c1131201f8fd9918a01231a7eb6f1989400858
    
# disable these when using proton's gamepad patches
#    -W dinput-SetActionMap-genre \
#    -W dinput-axis-recalc \
#    -W dinput-joy-mappings \
#    -W dinput-reconnect-joystick \
#    -W dinput-remap-joystick \

# disable if using remi's fakedll rework:
#    -W winebuild-Fake_Dlls \
#    -W ntdll-Syscall_Emulation \
#    -W ntdll-ThreadHideFromDebugger \

# disable if using fullscreenhack + proton rawinput
#    -W winex11.drv-mouse-coorrds \
#    -W winex11-MWM_Decorations \
#    -W winex11-_NET_ACTIVE_WINDOW \
#    -W winex11-WM_WINDOWPOSCHANGING \
#    -W winex11-key_translation \
#    -W user32-rawinput-mouse \
#    -W user32-rawinput-nolegacy \
#    -W user32-rawinput-mouse-experimental \
#    -W user32-rawinput-hid \
#    -W winevulkan-vkGetPhysicalDeviceSurfaceCapabilitiesKHR \

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W server-Desktop_Refcount \
    -W ws2_32-TransmitFile \
    -W winex11.drv-mouse-coorrds \
    -W winex11-MWM_Decorations \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W winex11-key_translation \
    -W user32-rawinput-mouse \
    -W user32-rawinput-nolegacy \
    -W user32-rawinput-mouse-experimental \
    -W user32-rawinput-hid \
    -W winevulkan-vkGetPhysicalDeviceSurfaceCapabilitiesKHR \
    -W dinput-SetActionMap-genre \
    -W dinput-axis-recalc \
    -W dinput-joy-mappings \
    -W dinput-reconnect-joystick \
    -W dinput-remap-joystick \
    -W user32-window-activation

    echo "ashes of the benchmark fix"
    patch -Np1 < ../patches/wine-hotfixes/pending/ashes-of-the-singularity-hotfix.patch

    echo "planet zoo/jurassic world fix"
    patch -Np1 < ../patches/wine-hotfixes/pending/planet-zoo-jurassic-world-pending-upstream-staging.patch
    
    echo "winevulkan hotfixes"
    patch -Np1 < ../patches/wine-hotfixes/pending/winevulkan-dont_initialize_vulkan_driver_in_dllmain.patch
    
    #WINE FAUDIO
    #echo "applying faudio patches"
    #patch -Np1 < ../patches/faudio/faudio-ffmpeg.patch
    
    ### GAME PATCH SECTION ###

    #fix this
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "final fantasy XV denuvo fix"
    patch -Np1 < ../patches/game-patches/ffxv-steam-fix.patch

    echo "final fantasy XIV old launcher render fix"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "sword art online"
    patch -Np1 < ../patches/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" 
    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch

    echo "fix steep"
    patch -Np1 < ../patches/game-patches/steep_fix.patch

#  TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

#    Disabled for now. The game uses CEG which does not work in proton.    
#    echo "blackops 2 fix"
#    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    ### END GAME PATCH SECTION ###
    
    #PROTON
    
    echo "clock monotonic"
    patch -Np1 < ../patches/proton/proton-use_clock_monotonic.patch

    echo "amd ags"
    patch -Np1 < ../patches/proton/proton-amd_ags.patch
    
    echo "bypass compositor"
    patch -Np1 < ../patches/proton/proton-FS_bypass_compositor.patch

    echo "applying winevulkan childwindow"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

#  TODO: Esync and Fsync compatibility was broken and disabled in 5.10.
#    #WINE FSYNC
#    echo "applying fsync patches"
#    patch -Np1 < ../patches/proton/proton-fsync_staging.patch
#    patch -Np1 < ../patches/proton/proton-fsync-spincounts.patch

    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/valve_proton_fullscreen_hack-staging.patch

    echo "fix for Dark Souls III, Sekiro, Nier" 
    patch -Np1 < ../patches/game-patches/nier.patch

#  TODO: Restore path
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
    
#   TODO: Fix this
    # staging winex11-_NET_ACTIVE_WINDOW - disabled, currently not working
    #patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-_NET_ACTIVE_WINDOW.patch

#   TODO: Fix this
    # staging winex11-WM_WINDOWPOSCHANGING - disabled, currently not working
    #patch -Np1 < ../patches/proton-hotfixes/proton-staging_winex11-WM_WINDOWPOSCHANGING.patch

    echo "steamclient swap"
    patch -Np1 < ../patches/proton/proton-steamclient_swap.patch

#    disabled for now -- was breaking Catherine Classic in 5.9
#    echo "audio patch test"
#    patch -Np1 < ../patches/proton/proton-xaudio2_stop_engine.patch

    echo "protonify"
    patch -Np1 < ../patches/proton/proton-protonify_staging.patch

    echo "protonify-audio"
    patch -Np1 < ../patches/proton/proton-pa-staging.patch
    
    echo "steam bits"
    patch -Np1 < ../patches/proton/proton-steam-bits.patch

    echo "seccomp"
    patch -Np1 < ../patches/proton/proton-seccomp-envvar.patch

    echo "SDL Joystick"
    patch -Np1 < ../patches/proton/proton-sdl_joy.patch
    patch -Np1 < ../patches/proton/proton-sdl_joy_2.patch
    
    echo "proton gamepad additions"
    patch -Np1 < ../patches/proton/proton-gamepad-additions.patch

    echo "Valve VR patches"
    # disable if using remi's fakedll rework
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
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12SerializeVersionedRootSignature.patch
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12CreateVersionedRootSignatureDeserializer.patch
            
    echo "guy's media foundation alpha patches"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/media_foundation_alpha.patch
    
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/proton_mediafoundation_dllreg.patch
    
    #WINE CUSTOM PATCHES
    #add your own custom patch lines below
    
    echo "Paul's Diablo 1 menu fix"
    patch -Np1 < ../patches/game-patches/diablo_1_menu.patch
    
    
    ./dlls/winevulkan/make_vulkan
    ./tools/make_requests
    autoreconf -f

    #end
