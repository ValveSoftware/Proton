#!/bin/bash

    #DXVK ASYNC PATCH
    cd dxvk
    echo "applying async patch to dxvk and enabling it for warframe by default"
    patch -Np1 < ../game-patches-testing/dxvk-warframe-async-patch.patch
    patch -Np1 < ../game-patches-testing/dxvk-dark-souls-grim-dawn.patch
    cd ..

    #WINE SYSTEM PERFORMANCE PATCHES
    cd wine
    #echo "fix for high core count systems"
    #only use for versions lower than 4.0, it has been patched upstream since 4.0
    #this allows games such as skyrim and fallout to load games without hanging at the loading screen
    #this also fixes some game launchers and games themselves such as neverwinter and killing floor 2
    #patch -Np1 < ../game-patches-testing/high-core-count-fix.patch

    echo "nvidia nvapi disable patch"
    patch -Np1 < ../game-patches-testing/nvidia-hate.patch

    echo "nvidia nvapi disable patch"
    patch -Np1 < ../game-patches-testing/proton-sdl-joy.patch

    echo "adding non-ms font replacements patch"
    patch -Np1 < ../game-patches-testing/gdi32-add-cjk-font-replacements.patch




    #WINE STEAM GAME PATCHES

    echo "fix warframe launcher loop"
    patch -Np1 < ../game-patches-testing/warframe-launcher.patch

    echo "mech warrior online patch"
    patch -Np1 < ../game-patches-testing/mwo.patch

    echo "resident evil 4 patch"
    patch -Np1 < ../game-patches-testing/resident_evil_4_hack.patch

    echo "world of final fantasy patch"
    patch -Np1 < ../game-patches-testing/woff-hack.patch

    echo "fix for SpinTires wrong dirt rendering in wined3d"
    patch -Np1 < ../game-patches-testing/spintires-fix.patch

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
    echo "converting normal wine build into proton build"
    patch -Np1 < ../game-patches-testing/proton-tkg.patch


    patch -Np1 < ../game-patches-testing/wined3d-implement-gl-texture-access-callbacks.patch
    patch -Np1 < ../game-patches-testing/wined3d-implement-command-stream-callbacks.patch
    patch -Np1 < ../game-patches-testing/d3d11-add-wined3d-texture2d-interface.patch
    patch -Np1 < ../game-patches-testing/d3d11-add-wined3d11-device-interface.patch
    patch -Np1 < ../game-patches-testing/wined3d-implement-device-wait-idle.patch
    patch -Np1 < ../game-patches-testing/wined3d-support-retrieving-depth-texture-in-gl-texture-callback.patch
    patch -Np1 < ../game-patches-testing/wined3d-get-rid-of-wined3d_cs_emit_wait_idle.patch
    patch -Np1 < ../game-patches-testing/wined3d-implement-synchronous-texture-access.patch
    patch -Np1 < ../game-patches-testing/wined3d-load-texture-rgb-location-for-synchronous-texture-access.patch
    patch -Np1 < ../game-patches-testing/d3d11-pass-wined3d-texture2d-to-access_gl_texture.patch
    patch -Np1 < ../game-patches-testing/d3d11-remove-unused-depth_tex-variable.patch


    #patch -Np1 < ../game-patches-testing/FS_bypass_compositor.patch
    #patch -Np1 < ../game-patches-testing/valve-fullscreen-hack.patch
    #patch -Np1 < ../game-patches-testing/valve-fullscreen-hack-2.patch
    #patch -Np1 < ../game-patches-testing/valve-fullscreen-hack-3.patch

    # apply esync patches
    for _f in "../game-patches-testing/esync-tkg-ified-4.4+/"*.patch; do
        msg2 "Applying ${_f}"
        git apply -C1 --verbose < "${_f}"
    done

    # large address awareness
    patch -Np1 < ../game-patches-testing/LAA.patch

    #WINE CUSTOM PATCHES
    #add your own custom patch lines below



    #end
    cd ..

