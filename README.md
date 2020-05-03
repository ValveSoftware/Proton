# proton-ge-custom

## Overview

This is my build of Proton with the most recent release of vanilla wine, has ffmpeg enabled for faudio by default, and all of Proton's patches ported over to be applied to wine, as well as wine-staging and vkd3d.

All patches included:  
 * FFXIV Launcher patch
 * Mech Warrior online patch  
 * Assetto Corsa HUD patch 
 * Vulkan child window patch  
 * Sword Art Online gnutls patch  
 * ORIGIN downloads fix patch  
 * CODBlack Ops 2 launch patch  
 * NFSW launcher patch  
 * Monster Hunter World patch  
 * Sunset Overdrive patch  
 * Steep and AC Odyssey screen fix patch  
 * World of Warcraft DX12 compatibility patch  
 * d9vk integration  
 * vkd3d integration  
 * protonfixes integration  
 * FAudio with FFMpeg enabled (fixes audio/voices in multiple games)  
 * All of Valve's wine proton patches.  
 * Multiple pending pull requests from Proton.  
 * wine staging patches  
 * various wine hotfixes for wine functionality that fix regressions per version  
 * various proton hotfixes for proton functionality that fix regressions per version  

**NOTES REGARDING SPECIFIC GAME QUIRKS:**

 * Warframe does NOT need `WINEDLLOVERRIDES="xaudio2_7=n,b"` — FAudio replaces xaudio2. Using this override WILL lead to game crashes.  
 * Warframe is problematic with vsync. Turn it off or on in game, do not set Auto.  
 * Warframe needs a set a frame limit in game. Unlimited framerate can cause slowdowns  
 * Warframe on Nvidia you may need to disable GPU Particles in game otherwise the game can freeze randomly. On AMD they work fine  
 * DOOM Eternal currently does -not- work with ACO on mesa. You will need to set RADV_PERFTEST=llvm %command% in the launch options.   

Full patches can be viewed in [protonprep.sh](game-patches-testing/protonprep.sh).

