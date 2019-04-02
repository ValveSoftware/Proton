#!/bin/bash

    #ESYNC UPDATE
    cd esync
    git reset --hard HEAD
    git clean -xdf

    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.1.patch
    patch -Np1 < ../game-patches-testing/esync-compat-fixes-r3.2.patch
    cd ..

    #DXVK ASYNC PATCH
    cd dxvk
    git reset --hard HEAD
    git clean -xdf

    echo "applying async patch to dxvk and enabling it for warframe by default"
    patch -Np1 < ../game-patches-testing/dxvk-warframe-async-patch.patch
    patch -Np1 < ../game-patches-testing/dxvk-dark-souls-grim-dawn.patch
    cd ..

    #WINE SYSTEM PERFORMANCE PATCHES
    cd wine
    git reset --hard HEAD
    git clean -xdf

    #echo "fix for high core count systems"
    #only use for versions lower than 4.0, it has been patched upstream since 4.0
    #this allows games such as skyrim and fallout to load games without hanging at the loading screen
    #this also fixes some game launchers and games themselves such as neverwinter and killing floor 2
    #patch -Np1 < ../game-patches-testing/high-core-count-fix.patch

    echo "system tray fix for kde plasma"
    patch -Np1 < ../game-patches-testing/plasma_systray_fix.patch


    #WINE STEAM GAME PATCHES

    echo "fix warframe launcher loop"
    patch -Np1 < ../game-patches-testing/warframe-launcher.patch

    echo "mech warrior online patch"
    patch -Np1 < ../game-patches-testing/mwo.patch

    echo "resident evil 4 patch"
    patch -Np1 < ../game-patches-testing/resident_evil_4_hack.patch

    echo "world of final fantasy patch"
    patch -Np1 < ../game-patches-testing/woff-hack.patch

    echo "fix for Skyrim Script Extender not working"
    patch -Np1 < ../game-patches-testing/f4skyrimse-fix.patch

    echo "fix for Sword Art Online gnutls"
    patch -Np1 < ../game-patches-testing/sword-art-online-gnutls.patch

    #WINE FAUDIO PATCHES

    echo "allow wine to use faudio with ffmpeg"
    patch -Np1 < ../game-patches-testing/faudio-ffmpeg.patch

    echo "add missing upstream faudio patches"
    patch -Np1 < ../game-patches-testing/faudio-proton-xact-support-1.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-xact-support-2.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-fix-ed05940.patch
    patch -Np1 < ../game-patches-testing/faudio-proton-fix-837f11c.patch


    #WINE PROTONIFY
    echo "sdl joystick patch"
    patch -Np1 < ../game-patches-testing/proton-sdl-joy.patch

    echo "hide wine updating prefix prompt"
    patch -Np1 < ../game-patches-testing/hide-prefix-update-window.patch


    echo "converting normal wine build into proton build"
    patch -Np1 < ../game-patches-testing/proton-tkg.patch

    # apply esync patches
    for _f in "../esync/"*.patch; do
        git apply -C1 --verbose < "${_f}"
    done

    # this is needed for wine 4.5+
    patch -Np1 < ../game-patches-testing/esync-no_kernel_obj_list.patch

    patch -Np1 < ../game-patches-testing/valve-wined3d-d3d11.patch
    patch -Np1 < ../game-patches-testing/valve-gdi32.patch
    patch -Np1 < ../game-patches-testing/FS_bypass_compositor.patch
    patch -Np1 < ../game-patches-testing/valve-winedx11-fullscreen-hack.patch
    patch -Np1 < ../game-patches-testing/amd-ags.patch
    patch -Np1 < ../game-patches-testing/unity-mouse-pointer-drift.patch
    
    #unfinished
    #patch -Np1 < ../game-patches-testing/valve-winevulkan.patch
    #patch -Np1 < ../game-patches-testing/valve-dinput.patch
    #patch -Np1 < ../game-patches-testing/valve-winepulse.patch


    patch -Np1 < ../game-patches-testing/valve-ntdll.patch
    patch -Np1 < ../game-patches-testing/valve-user32.patch
    patch -Np1 < ../game-patches-testing/valve-windowscodecs.patch
    patch -Np1 < ../game-patches-testing/valve-winhttp.patch
    patch -Np1 < ../game-patches-testing/valve-imm32.patch
    patch -Np1 < ../game-patches-testing/valve-winebus.patch
    patch -Np1 < ../game-patches-testing/valve-secur32.patch
    patch -Np1 < ../game-patches-testing/valve-server.patch
    patch -Np1 < ../game-patches-testing/valve-winemac.patch
    patch -Np1 < ../game-patches-testing/valve-ws2_32.patch

    # large address awareness
    patch -Np1 < ../game-patches-testing/LAA.patch

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below



    #end
    cd ..

