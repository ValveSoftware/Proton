#!/bin/bash

#TKG patch order:

#549 clock monotonic
#567 bypass compositor
#718 vulkan childwindow
#1044 fsync staging
#1066 fsync spincount
#1078 fs hack
#1125 rawinput
#1207 LAA
#1221 winex11-MWM
#1229 steam client swap
#1236 protonify rpc
#1237 protonify
#1239 steam bits
#1332 SDL
#1333 SDL2
#1339 gamepad additions
#1375 vr
#1386 vk bits
#1387 fs hack integer scaling
#1391 winevulkan
#1396 msvcrt native builtin
#1411 win10
#1417 dxvk_config

    cd gst-plugins-ugly
    git reset --hard HEAD
    git clean -xdf
    echo "add Guy's patch to fix wmv playback in gst-plugins-ugly"
    patch -Np1 < ../patches/gstreamer/asfdemux-Re-initialize_demux-adapter_in_gst_asf_demux_reset.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-gst_asf_demux_reset_GST_FORMAT_TIME_fix.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-Deactivate_pad_before_removing_it_from_the_element.patch
    cd ..
    
    # lsteamclient
    cd lsteamclient
    git reset --hard HEAD
    git clean -xdf
    # path of exile and alyx fixes
    patch -Np1 < ../patches/proton-hotfixes/proton-lsteamclient-path-of-exile-and-alyx-fixes.patch
    # warframe controller fix
    patch -Np1 < ../patches/proton-hotfixes/steamclient-disable_SteamController007_if_no_controller.patch
    patch -Np1 < ../patches/proton-hotfixes/steamclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
    cd ..
    
    # vrclient
    cd vrclient_x64
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../patches/proton-hotfixes/vrclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
    cd ..


    # VKD3D patches
    cd vkd3d-proton
    git reset --hard HEAD
    git clean -xdf
    cd ..

    # Valve DXVK patches
    cd dxvk
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../patches/dxvk/valve-dxvk-avoid-spamming-log-with-requests-for-IWineD3D11Texture2D.patch
    patch -Np1 < ../patches/dxvk/proton-add_new_dxvk_config_library.patch
    patch -Np1 < ../patches/dxvk/dxvk-async.patch
    cd ..

    #WINE STAGING
    cd wine-staging
    git reset --hard HEAD
    git clean -xdf
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/staging/8402c959617111ac13a2025c3eb7c7156a2520f8.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/staging/patchinstall.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/staging/esync_wsacleanup_fix.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/staging/0001-remove-dxva2-dependency-from-winedevice-Default_Driv.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/staging/0001-xaudio_backports.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    # this conflicts with proton's gamepad changes and causes camera spinning
    git revert --no-commit da7d60bf97fb8726828e57f852e8963aacde21e9
    
    echo "winhttp backports"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/winhttp_backports.patch
    
    echo "media foundation backports 5.9->5.17"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/mf_backports_5.19.patch

    echo "audio backports"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/wavebank_xaudio_backports.patch