## Installation
1. Either follow the [build guide](#building), or download a release from the [Releases](https://github.com/GloriousEggroll/proton-ge-custom/releases) section and then proceed to the next step.
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

4. Drop any custom patches into patches/, then open patches/protonprep.sh and  
 add a patch line for them under #WINE CUSTOM PATCHES in the same way the others are done. 

5. Apply all of the patches in patches/ by running:

```
./patches/protonprep.sh &> patchlog.txt
```

in the main proton-ge-custom directory. Open `patchlog.txt` and search for "fail" to make sure no patch failures occured. An easy way to do this is like so:  

grep -i fail patchlog.txt
grep -i error patchlog.txt 

6. Open proton-ge-custom a terminal and type the following:  

`vagrant up` (On the first run choose yes, it will ask you to run vagrant up again)  
`vagrant up` (this will take a while on the first run, as it prepares everything)  
`build_name=some_custom_build_name make redist | tee buildlog.txt` (this will start the build and log everything to buildlog.txt so that you can review the log if something fails)  
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
| <tt>noforcelgadd</tt> |                                | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
|                       | <tt>WINE_FULLSCREEN_INTEGER_SCALING</tt> | Enable integer scaling mode, to give sharp pixels when upscaling. |
| <tt>cmdlineappend:</tt>|                               | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| <tt>seccomp</tt>      | <tt>PROTON_USE_SECCOMP</tt>    | Enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| <tt>async</tt>      | <tt>DXVK_ASYNC</tt>    | Allows Async to be used with DXVK. This can help with stutter in some games, however it is recommended not to be used with games that have sensitive anti-cheats. Use at your own risk. |

## Credits

As many of you may or may not already know, there is a credits section in the README of my git repository. My proton-ge project contains some of my personal tweaks to proton, but also very largely contains patches, rebases, and fixes from numerous people, not just myself. While I tend to get credit for my builds, there is a lot of work that goes into it from other people as well, that gets imported. I'd like to take some time to point a few of these people out for recognition.  In future builds - I plan to make more informative and clear git commits, as well as attempt to give these people further crediting, as the README may not be sufficient in doing so.  


TKG (Etienne Juvigny):  
https://www.patreon.com/tkglitch  
https://github.com/Frogging-Family/wine-tkg-git  

I and many others owe TKG. In regards to both WINE and proton, he has dedicated a lot of time (2+ years at least) to rebasing wine and proton patches, as well as making his own contributions. Before he came along, I did some rebasing work, and mainly only released things for Arch. These days he almost always beats me to rebasing, and it saves myself and others a -lot- of work.  

Regularly his rebases can be found in my patch list:  

proton-fsync_staging.patch  
proton-fsync-spincounts.patch  
proton-FS_bypass_compositor.patch  
valve_proton_fullscreen_hack-staging.patch  
proton-rawinput.patch  
proton-steamclient_swap.patch  
proton-protonify_staging_rpc.patch  
proton-protonify_staging.patch  
proton-steam-bits.patch  
proton-sdl_joy.patch  
proton-sdl_joy_2.patch  
proton-gamepad-additions.patch  
proton-vk-bits-4.5.patch  
proton-winevulkan.patch  

Within these patches are proton rebases - many of them I've done on my own before he did them, however as he regularly rebases, many of my older patches have been replaced with his rebase patches. He deserves a huge amount of recognition for this.  

Beyond TKG, there are also quite a few developers that deserve recognition:  

Guy1524 (Derek Lesho):  https://github.com/Guy1524  
-Derek was responsible for the original rawinput patches  
-As well as -several- various game fixes in the past, just to name a few -- MK11, FFXV, MHW, Steep, AC Odyssey FS fix.  
-He has also done a massive amount of work on media foundation/mfplat, which should be hopefully working very soon.  

Joshie (Joshua Ashton): https://github.com/Joshua-Ashton/d9vk  
-creator of d9vk  
-also creater of much of the dx10->dxvk work  
-also known for recent DOOM Eternal wine fixes  
-also added -many- of the vulkan tweaks and fixes used such as fs hack integer scaling  

doitsujin/ドイツ人 (Philip Rebohle):  
https://github.com/doitsujin/dxvk  
https://github.com/doitsujin/vkd3d  
-creator of dxvk  
-heavy contributor to vkd3d  
-put up with a lot of my bug reporting for warframe years ago when dxvk started  

HansKristian/themaister (Hans-Kristian Arntzen):  
https://github.com/HansKristian-Work/vkd3d  
-also heavy contributor to vkd3d  
-also created wine patches that allow WoW to work  

flibitijibibo (Ethan Lee):  
https://github.com/sponsors/flibitijibibo  
https://fna-xna.github.io/  
https://github.com/fna-xna/faudio  
-creator of FAudio  
-also listened to my warframe bug reports years ago  

simmons-public (Chris Simmons):  
https://github.com/simons-public/protonfixes  
-creator of the original protonfixes  
the portions of protonfixes I've imported are what allow customizations to be made to prefixes for various proton games. without proton fixes many games would still be broken and/or require manual prefix modification. Huge thanks to Chris.  

Sporif (Amine Hassane)
https://github.com/Sporif/dxvk-async
-current maintainer of dxvk-async
This is a feature that was originally removed from dxvk as it happened around the same time a few overwatch bans happened. It was thought, but never confirmed whether or not this feature caused the bans, so the feature was removed as a safety precaution. It is still safe to use in many single player games, and games that do not have competitive anti-cheats. It has also been confirmed to work safely in Warframe and Path of Exile.


I also of course need to thank my fellow wine-staging maintainers:  
Alistair Leslie-Highes, Zebediah Figura, Paul Gofman - as they have contributed MANY patches to staging, far beyond what I have done, as well as kept up with regular rebasing. A lot of times when bug reports come to me, if it has to do with staging I end up testing and relaying information to these guys in order to get issues resolved.  

Additionally, a thank you is owed to Andrew Aeikum (aeikum), and kisak (kisak-valve) for regularly keeping me in the loop with proton and fsync patches, as well as accepting PRs I've made to fix proton build system issues, or listening to bug reports on early proton patches before they reach proton release.  

And finally - To all of my patrons that have supported me, thank you so much. It's because of you that I've been able to keep this project going, getting bug fixes reported, getting proton/wine issues fixed, getting various hardware and/or game fixes handled, and so on.  Because of you, I have been able to use the spare budget in order to both help support the other people that make my project possible, as well as get things necessary for testing such as new game releases or specific hardware that hits odd issues. It's had a huge effect not just for this project, but a large trickle down effect.  

My wine-staging co-maintainers are often able to ask me for testing games, or testing on different hardware if they don't have access to it. This also trickles into both proton bug reporting AND Lutris bug reporting, as I'm able to provide bug testing and feedback and custom builds and upgrades to them as well. I'm also able to test driver related issues for things such as mesa and getting things reported + patched. This in turn leads to early patches for mesa, the kernel, vkd3d, and other packages on my copr repos as well. The trickle down effect is just one gigantic awesome rabbit hole for getting things fixed. Thank you once again.  

For anyone else interested, my pareon can be found here:  

https://www.patreon.com/gloriouseggroll  
