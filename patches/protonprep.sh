#!/bin/bash

    cd gst-plugins-base
    git reset --hard HEAD
    git clean -xdf
    echo "add Guy's patch for gstreamer preroll buffer for media converter"
    patch -Np1 < ../patches/gstreamer/mediaconvert-gstdecodebin2.patch
    cd ..

    cd gst-plugins-ugly
    git reset --hard HEAD
    git clean -xdf
    echo "add Guy's patch to fix wmv playback in gst-plugins-ugly"
    patch -Np1 < ../patches/gstreamer/asfdemux-Re-initialize_demux-adapter_in_gst_asf_demux_reset.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-gst_asf_demux_reset_GST_FORMAT_TIME_fix.patch
    cd ..

    cd lsteamclient
    git reset --hard HEAD
    git clean -xdf
    echo "add warframe 5 minute crash fix"
    patch -Np1 < ../patches/proton-hotfixes/proton-lsteamclient_disable_SteamController007_if_no_controller.patch
    cd ..

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch
    
    echo "proton re8 fixups"
    patch -Np1 < ../patches/dxvk/RE8_proton_fixups.patch

    echo "add dxvk PR patches"
    patch -Np1 < ../patches/dxvk/1582.patch

    echo "add dxvk nier replicant video interfaces patch"
    patch -Np1 < ../patches/dxvk/video_interfaces.patch

    # this needs to be the last patch in the list.. because reasons?
    echo "add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf

    # protonify syscall emulation
    patch -Np1 < ../patches/wine-hotfixes/protonify_stg_syscall_emu.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf
    
    # https://bugs.winehq.org/show_bug.cgi?id=49990
    echo "revert bd27af974a21085cd0dc78b37b715bbcc3cfab69 which breaks some game launchers"
    git revert --no-commit bd27af974a21085cd0dc78b37b715bbcc3cfab69
    
    # revert this because it breaks controllers on some platforms
    # https://github.com/Frogging-Family/wine-tkg-git/issues/248#issuecomment-760471607
    echo "revert e4fbae832c868e9fcf5a91c58255fe3f4ea1cb30 which breaks controller detection on some distros"
    git revert --no-commit e4fbae832c868e9fcf5a91c58255fe3f4ea1cb30
    
    # ubisoft controller regression hotfix
    git revert --no-commit 0ac619ae7ab7dd90622371a5f58a1ff12d46eb8f

    # disable these when using proton's gamepad patches
    # -W dinput-SetActionMap-genre \
    # -W dinput-axis-recalc \
    # -W dinput-joy-mappings \
    # -W dinput-reconnect-joystick \
    # -W dinput-remap-joystick \

    # these cause window freezes/hangs with origin
    # -W winex11-_NET_ACTIVE_WINDOW \
    # -W winex11-WM_WINDOWPOSCHANGING \

    # this needs to be disabled of disabling the winex11 patches above because staging has them set as a dependency.
    # -W imm32-com-initialization

    # instead, we apply it manually:
    # patch -Np1 < ../patches/wine-hotfixes/imm32-com-initialization_no_net_active_window.patch

    # disable these for vulkan childwindow support
    #-W Pipelight \
    #-W winex11-Vulkan_support \

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W imm32-com-initialization \
    -W bcrypt-ECDHSecretAgreement

    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    # apply this manually since imm32-com-initialization is disabled in staging.
    patch -Np1 < ../patches/wine-hotfixes/imm32-com-initialization_no_net_active_window.patch

    ### GAME PATCH SECTION ###    
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

#    echo "origin downloads fix"
#    not needed for proton, also breaks gta V online sessions
#    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch

    # TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

    # BLOPS2 uses CEG which does not work in proton. Disabled for now
#    echo "blackops 2 fix"
#    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    echo "killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    ### END GAME PATCH SECTION ###
    
    ### PROTON PATCH SECTION ###
    
    echo "clock monotonic"
    patch -Np1 < ../patches/proton/01-proton-use_clock_monotonic.patch
    
    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton/03-proton-fsync_staging.patch

    echo "LAA"
    patch -Np1 < ../patches/proton/04-proton-LAA_staging.patch
    
    echo "steamclient swap"
    patch -Np1 < ../patches/proton/08-proton-steamclient_swap.patch

    echo "protonify"
    patch -Np1 < ../patches/proton/10-proton-protonify_staging.patch

    echo "protonify-audio"
    patch -Np1 < ../patches/proton/11-proton-pa-staging.patch

    echo "steam bits"
    patch -Np1 < ../patches/proton/12-proton-steam-bits.patch

