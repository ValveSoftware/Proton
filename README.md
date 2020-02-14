# proton-ge-custom

## Overview

This is my build of Proton with the most recent release of vanilla wine, has ffmpeg enabled for faudio by default, and all of Proton's patches ported over to be applied to wine, as well as wine-staging and vkd3d.

All patches include:  
 * Warframe screenshot F6 patch 
 * FFXIV Launcher patch
 * Mech Warrior online patch  
 * Assetto Corsa HUD patch 
 * Vulkan child window patch  
 * Sword Art Online gnutls patch  
 * d9vk integration  
 * vkd3d integration  
 * protonfixes integration  
 * FAudio with FFMpeg enabled (fixes audio/voices in multiple games)  
 * All of Valve's wine proton patches. Yes. All of them.  
 * wine staging patches  
 * various wine hot fixes for wine functionality that fix regressions per version  

**NOTES REGARDING SPECIFIC GAME QUIRKS:**

 * Warframe does NOT need `WINEDLLOVERRIDES="xaudio2_7=n,b"` — FAudio replaces xaudio2. Using this override WILL lead to game crashes.  
 * Warframe needs xboxdrv running in the background as a service. This is an issue related to Steam only. If it does not detect a controller within 5 minutes the game will close.  
 * Warframe is problematic with vsync. Turn it off or on in game, do not set Auto.  
 * Warframe needs a set a frame limit in game. Unlimited framerate can cause slowdowns  
 * Warframe on Nvidia you may need to disable GPU Particles in game otherwise the game can freeze randomly. On AMD they work fine  

Full patches can be viewed in [protonprep.sh](game-patches-testing/protonprep.sh).

## Installation
1. Either follow the [build guide](#building), or download a release from the [Releases](https://github.com/GloriousEggroll/proton-ge-custom/releases) section and then proceed.
2. - For regular Steam users, create a ``~/.steam/root/compatibilitytools.d`` directory.
   - For Flatpak Steam users, create a ``~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`` directory.
3. - For regular Steam users, extract the release tarball into ``~/.steam/root/compatibilitytools.d/``.
   - For Flatpak Steam users, extract the release tarball into `~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`.
4. Restart Steam.
5. Right click any game in Steam and click `Properties`. 
6. At the bottom of the General tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the new Proton version.  
7. Launch the game.  

## Building

1. Install VirtualBox and its kernel modules. Make sure they are enabled at boot.
2. Install Vagrant.
3. Clone this repo by executing:

````
git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom
````

4. Drop any custom patches into game-patches-testing/, then open game-patches-testing/protonprep.sh and  
 add a patch line for them under #WINE CUSTOM PATCHES in the same way the others are done. 

5. Apply all of the patches in /game patches/testing by running:

```
./game-patches-testing/protonprep.sh &> patchlog.txt
```

in the main proton-ge-custom directory. Open `patchlog.txt` and search for "fail" to make sure no patch failures occured.

6. Open proton-ge-custom a terminal and type the following:  

`vagrant up` (On the first run choose yes, it will ask you to run vagrant up again)  
`vagrant up` (this will take a while on the first run, as it prepares everything)  
`build_name=some_custom_build_name make redist` (this will start the build)  
`vagrant halt` (this will shut down the build afterwards)  

For future builds you only need to run:  

`build_name=some_custom_build_name make redist`  
`vagrant halt`  

Builds will be placed in proton-ge-custom/vagrant_share/ as both the full folder and a .tar.gz of the folder.  

## NOTE ON MODIFICATIONS

vagrant syncs the proton directory to any files in the cloned repo. So, if you want to make changes, close the VM with `vagrant halt`, make your changes, then launch vagrant again with `vagrant up`  

Environment variable options:  

| Compat config string  | Environment Variable           | Description  |
| :-------------------- | :----------------------------- | :----------- |
|                       | <tt>PROTON_LOG</tt>            | Convenience method for dumping a useful debug log to `$HOME/steam-$APPID.log`. For more thorough logging, use `user_settings.py`. |
|                       | <tt>PROTON_DUMP_DEBUG_COMMANDS</tt> | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | <tt>PROTON_DEBUG_DIR</tt>      | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d</tt>      | <tt>PROTON_USE_WINED3D</tt>    | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11 and d3d10. This used to be called `PROTON_USE_WINED3D11`, which is now an alias for this same option. |
| <tt>vkd3d</tt>        | <tt>PROTON_USE_VKD3D</tt>      | Use vkd3d for DX12 games. NOTE: This will disable DXVK since it relies on dxgi.dll  |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
| <tt>nofsync</tt>      | <tt>PROTON_NO_FSYNC</tt>       | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| <tt>forcelgadd</tt>   | <tt>PROTON_FORCE_LARGE_ADDRESS_AWARE</tt> | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
|                       | <tt>WINE_MEM_ALLOC_MOD</tt>  | Enables mem alloc mod. Fixes some games such as MK11 and the skyui status effect icons in skyrim se. Set to 1 to enable. |

## Credits

Credits to the proper people are deserved. Many people besides myself have contributed to various parts:

https://github.com/ValveSoftware/Proton  
https://github.com/wine-mirror/wine  
https://github.com/wine-staging/wine-staging  
https://github.com/doitsujin/dxvk  
https://github.com/Joshua-Ashton/d9vk  
https://github.com/FNA-XNA/Faudio  
https://github.com/Tk-Glitch/PKGBUILDS/tree/master/wine-tkg-git/wine-tkg-patches  
https://github.com/simons-public/protonfixes  
