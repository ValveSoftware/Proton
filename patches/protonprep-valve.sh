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

### END PREP SECTION ###

### (2) WINE PATCHING ###

    cd wine
    git reset --hard HEAD
    git clean -xdf

### (2-1) PROBLEMATIC COMMIT REVERT SECTION ###

    git revert --no-commit e618790bd251b618c60a9ad9eda0b55d89c039c5
    git revert --no-commit 48eb121da0c510d5dd4be8032142fc1d748dfb4c
    git revert --no-commit d40d8449e6aee3075493ead78e2b0e0f81687ab1
    git revert --no-commit 399959ab38d527855f3bbeb77ba1d5ee086c9034
    git revert --no-commit 5a4c148d9db3ea09c24cba1d1fe269062361fd71
    git revert --no-commit 114a59ade064be1a7ed945a337c6e53f9d4b8fa1
    git revert --no-commit e7416adb3cec32d25203f85c44efd5a428de9790
    git revert --no-commit 299b4da83472613bf62ef2771817376afef293a5
    git revert --no-commit e147ff28c45df00255c0d95f0888f845c4d1e9ec
    git revert --no-commit 82dab2b800531323d3cecd1524f1fd3ceba47e56
    git revert --no-commit 3ba555fe450a548c4671c64aa71834540c0a6393
    git revert --no-commit b8b34e1ba40a7a76717678af4e8688fc6d0bc94c
    git revert --no-commit cf616561fb6679f72080946cdd41dba71f66a163
    git revert --no-commit 2ddae281174f84d0f1de0e00de94461bbb6db5a7
    git revert --no-commit d70867c354637e5d6edb25d124e08668b748cd4d
    git revert --no-commit c70e9a2b6c980f8ed7234ee35dccd296fa4bf80b
    git revert --no-commit c245738adf4d222204b243e17bee025db73865ff
    git revert --no-commit e7388cd4b832fc9ba64640c61b2786244b349e25
    git revert --no-commit 3ffb90f5160b3141aed29355488dbf054c60a293
    git revert --no-commit f4a00970ee56b3cbf4cee88d592f984ba9ae2799
    git revert --no-commit fbf46aeef3db5b3a9a58441ab6fd62501c183afb
    git revert --no-commit e55e47086014d7a7be94da17b4be7cf312e8ad80
    git revert --no-commit 90c099fcb690675226493994c445df025ad00076
    git revert --no-commit 04f8b7983e914e9b005a7f99bd2b1bd2f908b0ab
    git revert --no-commit 3b2e609842ff793db7a78034d5465b4c0449d54d
    git revert --no-commit 18f6b86622e0ff11cc540c842a5727226742bbfc
    git revert --no-commit 337006b72fc819575fb188c6f5543d27c4c6b7eb
    git revert --no-commit 7ec3158fe73bbe005f18c67f4c2c6c0f9dd14334
    git revert --no-commit 3a8f3099c3088470afe8329c85854874416b6f2b
    git revert --no-commit ab73f4b93b7149b5e44587d7f0572b02c349cef2
    git revert --no-commit f132c9755b5a5ddf44cfff0c2fa135d74630653d
    git revert --no-commit d83e51a825ff660588c81568b161cfe2c5039544
    git revert --no-commit 03f070df796ae1e716f7972065ea64890754a33d
    git revert --no-commit 333b74ffb43116041897c46bf3eca00e536101b4
    git revert --no-commit 12d8e04ac3ec49e4cf6ba564acd84ebe070d3c8b
    git revert --no-commit 0f9406c32e9bf1c9e3144bc065ef0ef92f5b3dfe
    git revert --no-commit b78092616d59a45255ab3d96671b4cab94714f7d
    git revert --no-commit 74d85e35206c485a585db5cfd06b65d08ed1a31d
    git revert --no-commit e481733c0445889989595659604031051507ad2c
    git revert --no-commit 00334a596ecd3446218b278458466b28811fb985
    git revert --no-commit 2437dbb72b1bf90ccb2030632d59f6df7d34023d
    git revert --no-commit cf102b990f510e6a94497bca9504929379db1d20
    git revert --no-commit 5c272d20d8c42c82438a926ccdc802aca6a4f416
    git revert --no-commit 1beb998df6007991345072dc64e498fb47a75681
    git revert --no-commit 1cecbf6fb95e692cef118bc3ca8ffff1df73acd9
    git revert --no-commit bac2d8dc0ea2078247300cb039d151b9ac78dacd
    git revert --no-commit 1b3784db60e3c9dcd439176920f60954321818cd
    git revert --no-commit 7d84e9903242255ed60e6a68c927ecff42bd41ef
    git revert --no-commit 7d6cc8a89a114ee37f1d0cbae1a620d77d4c5f17
    git revert --no-commit 066e553ae98beefb05e12099e2b071eac929417c
    git revert --no-commit ff2df069b859c9f2572619946bb7b8275f1eb33f
    git revert --no-commit 6e6760c8a06368dc0a0de69ea061318fe88edcf7
    git revert --no-commit 18134858af0b791774aef8bba34961f1b3cd1158



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

### END WINE STAGING APPLY SECTION ###

### (2-3) GAME PATCH SECTION ###

    echo "WINE: -GAME FIXES- mech warrior online fix"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "WINE: -GAME FIXES- assetto corsa hud fix"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "WINE: -GAME FIXES- mk11 crash fix"
    # this is needed so that online multi-player does not crash
    patch -Np1 < ../patches/game-patches/mk11.patch

    echo "WINE: -GAME FIXES- killer instinct vulkan fix"
    patch -Np1 < ../patches/game-patches/killer-instinct-winevulkan_fix.patch

    echo "WINE: -GAME FIXES- Castlevania Advance fix"
    patch -Np1 < ../patches/game-patches/castlevania-advance-collection.patch

    echo "WINE: -GAME FIXES- add cities XXL patches"
    patch -Np1 < ../patches/game-patches/v5-0001-windowscodecs-Correctly-handle-8bpp-custom-conver.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "WINE: -PROTON- fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

    echo "WINE: -PROTON- fake current res patches"
    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

### END PROTON PATCH SECTION ###

### START MFPLAT PATCH SECTION ###

    echo "WINE: -MFPLAT- mfplat patches"
    patch -Np1 < ../patches/proton/31-proton-mfplat-patches-valve.patch

    # missing http: scheme workaround see: https://github.com/ValveSoftware/Proton/issues/5195
#    echo "WINE: -MFPLAT- The Good Life (1452500) workaround"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/thegoodlife-mfplat-http-scheme-workaround.patch

    # Needed for godfall intro
#    echo "mfplat godfall fix"
#    patch -Np1 < ../patches/wine-hotfixes/mfplat/mfplat-godfall-hotfix.patch


### END MFPLAT PATCH SECTION ###





### (2-5) WINE HOTFIX SECTION ###

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