#    currently disabled in favor of wine's implementation
#    echo "proton gamepad additions"
#    patch -Np1 < ../patches/proton/15-proton-gamepad-additions.patch

    echo "Valve VR patches"
    patch -Np1 < ../patches/proton/16-proton-vrclient-wined3d.patch

    echo "amd ags"
    patch -Np1 < ../patches/proton/18-proton-amd_ags.patch

    echo "msvcrt overrides"
    patch -Np1 < ../patches/proton/19-proton-msvcrt_nativebuiltin.patch

    echo "atiadlxx needed for cod games"
    patch -Np1 < ../patches/proton/20-proton-atiadlxx.patch

    echo "valve registry entries"
    patch -Np1 < ../patches/proton/21-proton-01_wolfenstein2_registry.patch
    patch -Np1 < ../patches/proton/22-proton-02_rdr2_registry.patch
    patch -Np1 < ../patches/proton/23-proton-03_nier_sekiro_ds3_registry.patch
    patch -Np1 < ../patches/proton/24-proton-04_cod_registry.patch
    patch -Np1 < ../patches/proton/32-proton-05_spellforce_registry.patch
    patch -Np1 < ../patches/proton/33-proton-06_shadow_of_war_registry.patch
    patch -Np1 < ../patches/proton/41-proton-07_nfs_registry.patch
    patch -Np1 < ../patches/proton/45-proton-08_FH4_registry.patch

    echo "valve rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

    #this is needed specifically for proton, not needed for normal wine
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch

#    only needed with proton's gamepad patches
#    echo "proton udev container patches"
#    patch -Np1 < ../patches/proton/35-proton-udev_container_patches.patch

#    only needed with proton's gamepad patches
#    echo "proton overlay patches"
#    patch -Np1 < ../patches/proton/36-proton-overlay_fixes.patch

    echo "mouse focus fixes"
    patch -Np1 < ../patches/proton/38-proton-mouse-focus-fixes.patch

    echo "CPU topology overrides"
    patch -Np1 < ../patches/proton/39-proton-cpu-topology-overrides.patch

    echo "proton futex2 patches"
    patch -Np1 < ../patches/proton/40-proton-futex2.patch

    ## VULKAN-CENTRIC PATCHES

    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/41-valve_proton_fullscreen_hack-staging.patch

    echo "vulkan childwindow hack"
    patch -Np1 < ../patches/proton/44-proton-vulkan-childwindow-experimental.patch

#    old childwindow hack - keep just in case for now.
#    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    echo "proton nvidia hacks"
    patch -Np1 < ../patches/proton/26-proton-nvidia-hacks.patch

#    disabled for now, needs rebase. only used for vr anyway
#    echo "proton openxr patches"
#    patch -Np1 < ../patches/proton/37-proton-OpenXR-patches.patch

    ## END VULKAN-CENTRIC PATCHES

    echo "fullscreen hack wined3d additions"
    patch -Np1 < ../patches/proton/42-valve_proton_fullscreen_hack-staging-wined3d.patch

    echo "wine mono update"
    patch -Np1 < ../patches/proton/46-proton_update_winemono_6.1.2.patch

    ### END PROTON PATCH SECTION ###

    ### WINE PATCH SECTION ###

    echo "mfplat additions"
    patch -Np1 < ../patches/wine-hotfixes/mfplat-rebase.patch

    # these are applied out of order since guy's mfplat patches are based on vanilla wine
    echo "proton-specific mfplat video conversion patches"
    patch -Np1 < ../patches/proton/34-proton-winegstreamer_updates.patch

    # additional pending fallout 4 fix
    patch -Np1 < ../patches/wine-hotfixes/205277

    # mfplat nier replicant fixes
    patch -Np1 < ../patches/wine-hotfixes/mfreadwrite_hack.patch

    echo "proton steam client reverts"
    patch -RNp1 < ../patches/wine-hotfixes/revert_steamclient_breaker.patch

    # witcher 3 + borderlands 3 breaker
    patch -Np1 < ../patches/wine-hotfixes/205333


    ### END WINEPATCH SECTION ###

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #end
