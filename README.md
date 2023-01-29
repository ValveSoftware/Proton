# proton-ge-custom

## (1) RUNNING NON-STEAM GAMES WITH PROTON OUTSIDE OF STEAM IS NOT SUPPORTED. DO NOT ASK FOR HELP WITH THIS:

Proton runs in a container, which uses a runtime environment and libraries specifically built for use within that container. Not running it as intended results in the container and therefore its runtime not being used, and severely breaks library compatibility.

It causes wine to search for libraries on your system instead of those it was built with/intended for within proton.

It may work, if enough libraries match, but it is not correct and not supportable due to library differences across distros.

If you want proton functionality -outside- of proton for non-steam games, I provide Wine-GE for usage with Lutris, found here:

https://github.com/gloriouseggroll/wine-ge-custom

## (2) If you have an issue that happens with my proton-GE build, provided FROM this repository, that does -not- happen on Valve's proton, please DO NOT open a bug report on Valve's bug tracker. Instead, contact me on Discord about the issue:

https://discord.gg/6y3BdzC

## (3)  Please note, this is a custom build of proton, and is -not- affiliated with Valve's proton.
## (4) Please also note I do not provide the flatpak of proton-GE, and I do not provide the AUR version of proton-GE. I will not assist with those.
## (5) The only version of proton-GE that I provide and will assist with builds of is the one provided within this repository, using the build system documented here.
## (6) I cannot validate the accuracy or functionality of other builds that have not been built using the build system included here.

## Table of contents

