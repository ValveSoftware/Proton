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

    # nvapi
    git revert --no-commit fdfb4b925f52fbec580dd30bef37fb22c219c667

    # this commit causes some FSR resolutions to be removed
    git revert --no-commit ca3681631adc4723e672aacc0a25a109983781fa

### END PROBLEMATIC COMMIT REVERT SECTION ###


### (2-2) WINE STAGING APPLY SECTION ###

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

    echo "WINE: -STAGING- applying staging patches"

    # HideWineExports
    patch -Np1 < ../wine-staging/patches/ntdll-Hide_Wine_Exports/0001-ntdll-Add-support-for-hiding-wine-version-informatio.patch

    # mouse rawinput
    # per discussion with remi:
    #---
    #GloriousEggroll — Today at 4:05 PM
    #@rbernon are there any specific rawinput patches from staging that are not in proton? i have someone saying they had better mouse rawinput functionality in my previous wine-staging builds
    #rbernon — Today at 4:07 PM
    #there's some yes, with truly raw values
    #proton still uses transformed value with the desktop mouse acceleration to not change user settings unexpectedly
    #---
    # /wine-staging/patches/user32-rawinput-mouse-experimental/0006-winex11.drv-Send-relative-RawMotion-events-unprocess.patch
    # we use a rebased version for proton
    patch -Np1 < ../patches/wine-hotfixes/staging/rawinput/0006-winex11.drv-Send-relative-RawMotion-events-unprocess.patch


    # nvapi/nvcuda
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0001-include-Add-cuda.h.h.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0002-nvcuda-Add-stub-dll.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0003-nvcuda-First-implementation.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0004-nvcuda-Implement-new-functions-added-in-CUDA-6.5.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0005-nvcuda-Properly-wrap-undocumented-ContextStorage-int.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0006-nvcuda-Emulate-two-d3d9-initialization-functions.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0007-nvcuda-Properly-wrap-stream-callbacks-by-forwarding-.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0008-nvcuda-Add-support-for-CUDA-7.0.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0009-nvcuda-Implement-cuModuleLoad-wrapper-function.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0010-nvcuda-Search-for-dylib-library-on-Mac-OS-X.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0011-nvcuda-Add-semi-stub-for-cuD3D10GetDevice.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0012-nvcuda-Add-semi-stub-for-cuD3D11GetDevice-and-cuGrap.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0013-nvcuda-Update-spec-file.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0014-nvcuda-Implement-cuDeviceGetUuid-and-cuDeviceGetLuid.patch
    patch -Np1 < ../wine-staging/patches/nvcuda-CUDA_Support/0015-nvcuda-Expand-the-Unknown1-table.patch

    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0001-nvapi-First-implementation.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0002-nvapi-Add-stubs-for-NvAPI_EnumLogicalGPUs-and-undocu.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0003-nvapi-Add-NvAPI_GetPhysicalGPUsFromLogicalGPU.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0004-nvapi-Add-stub-for-NvAPI_EnumPhysicalGPUs.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0005-nvapi-Add-stubs-for-NvAPI_GPU_GetFullName.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0006-nvapi-Explicity-return-NULL-for-0x33c7358c-and-0x593.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0007-nvapi-Add-stub-for-NvAPI_DISP_GetGDIPrimaryDisplayId.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0008-nvapi-Add-stub-for-EnumNvidiaDisplayHandle.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0009-nvapi-Add-stub-for-NvAPI_SYS_GetDriverAndBranchVersi.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0010-nvapi-Add-stub-for-NvAPI_Unload.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0011-nvapi-Add-stub-for-NvAPI_D3D_GetCurrentSLIState.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0012-nvapi-tests-Use-structure-to-list-imports.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0013-nvapi-Add-stub-for-NvAPI_GetLogicalGPUFromDisplay.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0014-nvapi-Add-stub-for-NvAPI_D3D_GetObjectHandleForResou.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0015-nvapi-Add-stub-for-NvAPI_D3D9_RegisterResource.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0016-nvapi-Improve-NvAPI_D3D_GetCurrentSLIState.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0017-nvapi-Implement-NvAPI_GPU_Get-Physical-Virtual-Frame.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0018-nvapi-Add-stub-for-NvAPI_GPU_GetGpuCoreCount.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0019-wined3d-Make-depth-bounds-test-into-a-proper-state.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0020-d3d11-Introduce-a-COM-interface-to-retrieve-the-wine.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0021-nvapi-Implement-NvAPI_D3D11_SetDepthBoundsTest.patch
    patch -Np1 < ../wine-staging/patches/nvapi-Stub_DLL/0022-nvapi-Implement-NvAPI_D3D11_CreateDevice-and-NvAPI_D.patch

    # this was added in 7.1, so it's not in the 7.0 tree
    patch -Np1 < ../patches/wine-hotfixes/staging/nvcuda/0016-nvcuda-Make-nvcuda-attempt-to-load-libcuda.so.1.patch

    # loader-KeyboardLayouts
    # needed to prevent big FPS hit in overwatch
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0001-loader-Add-Keyboard-Layouts-registry-enteries.patch
    patch -Np1 < ../wine-staging/patches/loader-KeyboardLayouts/0002-user32-Improve-GetKeyboardLayoutList.patch

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

    echo "WINE: -GAME FIXES- add cities XXL patches"
    patch -Np1 < ../patches/game-patches/v5-0001-windowscodecs-Correctly-handle-8bpp-custom-conver.patch

    echo "WINE: -GAME FIXES- add powerprof patches for FFVII Remake and SpecialK"
    patch -Np1 < ../patches/game-patches/FFVII-and-SpecialK-powerprof.patch

### END GAME PATCH SECTION ###

### (2-4) PROTON PATCH SECTION ###

    echo "WINE: -PROTON- fullscreen hack fsr patch"
    patch -Np1 < ../patches/proton/48-proton-fshack_amd_fsr.patch

    echo "WINE: -PROTON- fake current res patches"
    patch -Np1 < ../patches/proton/65-proton-fake_current_res_patches.patch

### END PROTON PATCH SECTION ###

### START MFPLAT PATCH SECTION ###

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

    echo "WINE: -HOTFIX- 32 bit compilation crashes with newer libldap, upstream patch fixes it"
    patch -Np1 < ../patches/wine-hotfixes/upstream/32-bit-ldap-upstream-fix.patch

    echo "WINE: -HOTFIX- fix audio regression caused by 0e7fd41"
    patch -Np1 < ../patches/wine-hotfixes/upstream/Fix-regression-introduced-by-0e7fd41.patch

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
