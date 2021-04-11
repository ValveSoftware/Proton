# proton-ge-custom
# Please note, this is a custom build of proton, and is -not- affiliated with Valve's proton. 

# If you have an issue that happens with this proton that does -not- happen on Valve's proton, please DO NOT open a bug report on Valve's bug tracker. 

# Instead, contact me on Discord about the issue:

https://discord.gg/6y3BdzC

## Table of contents

- [Overview](#overview)
	- [Patches](#patches)
	- [Notes](#notes)
- [Installation](#installation)
	- [Native](#native)
	- [Flatpak](#flatpak)
		- [Flathub](#flathub)
		- [Manual](#manual)
- [Building](#building)
- [Enabling](#enabling)
- [Modification](#modification)
- [Credits](#credits)
	- [TKG (Etienne Juvigny)](#tkg-etienne-juvigny)
	- [Guy1524 (Derek Lesho)](#guy1524-derek-lesho)
	- [Joshie (Joshua Ashton)](#joshie-joshua-ashton)
	- [doitsujin/ドイツ人 (Philip Rebohle)](#doitsujinドイツ人-philip-rebohle)
	- [HansKristian/themaister (Hans-Kristian Arntzen)](#hanskristianthemaister-hans-kristian-arntzen)
	- [flibitijibibo (Ethan Lee)](#flibitijibibo-ethan-lee)
	- [simmons-public (Chris Simmons)](#simmons-public-chris-simmons)
	- [Sporif (Amine Hassane)](#sporif-amine-hassane)
	- [wine-staging maintainers](#wine-staging-maintainers)
	- [Reporters](#reporters)
	- [Patrons](#patrons)
- [Donations](#donations)

## Overview

This is my build of Proton with the most recent releases of vanilla WINE. It has FFmpeg enabled for FAudio by default, and all of Proton's patches ported over to be applied to WINE, as well as Wine-staging and VKD3D.

### Steam game patches/fixes

- FFXIV Launcher
- FFXV Steam
- Mech Warrior online
- Assetto Corsa HUD fix
- Assetto Corsa Competizione stutter fix
- Sword Art Online gnutls
- ORIGIN downloads fix
- Monster Hunter World
- Mortal Kombat 11
- GTA V Keyboard input fix
- Steep fix
- AC Odyssey black bars fix
- Various WINE hotfixes for WINE functionality that fix regressions per version
- Various Proton hotfixes for Proton functionality that fix regressions per version
- Screen fixes for Nier: Automata, Sekiro, Dark Souls
- Path of Exile vulkan renderer fixed
- Mount and Blade Warband
- Divinity Original Sin 2
- Sea of Thieves
- Death Stranding fixes
- Horizon Zero Dawn fixes
- Fall Guys controller mapping fix
- World War Z Vulkan renderer fix
- rFactor 2
- Ashes of the Singularity
- Metal Gear Solid
- Metal Gear Solid: Ground Zeroes
- Indiana Jones and the Emperor's Tomb
- Various EA Origin launcher fixes
- Bloons TD6
- Dark Souls III, Sekiro, Nier Automata graphics fix
- Baldur's Gate 3 Launcher workaround
- Serious Sam 4 fixes
- Just Cause 4 fixes
- Age of Empires II: DE Online Multiplayer fixed
- Halo: MCC Online coop campaign fixed

### Non-Steam or winesteam game patches

- World of Warcraft DX12 compatibility
- Diablo 1 Menu fix

### Quality of Life patches

- All of Valve's WINE Proton patches
- Wine-staging patches
- Vulkan child window patch
- Protonfixes integration (has various scripts to run winetricks on games that need them)
- FAudio with FFmpeg enabled (fixes audio/voices in multiple games)
- Various WINE hotfixes for WINE functionality that fix regressions per version
- Various Proton hotfixes for Proton functionality that fix regressions per version
- DXVK is compiled with async for faster shader compiling. See environment variables section for more information on usage.

### Media Foundation fixes (Fully working or playable)

- Spyro Reignited Trilogy
- Mortal Kombat 11
- Injustice 2
- Power Rangers: Battle for the Grid
- Darksiders: Warmastered Edition
- Borderlands 3
- Resident Evil 2 Remastered
- Resident Evil 3 Remastered
- Resident Evil 7
- PC Building Simulator
- Dangonronpa V3
- Super Lucky's Tale
- Remnant: From the Ashes
- BlazBlue Centralfiction
- Bloodstained: Ritual of the Night
- Crazy Machines 3
- Devil May Cry 5
- Wasteland 3

### Notes

- Warframe does **not** need `WINEDLLOVERRIDES="xaudio2_7=n,b"` — FAudio replaces xaudio2. Using this override WILL lead to game crashes
- Warframe is problematic with VSync. Turn it off or on in game, do not set to `Auto`
- Warframe needs a set a frame limit in game. Unlimited framerate can cause slowdowns
- Warframe on Nvidia: you may need to disable GPU Particles in game otherwise the game can freeze randomly. On AMD they work fine
- Injustice 2 and MK11 are missing cutscene audio

Full patches can be viewed in [protonprep.sh](patches/protonprep-nofshack.sh).

## Installation

PLEASE NOTE: There are prerequisites for using this version of proton:

1. You must have wine installed on your system
2. You must have winetricks installed on your system
3. You must have wine dependencies installed on your system. See https://www.gloriouseggroll.tv/how-to-get-out-of-wine-dependency-hell/
4. You must have vulkan gpu drivers/packages installed properly on your system. See https://github.com/lutris/docs/blob/master/InstallingDrivers.md

### Manual

#### Native

This section is for those that use the native version of Steam.

1. Download a release from the [Releases](https://github.com/GloriousEggroll/proton-ge-custom/releases) page.
2. Create a `~/.steam/root/compatibilitytools.d` directory if it does not exist.
3. Extract the release tarball into `~/.steam/root/compatibilitytools.d/`.
   * `tar -xf Proton-VERSION.tar.gz -C ~/.steam/root/compatibilitytools.d/`
4. Restart Steam.
5. [Enable proton-ge-custom](#enabling).

#### Flatpak

This section is for those that use the Steam flatpak.

##### Flathub

This unofficial build isn't supported by GloriousEggroll nor Valve and wasn't tested with all possible games and cases. It can behave differently from upstream builds. Use at your own risk.

1. [Add the Flathub repository](https://flatpak.org/setup/).
2. Run:
	```bash
	flatpak install com.valvesoftware.Steam.CompatibilityTool.Proton-GE
	```
3. [Enable proton-ge-custom](#enabling).

##### Manual

1. Download a release from the [Releases](https://github.com/GloriousEggroll/proton-ge-custom/releases) page.
2. Create a `~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/` directory if it does not exist.
3. Extract the release tarball into `~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`.
   * `tar -xf Proton-VERSION.tar.gz -C ~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`
4. Restart Steam.
5. [Enable proton-ge-custom](#enabling).


## Building

1. Install VirtualBox and its kernel modules. Make sure they are enabled at boot.
2. Install Vagrant.
3. Clone this repo by executing:

```sh
	git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom
```

4. Drop any custom patches into patches/, then open patches/protonprep.sh and add a patch line for them under `#WINE CUSTOM PATCHES` in the same way the others are done. 

5. Apply all of the patches in patches/ by running:

```sh
	./patches/protonprep.sh &> patchlog.txt
```

in the main proton-ge-custom directory. Open `patchlog.txt` and search for "fail" to make sure no patch failures occured. An easy way to do this is like so:

```sh
	grep -i fail patchlog.txt
	grep -i error patchlog.txt 
```

6. Open proton-ge-custom a terminal and type the following:

```sh
	# On the first run choose yes, it will ask you to run vagrant up again
	vagrant up
	# This will take a while on the first run, as it prepares everything
	vagrant up

	# This will start the build and log everything to buildlog.txt
	# so that you can review the log if something fails)
	build_name=some_custom_build_name make redist | tee buildlog.txt 

	# This will shut down the build afterwards
	vagrant halt
```

For future builds you only need to run:  

```sh
	build_name=some_custom_build_name make redist | tee buildlog.txt  
	vagrant halt
```

Builds will be placed in `proton-ge-custom/vagrant_share/` as both the full folder and a `.tar.gz` of the folder.

## Enabling

1. Right click any game in Steam and click `Properties`.
2. At the bottom of the `General` tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the desired Proton version.
3. Launch the game.

## Modification

Vagrant syncs the Proton directory to any files in the cloned repo. So, if you want to make changes, close the VM with `vagrant halt`, make your changes, then launch Vagrant again with `vagrant up`

Environment variable options:

| Compat config string  | Environment Variable           | Description  |
| :-------------------- | :----------------------------- | :----------- |
|                       | <tt>PROTON_LOG</tt>            | Convenience method for dumping a useful debug log to `$HOME/steam-$APPID.log`. For more thorough logging, use `user_settings.py`. |
|                       | <tt>PROTON_DUMP_DEBUG_COMMANDS</tt> | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | <tt>PROTON_DEBUG_DIR</tt>      | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d</tt>      | <tt>PROTON_USE_WINED3D</tt>    | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11 and d3d10. This used to be called `PROTON_USE_WINED3D11`, which is now an alias for this same option. |
| <tt>nod3d12</tt>      | <tt>PROTON_NO_D3D12</tt>       | Disables DX12. |
| <tt>nod3d11</tt>      | <tt>PROTON_NO_D3D11</tt>       | Disables DX11. |
| <tt>nod3d10</tt>      | <tt>PROTON_NO_D3D10</tt>       | Disables DX10. |
| <tt>nod3d19</tt>      | <tt>PROTON_NO_D3D9</tt>        | Disables DX9.  |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
| <tt>nofsync</tt>      | <tt>PROTON_NO_FSYNC</tt>       | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| <tt>forcelgadd</tt>   | <tt>PROTON_FORCE_LARGE_ADDRESS_AWARE</tt> | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. |
| <tt>heapdelayfree</tt>| <tt>PROTON_HEAP_DELAY_FREE</tt>| Delay freeing some memory, to work around application use-after-free bugs. |
| <tt>noxim</tt>        | <tt>PROTON_NO_XIM</tt>         | Enabled by default. Do not attempt to use XIM (X Input Methods) support. XIM support is known to cause crashes with libx11 older than version 1.7. |
| <tt>noforcelgadd</tt> |                                | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
| <tt>cmdlineappend:</tt>|                               | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| <tt>seccomp</tt>      | <tt>PROTON_USE_SECCOMP</tt>    | Enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| <tt>async</tt>      | <tt>DXVK_ASYNC</tt>    | Allows Async to be used with DXVK. This can help with stutter in some games, however it is recommended not to be used with games that have sensitive anti-cheats. Use at your own risk. |
| <tt>nowritewatch</tt> | <tt>PROTON_NO_WRITE_WATCH</tt> | Disable support for memory write watches in ntdll. This is a very dangerous hack and should only be applied if you have verified that the game can operate without write watches. This improves performance for some very specific games (e.g. CoreRT-based games). |
## Credits

As many of you may or may not already know, there is a Credits section in the README for this Git repository. My proton-ge project contains some of my personal tweaks to Proton, but a large amount of the patches, rebases and fixes come from numerous people's projects. While I tend to get credited for my builds, a lot of the work that goes into it are from other people as well. I'd like to take some time to point a few of these people out of recognition. In future builds, I plan to make clearer and more informative Git commits, as well as attempt to give these people further crediting, as my README may not be sufficient in doing so.

### TKG (Etienne Juvigny)

- https://www.patreon.com/tkglitch
- https://github.com/Frogging-Family/wine-tkg-git

I and many others owe TKG. In regards to both WINE and Proton. He has dedicated a lot of time (2+ years at least) to rebasing WINE and Proton patches, as well as making his own contributions. Before he came along, I did some rebasing work, and mainly only released things for Arch. These days he almost always beats me to rebasing, and it saves myself and others a **lot** of work.

Regularly his rebases can be found in my [patches](patches/proton) list:

- [`proton-fsync_staging.patch`](patches/proton/proton-fsync_staging.patch)
- [`proton-fsync-spincounts.patch`](patches/proton/proton-fsync-spincounts.patch)
- [`proton-FS_bypass_compositor.patch`](patches/proton/proton-FS_bypass_compositor.patch)
- [`valve_proton_fullscreen_hack-staging.patch`](patches/proton/valve_proton_fullscreen_hack-staging.patch)
- [`proton-rawinput.patch`](patches/proton/proton-rawinput.patch)
- [`proton-steamclient_swap.patch`](patches/proton/proton-steamclient_swap.patch)
- [`proton-protonify_staging_rpc.patch`](patches/proton/proton-protonify_staging_rpc.patch)
- [`proton-protonify_staging.patch`](patches/proton/proton-protonify_staging.patch)
- [`proton-steam-bits.patch`](patches/proton/proton-steam-bits.patch)
- [`proton-sdl_joy.patch`](patches/proton/proton-sdl_joy.patch)
- [`proton-sdl_joy_2.patch`](patches/proton/proton-sdl_joy_2.patch)
- [`proton-gamepad-additions.patch`](patches/proton/proton-gamepad-additions.patch)
- [`proton-vk-bits-4.5.patch`](patches/proton/proton-vk-bits-4.5.patch)
- [`proton-winevulkan.patch`](patches/proton/proton-winevulkan.patch)

Within these patches are Proton rebases. Many of them I've done on my own before he did them, however as he regularly rebases, many of my older patches have been replaced with his rebase patches. He deserves a huge amount of recognition for this.

### Guy1524 (Derek Lesho)

- https://github.com/Guy1524

Derek was responsible for the original rawinput patches, as well as several various game fixes in the past, just to name a few: MK11, FFXV, MHW, Steep, AC Odyssey FS fix. He has also done a massive amount of work on media foundation/mfplat, which should be hopefully working very soon.

### Joshie (Joshua Ashton)

- https://github.com/Joshua-Ashton/d9vk

Joshua is the creator of D9VK and also a huge contributor of DXVK. He is also known for his recent DOOM Eternal WINE fixes and also many of the Vulkan tweaks and fixes used, such as FS hack interger scaling.

### doitsujin/ドイツ人 (Philip Rebohle)

- https://github.com/doitsujin/dxvk

Philip is the creator of DXVK and a heavy contributor of VKD3D. He also put up a lot of my bug reporting for Warframe years ago, when DXVK started.

### HansKristian/themaister (Hans-Kristian Arntzen)

- https://github.com/HansKristian-Work

Hans-Kristian is a heavy contributor of VKD3D and he also created a lot of WINE patches that allowed WoW to work.

### flibitijibibo (Ethan Lee)

- https://github.com/sponsors/flibitijibibo
- https://fna-xna.github.io/

Ethan is the creator of FAudio, and he also listened to my Warframe bug reports years ago.

### simmons-public (Chris Simmons)

- https://github.com/simons-public

Chris is the creator of the original Protonfixes project. The portions of Protonfixes I've imported are what allow customizations to be made to prefixes for various Proton games. without Proton fixes many games would still be broken and/or require manual prefix modification. Huge thanks to Chris.

### Sporif (Amine Hassane)

- https://github.com/Sporif

Amine is the current maintainer of dxvk-async. This is a feature that was originally removed from dxvk as it happened around the same time a few overwatch bans happened. It was thought, but never confirmed whether or not this feature caused the bans, so the feature was removed as a safety precaution. It is still safe to use in many single player games, and games that do not have competitive anti-cheats. It has also been confirmed to work safely in Warframe and Path of Exile.

### wine-staging maintainers

I also of course need to thank my fellow wine-staging maintainers: Alistair Leslie-Highes, Zebediah Figura and Paul Gofman

They have contributed MANY patches to staging, far beyond what I have done, as well as kept up with regular rebasing. A lot of times when bug reports come to me, if it has to do with staging I end up testing and relaying information to these guys in order to get issues resolved.

### Reporters

Additionally, a thank you is owed to Andrew Aeikum (aeikum), and kisak (kisak-valve) for regularly keeping me in the loop with Proton and fsync patches, as well as accepting PRs I've made to fix Proton build system issues, or listening to bug reports on early Proton patches before they reach Proton release.

### Patrons

And finally - To all of my patrons that have supported me, thank you so much. It's because of you that I've been able to keep this project going, getting bug fixes reported, getting Proton/WINE issues fixed, getting various hardware and/or game fixes handled, and so on. Thanks to you, I have been able to use the spare budget in order to both help support the other people that make my project possible, as well as get things necessary for testing such as new game releases or specific hardware that hits odd issues. It's had a huge effect not just for this project, but a large trickle down effect.

My wine-staging co-maintainers are often able to ask me for testing games, or testing on different hardware if they don't have access to it. This also trickles into both Proton bug reporting AND Lutris bug reporting, as I'm able to provide bug testing and feedback and custom builds and upgrades to them as well. I'm also able to test driver related issues for things such as mesa and getting things reported + patched. This in turn leads to early patches for Mesa, the kernel, VKD3D, and other packages on my copr repos as well. The trickle down effect is just one gigantic awesome rabbit hole for getting things fixed. Thank you once again.

## Donations

For anyone else interested, my Patreon can be found here:

https://www.patreon.com/gloriouseggroll
