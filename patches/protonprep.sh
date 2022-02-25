#!/bin/bash

### (1) PREP SECTION ###

    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "DXVK: add valve dxvk patches"
    patch -Np1 < ../patches/dxvk/proton-dxvk_avoid_spamming_log_with_requests_for_IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-dxvk_add_new_dxvk_config_library.patch

    # this needs to be the last patch in the list.. because reasons?
    echo "DXVK:add dxvk async patch"
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf

    # allow esync patches to apply without depending on ntdll-Junction_Points
    echo "WINE-STAGING: allow esync patches to apply without depending on ntdll-Junction_Points"
    patch -Np1 < ../patches/wine-hotfixes/staging/staging-esync_remove_ntdll_Junction_Points_dependency.patch

    cd ..

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    echo "WINE: -REVERTS- revert --data-only commits"
    # these were changed to build in data-only mode, however this causes these dlls not to load in proton
    # revert the data-only mode changes for now.
    # wmi.dll
    git revert --no-commit 141be028802f1675366802d49af01982525c2e6d
    # usp10.dll
    git revert --no-commit d5fc074b9f2cf2e52711d832ca76eaaa5277bb8c
    # tzres.dll
    git revert --no-commit 457c5df7d33144e45e0b275cf3cd060ec8403f32
    # stdole2.tlb
    git revert --no-commit 5b7534e55adb59cddb7f0c8a337cc3c3954c8d8b
    # shdoclc.dll
    git revert --no-commit aa957a2db15942260864c50865f828adeccc12e8
    # sfc.dll
    git revert --no-commit 2abcdf08033334075a22e65b97a7f8874361e72a
    # security.dll
    git revert --no-commit 40611a65e73eee2ff8ff8ff647572f93a7ffd4ba
    # normaliz.dll
    git revert --no-commit 9b6253199ffb361557c53b1315263518cebc9871
    # msimsg.dll
    git revert --no-commit d3e2fa064f2efe0a9375df23ec141171b74efe40
    # mshtml.tib
    git revert --no-commit 1bb2d490f79743e9dac87d279e15f29bd359e715
    # mferror.dll
    git revert --no-commit 3584dd2900fbd3a11175d1b3f77a55315442c284
    # lz32.dll
    git revert --no-commit 2da8b64cfd5ed46f98d1fbfa5d56b680358a7a6b
    # light.msstyles
    git revert --no-commit 91db4290caa0bc4f0173e72296852de2d7ad699d
    # icmp.dll
    git revert --no-commit ace84eb6bccc490a563af19118da9e19ede970bb
    # activeds.tlb
    git revert --no-commit 91544ee3bb6c7cd2c056ae0d0eb626ade701d09f


    # mfplat
    # once remi finishes upstreaming everything we will be able to get rid of a lot of these.
    git revert --no-commit a4be9e85687f7a8d7476ee3d3ced80eeec720f57
    git revert --no-commit 0c59cfc14e33a5706c1873151780d5b2dcc536ca
    git revert --no-commit 28c9c138d2658a4c3252a94d45a1e8b7ac28be7f
    git revert --no-commit 5144b27661fcd6705353d832e0383085f8afe842
    git revert --no-commit 7da1828c4927faec011d1c15d2f3f9bbb43435b7
    git revert --no-commit 4dd187b2227767524825e51eddd14f206ffd03dd
    git revert --no-commit 0052ffbfa0e7672278b3d5fcdb767d604fa0f565
    git revert --no-commit d84d9054f5466212e122fac70265eae841438764
    git revert --no-commit 34a55c7b96c97b178ea1ab519eb0e847096f2076
    git revert --no-commit 4d929972c341bff2da3616606b8cbeadf85dba26

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

    # We manually apply this because reverting it in staging is being a pain in the ass despite it being just 4 lines.
    # -W stdole32.tlb-SLTG_Typelib \

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
    # -W dbghelp-Debug_Symbols \

    echo "WINE: -STAGING- applying staging patches"
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
    -W stdole32.tlb-SLTG_Typelib \
    -W dwrite-FontFallback

    echo "WINE: -STAGING- applying staging Compiler_Warnings revert for steamclient compatibility"
    # revert this, it breaks lsteamclient compilation
    patch -RNp1 < ../wine-staging/patches/Compiler_Warnings/0031-include-Check-element-type-in-CONTAINING_RECORD-and-.patch

    echo "WINE: -STAGING- Manually apply modified ntdll-Syscall_Emulation patch for proton, rebasing keeps complaining"
    patch -Np1 < ../patches/proton/63-ntdll-Support-x86_64-syscall-emulation.patch

    echo "WINE: -STAGING- Manually apply modified ntdll-Serial_Port_Detection patch for proton, rebasing keeps complaining"
    patch -Np1 < ../patches/proton/64-ntdll-Do-a-device-check-before-returning-a-default-s.patch

    echo "WINE: -STAGING- Manually apply reverted --data-only stdole32.tlb patch"
    patch -Np1 < ../patches/wine-hotfixes/staging/0020-stdole32.tlb-Compile-typelib-with-oldtlb.patch


### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "WINE: -GAME FIXES- mech warrior online fix"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "WINE: -GAME FIXES- ffxiv launcher play login button fix"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher-fix.patch

    echo "WINE: -GAME FIXES- assetto corsa hud fix"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "WINE: -GAME FIXES- mk11 crash fix"
    # this is needed so that online multi-player does not crash
    patch -Np1 < ../patches/game-patches/mk11.patch

    echo "WINE: -GAME FIXES- killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    echo "WINE: -GAME FIXES- Castlevania Advance fix"
    patch -Np1 < ../patches/game-patches/castlevania-advance-collection.patch

    echo "WINE: -GAME FIXES- add halo infinite patches"
    patch -Np1 < ../patches/game-patches/halo-infinite-twinapi.appcore.dll.patch

    echo "WINE: -GAME FIXES- add cities XXL patches"
    patch -Np1 < ../patches/game-patches/v5-0001-windowscodecs-Correctly-handle-8bpp-custom-conver.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "WINE: -PROTON- clock monotonic"
    patch -Np1 < ../patches/proton/01-proton-use_clock_monotonic.patch

    #WINE FSYNC
    echo "WINE: -PROTON- applying fsync"
    patch -Np1 < ../patches/proton/03-proton-fsync_staging.patch

    echo "WINE: -PROTON- futex waitv"
    patch -Np1 < ../patches/proton/57-fsync_futex_waitv.patch

    echo "WINE: -PROTON- Large Address Aware"
    patch -Np1 < ../patches/proton/04-proton-LAA_staging.patch

    echo "WINE: -PROTON- steamclient swap"
    patch -Np1 < ../patches/proton/08-proton-steamclient_swap.patch

    echo "WINE: -PROTON- protonify part 1"
    patch -Np1 < ../patches/proton/10-proton-protonify_staging.patch

    echo "WINE: -PROTON- protonify part 2"
    patch -Np1 < ../patches/proton/67-protonify-2.patch

    echo "WINE: -PROTON- tabtip + uiautomationcore patches"
    patch -Np1 < ../patches/proton/68-proton-tabtip-uiautomationcore.patch

    echo "WINE: -PROTON- protonify-audio"
    patch -Np1 < ../patches/proton/11-proton-pa-staging.patch

    echo "WINE: -PROTON- steam bits"
    patch -Np1 < ../patches/proton/12-proton-steam-bits.patch

    echo "WINE: -PROTON- SDL additions"
    patch -Np1 < ../patches/proton/14-proton-sdl-joy.patch

    echo "WINE: -PROTON- gamepad additions"
    patch -Np1 < ../patches/proton/15-proton-gamepad-additions.patch

    echo "WINE: -PROTON- VR patches"
    patch -Np1 < ../patches/proton/16-proton-vrclient-wined3d.patch

    echo "WINE: -PROTON- amd ags"
    patch -Np1 < ../patches/proton/18-proton-amd_ags.patch

    echo "WINE: -PROTON- msvcrt overrides"
    patch -Np1 < ../patches/proton/19-proton-msvcrt_nativebuiltin.patch

    echo "WINE: -PROTON- atiadlxx"
    patch -Np1 < ../patches/proton/20-proton-atiadlxx.patch

    echo "WINE: -PROTON- registry entries"
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


    echo "WINE: -PROTON- rdr2 fixes"
    patch -Np1 < ../patches/proton/25-proton-rdr2-fixes.patch

    echo "WINE: -PROTON- rdr2 bcrypt fixes"
    patch -Np1 < ../patches/proton/55-proton-bcrypt_rdr2_fixes.patch

    echo "WINE: -PROTON- apply staging bcrypt patches on top of rdr2 fixes"
    patch -Np1 < ../patches/wine-hotfixes/staging/0002-bcrypt-Add-support-for-calculating-secret-ecc-keys.patch
    patch -Np1 < ../patches/wine-hotfixes/staging/0003-bcrypt-Add-support-for-OAEP-padded-asymmetric-key-de.patch

    echo "WINE: -PROTON- set prefix win10"
    patch -Np1 < ../patches/proton/28-proton-win10_default.patch

    echo "WINE: -PROTON- dxvk_config"
    patch -Np1 < ../patches/proton/29-proton-dxvk_config.patch

    echo "WINE: -PROTON- key input + mouse focus fixes"
    patch -Np1 < ../patches/proton/38-proton-keyboard-input-and-mouse-focus-fixes.patch

    echo "WINE: -PROTON- CPU topology overrides"
    patch -Np1 < ../patches/proton/39-proton-cpu-topology-overrides.patch

    echo "WINE: -PROTON- fullscreen hack"
    echo "1"
    patch -Np1 < ../patches/proton/fshack/01-vulkan-1-prefer-builtin.patch
    echo "2"
    patch -Np1 < ../patches/proton/fshack/02-vulkan-childwindow.patch
    echo "3"
    patch -Np1 < ../patches/proton/fshack/03-window-manager-fixes.patch
    echo "4"
    patch -Np1 < ../patches/proton/fshack/04-fullscreen-hack.patch
    echo "5"
    patch -Np1 < ../patches/proton/fshack/05-steam-overlay-fixes.patch
    echo "6"
    patch -Np1 < ../patches/proton/fshack/06-post-fshack-tweaks.patch

    echo "WINE: -PROTON- openxr patches"
    patch -Np1 < ../patches/proton/37-proton-OpenXR-patches.patch

    echo "WINE: -PROTON- fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

