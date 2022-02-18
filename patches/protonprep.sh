#!/bin/bash

### (1) PREP SECTION ###

    cd gst-plugins-base
    git reset --hard HEAD
    git clean -xdf
    echo "add Guy's patch for gstreamer preroll buffer for media converter"
    patch -Np1 < ../patches/gstreamer/mediaconvert-gstdecodebin2.patch
    cd ..

#    cd gst-plugins-ugly
#    git reset --hard HEAD
#    git clean -xdf
#    echo "add Guy's patch to fix wmv playback in gst-plugins-ugly"
#    patch -Np1 < ../patches/gstreamer/asfdemux-Re-initialize_demux-adapter_in_gst_asf_demux_reset.patch
#    patch -Np1 < ../patches/gstreamer/asfdemux-gst_asf_demux_reset_GST_FORMAT_TIME_fix.patch
#    cd ..

    cd FAudio
    git reset --hard HEAD
    git clean -xdf

    # this was removed because WMA decoding is being implemented in wine, but it's not added yet so it's currently still needed
    git revert --no-commit bcb8c650f2e2c0212b6c4449616d55afae7a45dd
    cd ..

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    # this needs to be the last patch in the list.. because reasons?
    echo "add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch

    echo "add pending Resident Evil games patch"
    patch -Np1 < ../patches/dxvk/2466.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf

    # faudio revert fix in staging:
#    patch -Np1 < ../patches/wine-hotfixes/staging/x3daudio_staging_revert.patch

    # allow esync patches to apply without depending on ntdll-Junction_Points
    patch -Np1 < ../patches/wine-hotfixes/staging/staging-esync_remove_ntdll_Junction_Points_dependency.patch

    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    git revert --no-commit 9b6253199ffb361557c53b1315263518cebc9871


#    echo "revert faudio updates -- WINE faudio does not have WMA decoding (notably needed for Skyrim voices) so we still need to provide our own with gstreamer support"
#    git revert --no-commit a80c5491600c00a54dfc8251a75706ce86d2a08f
#    git revert --no-commit 22c26a2dde318b5b370fc269cab871e5a8bc4231
#    patch -RNp1 < ../patches/wine-hotfixes/pending/revert-d8be858-faudio.patch

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

    # these cause window freezes/hangs with origin
    # -W winex11-_NET_ACTIVE_WINDOW \
    # -W winex11-WM_WINDOWPOSCHANGING \

    # this interferes with fshack
    #-W winex11-MWM_Decorations \

    # this interferes with protons keyboard translation patches
    #-W winex11-key_translation \

    # ntdll-Junction_Points breaks Valve's CEG drm
    # the other two rely on it.
    # note: we also have to manually remove the ntdll-Junction_Points patchset from esync in staging.
    # we also disable esync and apply it manually instead
    # -W ntdll-Junction_Points \
    # -W server-File_Permissions \
    # -W server-Stored_ACLs \
    # -W eventfd_synchronization \

    # Sancreed — 11/21/2021
    # Heads up, it appears that a bunch of Ubisoft Connect games (3/3 I had installed and could test) will crash
    # almost immediately on newer Wine Staging/TKG inside pe_load_debug_info function unless the dbghelp-Debug_Symbols staging # patchset is disabled.
    # -W dbghelp-Debug_Symbols

    # Disable when using external FAudio
    # -W xactengine3_7-callbacks \

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W winex11-MWM_Decorations \
    -W winex11-key_translation \
    -W ntdll-Syscall_Emulation \
    -W ntdll-Junction_Points \
    -W ntdll-Serial_Port_Detection \
    -W server-File_Permissions \
    -W server-Stored_ACLs \
    -W dbghelp-Debug_Symbols \
    -W xactengine3_7-callbacks \
    -W dwrite-FontFallback

    #echo "Revert d4259ac on proton builds as it breaks steam helper compilation"
    #patch -RNp1 < ../patches/wine-hotfixes/steamclient/d4259ac8e93_revert.patch

    echo "applying staging Compiler_Warnings revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    echo "Manually apply modified ntdll-Syscall_Emulation patch for proton, rebasing keeps complaining"
    patch -Np1 < ../patches/proton/63-ntdll-Support-x86_64-syscall-emulation.patch

    echo "Manually apply modified ntdll-Serial_Port_Detection patch for proton, rebasing keeps complaining"
    patch -Np1 < ../patches/proton/64-ntdll-Do-a-device-check-before-returning-a-default-s.patch


### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "ffxiv"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher-fix.patch
#    patch -Np1 < ../patches/game-patches/ffxiv-opening-video-fix.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "mk11 patch"
    # this is needed so that online multi-player does not crash
    patch -Np1 < ../patches/game-patches/mk11.patch

    echo "killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    echo "Castlevania Advance fix"
    patch -Np1 < ../patches/game-patches/castlevania-advance-collection.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "clock monotonic"
    patch -Np1 < ../patches/proton/01-proton-use_clock_monotonic.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton/03-proton-fsync_staging.patch

    echo "proton futex waitv patches"
    patch -Np1 < ../patches/proton/57-fsync_futex_waitv.patch

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

    echo "proton SDL patches"
    patch -Np1 < ../patches/proton/14-proton-sdl-joy.patch

    echo "proton gamepad patches"
    patch -Np1 < ../patches/proton/15-proton-gamepad-additions.patch

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
    patch -Np1 < ../patches/proton/46-proton-09_nvapi_registry.patch
    patch -Np1 < ../patches/proton/47-proton-10_dirt_5_registry.patch
    patch -Np1 < ../patches/proton/54-proton-11_death_loop_registry.patch
    patch -Np1 < ../patches/proton/56-proton-12_disable_libglesv2_for_nw.js.patch
    patch -Np1 < ../patches/proton/58-proton-13_atiadlxx_builtin_for_gotg.patch
    patch -Np1 < ../patches/proton/60-proton-14-msedgewebview-registry.patch
    patch -Np1 < ../patches/proton/61-proton-15-FH5-amd_ags_registry.patch
    patch -Np1 < ../patches/proton/62-proton-16-Age-of-Empires-IV-registry.patch


    echo "valve rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "valve rdr2 bcrypt fixes"
    patch -Np1 < ../patches/proton/55-proton-bcrypt_rdr2_fixes.patch

    echo "apply staging bcrypt patches on top of rdr2 fixes"
    patch -Np1 < ../patches/wine-hotfixes/staging/0002-bcrypt-Add-support-for-calculating-secret-ecc-keys.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/0003-bcrypt-Add-support-for-OAEP-padded-asymmetric-key-de.patch

    echo "set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

    echo "key input + mouse focus fixes"
    patch -Np1 < ../patches/proton/38-proton-keyboard-input-and-mouse-focus-fixes.patch

    echo "CPU topology overrides"
    patch -Np1 < ../patches/proton/39-proton-cpu-topology-overrides.patch

    echo "fullscreen hack"
#    patch -Np1 < ../patches/proton/41-valve_proton_fullscreen_hack-staging-tkg.patch
    patch -Np1 < ../patches/proton/fshack/01-vulkan-1-prefer-builtin.patch
    patch -Np1 < ../patches/proton/fshack/02-vulkan-childwindow.patch
    patch -Np1 < ../patches/proton/fshack/03-window-manager-fixes.patch
    patch -Np1 < ../patches/proton/fshack/04-fullscreen-hack.patch
    patch -Np1 < ../patches/proton/fshack/05-steam-overlay-fixes.patch

    echo "proton openxr patches"
    patch -Np1 < ../patches/proton/37-proton-OpenXR-patches.patch

    echo "fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

#    echo "proton QPC performance patch"
#    patch -Np1 < ../patches/proton/49-proton_QPC.patch
#    patch -Np1 < ../patches/proton/49-proton_QPC-update-replace.patch

    echo "proton LFH performance patch"
    patch -Np1 < ../patches/proton/50-proton_LFH.patch

    echo "proton font patches"
    patch -Np1 < ../patches/proton/51-proton_fonts.patch

    echo "proton quake champions patches"
    patch -Np1 < ../patches/proton/52-proton_quake_champions_syscall.patch

    echo "proton battleye patches"
    patch -Np1 < ../patches/proton/59-proton-battleye_patches.patch

    echo "proton fake current res patches"
    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

    echo "proton EasyAntiCheat patch"
    patch -Np1 < ../patches/proton/66-proton-EAC-bridge.patch

### END PROTON PATCH SECTION ###

### START MFPLAT PATCH SECTION ###

    # Needed specifically for proton, not needed for normal wine
    echo "proton mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch
    patch -Np1 < ../patches/proton/31-proton-mfplat-patches.patch

    # Needed for Nier Replicant
#    echo "proton mfplat nier replicant patch"
#    patch -Np1 < ../patches/wine-hotfixes/staging/mfplat_dxgi_stub.patch

    # Needed for godfall intro
#    echo "mfplat godfall fix"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch

    # missing http: scheme workaround see: https://github.com/ValveSoftware/Proton/issues/5195
#    echo "The Good Life (1452500) workaround"
#    patch -Np1 < ../patches/game-patches/thegoodlife-mfplat-http-scheme-workaround.patch

#    echo "FFXIV Video playback mfplat includes"
#    patch -Np1 < ../patches/game-patches/ffxiv-mfplat-additions.patch

### END MFPLAT PATCH SECTION ###





### (2-5) WINE HOTFIX SECTION ###

    # keep this in place, proton and wine tend to bounce back and forth and proton uses a different URL.
    # We can always update the patch to match the version and sha256sum even if they are the same version
    echo "hotfix to update mono version"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-update_mono_version.patch

    echo "add halo infinite patches"
    patch -Np1 < ../patches/wine-hotfixes/pending/halo-infinite-twinapi.appcore.dll.patch

    # https://github.com/Frogging-Family/wine-tkg-git/commit/ca0daac62037be72ae5dd7bf87c705c989eba2cb
    echo "unity crash hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/unity_crash_hotfix.patch

    echo "protonify part 2"
    patch -Np1 < ../patches/proton/67-protonify-2.patch

#    disabled, not compatible with fshack, not compatible with fsr, missing dependencies inside proton.
#    patch -Np1 < ../patches/wine-hotfixes/testing/wine_wayland_driver.patch

#    # https://bugs.winehq.org/show_bug.cgi?id=51687
#    patch -Np1 < ../patches/wine-hotfixes/pending/Return_nt_filename_and_resolve_DOS_drive_path.patch

### END WINE HOTFIX SECTION ###

### (2-6) WINE PENDING UPSTREAM SECTION ###


### END WINE PENDING UPSTREAM SECTION ###


### (2-7) WINE CUSTOM PATCHES ###

### END WINE CUSTOM PATCHES ###
### END WINE PATCHING ###
