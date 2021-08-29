#!/bin/bash

### (1) PREP SECTION ###

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

    cd vkd3d-proton
    git reset --hard HEAD
    git clean -xdf
    cd ..

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    echo "proton re8 fixups"
    patch -Np1 < ../patches/dxvk/RE8_proton_fixups.patch

    echo "ffxiv hotfix https://github.com/doitsujin/dxvk/issues/2210"
    patch -Np1 < ../patches/dxvk/ffxiv-framelatency.patch

    # this needs to be the last patch in the list.. because reasons?
    echo "add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf

    # revert pending pulseaudio changes
    git revert --no-commit 183fd3e089b170d5b7405a80a23e81dc7c4dd682

    # reenable pulseaudio patches
    patch -Np1 < ../patches/wine-hotfixes/staging/staging-reenable-pulse.patch
    patch -RNp1 < ../patches/wine-hotfixes/staging/staging-pulseaudio-reverts.patch

    # partial revert to fix steamclient
    patch -RNp1 < ../patches/wine-hotfixes/staging/staging-server-default-integrity.patch
    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###


    # https://bugs.winehq.org/show_bug.cgi?id=49990
    echo "revert bd27af974a21085cd0dc78b37b715bbcc3cfab69 which breaks some game launchers and 3D Mark"
    git revert --no-commit bd27af974a21085cd0dc78b37b715bbcc3cfab69

    # https://github.com/ValveSoftware/Proton/issues/1295#issuecomment-859185208
    echo "these break Tokyo Xanadu Xe+"
    git revert --no-commit 2ad44002da683634de768dbe49a0ba09c5f26f08
    git revert --no-commit dfa4c07941322dbcad54507cd0acf271a6c719ab

    echo "pulseaudio fixup to re-enable staging patches"
    patch -Np1 < ../patches/wine-hotfixes/staging/wine-pulseaudio-fixup.patch

    echo "these break the re village gdi32 patch"
    git revert --no-commit 1c1ff37390c94101f474ce8ee57a3bd830ca965f
    git revert --no-commit fbd39cd8b5de10c53fbb6c5e298c8863beec13fd

    # this is still needed for proper interchangeable
    # joystick support on guilty gear strive
    # ex. ps5 controller + xbox controller in guilty gear strive
    # without it, the game expects player 2 to also use a ps5 controller
    # in training mode.
    # with it, player 2 can be an xbox controller
    # note you have to take some funky steps
    # for 2 player to work in training mode in general (not linux specific):
    # https://playgame.tips/how-to-play-with-a-friend-in-training
    # normal 2 player works fine
    echo "revert HID joystick commits"
    git revert --no-commit 079c47a38e0a3d5d5dfc2323bfefd869a25d128d
    git revert --no-commit 11c6b376c04b4e1b6095c85656bcb1decc908b0c
    git revert --no-commit 09c14c63211e21c4f590f1fb1e32038835037e1a
    git revert --no-commit 7e1d1fac7035dc68cc43e315b2b55d532415da7a
    git revert --no-commit edbb3fac25bae08535a741acdf3813fe1059b114
    git revert --no-commit b4d8cd38918c3ec74d70d9d229f3d88de91e405c
    git revert --no-commit 9d7f1eefa1a58b62aec5c1ab7df2b258dc91a31f
    git revert --no-commit 9a78467975100321773d11e0a3e2a427498a00cc
    git revert --no-commit 6e7ca583746d3a266c56e777c13f3086bf73d141
    git revert --no-commit ee5cde83dae7024873438be4c806c106fe121b04
    git revert --no-commit 8f065f97c91433eab9d6141e5cce118d00701210
    git revert --no-commit 620b514aa0b41187a3c438eb515bbeab02feb7bb
    git revert --no-commit 68c6c7d9362c53b4e0668c056f74d1f3e706a5fc
    git revert --no-commit db410052a397d257dbbe88903336285741d8cb0b
    git revert --no-commit d3885f92fc71ae8330935fe880d7524ab7385b6b
    git revert --no-commit 12ef137b47fe16748c33c881cbb137bcd4e4cbbd
    git revert --no-commit fd73402ce6dc5dec568e17d33c45e7e203fa01e2
    git revert --no-commit c2fc919e04199326d1e9d5bcb40fa7ddd71831f4
    git revert --no-commit aa40700f9f46d7e04a6263582718669c5d0f5639
    git revert --no-commit acff5b41910af0fc91724e224317508e8f4a98b1
    git revert --no-commit 5c3f2f88a6e518cc8c2cc4ff6d0c1ef5d92218be
    git revert --no-commit 5703d5c0b3209c93779a3fe9f27487d8ad8efcf6
    git revert --no-commit d1e0c5a732236f99c334f50a5d694543a58ba05d
    git revert --no-commit 1117f9f072020b5a95410301244703f4d94ff484
    git revert --no-commit ef7432d86e3d7ee1edf3c814efd4ef36dbed1020
    git revert --no-commit 2681caa3f8cdcf5555b90947bc2a70efe5cb306f
    git revert --no-commit 81c15d2d81951de8938613662861b5a2b875b443
    git revert --no-commit 10a812fb7dfe2d24632821fc33a571de62391e47
    git revert --no-commit 91f4af3418230305c9407711abe34d89156a47cf
    git revert --no-commit 6ba3a548427f3edee7117fdca72aa6bd44a404cd
    git revert --no-commit 787d4af53b739d843d804fbb9ba6ddc4c343f3f8
    git revert --no-commit b36c6ae0e8d529cec1272156e808dddf04996187
    git revert --no-commit afa1e60b279842c1e8dfebde0cc6a9a10ad82ee2
    git revert --no-commit 0ba137e36db87b270f03c152c9e9bc88c809df14
    git revert --no-commit 2726644124b10c80f9e1ef2640a9eb1a2b74ef1f
    git revert --no-commit 74b7845ff04da620a49e4d898c31687e7bda7a47
    git revert --no-commit 3b40a032675fdf3cc24e1b207896aa4c8cadc8cc
    git revert --no-commit b117f6548a3f3734b23f865f2e9aeceed27062ed
    git revert --no-commit 6b504fe7783b3680b911d739b60dedcbeec0e2f3

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

    # these cause window freezes/hangs with origin
    # -W winex11-_NET_ACTIVE_WINDOW \
    # -W winex11-WM_WINDOWPOSCHANGING \

    # this needs to be disabled of disabling the winex11 patches above because staging has them set as a dependency.
    # -W imm32-com-initialization
    # instead, we apply it manually:
    # patch -Np1 < ../patches/wine-hotfixes/imm32-com-initialization_no_net_active_window.patch

    # This is currently disabled in favor of a rebased version of the patchset
    # which includes fixes for red dead redemption 2
    # -W bcrypt-ECDHSecretAgreement \

    # This was found to cause hangs in various games
    # Notably DOOM Eternal and Resident Evil Village
    # -W ntdll-NtAlertThreadByThreadId

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W imm32-com-initialization \
    -W bcrypt-ECDHSecretAgreement \
    -W ntdll-NtAlertThreadByThreadId \
    -W dwrite-FontFallback

    # apply this manually since imm32-com-initialization is disabled in staging.
    patch -Np1 < ../patches/wine-hotfixes/staging/imm32-com-initialization_no_net_active_window.patch

    patch -Np1 < ../patches/wine-hotfixes/staging/mfplat_dxgi_stub.patch

    echo "applying staging Compiler_Warnings revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "ffxiv launcher"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher-workaround.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    # TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