# disable these when using proton's gamepad patches
#    -W dinput-SetActionMap-genre \
#    -W dinput-axis-recalc \
#    -W dinput-joy-mappings \
#    -W dinput-reconnect-joystick \
#    -W dinput-remap-joystick \

    echo "applying staging patches"
    ../wine-staging/patches/patchinstall.sh DESTDIR="." --all \
    -W server-Desktop_Refcount \
    -W ws2_32-TransmitFile \
    -W dinput-SetActionMap-genre \
    -W dinput-axis-recalc \
    -W dinput-joy-mappings \
    -W dinput-reconnect-joystick \
    -W dinput-remap-joystick \
    -W user32-window-activation \
    -W ws2_32-WSACleanup \
    -W ws2_32-getaddrinfo \
    -W ws2_32-TransmitFile \
    -W dsdmo-new-dll \
    -W dxva2-Video_Decoder
    
    echo "guy's media foundation alpha patches"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/media_foundation_alpha.patch
        
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/proton_mediafoundation_dllreg.patch
    
    echo "querydisplayconfig backports"
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/8a4ec0addba76bf3b34a9782556364ab4161dc22.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/ae4804d502fecab835146043010f53377bf1b65a.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/f1e7d5bbd6e8817f7266c7144b747115a52893da.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/411fe4f1c3fc45ec6bed0a1beaf61c67f6cf6294.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/8cd6245b7633abccd68f73928544ae4de6f76d52.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/707fcb99a60015fcbb20c83e9031bc5be7a58618.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/c36e26f41d1653d11ac47c7890497cc14ceb99ba.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/b582ab26f91b1b189409cf9d058ffd7c8827ccb4.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/1b33e0f72e87e3c3af905df27c339887f4cb5a18.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/e3eb89d5ebb759e975698b97ed8b547a9de3853f.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/988d31b696b2bdc7a0aa6fc626cd50f034dd05ec.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/343043153b44fa46a2081fa8a2c171eac7c8dab6.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/b5d58ff69c9b01d42b5dd12f5652d5cf2859d4b8.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/3db619d46e70a398a06001573fb42b0a32d81209.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/0a2d6378d80a1594cae6c7ab0e5d31b8fe11703b.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/203bd057cf2268f03558be475ce2ba984f93e581.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/c4a01d0a65905f33cbfe90f150b2d23a02c4e793.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/ca1d31fc3b153a38c38b27b873052ce6f04cb5d4.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/634cb775c27b61ad6ce1fbe3e9972b0edfa31dcb.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/2affb854e524dde962f983a36628f22fe9e165c7.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/13e3d8f6354d23226ac5e7b1a2fb3aeb81d0b402.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/6b6a7124a67c6eadbe4408163f93dbf0379b6565.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/145cfce1135a7e59cc4c89cd05b572403f188161.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/408a5a86ec30e293bf9e6eec4890d552073a82e8.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/8007d19c2792b5b177bd7200dc3567df4677dc0c.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/6f9d20806e821ab07c8adf81ae6630fae94b00ef.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/aec196878875e92d0b404a6f982cea6667768696.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/5dd03cbc8f5cc8fa349d1ce0f155139094eff56c.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/59c206f9dc25a9f9cfd772bf87288b7fb65f355f.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/1899830b02218b89bb1669c265bd04d6750347fb.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/a94101672e1f98a364e0605bf8299474cf950821.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/2e1c48f3517fa967ae9f9a0794c88e6d4e5e77f2.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/5fba152eea0bd8b7a2553beea05370dc140ed740.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/cb127e11ad381789b11a3c40913f6186a48d0f37.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/3a3c7cbd209e23cc6ee88299b3ba877ab20a767f.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/27ed9c95a2bbdbf7d86309cf1b9c9fefc157a0fe.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/8949f570865fe72e28b4b7ef57c5c903d9a711b0.patch
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/894c6566ab25d0fb4a1a6d7e061041fc14906662.patch

