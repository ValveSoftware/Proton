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
    patch -Np1 < ../patches/gstreamer/asfdemux-always_re-initialize_metadata_and_global_metadata.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-Re-initialize_demux-adapter_in_gst_asf_demux_reset.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-Only_forward_SEEK_event_when_in_push_mode.patch
    patch -Np1 < ../patches/gstreamer/asfdemux-gst_asf_demux_reset_GST_FORMAT_TIME_fix.patch
    cd ..

    # warframe controller fix
    git checkout lsteamclient
    cd lsteamclient
    patch -Np1 < ../patches/proton-hotfixes/steamclient-disable_SteamController007_if_no_controller.patch
    patch -Np1 < ../patches/proton-hotfixes/steamclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
    cd ..

    # vrclient
    git checkout vrclient_x64
    cd vrclient_x64
    patch -Np1 < ../patches/proton-hotfixes/vrclient-use_standard_dlopen_instead_of_the_libwine_wrappers.patch
    cd ..

    # VKD3D patches
    cd vkd3d
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
    
    echo "staging unfuck 1"
    patch -Np1 -R < ../patches/wine-hotfixes/reverts/staging/06877e55b1100cc49d3726e9a70f31c4dfbe66f8.patch
    echo "staging unfuck 2"
    patch -Np1 < ../patches/wine-hotfixes/reverts/staging/934a09585a15e8491e422b43624ffe632b02bd3c.patch
    echo "staging unfuck 3"
    patch -Np1 < ../patches/wine-hotfixes/updates/staging/ntdll-ForceBottomUpAlloc-044cb93.patch
    cd ..

    #WINE
    cd wine
    git reset --hard HEAD
    git clean -xdf

    echo "proton gamepad unfuck"
    git revert --no-commit da7d60bf97fb8726828e57f852e8963aacde21e9

    echo "sea of thieves patch unfuck"
    # these commits will eventually replace the sea of thieves patch, but are currently incomplete
    git revert --no-commit a46d359e91e299142a27570bb202d8141b9625da
    git revert --no-commit 0a90d0431d8d6d2f4913cdc6640edeb1ade833c0
    git revert --no-commit 93aea5d86fe2eb50a9bb0829533ca5da627908f6
            
    echo "esync/fsync unfuck"
    git revert --no-commit 7e9ccbe68fe5215df9bd8e424195e1abf56f7286 
    git revert --no-commit f6bfb4ce00d27c4bc11615a5426065749e72b70a 
    git revert --no-commit 888d66a2376f0da076ec312ef5ca2d93fee0e2f9 
    git revert --no-commit e9e5c95058df1f409debeb6b05aa222b476d79f6 
    git revert --no-commit c4c3b06e83ce8f7f18e77a101656ba983fb0d0e3 
    git revert --no-commit a20b997b3430bd7dc94ffd587cd299efa467420e 
    git revert --no-commit 98eab245d3c3377af0c3da6880bb8ede80cb0925 
    git revert --no-commit c3e2013b615dd449113fe8fce0700319aa082020 
    git revert --no-commit 07248fc5002fb109de8fc8e51e9d05329e0cd8cc 
    git revert --no-commit 06fa3d32a73d59c7fec59a8682e3750150f84554 
    git revert --no-commit 9ed951266244ad75454cfdb63ee0e872ca9ac43b 
    git revert --no-commit e0fca9451146908402a8fbc770ff189aba636213 
    git revert --no-commit 573be7e6023e73d736c341bdca1ee49594f56ee4 
    git revert --no-commit 412555e0cdcd16439db56f6bd6ea56cedcda0883 
    git revert --no-commit d4c2b61c48cdd35275684e75427d2cf0d8d928de 
    git revert --no-commit b86dc3926bfe5cd92400aa96c89b0255eba1d447 
    git revert --no-commit ee5c842e5303c70e88a1c68390c46db1f1689f19 
    git revert --no-commit a4ce2f652d76d033a79434416ff585cd15356a87 
    git revert --no-commit 84d25135b3b2f9a30619f741d166fa1daa8298e5 
    git revert --no-commit df513b95ec24d279a10fbe358973662ce2c9c385 
    git revert --no-commit d8d6a6b2e639d2e29e166a3faf988b81388ae191 
    git revert --no-commit ff19f21913c508f5827df0e7e4c3a351c36711a0 
    git revert --no-commit 552bc8aa4703b674747df36c591038da17c0c858 
    git revert --no-commit 509ad75adbca85d606a3bd8bba727abf0751cebc 
    git revert --no-commit 246dedaa091308f140a3cac41845f5e978492e37 
    git revert --no-commit 4d70266274c1102c385dd00303d312d94453d19b 
    git revert --no-commit 2333099c52566c6cf3d3f981588a26d4ff408155 
    git revert --no-commit 0c14b1a962573ee125940f2008c646befe597226 
    git revert --no-commit 683583faf2f4b00874f702429393b127aca8eef4 
    git revert --no-commit 20c91c5e803090bd40fe3045a0d9fea0a68913e4 
    git revert --no-commit 7f28a1c521341399da1f3559358f2abf876d34be 
    git revert --no-commit 95e2d05e5d6b92a2f6b28e00f36064b7bf6b249a 
    git revert --no-commit e561ce4b9259071f79d219dddf62f05cdd8dd07b 
    git revert --no-commit 8e5d3042786917c04d3065755d81e7f8a751e529 
    git revert --no-commit 245efd04e1456a71a6962acbb8ebc279481e9ffa 
    git revert --no-commit 33c750f50ff8b6f1eae63140e8287c49a5130a60 
    git revert --no-commit 39e7f25e0918d23e5b9ef5fc5049948b6f56525e 
    git revert --no-commit ca3ca7b046ae94a152b1367ca982774345887e55 
    git revert --no-commit cdfc45859c299aa629482ee06614c9819346b444 
    git revert --no-commit f1276b25ae72e81cf044134bae92db6ef73be3a1 
    git revert --no-commit 65edacf93484faf1dc3d11e555081d69556ccbc3 
    git revert --no-commit 8b87d6b81408e5d6fe34f9e9fda1df2f4f2e5cd0 
    git revert --no-commit efd59e378c2ba8cae98fa664ae98521027e96b81 
    git revert --no-commit 39915c9bc42f17619b1d2c46e6b3aea485c471a0 
    git revert --no-commit a18444984171ee86503d1250094965fb50a198ee 
    git revert --no-commit 4ffe39573b537d638e4b39c9b5990c6566d62b09 
    git revert --no-commit cd0c5988020acc92ff98260e3304967bf31e4e87 
    git revert --no-commit f1d40d4824b568389cbc328cebb5734430b52e44 
    git revert --no-commit 35b063a404457fdf956d1913738a3c8a66266cb4 
    git revert --no-commit be0eb9c92eb7a4fcd9d0d48568c8ed5e8326ef0b 
    git revert --no-commit 9fe61171e515e7c77720675ecbe69731219b549c 
    git revert --no-commit c96ef78b6d6d9184d8ec4cd18924a3049d388583 
    git revert --no-commit 7c32b2dd9368137eca3cf0202360bbe0db62efbf 
    git revert --no-commit ac90898f72b02bbc226a95deb40555c1fb8ac3a3 
    git revert --no-commit 87fa906a84621295a76035d73dd6305c9cd2ea4a 
    git revert --no-commit c0319e0eabbad87a3e153c23f2461c881153b984 
    git revert --no-commit b925dd78b813decf386139a15aa7bc6863ee7ae5 
    git revert --no-commit 3e9f8c87e5a2acaa80f8bbb1d50fa82147942143 
    git revert --no-commit 704975f58d7947721f530d202022721c16df466a 
    git revert --no-commit 04f41e87a369828a698f62c32cabad34ed34a3e7 
    git revert --no-commit 01150d7f8d27ad5efdb824da938c4a9fa562a036 
    git revert --no-commit 1a743c9af39d0224b65ae504ae7e24d9fad56c2b 
    git revert --no-commit 8a63b688ac49f19c259066fd100407edf3747f95 
    git revert --no-commit e6e2f2325a0a4eb14f10dd6df319b068761e9600 
    git revert --no-commit e854ea34cc481658ec61f4603d0438e075608c98
            

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
    -W user32-window-activation
    
    echo "wine unfuck fd7992972b252ed262d33ef604e9e1235d2108c5"
    patch -Np1 -R < ../patches/wine-hotfixes/reverts/wine/fd7992972b252ed262d33ef604e9e1235d2108c5.patch
    
    echo "wine unfuck d8d6a6b2e639d2e29e166a3faf988b81388ae191"
    patch -Np1 < ../patches/wine-hotfixes/updates/wine/d8d6a6b2e639d2e29e166a3faf988b81388ae191.patch

    echo "origin unfuck"
    patch -Np1 -R < ../patches/wine-hotfixes/reverts/wine/3078f10d43d834b0498358fe0accb565191b7020.patch

    #WINE FAUDIO
    #echo "applying faudio patches"
    #patch -Np1 < ../patches/faudio/faudio-ffmpeg.patch
    
    ### GAME PATCH SECTION ###

    #fix this
    echo "mech warrior online"
    patch -Np1 < ../patches/game-patches/mwo.patch

    echo "final fantasy XV denuvo fix"
    patch -Np1 < ../patches/game-patches/ffxv-steam-fix.patch

    echo "final fantasy XIV old launcher render fix"
    patch -Np1 < ../patches/game-patches/ffxiv-launcher.patch

    echo "assetto corsa"
    patch -Np1 < ../patches/game-patches/assettocorsa-hud.patch

    echo "sword art online"
    patch -Np1 < ../patches/game-patches/sword-art-online-gnutls.patch

    echo "origin downloads fix" 
    patch -Np1 < ../patches/game-patches/origin-downloads_fix.patch

    echo "sea of thieves winhttp patch"
    patch -Np1 < ../patches/game-patches/sea-of-thieves-websockets.patch

    echo "fix steep"
    patch -Np1 < ../patches/game-patches/steep_fix.patch

