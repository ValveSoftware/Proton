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
    
    # FarCry5 hotfix
    git revert --no-commit c98c5f5d1720df09d584b8353bf6739e06e8ffcc
    patch -Np1 < ../patches/dxvk/farcry5-hotfix.patch

    echo "add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    echo "add dxvk PR patches"
    patch -Np1 < ../patches/dxvk/1582.patch

    echo "add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf
    
    # protonify syscall emulation
    patch -Np1 < ../patches/wine-hotfixes/protonify_stg_syscall_emu.patch
    
    # fix steam helper
    patch -RNp1 < ../patches/wine-hotfixes/shell32-Progress_Dialog-staging-41e1551.patch
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

    # these break sea of thieves
    echo "sea of thieves reverts"
    git revert --no-commit ed06d64bf41cc3eb6258a3576e845a544855b0be
    git revert --no-commit a114ce67db2357740eb58fbda0102e582e79c11c
    git revert --no-commit f93284dfa44b060436c6a0617b51280abb3f24fc
    git revert --no-commit 37b29862b36364c6fee143de5eb816bcae514279

    echo "proton steamhelper reverts"
    git revert --no-commit 4f787812999b3b26f04b322fa0d78724596878c0
    git revert --no-commit 4a1bd593f39b0852ca8fccbf0e54f7c00b3783ec
    # note: don't reverse this one, it had to be modified by hand
    patch -Np1 < ../patches/wine-hotfixes/revert-0c19e2e487d36a89531daf4897c0b6390d82a843.patch

    # disable these when using proton's gamepad patches
    # -W dinput-SetActionMap-genre \
    # -W dinput-axis-recalc \
    # -W dinput-joy-mappings \
    # -W dinput-reconnect-joystick \
    # -W dinput-remap-joystick \

    # these cause window freezes/hangs with origin
    # -W winex11-_NET_ACTIVE_WINDOW \
    # -W winex11-WM_WINDOWPOSCHANGING

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W dinput-SetActionMap-genre \
    -W dinput-axis-recalc \
    -W dinput-joy-mappings \
    -W dinput-reconnect-joystick \
    -W dinput-remap-joystick \
    -W bcrypt-ECDHSecretAgreement \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W imm32-com-initialization
    
    patch -Np1 < ../patches/wine-hotfixes/imm32-com-initialization_no_net_active_window.patch

    #revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    ### GAME PATCH SECTION ###    
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

#    echo "origin downloads fix" 
#    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch
        
    # TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

    # BLOPS2 uses CEG which does not work in proton. Disabled for now
    # echo "blackops 2 fix"
    # patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    echo "killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    # Disabled for now -- non-steam game, needs double check, may be fixed already
    # echo "Paul's Diablo 1 menu fix"
    # patch -Np1 < ../patches/game-patches/diablo_1_menu.patch

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

    echo "proton gamepad additions"
    patch -Np1 < ../patches/proton/15-proton-gamepad-additions.patch

    echo "Valve VR patches"
    patch -Np1 < ../patches/proton/16-proton-vrclient.patch

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

    echo "valve rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

    #this is needed specifically for proton, not needed for normal wine
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch

    echo "proton udev container patches"
    patch -Np1 < ../patches/proton/35-proton-udev_container_patches.patch

    echo "proton overlay patches"
    patch -Np1 < ../patches/proton/36-proton-overlay_fixes.patch

    echo "proton openxr patches"
    patch -Np1 < ../patches/proton/37-proton-OpenXR-patches.patch

    echo "mouse focus fixes"
    patch -Np1 < ../patches/proton/38-proton-mouse-focus-fixes.patch

    echo "CPU topology overrides"
    patch -Np1 < ../patches/proton/39-proton-cpu-topology-overrides.patch

    echo "proton futex2 patches"
    patch -Np1 < ../patches/proton/40-proton-futex2.patch

    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/41-valve_proton_fullscreen_hack-staging.patch

    echo "fullscreen hack wined3d additions"
    patch -Np1 < ../patches/proton/42-valve_proton_fullscreen_hack-staging-wined3d.patch

    echo "proton start.exe exit hang fix"
    patch -Np1 < ../patches/proton/43-proton-start.exe_exit_hang_fix.patch

    ### END PROTON PATCH SECTION ###

    ### WINE PATCH SECTION ###
    echo "vulkan childwindow hack"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    echo "mfplat additions"
    patch -Np1 < ../patches/wine-hotfixes/mfplat-rebase.patch

    echo "proton steam client reverts"
    patch -RNp1 < ../patches/wine-hotfixes/revert_steamclient_breaker4.patch
    patch -RNp1 < ../patches/wine-hotfixes/revert-7512c53b89308c16a512cb8f0c1d0fd6ff02b17b.patch
    patch -RNp1 < ../patches/wine-hotfixes/revert-89db25afda90d1d5d57787398ba80fcf4f5abb5f.patch


    ### END WINEPATCH SECTION ###

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #end