- [Overview](#overview)
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
- [Tested Games](#tested-games)

## Overview

This is my build of Proton with the most recent bleeding-edge Proton Experimental WINE.

Things it contains that Valve's Proton does not:

- Additional media foundation patches for better video playback support
- AMD FSR patches added directly to fullscreen hack that can be toggled with WINE_FULLSCREEN_FSR=1
- FSR Fake resolution patch details [here](https://github.com/GloriousEggroll/proton-ge-custom/pull/52)
- Nvidia CUDA support for PhysX and NVAPI
- Raw input mouse support
- 'protonfixes' system -- this is an automated system that applies per-game fixes (such as winetricks, envvars, EAC workarounds, overrides, etc).
- Various upstream WINE patches backported
- Various wine-staging patches applied as they become needed

## Notes

- Warframe is problematic with VSync. Turn it off or on in game, do not set to `Auto`
- Warframe needs a set a frame limit in game. Unlimited framerate can cause slowdowns
- Warframe on NVIDIA: you may need to disable GPU Particles in game otherwise the game can freeze randomly. On AMD they work fine

Full patches can be viewed in [protonprep-valve-staging.sh](patches/protonprep-valve-staging.sh).

## Installation

PLEASE NOTE: There are prerequisites for using this version of proton:

1. You must have the proper Vulkan drivers/packages installed on your system. VKD3D on AMD requires Mesa 22.0.0 or higher for the VK_KHR_dynamic_rendering extension. Check [here ](https://github.com/lutris/docs/blob/master/InstallingDrivers.md) for general driver installation guidance.

### Manual

#### Native

This section is for those that use the native version of Steam.

1. Download a release from the [Releases](https://github.com/GloriousEggroll/proton-ge-custom/releases) page.
2. Create a `~/.steam/root/compatibilitytools.d` directory if it does not exist.
3. Extract the release tarball into `~/.steam/root/compatibilitytools.d/`.
   * `tar -xf GE-ProtonVERSION.tar.gz -C ~/.steam/root/compatibilitytools.d/`
4. Restart Steam.
5. [Enable proton-ge-custom](#enabling).
  
    
*Terminal example based on Latest Release*
```bash
# make temp working directory
mkdir /tmp/proton-ge-custom
cd /tmp/proton-ge-custom

# download  tarball 
curl -sLOJ $(curl -s https://api.github.com/repos/GloriousEggroll/proton-ge-custom/releases/latest | grep browser_download_url | cut -d\" -f4 | egrep .tar.gz)

# download checksum 
curl -sLOJ $(curl -s https://api.github.com/repos/GloriousEggroll/proton-ge-custom/releases/latest | grep browser_download_url | cut -d\" -f4 | egrep .sha512sum) 

# check tarball with checksum
sha512sum -c *.sha512sum
# if result is ok, continue

# make steam directory if it does not exist
mkdir -p ~/.steam/root/compatibilitytools.d

# extract proton tarball to steam directory
tar -xf GE-Proton*.tar.gz -C ~/.steam/root/compatibilitytools.d/
echo "All done :)"
```

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
   * `tar -xf GE-ProtonVERSION.tar.gz -C ~/.var/app/com.valvesoftware.Steam/data/Steam/compatibilitytools.d/`
4. Restart Steam.
5. [Enable proton-ge-custom](#enabling).


## Building

1. Clone this repo by executing:

```sh
git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom
```

2. Drop any custom patches into patches/, then open patches/protonprep-valve-staging.sh and add a patch line for them under `#WINE CUSTOM PATCHES` in the same way the others are done.

3. Apply all of the patches in patches/ by running:

```sh
./patches/protonprep-valve-staging.sh &> patchlog.txt
```

in the main proton-ge-custom directory. Open `patchlog.txt` and search for "fail" to make sure no patch failures occured. An easy way to do this is like so:

```sh
grep -i fail patchlog.txt
grep -i error patchlog.txt 
```

4. Navigate to the parent directory containing the proton-ge-custom folder.

5. Type the following (note: if using docker instead of podman, change to --container-engine=docker):

```sh
mkdir build && cd build
../configure.sh --enable-ccache --build-name=SOME-BUILD-NAME-HERE --container-engine=podman
make redist &> log
```

Build will be placed within the build directory as SOME-BUILD-NAME-HERE.tar.gz.

## Enabling

1. Right click any game in Steam and click `Properties`.
2. At the bottom of the `Compatibility` tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the desired Proton version.
3. Launch the game.

## Modification

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
| <tt>enablenvapi</tt>  | <tt>PROTON_ENABLE_NVAPI</tt>   | Enable NVIDIA's NVAPI GPU support library. |
| <tt>noforcelgadd</tt> |                                | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
| <tt>cmdlineappend:</tt>|                               | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| <tt>seccomp</tt>      | <tt>PROTON_USE_SECCOMP</tt>    | Enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| <tt>nowritewatch</tt> | <tt>PROTON_NO_WRITE_WATCH</tt> | Disable support for memory write watches in ntdll. This is a very dangerous hack and should only be applied if you have verified that the game can operate without write watches. This improves performance for some very specific games (e.g. CoreRT-based games). |
|                       | <tt>WINE_FULLSCREEN_FSR</tt>   | Enable AMD FidelityFX Super Resolution (FSR) 1, use in conjunction with `WINE_FULLSCREEN_FSR_STRENGTH`. Only works in Vulkan games (DXVK and VKD3D-Proton included). Enabled by default since GE-Proton7-29|
|                       | <tt>WINE_FULLSCREEN_FSR_STRENGTH</tt> | AMD FidelityFX Super Resolution (FSR) strength, the default sharpening of 5 is enough without needing modification, but can be changed with 0-5 if wanted. 0 is the maximum sharpness, higher values mean less sharpening. 2 is the AMD recommended default and is set by GE-Proton by default. |
|                       | <tt>WINE_FULLSCREEN_FSR_CUSTOM_MODE</tt> | Set fake resolution of the screen. This can be useful in games that render in native resolution regardless of the selected resolution. Parameter `WIDTHxHEIGHT` |
|                       | <tt>WINE_DO_NOT_CREATE_DXGI_DEVICE_MANAGER</tt> | Set to 1 to enable. Required for video playback in some games to not be miscolored (usually tinted pink) |
## Credits

As many of you may or may not already know, there is a Credits section in the README for this Git repository. My proton-ge project contains some of my personal tweaks to Proton, but a large amount of the patches, rebases and fixes come from numerous people's projects. While I tend to get credited for my builds, a lot of the work that goes into it are from other people as well. I'd like to take some time to point a few of these people out of recognition. In future builds, I plan to make clearer and more informative Git commits, as well as attempt to give these people further crediting, as my README may not be sufficient in doing so.

### TKG (Etienne Juvigny)

- https://www.patreon.com/tkglitch
- https://github.com/Frogging-Family/wine-tkg-git

I and many others owe TKG. In regards to both WINE and Proton. He has dedicated a lot of time (2+ years at least) to rebasing WINE and Proton patches, as well as making his own contributions. Before he came along, I did some rebasing work, and mainly only released things for Arch. These days he almost always beats me to rebasing, and it saves myself and others a **lot** of work.

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

I also of course need to thank my fellow wine-staging maintainers: Alistair Leslie-Hughes, Zebediah Figura and Paul Gofman

They have contributed MANY patches to staging, far beyond what I have done, as well as kept up with regular rebasing. A lot of times when bug reports come to me, if it has to do with staging I end up testing and relaying information to these guys in order to get issues resolved.

### Reporters

Additionally, a thank you is owed to Andrew Aeikum (aeikum), and kisak (kisak-valve) for regularly keeping me in the loop with Proton and fsync patches, as well as accepting PRs I've made to fix Proton build system issues, or listening to bug reports on early Proton patches before they reach Proton release.

### Patrons

And finally - To all of my patrons that have supported me, thank you so much. It's because of you that I've been able to keep this project going, getting bug fixes reported, getting Proton/WINE issues fixed, getting various hardware and/or game fixes handled, and so on. Thanks to you, I have been able to use the spare budget in order to both help support the other people that make my project possible, as well as get things necessary for testing such as new game releases or specific hardware that hits odd issues. It's had a huge effect not just for this project, but a large trickle down effect.

My wine-staging co-maintainers are often able to ask me for testing games, or testing on different hardware if they don't have access to it. This also trickles into both Proton bug reporting AND Lutris bug reporting, as I'm able to provide bug testing and feedback and custom builds and upgrades to them as well. I'm also able to test driver related issues for things such as mesa and getting things reported + patched. This in turn leads to early patches for Mesa, the kernel, VKD3D, and other packages on my copr repos as well. The trickle down effect is just one gigantic awesome rabbit hole for getting things fixed. Thank you once again.

## Donations

For anyone else interested, my Patreon can be found here:

https://www.patreon.com/gloriouseggroll


## Tested Games

| Name                                                | SteamDB Link                                 | ProntonDB Link                               | Has Protonfixes    | Has Media Foundation fixes |
| --------------------------------------------------- | -------------------------------------------- | -------------------------------------------- | ------------------ | -------------------------- |
| Acceleration of SUGURI 2                            | [SteamDB](https://steamdb.info/app/390710)   | [ProtonDB](https://protondb.com/app/390710)  | :x:                | :heavy_check_mark:         |
| Age of Empires: Definitive Edition                  | [SteamDB](https://steamdb.info/app/1017900)  | [ProtonDB](https://protondb.com/app/1017900) | :heavy_check_mark: | :x:                        |
| Age of Empires II: Definitive Edition               | [SteamDB](https://steamdb.info/app/813780)   | [ProtonDB](https://protondb.com/app/813780)  | :heavy_check_mark: | :x:                        |
| Age of Empires III: Definitive Edition              | [SteamDB](https://steamdb.info/app/933110)   | [ProtonDB](https://protondb.com/app/933110)  | :heavy_check_mark: | :x:                        |
| Age of Mythology: Extended Edition                  | [SteamDB](https://steamdb.info/app/266840)   | [ProtonDB](https://protondb.com/app/266840)  | :heavy_check_mark: | :x:                        |
| AirMech Strike                                      | [SteamDB](https://steamdb.info/app/206500)   | [ProtonDB](https://protondb.com/app/206500)  | :heavy_check_mark: | :x:                        |
| American Fugitive                                   | [SteamDB](https://steamdb.info/app/934780)   | [ProtonDB](https://protondb.com/app/934780)  | :x:                | :heavy_check_mark:         |
| Apex Legends                                        | [SteamDB](https://steamdb.info/app/1172470)  | [ProtonDB](https://protondb.com/app/1172470) | :heavy_check_mark: | :x:                        |
| Arkania                                             |                                              |                                              | :heavy_check_mark: | :x:                        |
| Assetto Corsa                                       | [SteamDB](https://steamdb.info/app/244210)   | [ProtonDB](https://protondb.com/app/244210)  | :heavy_check_mark: | :x:                        |
| Astroneer                                           | [SteamDB](https://steamdb.info/app/361420)   | [ProtonDB](https://protondb.com/app/361420)  | :x:                | :heavy_check_mark:         |
| Aven Colony                                         | [SteamDB](https://steamdb.info/app/484900)   | [ProtonDB](https://protondb.com/app/484900)  | :x:                | :heavy_check_mark:         |
| Baldur's Gate 3                                     | [SteamDB](https://steamdb.info/app/1086940)  | [ProtonDB](https://protondb.com/app/1086940) | :heavy_check_mark: | :x:                        |
| Batman Arkham Asylum                                | [SteamDB](https://steamdb.info/app/35140)    | [ProtonDB](https://protondb.com/app/35140)   | :heavy_check_mark: | :x:                        |
| Batman Arkham Knight                                | [SteamDB](https://steamdb.info/app/208650)   | [ProtonDB](https://protondb.com/app/208650)  | :heavy_check_mark: | :x:                        |
| Battlefield: Bad Company 2                          | [SteamDB](https://steamdb.info/app/24960)    | [ProtonDB](https://protondb.com/app/24960)   | :heavy_check_mark: | :x:                        |
| BeamNG.drive                                        | [SteamDB](https://steamdb.info/app/284160)   | [ProtonDB](https://protondb.com/app/284160)  | :heavy_check_mark: | :x:                        |
| Bejeweled 3                                         | [SteamDB](https://steamdb.info/app/78000)    | [ProtonDB](https://protondb.com/app/78000)   | :heavy_check_mark: | :x:                        |
| Beyond Good and Evil                                | [SteamDB](https://steamdb.info/app/15130)    | [ProtonDB](https://protondb.com/app/15130)   | :heavy_check_mark: | :x:                        |
| BioShock 2 Remastered                               | [SteamDB](https://steamdb.info/app/409720)   | [ProtonDB](https://protondb.com/app/409720)  | :heavy_check_mark: | :x:                        |
| BIT.TRIP BEAT                                       | [SteamDB](https://steamdb.info/app/205070)   | [ProtonDB](https://protondb.com/app/205070)  | :heavy_check_mark: | :x:                        |
| BIT.TRIP RUNNER                                     | [SteamDB](https://steamdb.info/app/63710)    | [ProtonDB](https://protondb.com/app/63710)   | :heavy_check_mark: | :x:                        |
| BlazBlue Centralfiction                             | [SteamDB](https://steamdb.info/app/586140)   | [ProtonDB](https://protondb.com/app/586140)  | :x:                | :heavy_check_mark:         |
| BlazBlue: Chronophantasma Extend                    | [SteamDB](https://steamdb.info/app/388750)   | [ProtonDB](https://protondb.com/app/388750)  | :heavy_check_mark: | :x:                        |
| Blood and Bacon                                     | [SteamDB](https://steamdb.info/app/434570)   | [ProtonDB](https://protondb.com/app/434570)  | :heavy_check_mark: | :x:                        |
| Bloodstained: Ritual of the Night                   | [SteamDB](https://steamdb.info/app/692850)   | [ProtonDB](https://protondb.com/app/692850)  | :x:                | :heavy_check_mark:         |
| Borderlands 2                                       | [SteamDB](https://steamdb.info/app/49520)    | [ProtonDB](https://protondb.com/app/49520)   | :heavy_check_mark: | :x:                        |
| Borderlands 3                                       | [SteamDB](https://steamdb.info/app/397540)   | [ProtonDB](https://protondb.com/app/397540)  | :heavy_check_mark: | :heavy_check_mark:         |
| Call of Duty (2003)                                 | [SteamDB](https://steamdb.info/app/2620)     | [ProtonDB](https://protondb.com/app/2620)    | :heavy_check_mark: | :x:                        |
| Call of Duty: Black Ops III                         | [SteamDB](https://steamdb.info/app/311210)   | [ProtonDB](https://protondb.com/app/311210)  | :x:                | :heavy_check_mark:         |
| Catherine Classic                                   | [SteamDB](https://steamdb.info/app/893180)   | [ProtonDB](https://protondb.com/app/893180)  | :heavy_check_mark: | :x:                        |
| Chantelise - A Tale of Two Sisters                  | [SteamDB](https://steamdb.info/app/70420)    | [ProtonDB](https://protondb.com/app/70420)   | :heavy_check_mark: | :x:                        |
| Conan Exiles                                        | [SteamDB](https://steamdb.info/app/440900)   | [ProtonDB](https://protondb.com/app/440900)  | :heavy_check_mark: | :x:                        |
| Crashday Redline Edition                            | [SteamDB](https://steamdb.info/app/508980)   | [ProtonDB](https://protondb.com/app/508980)  | :heavy_check_mark: | :x:                        |
| Crazy Machines 3                                    | [SteamDB](https://steamdb.info/app/351920)   | [ProtonDB](https://protondb.com/app/351920)  | :x:                | :heavy_check_mark:         |
| Cryostasis                                          | [SteamDB](https://steamdb.info/app/7850)     | [ProtonDB](https://protondb.com/app/7850)    | :heavy_check_mark: | :x:                        |
| Crysis                                              | [SteamDB](https://steamdb.info/app/17300)    | [ProtonDB](https://protondb.com/app/17300)   | :heavy_check_mark: | :x:                        |
| Danganronpa V3: Killing Harmony                     | [SteamDB](https://steamdb.info/app/567640)   | [ProtonDB](https://protondb.com/app/567640)  | :x:                | :heavy_check_mark:         |
| Dark Souls: Prepare To Die Edition                  | [SteamDB](https://steamdb.info/app/211420)   | [ProtonDB](https://protondb.com/app/211420)  | :heavy_check_mark: | :x:                        |
| Dark Souls: Remastered                              | [SteamDB](https://steamdb.info/app/570940)   | [ProtonDB](https://protondb.com/app/570940)  | :heavy_check_mark: | :x:                        |
| DEAD OR ALIVE 5 Last Round: Core Fighters           | [SteamDB](https://steamdb.info/app/311730)   | [ProtonDB](https://protondb.com/app/311730)  | :heavy_check_mark: | :x:                        |
| Destiny 2                                           | [SteamDB](https://steamdb.info/app/1085660)  | [ProtonDB](https://protondb.com/app/1085660) | :heavy_check_mark: | :x:                        |
| Devil May Cry 5                                     | [SteamDB](https://steamdb.info/app/601150)   | [ProtonDB](https://protondb.com/app/601150)  | :x:                | :heavy_check_mark:         |
| Divinity Original Sin 2 - Definitive Edition        | [SteamDB](https://steamdb.info/app/435150)   | [ProtonDB](https://protondb.com/app/435150)  | :heavy_check_mark: | :x:                        |
| Doom (2016)                                         | [SteamDB](https://steamdb.info/app/379720)   | [ProtonDB](https://protondb.com/app/379720)  | :heavy_check_mark: | :x:                        |
| DRAGON BALL FighterZ                                | [SteamDB](https://steamdb.info/app/678950)   | [ProtonDB](https://protondb.com/app/678950)  | :heavy_check_mark: | :x:                        |
| Duck Game                                           | [SteamDB](https://steamdb.info/app/312530)   | [ProtonDB](https://protondb.com/app/312530)  | :heavy_check_mark: | :x:                        |
| Dungeons & Dragons Online                           | [SteamDB](https://steamdb.info/app/206480)   | [ProtonDB](https://protondb.com/app/206480)  | :heavy_check_mark: | :x:                        |
| Dusty Revenge: Co-Op Edition                        | [SteamDB](https://steamdb.info/app/252430)   | [ProtonDB](https://protondb.com/app/252430)  | :heavy_check_mark: | :x:                        |
| eFootball PES 2021 SEASON UPDATE                    | [SteamDB](https://steamdb.info/app/1259970)  | [ProtonDB](https://protondb.com/app/1259970) | :heavy_check_mark: | :x:                        |
| Endless Legend                                      | [SteamDB](https://steamdb.info/app/289130)   | [ProtonDB](https://protondb.com/app/289130)  | :heavy_check_mark: | :x:                        |
| Evil Genius 2: World Domination                     | [SteamDB](https://steamdb.info/app/700600)   | [ProtonDB](https://protondb.com/app/700600)  | :heavy_check_mark: | :x:                        |
| Fall Guys: Ultimate Knockout                        | [SteamDB](https://steamdb.info/app/1097150)  | [ProtonDB](https://protondb.com/app/1097150) | :heavy_check_mark: | :x:                        |
| Fallout 3                                           | [SteamDB](https://steamdb.info/app/22300)    | [ProtonDB](https://protondb.com/app/22300)   | :heavy_check_mark: | :x:                        |
| Fallout 4                                           | [SteamDB](https://steamdb.info/app/377160)   | [ProtonDB](https://protondb.com/app/377160)  | :heavy_check_mark: | :x:                        |
| Far Cry 5                                           | [SteamDB](https://steamdb.info/app/552520)   | [ProtonDB](https://protondb.com/app/552520)  | :heavy_check_mark: | :x:                        |
| FINAL FANTASY X/X-2 HD Remaster                     | [SteamDB](https://steamdb.info/app/359870)   | [ProtonDB](https://protondb.com/app/359870)  | :heavy_check_mark: | :x:                        |
| FINAL FANTASY IX                                    | [SteamDB](https://steamdb.info/app/377840/) | [ProtonDB](https://protondb.com/app/377840)  | :heavy_check_mark: | :x:                        |
| FINAL FANTASY XIII                                  | [SteamDB](https://steamdb.info/app/292120/) | [ProtonDB](https://protondb.com/app/292120)  | :heavy_check_mark: | :x:                        |
| FINAL FANTASY XIV Online                            | [SteamDB](https://steamdb.info/app/39210/)  | [ProtonDB](https://protondb.com/app/39210)   | :heavy_check_mark: | :x:                        |
| Forts                                               | [SteamDB](https://steamdb.info/app/410900)   | [ProtonDB](https://protondb.com/app/410900)  | :heavy_check_mark: | :x:                        |
| Gears 5                                             | [SteamDB](https://steamdb.info/app/1097840)  | [ProtonDB](https://protondb.com/app/1097840) | :heavy_check_mark: | :x:                        |
| Gothic 1                                            | [SteamDB](https://steamdb.info/app/65540)    | [ProtonDB](https://protondb.com/app/65540)   | :heavy_check_mark: | :x:                        |
| Gothic II: Gold Edition                             | [SteamDB](https://steamdb.info/app/39510)    | [ProtonDB](https://protondb.com/app/39510)   | :heavy_check_mark: | :x:                        |
| Gothic 3                                            | [SteamDB](https://steamdb.info/app/39500)    | [ProtonDB](https://protondb.com/app/39500)   | :heavy_check_mark: | :x:                        |
| Gothic 3: Forsaken Gods Enhanced Edition            | [SteamDB](https://steamdb.info/app/65600)    | [ProtonDB](https://protondb.com/app/65600)   | :heavy_check_mark: | :x:                        |
| Grim Dawn                                           | [SteamDB](https://steamdb.info/app/219990)   | [ProtonDB](https://protondb.com/app/219990)  | :heavy_check_mark: | :x:                        |
| GT Legends                                          | [SteamDB](https://steamdb.info/app/44690)    | [ProtonDB](https://protondb.com/app/44690)   | :heavy_check_mark: | :x:                        |
| GUILTY GEAR XX ACCENT CORE PLUS R                   | [SteamDB](https://steamdb.info/app/348550)   | [ProtonDB](https://protondb.com/app/348550)  | :heavy_check_mark: | :x:                        |
| Halo: The Master Chief Collection                   | [SteamDB](https://steamdb.info/app/976730)   | [ProtonDB](https://protondb.com/app/976730)  | :heavy_check_mark: | :x:                        |
| Haven                                               | [SteamDB](https://steamdb.info/app/983970)   | [ProtonDB](https://protondb.com/app/983970)  | :x:                | :heavy_check_mark:         |
| Heavy Rain                                          | [SteamDB](https://steamdb.info/app/960910)   | [ProtonDB](https://protondb.com/app/960910)  | :heavy_check_mark: | :x:                        |
| HighFleet                                           | [SteamDB](https://steamdb.info/app/1434950)  | [ProtonDB](https://protondb.com/app/1434950) | :heavy_check_mark: | :x:                        |
| IMSCARED                                            | [SteamDB](https://steamdb.info/app/429720)   | [ProtonDB](https://protondb.com/app/429720)  | :heavy_check_mark: | :x:                        |
| Industries of Titan                                 | [SteamDB](https://steamdb.info/app/427940)   | [ProtonDB](https://protondb.com/app/427940)  | :x:                | :heavy_check_mark:         |
| Injustice 2                                         | [SteamDB](https://steamdb.info/app/627270)   | [ProtonDB](https://protondb.com/app/627270)  | :heavy_check_mark: | :heavy_check_mark:         |
| JUMP FORCE                                          | [SteamDB](https://steamdb.info/app/816020)   | [ProtonDB](https://protondb.com/app/816020)  | :heavy_check_mark: | :x:                        |
| L.A. Noire                                          | [SteamDB](https://steamdb.info/app/110800)   | [ProtonDB](https://protondb.com/app/110800)  | :heavy_check_mark: | :x:                        |
| LEGO Batman 2: DC Super Heroes                      | [SteamDB](https://steamdb.info/app/213330)   | [ProtonDB](https://protondb.com/app/213330)  | :heavy_check_mark: | :x:                        |
| LEGO The Lord of the Rings                          | [SteamDB](https://steamdb.info/app/214510)   | [ProtonDB](https://protondb.com/app/214510)  | :heavy_check_mark: | :x:                        |
| Little Nightmares                                   | [SteamDB](https://steamdb.info/app/424840)   | [ProtonDB](https://protondb.com/app/424840)  | :heavy_check_mark: | :x:                        |
| Lord of the Rings: War in the North                 | [SteamDB](https://steamdb.info/app/32800)    | [ProtonDB](https://protondb.com/app/32800)   | :heavy_check_mark: | :x:                        |
| Mafia II Definitive Edition                         | [SteamDB](https://steamdb.info/app/1030830)  | [ProtonDB](https://protondb.com/app/1030830) | :heavy_check_mark: | :x:                        |
| Marvel's Avengers                                   | [SteamDB](https://steamdb.info/app/997070)   | [ProtonDB](https://protondb.com/app/997070)  | :heavy_check_mark: | :x:                        |
| Mass Effect Legendary Edition                       | [SteamDB](https://steamdb.info/app/1328670)  | [ProtonDB](https://protondb.com/app/1328670) | :heavy_check_mark: | :x:                        |
| Metro 2033                                          | [SteamDB](https://steamdb.info/app/43110)    | [ProtonDB](https://protondb.com/app/43110)   | :heavy_check_mark: | :x:                        |
| Microsoft Flight Simulator Game of the Year Edition | [SteamDB](https://steamdb.info/app/1250410)  | [ProtonDB](https://protondb.com/app/1250410) | :heavy_check_mark: | :x:                        |
| Monster Hunter Rise                                 | [SteamDB](https://steamdb.info/app/1446780)  | [ProtonDB](https://protondb.com/app/1446780) | :x:                | :heavy_check_mark:         |
| Mortal Kombat 11                                    | [SteamDB](https://steamdb.info/app/976310)   | [ProtonDB](https://protondb.com/app/976310)  | :heavy_check_mark: | :heavy_check_mark:         |
| Mortal Kombat X                                     | [SteamDB](https://steamdb.info/app/307780)   | [ProtonDB](https://protondb.com/app/307780)  | :heavy_check_mark: | :x:                        |
| Mutant Year Zero: Road to Eden                      | [SteamDB](https://steamdb.info/app/760060)   | [ProtonDB](https://protondb.com/app/760060)  | :x:                | :heavy_check_mark:         |
| NARUTO TO BORUTO: SHINOBI STRIKER                   | [SteamDB](https://steamdb.info/app/633230)   | [ProtonDB](https://protondb.com/app/633230)  | :heavy_check_mark: | :x:                        |
| Nier Replicant                                      | [SteamDB](https://steamdb.info/app/1113560)  | [ProtonDB](https://protondb.com/app/1113560) | :x:                | :heavy_check_mark:         |
| Oceanhorn: Monster of Uncharted Seas                | [SteamDB](https://steamdb.info/app/339200)   | [ProtonDB](https://protondb.com/app/339200)  | :heavy_check_mark: | :x:                        |
| Oddworld: Munch's Oddysee                           | [SteamDB](https://steamdb.info/app/15740)    | [ProtonDB](https://protondb.com/app/15740)   | :heavy_check_mark: | :x:                        |
| Order of Battle: World War II                       | [SteamDB](https://steamdb.info/app/312450)   | [ProtonDB](https://protondb.com/app/312450)  | :heavy_check_mark: | :x:                        |
| Path of Exile                                       | [SteamDB](https://steamdb.info/app/238960)   | [ProtonDB](https://protondb.com/app/238960)  | :heavy_check_mark: | :x:                        |
| PC Building Simulator                               | [SteamDB](https://steamdb.info/app/621060)   | [ProtonDB](https://protondb.com/app/621060)  | :x:                | :heavy_check_mark:         |
| Persona 4 Golden                                    | [SteamDB](https://steamdb.info/app/1113000)  | [ProtonDB](https://protondb.com/app/1113000) | :heavy_check_mark: | :heavy_check_mark:         |
| PixARK                                              | [SteamDB](https://steamdb.info/app/593600)   | [ProtonDB](https://protondb.com/app/593600)  | :heavy_check_mark: | :x:                        |
| Plants vs. Zombies GOTY Edition                     | [SteamDB](https://steamdb.info/app/3590)     | [ProtonDB](https://protondb.com/app/3590)    | :heavy_check_mark: | :x:                        |
| Potatoman Seeks the Troof                           | [SteamDB](https://steamdb.info/app/328500)   | [ProtonDB](https://protondb.com/app/328500)  | :heavy_check_mark: | :x:                        |
| Power Rangers: Battle for the Grid                  | [SteamDB](https://steamdb.info/app/1110100)  | [ProtonDB](https://protondb.com/app/1110100) | :x:                | :heavy_check_mark:         |
| Progressbar95                                       | [SteamDB](https://steamdb.info/app/1304550)  | [ProtonDB](https://protondb.com/app/1304550) | :heavy_check_mark: | :x:                        |
| Putt-Putt: Pep's Birthday Surprise                  | [SteamDB](https://steamdb.info/app/294700)   | [ProtonDB](https://protondb.com/app/294700)  | :heavy_check_mark: | :x:                        |
| Recettear: An Item Shop's Tale                      | [SteamDB](https://steamdb.info/app/70400)    | [ProtonDB](https://protondb.com/app/70400)   | :heavy_check_mark: | :x:                        |
| Red Dead Redemption 2                               | [SteamDB](https://steamdb.info/app/1174180)  | [ProtonDB](https://protondb.com/app/1174180) | :heavy_check_mark: | :x:                        |
| Remnant: From the Ashes                             | [SteamDB](https://steamdb.info/app/617290)   | [ProtonDB](https://protondb.com/app/617290)  | :x:                | :heavy_check_mark:         |
| Resident Evil 0                                     | [SteamDB](https://steamdb.info/app/339340)   | [ProtonDB](https://protondb.com/app/339340)  | :heavy_check_mark: | :heavy_check_mark:         |
| Resident Evil                                       | [SteamDB](https://steamdb.info/app/304240)   | [ProtonDB](https://protondb.com/app/304240)  | :heavy_check_mark: | :heavy_check_mark:         |
| Resident Evil 2 Remastered                          | [SteamDB](https://steamdb.info/app/883710)   | [ProtonDB](https://protondb.com/app/883710)  | :x:                | :heavy_check_mark:         |
| Resident Evil 3 Remastered                          | [SteamDB](https://steamdb.info/app/952060)   | [ProtonDB](https://protondb.com/app/952060)  | :x:                | :heavy_check_mark:         |
| Resident Evil 5                                     | [SteamDB](https://steamdb.info/app/21690)    | [ProtonDB](https://protondb.com/app/21690)   | :heavy_check_mark: | :heavy_check_mark:         |
| Resident Evil 6                                     | [SteamDB](https://steamdb.info/app/221040)   | [ProtonDB](https://protondb.com/app/221040)  | :heavy_check_mark: | :heavy_check_mark:         |
| Resident Evil 7 Biohazard                           | [SteamDB](https://steamdb.info/app/418370)   | [ProtonDB](https://protondb.com/app/418370)  | :x:                | :heavy_check_mark:         |
| Resident Evil 8 Village                             | [SteamDB](https://steamdb.info/app/1196590)  | [ProtonDB](https://protondb.com/app/1196590) | :x:                | :heavy_check_mark:         |
| Resident Evil Revelations                           | [SteamDB](https://steamdb.info/app/222480)   | [ProtonDB](https://protondb.com/app/222480)  | :heavy_check_mark: | :heavy_check_mark:         |
| Resident Evil Revelations 2                         | [SteamDB](https://steamdb.info/app/287290)   | [ProtonDB](https://protondb.com/app/287290)  | :heavy_check_mark: | :heavy_check_mark:         |
| Rise of Nations: Extended Edition                   | [SteamDB](https://steamdb.info/app/287450)   | [ProtonDB](https://protondb.com/app/287450)  | :heavy_check_mark: | :x:                        |
| Sacred 2 Gold                                       | [SteamDB](https://steamdb.info/app/225640)   | [ProtonDB](https://protondb.com/app/225640)  | :x:                | :heavy_check_mark:         |
| Scrap Mechanic                                      | [SteamDB](https://steamdb.info/app/387990)   | [ProtonDB](https://protondb.com/app/387990)  | :x:                | :heavy_check_mark:         |
| Serious Sam 4                                       | [SteamDB](https://steamdb.info/app/257420)   | [ProtonDB](https://protondb.com/app/257420)  | :x:                | :heavy_check_mark:         |
| Serious Sam: The Random Encounter                   | [SteamDB](https://steamdb.info/app/201480)   | [ProtonDB](https://protondb.com/app/201480)  | :x:                | :heavy_check_mark:         |
| Seven: Enhanced Edition                             | [SteamDB](https://steamdb.info/app/471010)   | [ProtonDB](https://protondb.com/app/471010)  | :x:                | :heavy_check_mark:         |
| Sleeping Dogs: Definitive Edition                   | [SteamDB](https://steamdb.info/app/307690)   | [ProtonDB](https://protondb.com/app/307690)  | :x:                | :heavy_check_mark:         |
| Sonic CD                                            | [SteamDB](https://steamdb.info/app/200940)   | [ProtonDB](https://protondb.com/app/200940)  | :x:                | :heavy_check_mark:         |
| SOULCALIBUR VI                                      | [SteamDB](https://steamdb.info/app/544750)   | [ProtonDB](https://protondb.com/app/544750)  | :heavy_check_mark: | :heavy_check_mark:         |
| Space Engineers                                     | [SteamDB](https://steamdb.info/app/244850)   | [ProtonDB](https://protondb.com/app/244850)  | :x:                | :heavy_check_mark:         |
| Spyro Reignited Trilogy                             | [SteamDB](https://steamdb.info/app/996580)   | [ProtonDB](https://protondb.com/app/996580)  | :x:                | :heavy_check_mark:         |
| STAR WARS Galactic Battlegrounds Saga               | [SteamDB](https://steamdb.info/app/356500)   | [ProtonDB](https://protondb.com/app/356500)  | :heavy_check_mark: | :x:                        |
| Stealth Inc 2: A Game of Clones                     | [SteamDB](https://steamdb.info/app/329380)   | [ProtonDB](https://protondb.com/app/329380)  | :x:                | :heavy_check_mark:         |
| Strange Brigade                                     | [SteamDB](https://steamdb.info/app/312670)   | [ProtonDB](https://protondb.com/app/312670)  | :x:                | :heavy_check_mark:         |
| Super Lucky's Tale                                  | [SteamDB](https://steamdb.info/app/847360)   | [ProtonDB](https://protondb.com/app/847360)  | :x:                | :heavy_check_mark:         |
| Super Meat Boy                                      | [SteamDB](https://steamdb.info/app/40800)    | [ProtonDB](https://protondb.com/app/40800)   | :x:                | :heavy_check_mark:         |
| Syberia                                             | [SteamDB](https://steamdb.info/app/46500)    | [ProtonDB](https://protondb.com/app/46500)   | :x:                | :heavy_check_mark:         |
| Tesla Effect: A Tex Murphy Adventure                | [SteamDB](https://steamdb.info/app/261510)   | [ProtonDB](https://protondb.com/app/261510)  | :x:                | :heavy_check_mark:         |
| The Bureau: XCOM Declassified                       | [SteamDB](https://steamdb.info/app/65930)    | [ProtonDB](https://protondb.com/app/65930)   | :x:                | :heavy_check_mark:         |
| The Elder Scrolls Online                            | [SteamDB](https://steamdb.info/app/306130)   | [ProtonDB](https://protondb.com/app/306130)  | :x:                | :heavy_check_mark:         |
| The Elder Scrolls V: Skyrim                         | [SteamDB](https://steamdb.info/app/72850)    | [ProtonDB](https://protondb.com/app/72850)   | :x:                | :heavy_check_mark:         |
| The Elder Scrolls V: Skyrim Special Edition         | [SteamDB](https://steamdb.info/app/489830)   | [ProtonDB](https://protondb.com/app/489830)  | :x:                | :heavy_check_mark:         |
| The Evil Within                                     | [SteamDB](https://steamdb.info/app/268050)   | [ProtonDB](https://protondb.com/app/268050)  | :x:                | :heavy_check_mark:         |
| The Lord of the Rings Online                        | [SteamDB](https://steamdb.info/app/212500)   | [ProtonDB](https://protondb.com/app/212500)  | :x:                | :heavy_check_mark:         |
| Tokyo Xanadu eX+                                    | [SteamDB](https://steamdb.info/app/587260)   | [ProtonDB](https://protondb.com/app/587260)  | :x:                | :heavy_check_mark:         |
| Tomb Raider                                         | [SteamDB](https://steamdb.info/app/203160)   | [ProtonDB](https://protondb.com/app/203160)  | :x:                | :heavy_check_mark:         |
| Tomb Raider I                                       | [SteamDB](https://steamdb.info/app/224960)   | [ProtonDB](https://protondb.com/app/224960)  | :x:                | :heavy_check_mark:         |
| Tree of Savior                                      | [SteamDB](https://steamdb.info/app/372000)   | [ProtonDB](https://protondb.com/app/372000)  | :x:                | :heavy_check_mark:         |
| Ultimate Marvel VS. Capcom 3                        | [SteamDB](https://steamdb.info/app/357190)   | [ProtonDB](https://protondb.com/app/357190)  | :x:                | :heavy_check_mark:         |
| Warframe                                            | [SteamDB](https://steamdb.info/app/230410)   | [ProtonDB](https://protondb.com/app/230410)  | :x:                | :heavy_check_mark:         |
| Wasteland 3                                         | [SteamDB](https://steamdb.info/app/719040)   | [ProtonDB](https://protondb.com/app/719040)  | :x:                | :heavy_check_mark:         |
| Watch_Dogs                                          | [SteamDB](https://steamdb.info/app/243470)   | [ProtonDB](https://protondb.com/app/243470)  | :x:                | :heavy_check_mark:         |
| Watch_Dogs 2                                        | [SteamDB](https://steamdb.info/app/447040)   | [ProtonDB](https://protondb.com/app/447040)  | :x:                | :heavy_check_mark:         |
| WORLD OF HORROR                                     | [SteamDB](https://steamdb.info/app/913740)   | [ProtonDB](https://protondb.com/app/913740)  | :x:                | :heavy_check_mark:         |
| Yakuza 0                                            | [SteamDB](https://steamdb.info/app/638970)   | [ProtonDB](https://protondb.com/app/638970)  | :x:                | :heavy_check_mark:         |
| Yakuza Kiwami                                       | [SteamDB](https://steamdb.info/app/834530)   | [ProtonDB](https://protondb.com/app/834530)  | :x:                | :heavy_check_mark:         |
| Yesterday Origins                                   | [SteamDB](https://steamdb.info/app/465280)   | [ProtonDB](https://protondb.com/app/465280)  | :x:                | :heavy_check_mark:         |
| You Need A Budget 4 (YNAB)                          | [SteamDB](https://steamdb.info/app/227320)   | [ProtonDB](https://protondb.com/app/227320)  | :x:                | :heavy_check_mark:         |