echo "ac odyssey fix"
patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/QueryDisplayConfig/0001-user32-Implement-QueryDisplayConfig.patch


    echo "5.10 backports"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/5.10_hotfix_25e9e91c3a4f6c1c134d96a5c11517178e31f111.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/5.10_hotfix_4ed26b63ca0305ba750c4f38002cf1eb674f688c.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/5.10_hotfix_ea9b507380b4415cf9edd3643d9bcea7ab934fbd.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/5.10_hotfix_c96fa96c167808bf1c9a42b72c9e7ab6567eca75.patch

    echo "game fix backports"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/ashes_of_the_singularity.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/sc_dos2_poe-multithread.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/mgs-ground-zeroes.patch

    echo "vulkan backports"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/winevulkan-1.2.142.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/winevulkan-change_blacklist_to_more_neutral_word.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/winevulkan-1.2.145.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/winevulkan-dont_initialize_vulkan_driver_in_dllmain.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/380b7f28253c048d04c1fbd0cfbc7e804bb1b0e1.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/262e4ab9e0eeb126dde5cb4cba13fbf7f1d1cef0.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/314cd9cdd542db658ce7a01ef0a7621fc2d9d335.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/a455ff61b40ff73b48d0ccc9c1f14679bb65ab8d.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/6299969a60b2bda85e69a3569c5d4970d47b3cc6.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/8bd62231c3ab222c07063cb340e26c3c76ff4229.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/1e074c39f635c585595e9f3ece99aa290a7f9cf8.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/18d7bc985990c1022a9f42d20cc819ba141af5cb.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/72517ff1875431bd82f21f5f9269a6f949b6845c.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/c5675ec615a5c2cd01a933fbf37f532a7aa0ce66.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/e447e86ae2fbfbd9dee1b488e38a653aaea5447e.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/de508759c67543e3bd21ee6a0873b06aa4014418.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/51b3191cd38704f8d7e8ae5662105a73df715145.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/d4b162509f7d1408f933eabde3956fc8df3f86cd.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/844dbbffb302c364f387b8c2a66ce820d7d4fa9d.patch
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/vulkan/a8ddba3576f93529c04c5b9d8d65d45b9cdd6761.patch
    
    echo "winevulkan pending patches"
    patch -Np1 < ../patches/wine-hotfixes/pending/lehmann-pending.patch
    patch -Np1 < ../patches/wine-hotfixes/pending/middlebrook-pending.patch

    echo "quartz backports 5.9->5.17"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/quartz_backports_5.18.patch
    cp ../patches/wine-hotfixes/backports-for-5.9/quartz/test.avi ./dlls/amstream/tests/
        
    echo "planet zoo/jurassic world hotfixes pending"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/planet-zoo-jurassic-world-pending-upstream-staging.patch
    
    echo "assetto stutter fix backport"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/assetto_backport.patch
    
    echo "Indiana Jones and the Emperor's Tomb pending"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/indiana_jones_fix.patch
    
    echo "AC Black Flag crash fix"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/AC_black_flag_fix.patch

    echo "pyxel fix"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/pyxel.patch

    #WINE FAUDIO
    #echo "applying faudio patches"
    #patch -Np1 < ../patches/faudio/faudio-ffmpeg.patch
    
    ### GAME PATCH SECTION ###

    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "horizon zero dawn crash fix"
    patch -Np1 < ../patches/game-patches/hzd.patch

    echo "final fantasy XV denuvo fix"
    patch -Np1 < ../patches/game-patches/ffxv-steam-fix.patch

    echo "final fantasy XIV old launcher render fix"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

#    echo "sword art online"
#    patch -Np1 < ../patches/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" 
    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch
 
#    echo "gta v key input fix"
#    only needed if esync is disabled
#    patch -Np1 < ../patches/game-patches/gta_v_keyboard_input.patch
    
    echo "Denuvo anti-cheat DOOM Eternal hotfix"
    patch -Np1 < ../patches/game-patches/gofman_dac.patch

# Currently applied but not working:

#  TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

#   The game uses CEG which does not work in proton.    
    echo "blackops 2 fix"
    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    # geforce now
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/geforce-now-backport.patch

    echo "bloons TD6 fix"
    patch -Np1 < ../patches/game-patches/0001-wbemprox-HACK-Make-Bloons-TD6-happy-so-it-does-not-e.patch
    
    echo "avengers and mafia definitive edition patches"
    patch -Np1 < ../patches/game-patches/mafia_de.patch
    
    ### END GAME PATCH SECTION ###
        
    #PROTON
    
    echo "clock monotonic"
    patch -Np1 < ../patches/proton-5.9/proton-use_clock_monotonic.patch

    echo "amd ags"
    patch -Np1 < ../patches/proton-5.9/proton-amd_ags.patch
    
    echo "bypass compositor"
    patch -Np1 < ../patches/proton-5.9/proton-FS_bypass_compositor.patch

    echo "applying winevulkan childwindow"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton-5.9/proton-fsync_staging.patch
    patch -Np1 < ../patches/proton-5.9/proton-fsync-spincounts.patch

    echo "fix for Dark Souls III, Sekiro, Nier" 
    patch -Np1 < ../patches/game-patches/nier-nofshack.patch

    echo "LAA"
    patch -Np1 < ../patches/proton-5.9/proton-LAA_staging.patch

    echo "proton overlay mouse lag fix"
    patch -Np1 < ../patches/proton/proton-staging-rawinput-overlay.patch
    
    echo "proton force mouse fullscreen grab"
    patch -Np1 < ../patches/proton/proton-nofshack-force-fullscreen-grab-mouse.patch
    
    echo "proton alt-tab hotfixes"
    patch -Np1 < ../patches/proton/proton-alt-tab-focus-hotfixes.patch

    echo "steamclient swap"
    patch -Np1 < ../patches/proton-5.9/proton-steamclient_swap.patch

