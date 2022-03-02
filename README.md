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
	- [Protonfixes](#protonfixes)
	- [Media Foundation Fixes (fully working or playable)](#media-foundation-fixes-fully-working-or-playable)
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

This is my build of Proton with the most recent bleeding-edge proton experimental WINE.

Things it contains that Valve's proton does not:

- DXVK patched with Async, which can be toggled with DXVK_ASYNC=1
- Additional media foundation patches for better video playback support
- AMD FSR patches added directly to fullscreen hack that can be toggled with WINE_FULLSCREEN_FSR=1
- FSR Fake resolution patch (details here: https://github.com/GloriousEggroll/proton-ge-custom/pull/52)
- Nvidia CUDA support for phsyx and nvapi
- Raw input mouse support
- fix for Mech Warrior Online
- fix for Asseto Corsa HUD
- fix for MK11 crash in single player
- fix for Killer Instinct Vulkan related crash
- fix for Cities XXL patches
- 'protonfixes' system -- this is an automated system that applies per-game fixes (such as winetricks, envvars, EAC workarounds, overrides, etc).
- various upstream WINE patches backported
- various wine-staging patches applied as they become needed

## Protonfixes

- Age of Empires II: DE
- Batman Arkham Asylum
- Catherine Classic
- Dark Sould Prepare To Die Edition
- Dark Souls Remastered
- Destiny 2
- Dungeons & Dragons Online
- Age Of Empire 3: Complete Collection
- Age of Empires: DE
- Age of Mythology: Extended Edition
- AirMech Strike
- Apex Legends
- Arkania
- Assetto Corsa
- Baldur's Gate 3
- Batman Arkham Knight
- Battlefield: Bad Company 2
- BeamNG.drive
- Bejeweled 3
- Beyond Good and Evil
- BioShock 2 Remastered
- BIT.TRIP BEAT
- BIT.TRIP RUNNER
- Blood and Bacon
- Borderlands 2
- Borderlands 3
- Call of Duty (2003)
- Chantelise - A Tale of Two Sisters
- Chronophantasma Extend
- Conan Exiles
- Crashday Redline Edition
- Cryostasis
- Crysis
- DEAD OR ALIVE 5 Last Round
- Divinity Original Sin 2
- Doom 2016
- DRAGON BALL FighterZ
- Duck Game
- Dusty Revenge: Co-Op Edition
- Endless Legend
- Evil Genius 2
- Fallout 3
- Fallout 4
- FarCry 5
- FFXIV
- FFX/X-2 HD Remaster
- FINAL FANTASY IX
- Final Fantasy XIII
- Flight Simulator 2020
- Forts
- Gears 5
- Gothic 1
- Gothic 3
- Gothic 3 Forsaken Gods Enhanced Edition
- Grim Dawn
- GT Legends
- Guilty Gear Accent Core Plus R
- Heavy Rain
- IMSCARED
- JUMP FORCE
- L.A. Noire
- LEGO Batman 2: DC Super Heroes
- LEGO The Lord of the Rings
- Little Nightmares
- Lord of the Rings: War in the North
- Mafia II Definitive Edition
- Metro 2033
- Mortal Kombat X
- Naruto To Boruto
- Oddworld: Munch's Oddysee
- Order of Battle: World War II
- Path of Exile
- Persona 4 Golden
- Pes 2021
- PixARK
- Plants vs. Zombies: Game of the Year
- Potatoman Seeks the Troof
- Progressbar95
- Putt-Putt: Pep's Birthday Surprise
- Recettear: An Item Shop's Tale
- Red Dead Redemption 2
- Resident Evil
- Resident Evil 0
- Resident Evil 5
- Resident Evil 6
- Resident Evil Revelations
- Resident Evil Revelations 2
- Rise of Nations: Extended Edition
- Sacred 2 Gold
- Serious Sam 4
- Serious Sam: The Random Encounter
- Skyrim
- Skyrim SE
- Sleeping Dogs: Definitive Edition
- Sonic CD
- Soulcalibur VI
- Space Engineers
- STAR WARS Galactic Battlegrounds Saga
- Strange Brigade
- SUGURI 2
- Super Meat Boy
- Syberia
- Tesla Effect
- The Bureau: XCOM Declassified
- The Elder Scrolls Online
- The Evil Within(268050)
- Tomb Raider 2013
- Tomb Raider I
- Watch_Dogs
- Watch_Dogs 2
- WORLD OF HORROR
- Yakuza 0
- Yakuza Kiwami
- Yesterday Origins
- You Need a Budget 4
- Halo:MCC
- HighFleet
- Injustice 2
- Marvel's Avengers
- Mass Effect Legendary Edition
- Mortal Kombat 11
- Stealth Inc 2: A Game of Clones
- The Lord of the Rings Online
- Tree Of Savior
- Warframe
- Oceanhorn: Monster of Uncharted Seas
- Arkania
- Gothic II: Gold Edition


## Media Foundation fixes (Fully working or playable)

- Spyro Reignited Trilogy
- Mortal Kombat 11
- Injustice 2
- Power Rangers: Battle for the Grid
- Borderlands 3
- Resident Evil 0
- Resident Evil
- Resident Evil 2 Remastered
- Resident Evil 3 Remastered
- Resident Evil 5
- Resident Evil 6
- Resident Evil 7
- Resident Evil 8
- Resident Evil Revalations
- Resident Evil Revalations 2
- Persona 4 Golden
- PC Building Simulator
- Dangonronpa V3
- Super Lucky's Tale
- Remnant: From the Ashes
- BlazBlue Centralfiction
- Bloodstained: Ritual of the Night
- Crazy Machines 3
- Devil May Cry 5
- Wasteland 3
- Mutant Year Zero
- Ultimate Marvel Vs. Capcom 3
- Industry of Titan
- Call of Duty Black Ops III
- Tokyo Xanady Xe+
- Haven
- Nier Replicant
- Scrap Mechanic
- Aven Colony
- American Fugitive
- Asrtonner
- Soul Caliber VI
- Monster Hunter Rise
- Seven: Days Gone

## Notes

- Warframe is problematic with VSync. Turn it off or on in game, do not set to `Auto`
- Warframe needs a set a frame limit in game. Unlimited framerate can cause slowdowns
- Warframe on Nvidia: you may need to disable GPU Particles in game otherwise the game can freeze randomly. On AMD they work fine

Full patches can be viewed in [protonprep-valve.sh](patches/protonprep-valve.sh).

## Installation

PLEASE NOTE: There are prerequisites for using this version of proton:

1. You must have vulkan gpu drivers/packages installed properly on your system. See https://github.com/lutris/docs/blob/master/InstallingDrivers.md

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

1. Clone this repo by executing:

```sh
	git clone --recurse-submodules http://github.com/gloriouseggroll/proton-ge-custom
```

4. Drop any custom patches into patches/, then open patches/protonprep-valve.sh and add a patch line for them under `#WINE CUSTOM PATCHES` in the same way the others are done.

5. Apply all of the patches in patches/ by running:

```sh
	./patches/protonprep-valve.sh &> patchlog.txt
```

in the main proton-ge-custom directory. Open `patchlog.txt` and search for "fail" to make sure no patch failures occured. An easy way to do this is like so:

```sh
	grep -i fail patchlog.txt
	grep -i error patchlog.txt 
```

6. Navigate to the parent directory containing the proton-ge-custom folder.

7. Type the following (note: if using docker instead of podman, change to --container-engine=podman):

```sh
	mkdir build && cd build
	../proton-ge-custom/configure.sh --enable-ccache --build-name=SOME-BUILD-NAME-HERE --container-engine=podman
	make redist &> log
```

Build will be placed within the build directory as SOME-BUILD-NAME-HERE.tar.gz.

## Enabling

1. Right click any game in Steam and click `Properties`.
2. At the bottom of the `General` tab, Check `Force the use of a specific Steam Play compatibility tool`, then select the desired Proton version.
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
| <tt>async</tt>      | <tt>DXVK_ASYNC</tt>    | Allows Async to be used with DXVK. This can help with stutter in some games, however it is recommended not to be used with games that have sensitive anti-cheats. Use at your own risk. |
| <tt>nowritewatch</tt> | <tt>PROTON_NO_WRITE_WATCH</tt> | Disable support for memory write watches in ntdll. This is a very dangerous hack and should only be applied if you have verified that the game can operate without write watches. This improves performance for some very specific games (e.g. CoreRT-based games). |
|                       | <tt>WINE_FULLSCREEN_FSR</tt>   | Enable AMD FidelityFX Super Resolution (FSR), use in conjunction with `WINE_FULLSCREEN_FSR_STRENGTH` Only works in vulkan games (dxvk and vkd3d-proton included).|
|                       | <tt>WINE_FULLSCREEN_FSR_STRENGTH</tt> | AMD FidelityFX Super Resolution (FSR), the default sharpening of 5 is enough without needing modification, but can be changed with 0-5 if wanted. 0 is the maximum sharpness, higher values mean less sharpening. 2 is the AMD recommended default and is set by proton-ge |
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
