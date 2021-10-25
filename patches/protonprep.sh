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

    cd steam_helper
    git checkout steam.cpp
    patch -Np1 < ../patches/steamhelper/__wine_make_process_system_update.patch
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
    patch -Np1 < ../patches/wine-hotfixes/staging/x3daudio_staging_revert.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/staging-reenable-pulse.patch
    patch -RNp1 < ../patches/wine-hotfixes/staging/staging-pulseaudio-reverts.patch

    # restore pre-164b361be646a1e23fad1892893821de3805c5c6 patches:
    patch -Np1 < ../patches/wine-hotfixes/staging/staging-6dcaff42-revert.patch

    # add proton-specific syscall emulation patches
    patch -Np1 < ../patches/wine-hotfixes/staging/proton-staging-syscall-emu.patch

    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    # https://github.com/ValveSoftware/Proton/issues/1295#issuecomment-859185208
    echo "these break Tokyo Xanadu Xe+"
    git revert --no-commit 2ad44002da683634de768dbe49a0ba09c5f26f08
    git revert --no-commit dfa4c07941322dbcad54507cd0acf271a6c719ab

    # https://bugs.winehq.org/show_bug.cgi?id=49990
    echo "revert bd27af974a21085cd0dc78b37b715bbcc3cfab69 which breaks some game launchers and 3D Mark"
    git revert --no-commit b54199101fd307199c481709d4b1358ba4bcce58
    git revert --no-commit dedda40e5d7b5a3bcf67eea95145810da283d7d9
    git revert --no-commit bd27af974a21085cd0dc78b37b715bbcc3cfab69

    echo "revert faudio updates -- we can't use PE version yet because the staging patches need a rebase in order to fix audio crackling in some games -- notably cyberpunk"
    git revert --no-commit d8be85863fedf6982944d06ebd1ce5904cb3d4e1

    echo "revert due to fshack breakage"
    git revert --no-commit 2adf4376d86119b8a6f7cde51c9a972564575bac
    git revert --no-commit 6dcaff421f87a93efe18b2efe0ec64d94ed1d483

    echo "pulseaudio fixup to re-enable staging patches"
    patch -Np1 < ../patches/wine-hotfixes/staging/wine-pulseaudio-fixup.patch

    echo "mfplat early reverts to re-enable staging mfplat patches"
    git revert --no-commit 37e9f0eadae9f62ccae8919a92686695927e9274
    git revert --no-commit dd182a924f89b948010ecc0d79f43aec83adfe65
    git revert --no-commit 4f10b95c8355c94e4c6f506322b80be7ae7aa174
    git revert --no-commit 4239f2acf77d9eaa8166628d25c1336c1599df33
    git revert --no-commit 3dd8eeeebdeec619570c764285bdcae82dee5868
    git revert --no-commit 831c6a88aab78db054beb42ca9562146b53963e7
    git revert --no-commit 2d0dc2d47ca6b2d4090dfe32efdba4f695b197ce

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

    # these cause window freezes/hangs with origin
    # -W winex11-_NET_ACTIVE_WINDOW \
    # -W winex11-WM_WINDOWPOSCHANGING \

    # This was found to cause hangs in various games
    # Notably DOOM Eternal and Resident Evil Village
    # -W ntdll-NtAlertThreadByThreadId

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W winex11-_NET_ACTIVE_WINDOW \
    -W winex11-WM_WINDOWPOSCHANGING \
    -W ntdll-NtAlertThreadByThreadId \
    -W dwrite-FontFallback

    echo "Revert d4259ac on proton builds as it breaks steam helper compilation"
    patch -Rnp1 < ../patches/wine-hotfixes/steamclient/d4259ac8e93_revert.patch

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

    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

#    BLOPS2 uses CEG which does not work in proton. Disabled for now
#    echo "blackops 2 fix"
#    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    echo "killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    # https://bugs.winehq.org/show_bug.cgi?id=51821
    echo "EVE Online - Fixe launcher 19.09"
    patch -Np1 < ../patches/game-patches/eve-online-launcher.patch

    echo "Castlevania Advance fix"
    patch -Np1 < ../patches/game-patches/castlevania-advance-collection.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

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

    # disabled for now, there was a massive controller HID update in WINE, so we're using that instead.
#    echo "proton SDL patches"
#    patch -Np1 < ../patches/proton/14-proton-sdl-joy.patch

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

    echo "valve rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "valve rdr2 bcrypt fixes"
    patch -Np1 < ../patches/proton/55-proton-bcrypt_rdr2_fixes.patch

    echo "apply staging bcrypt patches on top of rdr2 fixes"
    patch -Np1 < ../patches/wine-hotfixes/staging/0001-bcrypt-Add-support-for-calculating-secret-ecc-keys.patch


    echo "set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

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

