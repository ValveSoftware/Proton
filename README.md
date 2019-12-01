This is my build of Proton with the most recent release of vanilla wine, has ffmpeg enabled for faudio by default, and all of Proton's patches ported over to be applied to wine, as well as wine-staging and vkd3d.

All patches:  
-Warframe screenshot F6 patch 
-FFXIV Launcher patch
-Mech Warrior online patch  
-Assetto Corsa HUD patch 
-Vulkan child window patch  
-sword art online gnutls patch  
-d9vk integration  
-vkd3d integration  
-protonfixes integration  
-FAudio with FFMpeg enabled (fixes audio/voices in multiple games)  
-All of Valve's wine proton patches. Yes. All of them.  
-wine staging patches  
-various wine hot fixes for wine functionality that fix regressions per version  

Full patches can be viewed in game-patches-testing/proton-prep.sh  

How to install:

1. Either follow the build guide below, or download a release from the Releases section of this git repo.
2. Extract the release tarball into `~/.steam/root/compatibilitytools.d/`, and restart steam. You will have to create the compatibilitytools.d folder.  
If using the flatpak version from flathub extract into `~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`.
3. Restart Steam.  
3. Right click any game in Steam and click Properties  
4. At the bottom of the General tab, Check "Force the use of a specific Steam Play compatibility tool" then select the new Proton version.  
5. Launch the game.  

How to build:  

1. Install virtualbox and its kernel modules, make sure they are enabled at boot  
2. Install vagrant  
3. Clone this repo:  
`git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom`  

4. Drop any custom patches into game-patches-testing/, then open game-patches-testing/proton-prep.sh and  
 add a patch line for them under #WINE CUSTOM PATCHES in the same way the others are done. 

5. Apply all of the patches in /game patches/testing by running:
```
./game-patches-testing/proton-prep.sh &> patchlog.txt
``` 
in the main proton-ge-custom directory. Open patchlog.txt and search "fail" to make sure no patch failures occured.

6. in a terminal and type:  

`vagrant up` (this will take a while on the first run, as it prepares everything)  
`vagrant ssh` (this will ssh you into the vagrant VM  

To leave the VM at any time just type `exit`  

NOTE ON MODIFICATIONS:  
vagrant syncs the proton directory to any files in the cloned repo. So, if you want to make changes, close the VM with `vagrant halt`, make your changes, then launch vagrant again with `vagrant up`  

7. Edit the build name and build proton  
```
cd ~/build
nano Makefile
```
Change the BUILD_NAME to whatever you want, then save & exit  

8. Build proton  
```
cd ~/build
make all dist
```
9. Rename the dist folder to your BUILD_NAME, then tar it for easier distribution:  
```
mv dist Proton-Custom-Name
tar -cvzf Proton-Custom-Name.tar.gz Proton-Custom-Name/
```

10. Move it to the /vagrant folder. This folder is accessible on your main system in the vagrant_share folder inside the cloned repository folder:  

`mv Proton-Custom-Name.tar.gz /vagrant/`  

11. Shut down the VM:  
```
exit
vagrant halt
```
12. Now open vagrant_share inside the cloned repo folder on your main system and you will see your new proton version in a .tar.gz from here follow the install instructions listed in the first section of this README.


Environment variable options:  

| Compat config string  | Environment Variable           | Description  |
| :-------------------- | :----------------------------- | :----------- |
|                       | <tt>PROTON_LOG</tt>            | Convenience method for dumping a useful debug log to `$HOME/steam-$APPID.log`. For more thorough logging, use `user_settings.py`. |
|                       | <tt>PROTON_DUMP_DEBUG_COMMANDS</tt> | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | <tt>PROTON_DEBUG_DIR</tt>      | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d</tt>      | <tt>PROTON_USE_WINED3D</tt>    | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11 and d3d10. This used to be called `PROTON_USE_WINED3D11`, which is now an alias for this same option. |
| <tt>nod3d11</tt>      | <tt>PROTON_NO_D3D11</tt>       | Disable <tt>d3d11.dll</tt>, for d3d11 games which can fall back to and run better with d3d9. |
| <tt>nod3d10</tt>      | <tt>PROTON_NO_D3D10</tt>       | Disable <tt>d3d10.dll</tt> and <tt>dxgi.dll</tt>, for d3d10 games which can fall back to and run better with d3d9. |
| <tt>d9vk</tt>         | <tt>PROTON_NO_D9VK</tt>        | Disable d9vk so that wined3d is used for dx9 games. |
| <tt>vkd3d</tt>        | <tt>PROTON_USE_VKD3D</tt>      | Use vkd3d for DX12 games. NOTE: This will disable DXVK since it relies on dxgi.dll  |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
| <tt>nofsync</tt>      | <tt>PROTON_NO_FSYNC</tt>       | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| <tt>forcelgadd</tt>   | <tt>PROTON_FORCE_LARGE_ADDRESS_AWARE</tt> | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |


Credits to the proper people are deserved. Many people besides myself have contributed to various parts:

https://github.com/ValveSoftware/Proton  
https://github.com/wine-mirror/wine  
https://github.com/wine-staging/wine-staging  
https://github.com/doitsujin/dxvk  
https://github.com/Joshua-Ashton/d9vk  
https://github.com/FNA-XNA/Faudio  
https://github.com/Tk-Glitch/PKGBUILDS/tree/master/wine-tkg-git/wine-tkg-patches  
https://github.com/simons-public/protonfixes  