#  TODO: Add game-specific check
    echo "mk11 patch"
    patch -Np1 < ../patches/game-patches/mk11.patch

#    Disabled for now. The game uses CEG which does not work in proton.    
#    echo "blackops 2 fix"
#    patch -Np1 < ../patches/game-patches/blackops_2_fix.patch

    ### END GAME PATCH SECTION ###
    
    #PROTON

    echo "clock monotonic"
    patch -Np1 < ../patches/proton/proton-use_clock_monotonic.patch

    echo "amd ags"
    patch -Np1 < ../patches/proton/proton-amd_ags.patch
    
    echo "bypass compositor"
    patch -Np1 < ../patches/proton/proton-FS_bypass_compositor.patch

    echo "applying winevulkan childwindow"
    patch -Np1 < ../patches/wine-hotfixes/winevulkan-childwindow.patch

    #WINE FSYNC
    echo "applying fsync patches"
    patch -Np1 < ../patches/proton/proton-fsync_staging.patch
    patch -Np1 < ../patches/proton/proton-fsync-spincounts.patch

    echo "fix for Dark Souls III, Sekiro, Nier" 
    patch -Np1 < ../patches/game-patches/nier-nofshack.patch

    echo "LAA"
    patch -Np1 < ../patches/proton/proton-LAA_staging.patch

    echo "steamclient swap"
    patch -Np1 < ../patches/proton/proton-steamclient_swap.patch