#    echo "proton QPC performance patch"
#    patch -Np1 < ../patches/proton/49-proton_QPC.patch
#    patch -Np1 < ../patches/proton/49-proton_QPC-update-replace.patch

    echo "WINE: -PROTON- LFH performance patch"
    patch -Np1 < ../patches/proton/50-proton_LFH.patch

    echo "WINE: -PROTON- font patches"
    patch -Np1 < ../patches/proton/51-proton_fonts.patch

    echo "WINE: -PROTON- quake champions patches"
    patch -Np1 < ../patches/proton/52-proton_quake_champions_syscall.patch

    echo "WINE: -PROTON- battleye patches"
    patch -Np1 < ../patches/proton/59-proton-battleye_patches.patch

    echo "WINE: -PROTON- fake current res patches"
    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

    echo "WINE: -PROTON- EasyAntiCheat patch"
   patch -Np1 < ../patches/proton/66-proton-EAC-bridge.patch

### END PROTON PATCH SECTION ###

### START MFPLAT PATCH SECTION ###

    # Needed specifically for proton, not needed for normal wine
    echo "WINE: -MFPLAT- mfplat dll register patch"
    patch -Np1 < ../patches/proton/30-proton-mediafoundation_dllreg.patch

    echo "WINE: -MFPLAT- mfplat patches"
    patch -Np1 < ../patches/proton/31-proton-mfplat-patches.patch

    # missing http: scheme workaround see: https://github.com/ValveSoftware/Proton/issues/5195
#    echo "WINE: -MFPLAT- The Good Life (1452500) workaround"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/thegoodlife-mfplat-http-scheme-workaround.patch

    # Needed for godfall intro
#    echo "mfplat godfall fix"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch


### END MFPLAT PATCH SECTION ###





### (2-5) WINE HOTFIX SECTION ###

    # keep this in place, proton and wine tend to bounce back and forth and proton uses a different URL.
    # We can always update the patch to match the version and sha256sum even if they are the same version
    echo "WINE: -HOTFIX- update mono version"
    patch -Np1 < ../patches/wine-hotfixes/pending/hotfix-update_mono_version.patch

    # https://github.com/Frogging-Family/wine-tkg-git/commit/ca0daac62037be72ae5dd7bf87c705c989eba2cb
    echo "WINE: -HOTFIX- unity crash hotfix"
    patch -Np1 < ../patches/wine-hotfixes/pending/unity_crash_hotfix.patch

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
