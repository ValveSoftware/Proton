#!/bin/bash

    #ESYNC UPDATE
    cd esync
    git reset --hard HEAD
    git clean -xdf

    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.1.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.2.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.3.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.4.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.5.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.6.patch
    cd ..

    #DXVK_ASYNC patch - Note: This is only enabled for Warframe and Path of Exile.
    #It is disabled by default for all other games
    #If you wish to use it with additional games, you will need to add DXVK_ASYNC=1 %command% to the game launch options in steam.
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../game-patches-testing/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../game-patches-testing/valve-dxvk-make-cross-compiler-strings-configurable.patch
    patch -Np1 < ../game-patches-testing/pipeline.patch
    cd ..

    #WINE SYSTEM PERFORMANCE PATCHES
    cd wine
    git reset --hard HEAD
    git clean -xdf

    echo "wine key translation fix from staging"
    patch -Np1 < ../game-patches-testing/wine-staging-key-translation-fix.patch

    #WINE GAME SPECIFIC PATCHES


    echo "fix for Skyrim Script Extender not working"
    patch -Np1 < ../game-patches-testing/f4skyrimse-fix.patch

    echo "mech warrior online patch"
    patch -Np1 < ../game-patches-testing/mwo.patch

    echo "resident evil 4 patch"
    patch -Np1 < ../game-patches-testing/resident_evil_4_hack.patch

    echo "world of final fantasy patch"
    patch -Np1 < ../game-patches-testing/woff-hack.patch

    echo "warframe F6 screenshot button fix"
    patch -Np1 < ../game-patches-testing/warframe-f6-screenshot-fix.patch


    #WINE FAUDIO PATCHES

    echo "allow wine to use faudio with ffmpeg"
    patch -Np1 < ../game-patches-testing/faudio-ffmpeg.patch

    echo "add missing upstream faudio patches"
    patch -Np1 < ../game-patches-testing/faudio-proton-xact-support-1.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-xact-support-2.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-fix-ed05940.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-fix-837f11c.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-use-dxredist-x3daudio-xapofx.patch

    #WINE PROTONIFY
    echo "converting normal wine build into proton build"
    patch -Np1 < ../game-patches-testing/proton-tkg.patch

    for _f in "../esync/"*.patch; do
        git apply -C1 --verbose < "${_f}"
    done

    # this is needed for wine 4.5+
    echo "adding proton patches"
    patch -Np1 < ../game-patches-testing/esync-no_kernel_obj_list.patch
    patch -Np1 < ../game-patches-testing/proton-restore-unicode.patch
    patch -Np1 < ../game-patches-testing/valve-gnutls.patch
    patch -Np1 < ../game-patches-testing/valve-hide-prefix-update-window.patch
    patch -Np1 < ../game-patches-testing/valve-wined3d-d3d11.patch
    patch -Np1 < ../game-patches-testing/valve-gdi32.patch
    patch -Np1 < ../game-patches-testing/valve-FS_bypass_compositor.patch
    patch -Np1 < ../game-patches-testing/valve-winex11-fullscreen-hack.patch
    patch -Np1 < ../game-patches-testing/valve-amd-ags.patch
    patch -Np1 < ../game-patches-testing/valve-unity-mouse-pointer-drift.patch
    patch -Np1 < ../game-patches-testing/valve-pulseaudio-patchset.patch
    patch -Np1 < ../game-patches-testing/valve-winevulkan-patchset.patch
    patch -Np1 < ../game-patches-testing/valve-ntdll.patch
    patch -Np1 < ../game-patches-testing/valve-user32.patch
    patch -Np1 < ../game-patches-testing/valve-winemac.patch
    patch -Np1 < ../game-patches-testing/valve-windowscodecs.patch
    patch -Np1 < ../game-patches-testing/valve-LAA.patch
    patch -Np1 < ../game-patches-testing/proton-gamepad-additions-backport.patch
    patch -Np1 < ../game-patches-testing/proton-sdl-joy.patch
    patch -Np1 < ../game-patches-testing/proton-gamepad-additions.patch
    patch -Np1 < ../game-patches-testing/valve-use_clock_monotonic-2.patch
    patch -Np1 < ../game-patches-testing/msvcrt_nativebuiltin.patch

    #Valve game-specific registry entries
    patch -Np1 < ../game-patches-testing/valve-apply-LargeAddressAware-fix-for-Bayonetta.patch
    patch -Np1 < ../game-patches-testing/valve-Set-amd_ags_x64-to-built-in-for-Wolfenstein-2.patch



    #WINE CUSTOM PATCHES
    #add your own custom patch lines below

    #end