#    disabled for now -- was breaking Catherine Classic in 5.9
#    echo "audio patch test"
#    patch -Np1 < ../patches/proton/proton-xaudio2_stop_engine.patch

    # missing backport necessary for just cause 4
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/windows.networking.connectivity/windows_networking_connectivity_oleidl_backport.patch

    echo "protonify"
    patch -Np1 < ../patches/proton-5.9/proton-protonify_staging.patch
    echo "protonify-audio"
    patch -Np1 < ../patches/proton-5.9/proton-pa-staging.patch
    
    echo "steam bits"
    patch -Np1 < ../patches/proton-5.9/proton-steam-bits.patch

    echo "seccomp"
    patch -Np1 < ../patches/proton-5.9/proton-seccomp-envvar.patch

    echo "SDL Joystick"
    patch -Np1 < ../patches/proton-5.9/proton-sdl_joy.patch
    patch -Np1 < ../patches/proton-5.9/proton-sdl_joy_2.patch
    
    echo "proton gamepad additions"
    patch -Np1 < ../patches/proton-5.9/proton-gamepad-additions.patch
    patch -Np1 < ../patches/proton-5.9/proton-gamepad_additions_cleanup.patch

    echo "Valve VR patches"
    patch -Np1 < ../patches/proton-5.9/proton-vr.patch

#    echo "FS Hack integer scaling"
#    patch -Np1 < ../patches/proton/proton_fs_hack_integer_scaling.patch

#    echo "proton winevulkan"
#    patch -Np1 < ../patches/proton-5.9/proton-winevulkan-nofshack.patch
    
    echo "msvcrt overrides"
    patch -Np1 < ../patches/proton-5.9/proton-msvcrt_nativebuiltin.patch

    echo "valve registry entries"
    patch -Np1 < ../patches/proton-5.9/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../patches/proton-5.9/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch
    
    echo "set prefix win10"
    patch -Np1 < ../patches/proton-5.9/proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton-5.9/proton-dxvk_config.patch

    echo "hide wine prefix update"
    patch -Np1 < ../patches/proton-5.9/proton-hide_wine_prefix_update_window.patch

    echo "applying WoW vkd3d wine patches"
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12SerializeVersionedRootSignature.patch
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12CreateVersionedRootSignatureDeserializer.patch
    
    echo "RtlIpv4AddressToString -- needed for ws2_32 changes"
    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/RtlIpv4AddressToString.patch
    
    #WINE CUSTOM PATCHES
    #add your own custom patch lines below
    
    echo "Paul's Diablo 1 menu fix"
    patch -Np1 < ../patches/game-patches/diablo_1_menu.patch

#    echo "Remi's memory performance fixes"    
#    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/ntdll-Use_the_free_ranges_in_find_reserved_free_area.patch
#    patch -Np1 < ../patches/wine-hotfixes/backports-for-5.9/makedep-Align_PE_sections_so_they_can_be_mmapped.patch
        

    ./dlls/winevulkan/make_vulkan
    ./tools/make_requests
    autoreconf -f

    #end