#    BLOPS2 uses CEG which does not work in proton. Disabled for now
#    echo "blackops 2 fix"
#    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    echo "killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "applying proton-specific syscall emulation patch"
    patch -Np1 < ../patches/proton/53-protonif_stg_syscall_emu.patch

    echo "applying __wine_make_process_system_restore revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../patches/wine-hotfixes/steamclient/__wine_make_process_system_restore.patch

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

    echo "proton SDL patches"
    patch -Np1 < ../patches/proton/14-proton-sdl-joy.patch

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

    echo "valve rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "apply staging bcrypt patches on top of rdr2 fixes"
    patch -Np1 < ../patches/wine-hotfixes/staging/0001-bcrypt-Allow-multiple-backends-to-coexist.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/0002-bcrypt-Implement-BCryptSecretAgreement-with-libgcryp.patch

    echo "set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

    #this is needed specifically for proton, not needed for normal wine
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch

    echo "proton-specific mfplat video conversion patches"
    patch -Np1 < ../patches/proton/34-proton-winegstreamer_updates.patch

    echo "mouse focus fixes"
    patch -Np1 < ../patches/proton/38-proton-mouse-focus-fixes.patch

    echo "CPU topology overrides"
    patch -Np1 < ../patches/proton/39-proton-cpu-topology-overrides.patch

    echo "proton futex2 patches"
    patch -Np1 < ../patches/proton/40-proton-futex2.patch

    echo "fullscreen hack"
    patch -Np1 < ../patches/proton/41-valve_proton_fullscreen_hack-staging-tkg.patch

    echo "fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

    echo "proton QPC performance patch"
    patch -Np1 < ../patches/proton/49-proton_QPC.patch

    echo "proton LFH performance patch"
    patch -Np1 < ../patches/proton/50-proton_LFH.patch

    echo "proton font patches"
    patch -Np1 < ../patches/proton/51-proton_fonts.patch

    echo "proton quake champions patches"
    patch -Np1 < ../patches/proton/52-proton_quake_champions_syscall.patch

#    disabled for now, needs rebase. only used for vr anyway
#    echo "proton openxr patches"
#    patch -Np1 < ../patches/proton/37-proton-OpenXR-patches.patch

### END PROTON PATCH SECTION ###

### (2-5) WINE HOTFIX SECTION ###

    echo "mfplat additions"
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch

    # fixes witcher 3, borderlands 3, rockstar social club, and a few others
    echo "heap allocation hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-remi_heap_alloc.patch

    echo "uplay broken rendering hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-uplay_render_fix.patch

    echo "msfs2020 hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-msfs2020.patch

#    disabled, still horribly broken
#    patch -Np1 < ../patches/wine-hotfixes/testing/wine_wayland_driver.patch


### END WINE HOTFIX SECTION ###

### (2-6) WINE PENDING UPSTREAM SECTION ###

    echo "BF4 ping fix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-bf4_ping.patch

    # https://bugs.winehq.org/show_bug.cgi?id=51596
    echo "winelib fix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-winelib.patch


### END WINE PENDING UPSTREAM SECTION ###


### (2-7) WINE CUSTOM PATCHES ###


### END WINE CUSTOM PATCHES ###
### END WINE PATCHING ###