### START MFPLAT PATCH SECTION ###

    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0001-Revert-winegstreamer-Get-rid-of-the-WMReader-typedef.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0002-Revert-wmvcore-Move-the-async-reader-implementation-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0003-Revert-winegstreamer-Get-rid-of-the-WMSyncReader-typ.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0004-Revert-wmvcore-Move-the-sync-reader-implementation-t.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0005-Revert-winegstreamer-Translate-GST_AUDIO_CHANNEL_POS.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0006-Revert-winegstreamer-Trace-the-unfiltered-caps-in-si.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0007-Revert-winegstreamer-Avoid-seeking-past-the-end-of-a.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0008-Revert-winegstreamer-Avoid-passing-a-NULL-buffer-to-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0009-Revert-winegstreamer-Use-array_reserve-to-reallocate.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0010-Revert-winegstreamer-Handle-zero-length-reads-in-src.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0011-Revert-winegstreamer-Convert-the-Unix-library-to-the.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0012-Revert-winegstreamer-Return-void-from-wg_parser_stre.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0013-Revert-winegstreamer-Move-Unix-library-definitions-i.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0014-Revert-winegstreamer-Remove-the-no-longer-used-start.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0015-Revert-winegstreamer-Set-unlimited-buffering-using-a.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0016-Revert-winegstreamer-Initialize-GStreamer-in-wg_pars.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0017-Revert-winegstreamer-Use-a-single-wg_parser_create-e.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0018-Revert-winegstreamer-Fix-return-code-in-init_gst-fai.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0019-Revert-winegstreamer-Allocate-source-media-buffers-i.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0020-Revert-winegstreamer-Duplicate-source-shutdown-path-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0021-Revert-winegstreamer-Properly-clean-up-from-failure-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-reverts/0022-Revert-winegstreamer-Factor-out-more-of-the-init_gst.patch

    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0001-winegstreamer-Activate-source-pad-in-push-mode-if-it.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0002-winegstreamer-Push-stream-start-and-segment-events-i.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0003-winegstreamer-Introduce-H.264-decoder-transform.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0004-winegstreamer-Implement-GetInputAvailableType-for-de.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0005-winegstreamer-Implement-GetOutputAvailableType-for-d.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0006-winegstreamer-Implement-SetInputType-for-decode-tran.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0007-winegstreamer-Implement-SetOutputType-for-decode-tra.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0008-winegstreamer-Implement-Get-Input-Output-StreamInfo-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0009-winegstreamer-Add-push-mode-path-for-wg_parser.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0010-winegstreamer-Implement-Process-Input-Output-for-dec.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0011-winestreamer-Implement-ProcessMessage-for-decoder-tr.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0012-winegstreamer-Semi-stub-GetAttributes-for-decoder-tr.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0013-winegstreamer-Register-the-H.264-decoder-transform.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0014-winegstreamer-Introduce-AAC-decoder-transform.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0015-winegstreamer-Register-the-AAC-decoder-transform.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0016-winegstreamer-Rename-GStreamer-objects-to-be-more-ge.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0017-winegstreamer-Report-streams-backwards-in-media-sour.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0018-winegstreamer-Implement-Process-Input-Output-for-aud.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0019-winegstreamer-Implement-Get-Input-Output-StreamInfo-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0020-winegstreamer-Semi-stub-Get-Attributes-functions-for.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0021-winegstreamer-Introduce-color-conversion-transform.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0022-winegstreamer-Register-the-color-conversion-transfor.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0023-winegstreamer-Implement-GetInputAvailableType-for-co.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0024-winegstreamer-Implement-SetInputType-for-color-conve.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0025-winegstreamer-Implement-GetOutputAvailableType-for-c.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0026-winegstreamer-Implement-SetOutputType-for-color-conv.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0027-winegstreamer-Implement-Process-Input-Output-for-col.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0028-winegstreamer-Implement-ProcessMessage-for-color-con.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0029-winegstreamer-Implement-Get-Input-Output-StreamInfo-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0030-mf-topology-Forward-failure-from-SetOutputType-when-.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0031-winegstreamer-Handle-flush-command-in-audio-converst.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0032-winegstreamer-In-the-default-configuration-select-on.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0033-winegstreamer-Implement-MF_SD_LANGUAGE.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0034-winegstreamer-Only-require-videobox-element-for-pars.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0035-winegstreamer-Don-t-rely-on-max_size-in-unseekable-p.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0036-winegstreamer-Implement-MFT_MESSAGE_COMMAND_FLUSH-fo.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0037-winegstreamer-Default-Frame-size-if-one-isn-t-availa.patch
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-streaming-support/0038-mfplat-Stub-out-MFCreateDXGIDeviceManager-to-avoid-t.patch

    # Needed specifically for proton, not needed for normal wine
    echo "proton mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch

    # Needed for Nier Replicant
    echo "proton mfplat nier replicant patch"
    patch -Np1 < ../patches/wine-hotfixes/staging/mfplat_dxgi_stub.patch

    # Needed for mfplat video format conversion, notably resident evil 8
    echo "proton mfplat video conversion patches"
    patch -Np1 < ../patches/proton/34-proton-winegstreamer_updates.patch

    # Needed for godfall intro
    echo "mfplat godfall fix"
    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch

    # missing http: scheme workaround see: https://github.com/ValveSoftware/Proton/issues/5195
    echo "The Good Life (1452500) workaround"
    patch -Np1 < ../patches/game-patches/thegoodlife-mfplat-http-scheme-workaround.patch


### END MFPLAT PATCH SECTION ###



### (2-5) WINE HOTFIX SECTION ###

    # fixes witcher 3, borderlands 3, rockstar social club, and a few others
    echo "heap allocation hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-remi_heap_alloc.patch

    echo "hotfix for beam ng right click camera being broken with fshack"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-beam_ng_fshack_fix.patch

    echo "hotfix to update mono version"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-update_mono_version.patch

#    disabled, not compatible with fshack, not compatible with fsr, missing dependencies inside proton.
#    patch -Np1 < ../patches/wine-hotfixes/testing/wine_wayland_driver.patch


### END WINE HOTFIX SECTION ###

### (2-6) WINE PENDING UPSTREAM SECTION ###

    echo "7b17d70 regression fix"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-memset_regression_fix_7b17d70.patch


### END WINE PENDING UPSTREAM SECTION ###


### (2-7) WINE CUSTOM PATCHES ###

### END WINE CUSTOM PATCHES ###
### END WINE PATCHING ###