#    disabled for now -- was breaking Catherine Classic in 5.9
#    echo "audio patch test"
#    patch -Np1 < ../patches/proton/proton-xaudio2_stop_engine.patch
    
    echo "protonify"
    patch -Np1 < ../patches/proton/proton-protonify_staging.patch

    echo "protonify-audio"
    patch -Np1 < ../patches/proton/proton-pa-staging.patch
    
    echo "steam bits"
    patch -Np1 < ../patches/proton/proton-steam-bits.patch

    echo "seccomp"
    patch -Np1 < ../patches/proton/proton-seccomp-envvar.patch

    echo "SDL Joystick"
    patch -Np1 < ../patches/proton/proton-sdl_joy.patch
    patch -Np1 < ../patches/proton/proton-sdl_joy_2.patch
    
    echo "proton gamepad additions"
    patch -Np1 < ../patches/proton/proton-gamepad-additions.patch

    echo "Valve VR patches"
    patch -Np1 < ../patches/proton/proton-vr.patch

#    echo "Valve vulkan patches"
#    patch -Np1 < ../patches/proton/proton-vk-bits-4.5.patch

#    echo "FS Hack integer scaling"
#    patch -Np1 < ../patches/proton/proton_fs_hack_integer_scaling.patch
    
    echo "proton winevulkan"
    patch -Np1 < ../patches/proton/proton-winevulkan-nofshack.patch
    
    echo "msvcrt overrides"
    patch -Np1 < ../patches/proton/proton-msvcrt_nativebuiltin.patch

    echo "valve registry entries"
    patch -Np1 < ../patches/proton/proton-apply_LargeAddressAware_fix_for_Bayonetta.patch
    patch -Np1 < ../patches/proton/proton-Set_amd_ags_x64_to_built_in_for_Wolfenstein_2.patch
    
    echo "set prefix win10"
    patch -Np1 < ../patches/proton/proton-win10_default.patch

    echo "dxvk_config"
    patch -Np1 < ../patches/proton/proton-dxvk_config.patch

    echo "hide wine prefix update"
    patch -Np1 < ../patches/proton/proton-hide_wine_prefix_update_window.patch

    echo "applying WoW vkd3d wine patches"
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12SerializeVersionedRootSignature.patch
    patch -Np1 < ../patches/wine-hotfixes/vkd3d/D3D12CreateVersionedRootSignatureDeserializer.patch
        
    echo "guy's media foundation alpha patches"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/media_foundation_alpha.patch
    
    echo "proton-specific manual mfplat dll register patch"
    patch -Np1 < ../patches/wine-hotfixes/media_foundation/proton_mediafoundation_dllreg.patch
    
    #WINE CUSTOM PATCHES
    #add your own custom patch lines below
    
    echo "Paul's Diablo 1 menu fix"
    patch -Np1 < ../patches/game-patches/diablo_1_menu.patch
    
    
    ./dlls/winevulkan/make_vulkan
    ./tools/make_requests
    autoreconf -f

    #end
