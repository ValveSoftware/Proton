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

    echo "add pending resizable bar PR"
    patch -Np1 < ../patches/vkd3d/741.patch
    cd ..

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    echo "proton re8 fixups"
    patch -Np1 < ../patches/dxvk/RE8_proton_fixups.patch

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

    # protonify syscall emulation
    patch -Np1 < ../patches/wine-hotfixes/staging/protonify_stg_syscall_emu.patch
    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    # this breaks controllers in some unity games
    # https://bugs.winehq.org/show_bug.cgi?id=51277
#    git revert --no-commit 97afac469fbe012e22acc1f1045c88b1004a241f

    echo "temporary pulseaudio reverts"
    git revert --no-commit 2e64d91428757eaa88475b49bf50922cda603b59
    git revert --no-commit f77af3dd6324fadaf153062d77b51f755f71faea
    git revert --no-commit ce151dd681fe5ee80daba96dce12e37d6846e152
    git revert --no-commit 77813eb7586779df0fb3b700000a17e339fd5ce3
    git revert --no-commit d8e9621cfad50596378283704dfb1e6926d77ed8
    git revert --no-commit a4149d53f734bf898087e22170eab5bed9a423d1
    git revert --no-commit b4c7823bbb6a792098131f5572506784c8ed0f35
    git revert --no-commit 70f59eb179d6a1c1b4dbc9e0a45b5731cd260793
    git revert --no-commit e19d97ff4e2f5a7800d6df77b8acce95130b84c3
    git revert --no-commit 4432b66e372caf0096df56f45502d7dea1f1800c
    git revert --no-commit 6a6296562f536ed10d221f0df43ef30bbd674cb2
    git revert --no-commit aba40bd50a065b3ac913dbc1263c38535fb5d9e7
    git revert --no-commit bf74f36350c92daae84623dc0bd0530c212bb908
    git revert --no-commit 1518e73b23211af738ae448a80466c0199f24419
    git revert --no-commit 44e4132489c28b429737be022f6d4044c5beab3e
    git revert --no-commit a6131544e87c554f70c21a04fb4697d8e1f508d5
    git revert --no-commit 80b996c53c767fef4614f097f14c310285d9c081
    git revert --no-commit 459e911b653c7519a335661a6c0b0894e86d2f1a
    git revert --no-commit 42d826bc8c1d625ed2985ff06c2cd047209a1916
    git revert --no-commit 30c17619e5401618122ca330cf0909f49b170a59
    git revert --no-commit af84907ccad3e28f364ecfaa75ccb5fedf7f5a42
    git revert --no-commit a5997bece730beb8ab72d66b824ed2a1cb92c254
    git revert --no-commit 24a7c33fc1ad6dbab489284cfb6dba4130297ddb
    git revert --no-commit 8cb88173d87efedce8c345beea05641f5617d857
    git revert --no-commit 505d4b8b14913f3abd362bf27272e6b239cb6ce4
    git revert --no-commit 638455136b4d30b853b02b77a2f33dc61c60b267
    git revert --no-commit 13cac6287c454146eff73aabc4b92b5c8f76d4df
    git revert --no-commit d7b957654d4739b8dd07c91f051b7940f416ef42
    git revert --no-commit 8ea23d0d44ced0ce7dadc9b2546cbc56f6bce364
    git revert --no-commit 0b0ae164f4ccebf4b5bc1bb1529a90786d2d5941
    git revert --no-commit 131b7fd5e16a3da17aed28e86933074c5d663d9f
    git revert --no-commit 8060e56b26add8eafffb211119798569ea3188ff
    git revert --no-commit bca0706f3a93fa0a57f4dbdc6ae541e8f25afb34
    git revert --no-commit b1ddfca16e4696a52adf2bdd8333eeffb3c6170c
    git revert --no-commit a5d4079c8285c10ab2019c9fd9d19a6b22babb76
    git revert --no-commit ebd344f2922f4044117904e024a0a87576a3eff1
    git revert --no-commit 0eeefec6c56084a0677403aee46493e2c03a1dca
    git revert --no-commit 5477f2b0156d16952a286dd0df148c2f60b71fe6
    git revert --no-commit fa097243e06b3855a240c866a028add722025ead
    git revert --no-commit 8df72bade54d1ef7a6d9e79f20ee0a2697019c13
    git revert --no-commit e264ec9c718eb66038221f8b533fc099927ed966
    git revert --no-commit d3673fcb034348b708a5d8b8c65a746faaeec19d

#    # network test
#    git revert --no-commit 3b33a6b4873d2d75418c298880766f63b82d4534

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
    -W ntdll-NtAlertThreadByThreadId

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

### END WINE PENDING UPSTREAM SECTION ###


### (2-7) WINE CUSTOM PATCHES ###


### END WINE CUSTOM PATCHES ###
### END WINE PATCHING ###
