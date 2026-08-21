# Proton on macOS: Architecture, Feasibility, and Implementation Blueprint

Status: proposed architecture  
Audience: Proton, Wine, graphics, macOS platform, build/release, Steam integration, and QA engineers  
Source baseline: ValveSoftware/Proton branch proton_11.0 at 0745bfbc4cf4365e8cf048b003990c59def29948  
Audit date: 2026-08-20

## 1. Executive decision

Do not rewrite the Windows compatibility layer.

Build a macOS product variant from the existing Proton source tree, reusing the Proton Wine fork and its existing macOS drivers. The Wine submodule already contains the hardest operating-system boundary work: Cocoa windowing, macOS event and input handling, CoreAudio, Mach virtual-memory and signal support, and Vulkan surface translation to Metal-backed surfaces. Reimplementing Win32, NT, COM, DirectShow/Media Foundation, the registry, process loading, and the thousands of Wine DLL contracts would discard decades of working behavior without solving the remaining Proton-specific integration problems.

The required work is still substantial. Current Proton is a Linux Steam compatibility tool, not a portable Wine distribution:

- Its build is coupled to Steam Runtime Linux containers and GNU/Linux toolchains.
- Its Python launcher assumes ELF, Linux library triplets, LD_LIBRARY_PATH, /proc, Linux NVIDIA libraries, ext4 behavior, and fsync.
- Its shipped graphics policy assumes native Vulkan drivers capable of running DXVK and vkd3d-proton.
- Its compatibility-tool manifest advertises Windows-to-Linux only.
- Its packaging, installation, debugging, and validation paths are Linux-specific.
- Its Apple-Silicon path depends on FEX components that do not currently declare a Darwin host.
- Anti-cheat runtime bridges are conditional external inputs and are not present in this public checkout.

The recommended delivery sequence is:

1. Prove an x86_64 macOS runtime under Rosetta 2 on Apple Silicon, plus Intel where available.
2. Make Direct3D 8 through 11 usable with a capability-selected backend. Treat DXVK over MoltenVK as experimental until its required Vulkan features and title behavior are measured. Keep WineD3D as the baseline fallback.
3. Treat Direct3D 12 as a separate product gate. vkd3d-proton over MoltenVK must pass an explicit feature probe. Apple's D3DMetal can be evaluated, but redistribution and integration rights must be resolved before it becomes a shippable dependency.
4. Add a native arm64 host only after the product is useful and the FEX/WoW64 design is proven. Do not make a Darwin FEX port a prerequisite for the first playable milestone.
5. Integrate with the Steam macOS client only after a spike proves that the client accepts and correctly launches a custom Windows-to-macOS compatibility tool. The public Steam documentation does not promise this contract.

This document separates confirmed source behavior, proposed design, and unresolved external contracts so that implementation does not quietly depend on assumptions.

## 2. Scope

### 2.1 Goals

- Launch supported Windows Steam games on macOS through a Proton-derived runtime.
- Preserve Proton's prefix management, per-title configuration, Steam client bridges, game-specific workarounds, media stack, and diagnostic model wherever portable.
- Support a useful Apple-Silicon-first path without blocking an Intel build.
- Make rendering backend selection deterministic and capability-driven.
- Produce a signed and notarized macOS distribution with reproducible component provenance.
- Keep Linux behavior unchanged in the shared source tree.
- Establish an incremental path from command-line prototype to Steam-integrated compatibility tool.

### 2.2 Non-goals for the first release

- Perfect compatibility with all Proton-supported Linux titles.
- Universal Direct3D 12 support.
- Kernel-level or DRM anti-cheat compatibility.
- Full OpenVR parity. macOS has no equivalent of the Linux SteamVR deployment assumed by current Proton.
- Native arm64 execution of every x86/x64 Windows title in the first milestone.
- App Store sandbox compatibility. Steam's own macOS integration guidance describes entitlements and dynamic loading behavior incompatible with a strict sandbox.
- Replacing Wine with a new Win32/NT implementation.

### 2.3 Terms

- Host architecture: architecture of the macOS Wine process, x86_64 or arm64.
- Guest architecture: architecture of a Windows PE executable, i386, x86_64, arm64, or arm64ec.
- Translation backend: CPU translation used when host and guest execution cannot be handled natively by Wine's loader and macOS.
- Graphics backend: implementation selected for Direct3D or Vulkan, such as WineD3D, DXVK plus MoltenVK, vkd3d-proton plus MoltenVK, or an externally licensed Metal translator.
- Platform backend: Proton launcher implementation of OS-specific environment setup, process execution, filesystem behavior, diagnostics, and packaging paths.

## 3. Evidence and confidence model

This architecture is based on:

- Direct inspection of the root Proton build, launcher, packaging, and integration sources.
- Direct inspection of the pinned Wine, DXVK, vkd3d-proton, FEX, GStreamer, Steam bridge, VR, and OpenXR submodules.
- The checked-out submodule graph: 61 recursive submodules, all at recorded commits.
- Current primary documentation from Apple, Khronos, Valve/Steamworks, and the respective upstream projects.

Claim labels used in this document:

- Confirmed: directly present in the audited source or authoritative documentation.
- Proposed: an implementation design recommended by this document.
- Gate: a fact that must be established by a spike or legal/product decision.

No game-compatibility percentage is claimed. Source support is not the same as a shippable, performant, or title-compatible product.

## 4. Current Proton architecture

### 4.1 System view

~~~mermaid
flowchart LR
    Steam[Steam Linux client] --> Manifest[Compatibility tool manifest]
    Manifest --> Launcher[Python proton launcher]
    Launcher --> Prefix[Per-title Wine prefix]
    Launcher --> Helper[Proton steam.exe helper]
    Helper --> Wine[Proton Wine]
    Wine --> Win32[Windows game and DLLs]

    Win32 --> D3D9[D3D8 to D3D11]
    Win32 --> D3D12[D3D12]
    D3D9 --> DXVK[DXVK]
    D3D12 --> VKD3D[vkd3d-proton]
    DXVK --> Vulkan[Linux Vulkan driver]
    VKD3D --> Vulkan

    Win32 --> SteamDLL[Windows Steam API]
    SteamDLL --> LSteam[lsteamclient bridge]
    LSteam --> NativeSteam[Native steamclient shared object]

    Win32 --> Media[Wine GStreamer and Media Foundation]
    Media --> GStreamer[Bundled GStreamer, FFmpeg, dav1d]
    Wine --> PulseALSA[Wine audio drivers]
    Wine --> X11Wayland[X11 or Wayland graphics/input]
~~~

The root is an orchestrator, not a monolithic compatibility implementation. Most Windows behavior lives in the pinned Wine fork. Proton adds a launcher, reproducible component builds, a prebuilt default prefix, graphics translators, media dependencies, Steam/VR thunks, runtime helpers, game workarounds, and a Steam compatibility-tool package.

### 4.2 Repository component map

| Component | Current responsibility | macOS reuse |
|---|---|---|
| proton | Python launcher, environment construction, prefix lifecycle, per-title policy, logging, and process launch | Reuse policy and prefix logic after platform abstraction |
| Makefile, Makefile.in, configure.sh | Linux container build orchestration and distribution assembly | Keep Linux path; add a separate Darwin build backend |
| wine | Win32/NT compatibility, process loader, system DLLs, media integration, OS drivers | Reuse; enable and harden winemac.drv and winecoreaudio.drv |
| wine/dlls/winemac.drv | Cocoa windows, displays, clipboard, input/events, OpenGL, Metal surface, GPU/display discovery | Reuse as the native window/input/display driver |
| wine/dlls/winecoreaudio.drv | CoreAudio, AudioUnit, AudioToolbox, CoreMIDI | Reuse as native audio/MIDI driver |
| dxvk | D3D8/9/10/11 to Vulkan | Conditional over MoltenVK, never assumed |
| vkd3d-proton | D3D12 to Vulkan | Conditional experimental path; strict capability gate |
| vkd3d | Wine D3D12 support/build dependency | Reuse only where the chosen backend requires it |
| FEX | ARM64EC/WoW64 CPU translation modules for Proton's arm64 Linux product | Long-term candidate; Darwin support requires a dedicated port |
| lsteamclient | Windows Steamworks interfaces to native Steam client bridge | Reuse interface generation and thunks; replace Unix-side loading contract as required by macOS Steam |
| steam_helper | Built-in steam.exe launcher/helper | Reuse after Darwin process/environment audit |
| vrclient_x64 | Windows OpenVR to native OpenVR bridge | Defer unless a supported native macOS target is defined |
| wineopenxr and OpenXR-SDK | Windows OpenXR bridge and loader | Reuse architecture; actual macOS runtime availability is a product gate |
| gstreamer, gst plugins, ffmpeg, dav1d | Media Foundation/DirectShow codecs and media plumbing | Rebuild for Darwin; retain Wine contracts |
| openfst, kaldi, vosk-api, piper | Speech-related dependencies/features | Optional feature tier; do not block core games |
| fonts | Default Windows-compatible fonts | Reuse, preserving licenses |
| symstore | Symbol packaging | Adapt paths and macOS symbols/dSYM handling |
| media | Media converter support | Audit plugin ABI and Darwin packaging |
| docker and Steam Runtime rules | Reproducible Linux build environment | Not a Darwin runtime; retain only for Linux targets and PE cross-build stages where useful |

### 4.3 Build graph

The top-level Makefile creates an out-of-tree build directory, runs configure.sh, and dispatches targets through a Steam Runtime container. Makefile.in chooses an x86_64 or arm64 Steam Runtime image, defines architecture tuples, builds dependencies, creates a default prefix, and assembles files into the compatibility-tool distribution.

Current architecture sets are:

- x86_64 target: i386-unix, x86_64-unix, i386-windows, and x86_64-windows.
- arm64 target: aarch64-unix, aarch64-windows, arm64ec-windows, i386-windows, and x86_64-windows.

The Unix tuples in make/rules-common.mk are Linux GNU tuples. The root build assumes Linux tools and conventions including Bash, nproc, GNU find formatting, GNU sed behavior, ELF-style library paths, Linux package/sysroot contents, and containerized Steam Runtime SDK images.

Important build paths:

- Makefile: top-level user entry point.
- configure.sh: target architecture and container selection.
- Makefile.in: dependency graph, prefix construction, distribution assembly, and packaging.
- make/rules-common.mk: target and compiler tuple definitions.
- default_pfx.py: default prefix construction.
- compatibilitytool.vdf.template: Steam compatibility-tool declaration.
- toolmanifest_x86_64.vdf and toolmanifest_arm64.vdf: tool runtime and launch metadata.

### 4.4 Runtime launch sequence

~~~mermaid
sequenceDiagram
    participant S as Steam
    participant P as proton launcher
    participant C as CompatData
    participant W as Wine
    participant H as built-in steam.exe
    participant G as Windows game

    S->>P: /proton run game.exe args
    P->>P: read Steam compatibility environment
    P->>C: open per-AppID data directory and lock
    C->>C: create or migrate prefix from default_pfx
    C->>C: map C:, Z:, game S:, and Steam T:
    C->>C: install Steam, graphics, media, VR, and registry state
    P->>P: apply config, DLL overrides, logging, and game workarounds
    P->>W: launch Wine loader and helper
    W->>H: run built-in steam.exe
    H->>G: start the Windows game
    G-->>S: Steam API calls through lsteamclient/native client
~~~

The launcher requires STEAM_COMPAT_DATA_PATH and derives the distribution from its own location. It maintains a versioned default prefix, tracks files it owns, applies migrations, maps user and Steam/game directories, copies or links built-in DLLs, and injects native Steam compatibility components.

The Windows game normally does not run directly from the shell. The launcher starts Wine and Proton's built-in steam.exe helper, which provides important launch integration.

### 4.5 Runtime distribution

The built distribution includes:

- The proton Python entry point and helper Python modules.
- Wine binaries, Unix libraries, PE DLLs, and loader components.
- A versioned default Wine prefix.
- DXVK, vkd3d-proton, DXVK-NVAPI, and related graphics files.
- GStreamer/media plugins and codec libraries.
- lsteamclient, steam helper, VR/OpenXR bridges, and optional runtime bridges.
- Fonts, licenses, manifest files, and compatibility-tool metadata.
- An alternate bin-arm64 path in arm64 builds.

The compatibility manifest currently declares from_oslist Windows and to_oslist Linux. The install target writes into the Linux Steam compatibilitytools.d path beneath the user's Steam root.

## 5. What is already macOS-capable

### 5.1 Wine Cocoa driver

Confirmed in wine/dlls/winemac.drv:

- Cocoa application lifecycle and native window management.
- Display enumeration and configuration.
- Keyboard, mouse, cursor, event, clipboard, drag-and-drop, and status-item integration.
- OpenGL integration.
- GPU/display discovery through IOKit.
- Metal surface creation using CAMetalLayer.
- Translation of Win32 Vulkan surface expectations to VK_EXT_metal_surface, with a VK_MVK_macos_surface fallback.
- Links to AppKit, Carbon, CoreVideo, Foundation, IOKit, Metal, OpenGL, QuartzCore, and Security.

This means the native window-system boundary should be enabled, tested, and patched—not recreated.

### 5.2 CoreAudio driver

Confirmed in wine/dlls/winecoreaudio.drv:

- Native CoreAudio device and stream integration.
- AudioUnit and AudioToolbox integration.
- CoreMIDI support.

The baseline audio plan is to ship this driver. Linux PulseAudio/ALSA environment construction must not leak into the macOS runtime.

### 5.3 Darwin process and memory support

The Wine fork has Darwin branches throughout its loader, ntdll, server, virtual-memory, signal, threading, filesystem, and system-query code. configure.ac selects Mach-O/dylib behavior, macOS frameworks, winemac.drv, CoreAudio, and Vulkan or MoltenVK discovery. ARM64 and x86_64 Darwin signal and loader paths are present.

This source presence is necessary but not sufficient. Proton patches may have evolved mainly under Linux CI, so the macOS build must compile and run Wine's own test suites before game work begins.

### 5.4 MoltenVK discovery

Wine's configure logic looks for libvulkan and then MoltenVK. The mac driver maps a Windows Vulkan surface to a Metal-backed surface. Khronos documents MoltenVK as a Vulkan portability implementation over Metal, with portability enumeration requirements and known limitations. This enables a graphics experiment; it does not prove DXVK or vkd3d-proton compatibility.

### 5.5 Existing Wine macOS CI helper

The Wine submodule includes tools/gitlab/build-mac, including an x86_64 path that can run under Rosetta on arm64 builders. It is useful prior art for compiler flags and CI bootstrap, but it is not a Proton distribution build.

## 6. Linux coupling audit

| Area | Current assumption | macOS design | Severity |
|---|---|---|---|
| Build environment | Steam Runtime Linux Docker/Podman image | Native macOS build runner with Xcode/Clang; retain isolated PE cross-build tools | Blocker |
| Target tuples | i686/x86_64/aarch64 Linux GNU | x86_64-apple-darwin and arm64-apple-darwin host tuples, separate from Windows PE tuples | Blocker |
| Dynamic libraries | ELF shared objects and LD_LIBRARY_PATH | dylib/framework layout, rpaths, loader paths, and signed dependency closure | Blocker |
| Process loader | Linux Wine preloaders and WINELOADERNOEXEC | Wine macOS loader/preloader contract selected by host architecture | Blocker |
| Steam manifest | Windows to Linux only | Gate: prove Windows to macOS custom-tool support; otherwise provide standalone launcher | Blocker for Steam integration |
| Install path | Linux Steam root convention | Detect macOS Steam library/application support locations without hardcoding a single path | High |
| Synchronization | WINEFSYNC defaults on | Disable fsync on Darwin unless a supported Darwin backend exists; use Wine server primitives initially | Blocker |
| Diagnostics | /proc/sys/vm/max_map_count and /proc/modules | sysctl and native hardware/process APIs; omit irrelevant Linux warnings | Medium |
| NVIDIA discovery | libdl/libGLX and Linux NVIDIA DLL layout | Remove from Darwin; query Metal devices and selected graphics backend | High |
| Library triplets | x86_64-linux-gnu, i386-linux-gnu, aarch64-linux-gnu | Architecture-scoped Darwin bundle directories and rpaths | Blocker |
| Video runtime | Steam Ubuntu video directories | Bundled signed GStreamer plugin registry and Darwin plugin paths | High |
| Filesystem casefold | ext4 casefold ioctl | Detect APFS case sensitivity; use prefix policy and collision checks | High |
| Drive Z: | Maps host root | Keep only with explicit security and path-normalization policy; consider narrower default | Medium |
| Container tools | Bash/GNU find/sed/nproc/rsync behavior | Portable scripts or version-pinned tools installed by build bootstrap | High |
| Graphics | Native Vulkan | Capability router: WineD3D baseline, MoltenVK experiments, licensed Metal path if approved | Blocker |
| CPU translation | FEX Linux/Windows support | Rosetta x86_64 MVP; separate FEX-on-Darwin research track | Blocker for native arm64 |
| Audio | Linux audio environment and drivers | winecoreaudio.drv | Medium |
| Input | Linux evdev/uinput/SDL assumptions around parts of stack | winemac event path plus GameController/HID-specific validation and mappings | High |
| VR | Linux SteamVR/OpenVR assumptions | Defer unless a supported macOS native runtime is selected | High |
| Anti-cheat | Optional Linux EAC/BattlEye bridges | Explicitly unsupported until vendors provide a valid macOS compatibility contract | Product gate |
| Symbols | ELF/debug symbol conventions | dSYM plus PE/PDB/Wine symbols, UUID-indexed crash symbolication | Medium |
| Signing | No macOS code-signing closure | Sign nested Mach-O files, harden runtime, notarize, staple, verify | Blocker for distribution |

### 6.1 Launcher-specific coupling

The proton script currently:

- Sets the dynamic-library variable to LD_LIBRARY_PATH.
- Constructs Linux architecture library paths and GStreamer paths.
- Locates Linux NVIDIA libraries through GLX/dlopen behavior.
- Enables WINEFSYNC by default unless disabled by configuration.
- Reads Linux /proc paths for diagnostics and module-dependent defaults.
- Selects Linux Wine ELF loaders and preloaders.
- Can delegate through steam-runtime-launcher-interface-0.
- Applies an ext4-specific casefold ioctl as a best-effort optimization.

The platform abstraction must prevent these behaviors from being scattered behind ad hoc if-statements.

### 6.2 Build-specific coupling

configure.sh models architecture but not operating system. Makefile.in combines:

- Build-host selection.
- Unix host architecture.
- Windows PE guest architecture.
- Steam Runtime container choice.
- Dependency sysroot.
- Package layout.

These are independent dimensions on macOS and must be modeled separately.

## 7. Target macOS architecture

### 7.1 Product shape

Proposed product name in this document: Proton-mac. This is a working name, not a trademark or release decision.

The runtime should be distributable in two modes:

1. Standalone developer launcher: proves Wine, prefix, graphics, input, and games without depending on an undocumented Steam compatibility-tool contract.
2. Steam compatibility tool: activated only after the Steam macOS client integration spike passes.

A signed application bundle is recommended even if Steam invokes a command-line entry point. The bundle supplies a coherent code-signing unit, Info.plist, entitlements, frameworks, helper binaries, diagnostics, and a stable resource root.

Proposed high-level layout:

~~~text
ProtonMac.app/
  Contents/
    MacOS/
      proton-mac
      proton-launcher
    Frameworks/
      MoltenVK.dylib
      Darwin runtime dependencies
    Resources/
      proton/
        proton
        default_pfx/
        pe/
          i386/
          x86_64/
          arm64/
          arm64ec/
        host/
          x86_64/
          arm64/
        gstreamer/
        fonts/
        licenses/
        manifests/
    Helpers/
      crash-handler
      capability-probe
~~~

The exact app/CLI boundary can change, but architecture- and ABI-specific files must not share ambiguous directories.

### 7.2 Platform backend

Refactor launcher OS behavior behind a small explicit interface:

~~~text
PlatformBackend
  dynamic_library_environment()
  host_architecture()
  host_library_paths()
  wine_loader_paths()
  media_plugin_paths()
  steam_installation_candidates()
  gpu_capabilities()
  synchronization_policy()
  filesystem_capabilities(path)
  diagnostics_snapshot()
  spawn(spec)
  terminate_process_tree(session)
~~~

Implement:

- LinuxPlatformBackend, preserving current behavior.
- MacOSPlatformBackend, using Darwin paths, sysctl/native APIs, bundle-relative resources, and the selected architecture lane.

Keep game policy, prefix migrations, DLL overrides, environment normalization, and title workarounds above this interface.

Recommended source changes:

- Move OS-neutral launcher classes out of the single proton script into importable modules.
- Keep the existing proton command as a thin compatibility entry point.
- Add a macOS bootstrap executable that resolves the signed bundle and invokes Python or an embedded runtime without relying on the user's shell.
- Add unit tests that snapshot the complete child environment for Linux and macOS.

Do not depend on DYLD_LIBRARY_PATH for the released product. Apple's hardened runtime and launch environment make rpath/install-name correctness the reliable design. Build each Mach-O dependency with bundle-relative install names and verify the full closure before signing.

### 7.3 Execution lanes

#### Lane A: x86_64 host

Purpose:

- Native execution on Intel Macs.
- Rosetta 2 execution on Apple Silicon.
- Fastest route to existing x86_64 Wine/macOS code and Windows x64 titles.

Requirements:

- Build x86_64 Mach-O Wine and host libraries.
- Build i386 and x86_64 PE DLLs using Wine's modern WoW64 architecture; do not depend on running a 32-bit macOS process.
- Launch the entire x86_64 host lane through Rosetta on Apple Silicon.
- Validate JIT/self-modifying-code behavior under hardened runtime and notarization.
- Validate AVX/AVX2-dependent games against Rosetta behavior; reject unsupported instruction requirements cleanly.

Advantages:

- Avoids a Darwin FEX port for MVP.
- Exercises an existing Wine mac build pattern.
- Aligns with the dominant Windows x86/x64 game catalog.

Costs:

- Translation overhead on Apple Silicon.
- Additional memory and debugging complexity.
- Not a long-term answer if native arm64 host execution materially improves performance or power.

#### Lane B: native arm64 host

Purpose:

- Remove whole-process Rosetta overhead.
- Enable arm64-native host frameworks and platform code.
- Run ARM64/ARM64EC Windows code natively where possible.

Requirements:

- Build arm64 Mach-O Wine and dependencies.
- Port or replace the current FEX ARM64EC/WoW64 modules for the Darwin-hosted Wine environment.
- Audit MAP_JIT, executable memory transitions, signal handling, thread-local state, unwind information, and translated-code cache behavior.
- Sign translation helpers with the minimum necessary entitlements.
- Prove mixed-module callbacks and exception unwinding across x86_64, ARM64EC, and arm64 boundaries.

This is a separate program, not a compiler-flag variation.

### 7.4 Prefix and filesystem service

Retain Proton's per-AppID prefix model and versioned default prefix. Introduce a filesystem policy service for:

- APFS case-sensitive versus case-insensitive volume detection.
- Case-collision scanning during prefix creation and game installation.
- Unicode normalization checks.
- Symlink and alias safety.
- Bundle/translocation-safe resource resolution.
- Steam library volumes outside the system disk.
- External and network volume capability warnings.
- Atomic migration and rollback.

Recommended locations:

- Runtime data: user Application Support directory scoped to the product.
- Logs: user Logs directory.
- Caches and shader caches: user Caches directory.
- Per-title prefixes: stable Application Support subdirectory keyed by Steam AppID and a schema version.

Never put mutable prefixes inside the signed application bundle.

The Z: mapping to the entire host root is compatible with Wine conventions but broad. Make it an explicit compatibility/security decision. A safer product default can expose the game library, Steam library, user-selected folders, and necessary system paths, with an advanced compatibility switch for the full root mapping.

### 7.5 Process and synchronization service

Initial policy:

- Default WINEFSYNC off on Darwin.
- Use Wine server synchronization and existing supported Darwin primitives.
- Record synchronization mode in every diagnostic bundle.
- Add a future Darwin fast-sync backend only with Wine-level correctness tests for waits, events, semaphores, mutexes, APC delivery, process death, and timeout races.

Process management must:

- Track the entire Wine process tree.
- Propagate Steam termination and shutdown.
- Avoid relying on Linux process groups alone.
- Handle GUI activation policy and foreground focus through Cocoa.
- Preserve exit status from the game/helper.
- Cleanly terminate hung wineserver sessions scoped to a prefix without killing unrelated prefixes.

### 7.6 Graphics router

Graphics is a runtime decision, not a single global build choice.

~~~mermaid
flowchart TD
    Start[Game launch] --> Probe[GPU, OS, translator, and feature probe]
    Probe --> API{Requested API}
    API -->|D3D8 to D3D11| D11{Backend policy}
    API -->|D3D12| D12{Hard capability gate}
    API -->|OpenGL| GL[Wine mac OpenGL path]
    API -->|Vulkan| VK[Wine Vulkan plus MoltenVK]

    D11 -->|Known-good title/device| DXVK[DXVK plus MoltenVK]
    D11 -->|Fallback| WGL[WineD3D plus OpenGL]
    D11 -->|Licensed and approved| DM11[Metal translator]

    D12 -->|vkd3d requirements pass and title certified| V12[vkd3d-proton plus MoltenVK]
    D12 -->|Licensed and approved| DM12[D3DMetal or other Metal translator]
    D12 -->|No valid backend| Stop[Fail with actionable unsupported message]
~~~

#### Capability probe

Ship a native probe that records:

- macOS version and build.
- Mac model and host architecture.
- Metal GPU family and relevant feature sets.
- MoltenVK version and configuration.
- Vulkan API version, portability subset, extensions, features, limits, queue families, memory heaps, and format support.
- DXVK-required capabilities.
- vkd3d-proton hard requirements, including descriptor indexing and actual descriptor limits.
- Selected backend and rejection reasons for every alternative.

Cache the probe per OS/GPU/runtime version and invalidate it after updates.

#### D3D8 through D3D11

Baseline:

- Ship WineD3D/OpenGL for correctness-oriented fallback and early bring-up.
- Build DXVK for Windows PE as current Proton does.
- Integrate MoltenVK as a signed, version-pinned runtime.
- Patch/configure DXVK for Vulkan portability enumeration and any required portability-subset behavior.
- Certify DXVK by GPU family, OS version, DXVK version, MoltenVK version, and title—not merely by successful device creation.

WineD3D is not expected to match DXVK performance, but it makes early windowing, input, audio, Steam, and prefix work independently testable.

#### Direct3D 12

vkd3d-proton documents hard Vulkan requirements and aggressive descriptor use. MoltenVK implements a portability subset over Metal and documents known limitations. Therefore:

- A successful Vulkan 1.3/1.4 version query is not enough.
- The runtime must evaluate every required extension, feature, limit, format, and synchronization behavior.
- The first unsupported hard requirement disables the backend with a precise diagnostic.
- Passing the feature probe still requires workload and title certification.

Apple's Game Porting Toolkit can evaluate unmodified Windows executables and contains Metal translation technology. It should be investigated as an alternate backend, especially for D3D12. Its license, redistribution, supported invocation model, update policy, and entitlement implications are external gates. Do not design a public binary that silently bundles it without written rights.

#### Shader caches

- Key caches by title, backend, GPU registry identity, OS build, translator version, and relevant configuration.
- Store them outside the signed bundle.
- Invalidate only incompatible entries.
- Surface compile stutter and cache statistics in diagnostics.
- Never share Metal/Vulkan cache artifacts between Intel and Apple GPUs without an explicitly supported format.

### 7.7 Media

Keep Wine's Media Foundation/DirectShow-facing contracts and rebuild the bundled GStreamer stack for Darwin.

Phased media plan:

1. Build minimal audio/video playback plugins needed by representative games.
2. Package plugins and dependencies in a signed bundle-relative registry.
3. Disable network or dynamic plugin discovery not required by the product.
4. Add codecs only after license and patent review.
5. Validate cutscenes, intro videos, web video, audio codecs, seeking, rate changes, and end-of-stream behavior.

Do not replace Wine media APIs with AVFoundation at the game boundary. A future AVFoundation-backed Wine media component could reduce bundle size, but it is a separate compatibility project. The GStreamer path preserves current Proton behavior and testability.

### 7.8 Audio and MIDI

Use winecoreaudio.drv as the default:

- Enumerate devices and handle hotplug.
- Support default-device changes while a game is running.
- Validate shared/exclusive-like WASAPI semantics exposed by Wine.
- Validate sample-rate conversion, channel layouts, Bluetooth latency, HDMI, aggregate devices, and headset switching.
- Keep CoreMIDI optional but test games that enumerate MIDI devices.

Remove Linux audio variables and drivers from the macOS child environment.

### 7.9 Input

The winemac driver provides Cocoa event paths, but game-controller parity requires explicit work:

- Keyboard layouts, dead keys, IME, function keys, media keys, and key repeat.
- Relative mouse mode, cursor clipping, high-DPI coordinates, multiple displays, and pointer acceleration expectations.
- Fullscreen transitions, focus changes, Cmd-Tab, Mission Control, Spaces, and display hotplug.
- GameController framework and HID device enumeration where Wine does not already cover the required controller path.
- Steam Input virtual controller behavior and native Steam overlay interaction.
- Xbox, PlayStation, Switch-compatible, generic HID, and Bluetooth/USB variants.
- Rumble, battery status, gyro, touchpad, LEDs, and hotplug where the Windows API exposes them.

Keep controller mapping policy data-driven. Record raw device identity and selected mapping in diagnostics while avoiding user-sensitive serial data.

### 7.10 Steam interfaces

lsteamclient is a large generated/manual thunk layer mapping Windows Steam interface versions to a native Steam client library. Reuse its interface coverage and code generation. The macOS work is:

- Discover the macOS Steam client and native Steam library locations.
- Verify the exported ABI expected by the bridge.
- Load the native library through signed/hardened-runtime-compatible paths.
- Verify callbacks, call results, networking messages, overlay hooks, user stats, achievements, workshop, matchmaking, cloud, screenshots, and controller APIs.
- Track Steam client beta/stable ABI changes.
- Fail without corrupting a prefix if the native client interface is unavailable.

The compatibility-tool launch contract is a separate gate. A standalone Proton-mac can use Steam APIs only if the native client provides the expected process/session environment.

### 7.11 Networking

Most Windows socket behavior remains Wine's responsibility. macOS-specific validation must cover:

- IPv4 and IPv6.
- UDP broadcast/multicast and local-network privacy prompts.
- DNS and resolver behavior.
- Steam Datagram Relay/native Steam networking through lsteamclient.
- Interface changes, VPNs, Wi-Fi handoff, sleep/wake, and captive networks.
- ICMP behavior and privilege restrictions.
- Firewall prompts and code-signing identity stability.

Do not add a privileged helper solely to emulate raw-network behavior unless a title-supported use case and threat model justify it.

### 7.12 OpenXR and VR

The source has reusable Windows-to-native thunk architecture, but a product needs a native macOS OpenXR runtime and a supported device ecosystem. Until those are selected:

- Build OpenXR as an optional feature.
- Disable auto-configuration when no native runtime exists.
- Avoid presenting VR compatibility in the product support tier.
- Keep the code isolated so a future native runtime can be registered and tested.

### 7.13 Anti-cheat

The public checkout's EAC/BattlEye bridge targets are conditional and their source inputs are absent. Linux anti-cheat support also depends on vendor and game configuration, not just local code.

macOS policy:

- Default unsupported for kernel-level and vendor-specific anti-cheat.
- Never claim compatibility because a game reaches its menu.
- Require vendor authorization, a macOS-compatible service model, signing/notarization compatibility, and multiplayer validation.
- Maintain a per-title support flag that blocks launch with a clear explanation if running could trigger account sanctions.

### 7.14 Security, signing, and notarization

The distribution pipeline must:

1. Produce deterministic architecture-specific Mach-O and PE artifacts.
2. Set and verify Mach-O install names and rpaths.
3. Strip or separate symbols reproducibly.
4. Sign nested dylibs/frameworks/helpers from the inside out.
5. Apply the hardened runtime.
6. Use only justified entitlements.
7. Sign the outer application bundle with a Developer ID identity.
8. Submit for notarization, wait for acceptance, staple the ticket, and validate with Gatekeeper tooling.
9. Archive the exact source revisions, build manifest, entitlements, dependency licenses, and symbol maps.

Potential entitlements must be proven by test:

- Allow JIT may be required by translated-code generation.
- Disable library validation may be required for Steam overlay/native client injection, as reflected in Steamworks macOS guidance.
- Allow DYLD environment variables appears in Steam guidance, but a robust product should minimize dependence on it.

Entitlements increase attack surface. Maintain separate development and release profiles and justify every release entitlement.

Security boundaries:

- Validate all game-controlled paths before host file operations.
- Treat prefixes and game files as untrusted.
- Prevent DLL/plugin search from escaping approved roots.
- Never inherit arbitrary DYLD variables from the launching shell.
- Avoid loading unsigned host dylibs into a hardened process.
- Sanitize diagnostic bundles.
- Define update authenticity and rollback protection before auto-update.

### 7.15 Observability

Every launch should be reproducible from a diagnostic manifest containing:

- Product and source revisions.
- All submodule revisions.
- macOS build, hardware model, architecture lane, Rosetta state, and GPU identity.
- Wine, DXVK, vkd3d-proton, MoltenVK, GStreamer, and Steam client versions.
- Prefix schema/version.
- Graphics capability-probe output and selection reasons.
- Sanitized environment diff.
- Selected compatibility flags and DLL overrides.
- Exit status and process lifecycle.
- Wine debug channels when explicitly enabled.
- Crash report identifiers and symbol UUIDs.

Provide a one-command support bundle with redaction. Never collect it automatically without product consent policy.

## 8. Build-system blueprint

### 8.1 Model target OS explicitly

Add:

~~~text
--target-os=linux|macos
--target-arch=x86_64|arm64
--guest-arch=i386,x86_64,arm64,arm64ec
--graphics-backends=wined3d,dxvk,vkd3d-proton,moltenvk,external-metal
--package-mode=developer|standalone|steam-tool
~~~

TARGET_OS selects platform behavior. TARGET_ARCH selects host architecture. Guest architectures select PE builds. Do not infer one from another.

### 8.2 Recommended implementation

Keep existing Makefile behavior for Linux. Add a Darwin entry point rather than forcing Steam Runtime concepts into every rule:

- configure-macos.sh or a small Python configure tool creates a macOS build manifest.
- make/rules-darwin.mk defines Clang, SDK, deployment target, install-name, rpath, framework, and signing rules.
- make/package-macos.mk assembles the app bundle and standalone/Steam variants.
- make/rules-common.mk retains genuinely shared PE build behavior.
- A lockfile records Xcode, SDK, CMake/Meson/Ninja, LLVM-MinGW, MoltenVK, and third-party versions.

Longer term, moving orchestration to a typed build manifest may be easier than extending the 1,500-line Makefile.in. Do not rewrite all component build systems. Continue invoking their supported Meson/CMake/Autotools interfaces.

### 8.3 Build stages

1. Bootstrap host tools.
2. Build Darwin host dependencies for x86_64 and/or arm64.
3. Build Wine Unix/Mach-O side.
4. Build Windows PE architectures.
5. Build graphics translators as PE modules.
6. Build Steam, OpenXR, helper, and media integrations.
7. Generate default prefixes per execution lane.
8. Assemble bundle-relative runtime.
9. Run dependency-closure and forbidden-path scans.
10. Run unit/smoke tests before signing.
11. Sign nested artifacts and bundle.
12. Run signed smoke tests.
13. Notarize/staple release candidates.
14. Produce symbols, provenance, SBOM, and licenses.

### 8.4 Universal versus split artifacts

Do not initially merge everything into universal binaries.

- Keep x86_64 and arm64 Wine lanes separate inside the bundle.
- Universalize only small native launch/bootstrap components when it simplifies UX.
- Select a lane before loading Wine libraries.
- Keep GStreamer plugin ABIs and caches architecture-scoped.
- Sign both lanes in the same outer bundle only after the nested closure is deterministic.

This avoids accidental cross-architecture loading and simplifies crash triage.

### 8.5 Dependency closure checks

CI must reject:

- References to build-machine absolute paths.
- Unsigned or ad-hoc-signed nested release code.
- Unexpected Homebrew/MacPorts dylib references.
- Missing architecture slices for the selected lane.
- Writable code inside the signed bundle.
- Duplicate dylibs with conflicting install names.
- Plugins outside the allowlist.
- GPL/LGPL or codec artifacts missing required notices/source offer handling.

## 9. Proposed source changes

### 9.1 New files

| Proposed path | Purpose |
|---|---|
| platform/base.py | Platform backend contract |
| platform/linux.py | Existing Linux behavior extracted without semantic change |
| platform/macos.py | Darwin paths, process, filesystem, diagnostics, and loader behavior |
| platform/macos_capabilities.mm | Native Metal/GPU/OS capability probe |
| platform/macos_bootstrap.m | Signed bundle bootstrap and architecture-lane selection |
| make/rules-darwin.mk | Darwin compiler, SDK, framework, install-name, and rpath rules |
| make/package-macos.mk | App bundle, signing, notarization, and artifacts |
| configure-macos.sh | Initial Darwin configuration entry point |
| tests/launcher/ | Environment, prefix, migration, and backend unit tests |
| tests/macos/ | Native smoke, bundle, entitlement, and capability tests |
| packaging/macos/Info.plist | Bundle identity and activation policy |
| packaging/macos/entitlements.plist | Minimal release entitlements |
| packaging/macos/entitlements-development.plist | Debug/development entitlements |
| packaging/macos/privacy-manifest | Required platform privacy declarations when applicable |
| tools/macos/verify-bundle.sh | Dependency, signature, architecture, and Gatekeeper verification |
| tools/macos/support-bundle.py | Redacted diagnostics archive |

Names may change during implementation; responsibilities should not.

### 9.2 Existing files to modify

| Existing path | Change |
|---|---|
| proton | Extract platform operations; retain CLI and OS-neutral policy |
| filelock.py | Validate Darwin locking semantics and network-volume behavior |
| default_pfx.py | Remove Linux-only environment assumptions; generate per-lane prefixes |
| configure.sh | Preserve Linux behavior; dispatch or reject macOS with clear guidance |
| Makefile | Expose macOS configure/build/package/test targets |
| Makefile.in | Share PE/component logic where clean; avoid Darwin condition sprawl |
| make/rules-common.mk | Separate OS, host architecture, and guest PE architecture |
| compatibilitytool.vdf.template | Generate per-target to_oslist only after Steam contract validation |
| toolmanifest_x86_64.vdf and toolmanifest_arm64.vdf | Add or generate correct runtime/tool requirements for macOS |
| wine/configure.ac and Wine Darwin sources | Carry only proven Proton/macOS fixes and upstreamable patches |
| dxvk | Portability and feature-probe fixes, ideally upstream |
| vkd3d-proton | Capability diagnostics and portability work only if feasibility spike passes |
| FEX | Separate Darwin port branch after MVP |
| lsteamclient | Native macOS Steam library loading and ABI validation |
| steam_helper | Darwin launch/focus/session audit |
| symstore | dSYM and Mach-O UUID support |

## 10. Port versus rewrite analysis

| Strategy | Reuse | First useful result | Compatibility ceiling | Risk | Decision |
|---|---:|---:|---:|---:|---|
| Full Windows compatibility rewrite | Very low | Very late | Unknown | Extreme | Reject |
| Upstream Wine macOS plus standalone launcher only | High | Fast | Moderate without Proton integrations | Medium | Use for bring-up |
| Proton fork with macOS platform backend | Very high | Medium | High, subject to graphics/Steam constraints | High but bounded | Recommend |
| Wrap Apple's evaluation environment unchanged | Medium | Fast for experiments | Tied to external product/license | High external dependency | Spike only |
| Native arm64 Proton plus FEX Darwin port first | High source reuse | Slow | Potentially high | Very high technical risk | Defer |
| x86_64 Proton under Rosetta first | High | Fastest Apple-Silicon path | Good for many x86/x64 titles | Medium | Recommend MVP |

Why a full rewrite is rejected:

- Wine contains the NT loader, server, registry, synchronization, exception handling, COM/OLE, graphics interfaces, multimedia, networking, filesystem, locale, input, thousands of DLL exports, and decades of application quirks.
- Proton's value is integration and curated behavior on top of Wine.
- macOS-specific Wine drivers already exist.
- The unsolved work—graphics, packaging, CPU translation, Steam contract, signing, and testing—would remain after a rewrite.

Rewrite only bounded layers whose current abstractions are irreducibly Linux-specific: the root build orchestration for Darwin, launcher platform operations, package layout, capability selection, and release pipeline.

## 11. Critical feasibility spikes

No full program should be funded past architecture bring-up until these gates are measured.

### Spike 0: define product floor

Decision owners: product, platform, graphics, QA.

Choose:

- Minimum macOS version.
- Apple Silicon only versus Intel plus Apple Silicon.
- Standalone versus mandatory Steam integration.
- Required Direct3D tier.
- Distribution channel.
- Minimum representative game set.

Output: signed decision record and test matrix. This document intentionally does not invent these requirements.

### Spike 1: Wine/macOS smoke runtime

Build the pinned Wine fork for x86_64 macOS and run:

- wineboot and prefix creation.
- A 64-bit Win32 GUI sample.
- A 32-bit Win32 GUI sample through modern WoW64.
- File, registry, process, thread, networking, audio, input, and OpenGL samples.
- The same x86_64 runtime under Rosetta on Apple Silicon.

Pass:

- Clean prefix creation.
- Correct window/input/audio.
- No unsigned dependency outside the development allowlist.
- Wine conformance subset has no unexplained macOS regressions.

### Spike 2: Steam macOS compatibility-tool contract

Create a minimal compatibility tool that logs the environment and launches a harmless Windows sample.

Measure:

- Whether Steam macOS recognizes from_oslist Windows to to_oslist macos/osx.
- Invocation verb and environment.
- AppID/prefix paths.
- Native Steam client library and overlay behavior.
- Launch, terminate, update, verify, and uninstall lifecycle.

Pass:

- Repeatable launch from stable and beta Steam clients.
- No private client patching.
- Documented or supportable distribution contract.

Fail response:

- Continue standalone product.
- Do not encode an undocumented manifest trick as a production dependency.

### Spike 3: graphics feasibility matrix

On representative Intel and Apple GPU families:

- Run native Vulkan/MoltenVK probe.
- Run Wine Vulkan samples.
- Run DXVK D3D9 and D3D11 samples.
- Run vkd3d-proton D3D12 samples only if hard requirements pass.
- Compare WineD3D.
- Evaluate Apple's toolkit separately under its license.

Capture correctness, frame pacing, shader compile behavior, memory use, hangs, device loss, fullscreen, HDR expectations, and crash diagnostics.

Pass:

- At least one shippable D3D9/11 backend for the target hardware floor.
- Deterministic rejection of unsupported D3D12.
- No silent fallback that changes correctness without diagnostics.

### Spike 4: signed translation runtime

Package the x86_64 lane in a hardened, signed app. Run under Rosetta with:

- Self-modifying/JIT-heavy samples.
- Exception/unwind stress.
- Thread creation and synchronization stress.
- Steam overlay if available.
- Notarization and Gatekeeper launch from a downloaded/quarantined artifact.

Pass:

- No development-only entitlement is required in release.
- Required release entitlements have a reviewed rationale.
- Downloaded artifact launches after notarization.

### Spike 5: media and controller vertical slice

Select one game/sample for each:

- Media Foundation H.264/AAC cutscene.
- Alternative common codec.
- XInput controller.
- Raw input mouse.
- Steam Input path.

Pass:

- Correct playback/seek/end-of-stream.
- Stable input across focus/fullscreen changes.
- Signed plugin closure.

## 12. Delivery plan

Effort ranges below are order-of-magnitude planning aids, not commitments. They assume engineers experienced with Wine internals, macOS, graphics APIs, and release signing. Graphics or Steam contract failures can change the program materially.

### Phase A: architecture bring-up, approximately 4 to 8 engineer-weeks

- Complete Spikes 0 through 2.
- Build pinned Wine for macOS.
- Produce a command-line x86_64/Rosetta runtime.
- Create/migrate a prefix.
- Launch 32-bit and 64-bit samples.
- Establish CI on Intel if available and Apple Silicon.

Exit:

- Product floor defined.
- Steam integration classified as supported, unsupported, or unresolved.
- No major Wine/macOS loader blocker.

### Phase B: platform runtime, approximately 8 to 16 engineer-weeks

- Extract launcher platform backend.
- Implement macOS bundle/path/process/filesystem/diagnostics services.
- Default fsync off.
- Package CoreAudio and winemac drivers.
- Build minimal GStreamer stack.
- Implement signed developer bundle.
- Add launcher/prefix unit tests.

Exit:

- Repeatable launch of non-3D Windows samples and OpenGL games.
- Prefix upgrades are rollback-safe.
- Linux regression suite passes.

### Phase C: graphics vertical slice, approximately 12 to 24 engineer-weeks

- Implement capability probe/router.
- Ship WineD3D baseline.
- Integrate and certify DXVK plus MoltenVK where feasible.
- Make a D3D12 go/no-go decision.
- Add shader cache policy and GPU crash diagnostics.

Exit:

- Supported GPU/OS matrix is explicit.
- Representative D3D9/11 titles meet correctness and performance gates.
- Unsupported APIs fail clearly.

### Phase D: Steam and game integrations, approximately 8 to 20 engineer-weeks

- Integrate lsteamclient/native Steam client if Spike 2 passed.
- Validate steam_helper and overlay.
- Port Proton per-title policy and DLL/prefix integrations.
- Complete controllers, networking, and media matrix.
- Decide OpenXR/VR scope.

Exit:

- End-to-end Steam launch, terminate, achievements, overlay, cloud, controller, and update lifecycle for the certification set—or a standalone release with Steam integration explicitly excluded.

### Phase E: release engineering and compatibility expansion, approximately 8 to 16 engineer-weeks plus ongoing title work

- Harden, sign, notarize, staple, and verify.
- Produce SBOM, licenses, symbols, provenance, and updater design.
- Build crash/support tooling.
- Run performance, sleep/wake, multi-display, controller, networking, and long-duration suites.
- Establish title certification and regression farms.

Exit:

- Release artifact meets the definition of done.

### Phase F: native arm64 research, separate 3 to 9 month program

- Port/replace FEX host dependencies for Darwin.
- Validate ARM64EC and x64 translation inside arm64 Wine.
- Compare performance, memory, power, and compatibility with Rosetta lane.
- Ship only if data justifies maintaining both lanes.

## 13. Test architecture

### 13.1 CI layers

| Layer | Required tests |
|---|---|
| Static | Formatting, generated-code consistency, forbidden Linux assumption checks in macOS paths, licenses |
| Unit | Platform environment, path resolution, prefix migration, backend policy, manifest generation |
| Component | Wine tests, GStreamer plugin tests, Steam thunk ABI tests, graphics probes |
| Bundle | Mach-O closure, architecture slices, rpaths, signatures, entitlements, notarization readiness |
| Smoke | 32/64-bit Win32 GUI/console, audio, input, networking, OpenGL, Vulkan |
| Graphics | D3D9/11/12 API suites per backend and GPU family |
| Integration | Steam launch/overlay/API/cloud/input/update/termination |
| Title | Curated game matrix with deterministic save points and frame captures |
| Soak | Multi-hour play, suspend/resume, controller hotplug, display changes, memory pressure |
| Release | Downloaded quarantined artifact, Gatekeeper, clean user, upgrade and rollback |

### 13.2 Hardware matrix

At minimum, after product-floor selection:

- Oldest supported Apple Silicon generation.
- Current baseline Apple Silicon generation.
- Highest supported Metal GPU family available in CI.
- Intel integrated GPU if Intel is supported.
- Intel discrete/AMD GPU if Intel is supported and in scope.
- Single and multiple displays, Retina and non-Retina scaling.
- Bluetooth and USB controllers/audio.

Do not treat one M-series machine as representative of all Apple GPU families.

### 13.3 Certification title dimensions

Choose titles that independently exercise:

- 32-bit and 64-bit executables.
- D3D9, D3D11, D3D12, OpenGL, and Vulkan.
- Media Foundation and common codecs.
- XAudio/WASAPI patterns.
- XInput, DirectInput, raw mouse, Steam Input.
- Steamworks interfaces, overlay, cloud, workshop, achievements, networking.
- Different launchers and child-process trees.
- Non-ASCII paths/locales.
- Large address spaces and memory pressure.
- Fullscreen/windowed/borderless, multiple displays, high refresh rate.
- Multiplayer with and without anti-cheat.

Every title result must record the full runtime fingerprint. A title is certified only for a particular product/backend/hardware range, not for “macOS” generically.

### 13.4 Performance gates

For each supported title/backend:

- Median and low-percentile frame time versus the agreed reference.
- Shader compilation stutter.
- CPU/GPU utilization and memory.
- Launch and prefix-update time.
- Audio underruns.
- Input latency where measurable.
- Thermal/power behavior on Apple Silicon.
- Long-run memory growth.

Set numerical thresholds in the product-floor decision; the architecture must collect the data but should not invent acceptable values.

## 14. Compatibility tiers

Suggested public support model:

- Tier 0, runtime verified: Windows process, filesystem, registry, window, input, audio, and networking work; no 3D guarantee.
- Tier 1, playable fallback: WineD3D/OpenGL or equivalent, correct but not performance-certified.
- Tier 2, certified D3D9/11: named GPU/OS range and selected DXVK/Metal backend.
- Tier 3, certified D3D12: only titles and devices that pass the D3D12 backend matrix.
- Unsupported: anti-cheat, required features, or external runtime contracts fail.

Never automatically promote a title based only on user reports. Use reports to nominate certification tests.

## 15. Risk register

| Risk | Probability | Impact | Mitigation / stop condition |
|---|---:|---:|---|
| Steam macOS client does not support custom Windows compatibility tools | High/unknown | High | Spike first; preserve standalone product shape |
| MoltenVK lacks required behavior/limits for DXVK titles | Medium-high | High | Capability router, WineD3D fallback, title/device certification |
| vkd3d-proton hard requirements fail on MoltenVK | High | High | Separate D3D12 gate; evaluate licensed Metal path |
| D3DMetal redistribution is not permitted | Unknown | High | Legal review before architecture dependency; never bundle speculatively |
| Rosetta performance/compatibility is insufficient | Medium | High | Measure representative titles; fund native arm64/FEX only with data |
| FEX Darwin port is larger than expected | High | High | Keep outside MVP critical path |
| Hardened runtime conflicts with JIT/overlay/plugin loading | Medium | High | Signed translation spike and minimal entitlements early |
| Proton Wine macOS paths have regressed without CI | Medium | High | Compile/test pinned fork before integration; upstream fixes |
| GStreamer bundle is large or codec licensing blocks features | Medium | Medium-high | Minimal plugin set, license review, optional media tiers |
| Controller/Steam Input behavior diverges | Medium | Medium-high | Device lab and mapping diagnostics |
| Anti-cheat causes bans or false claims | High for protected titles | Critical | Block unsupported titles and require vendor contract |
| Prefix corruption during schema changes | Medium | High | Transactional migrations, backups, rollback, versioned ownership |
| macOS updates change Metal/Rosetta/security behavior | Medium | High | Beta CI, OS-version capability fingerprint, staged releases |
| Fork maintenance diverges from Valve/Wine | Medium | High | Small platform boundary, upstream patches, automated rebase/regression process |

## 16. Upstream and maintenance strategy

- Keep the macOS platform boundary small and explicit.
- Upstream Wine macOS correctness fixes to Wine where possible.
- Upstream portability fixes to DXVK, vkd3d-proton, MoltenVK, and FEX where maintainers accept them.
- Keep product packaging, Steam contract handling, certification policy, and release signing in the Proton-mac layer.
- Rebase submodules deliberately; never update all pins without component and title regression evidence.
- Maintain a patch inventory with owner, upstream link, reason, affected tests, and retirement condition.
- Mirror Valve's game workaround changes only after verifying platform relevance.

Suggested branching:

- proton_11.0 remains the audited upstream baseline.
- macos/main carries integration.
- Short-lived component branches carry upstreamable patches.
- Release branches pin every dependency and toolchain input.

## 17. Definition of done for a first public release

All must be true:

- Supported macOS versions, Macs, architectures, APIs, and title tier are documented.
- The complete source and submodule provenance is archived.
- A clean builder can reproduce unsigned artifacts.
- A controlled release builder signs and notarizes the bundle.
- A quarantined download passes Gatekeeper on a clean supported Mac.
- 32-bit and 64-bit Windows samples pass.
- Prefix create, update, rollback, move, and delete behavior passes.
- CoreAudio, keyboard, mouse, at least the supported controllers, and networking pass.
- At least one supported graphics backend meets the published title/hardware gates.
- Unsupported D3D12/anti-cheat/VR cases fail clearly and safely.
- Steam lifecycle passes if the release claims Steam integration.
- No hidden dependency on Homebrew, developer tools, user shell configuration, or writable bundle content.
- Crash reports can be symbolicated and support bundles are redacted.
- Licenses, source obligations, privacy disclosures, entitlements, and security review are complete.
- Linux Proton builds and launcher behavior have not regressed from shared refactoring.

## 18. Immediate implementation backlog

Ordered to maximize information gain:

1. Record product-floor decision.
2. Add macOS CI that builds the pinned Wine fork without changing Proton.
3. Run Wine 32/64-bit smoke and selected conformance tests on Intel and Rosetta.
4. Build the minimal standalone launcher and prefix.
5. Run the Steam compatibility-tool contract spike.
6. Build MoltenVK and the native graphics capability probe.
7. Validate Wine Vulkan surface creation.
8. Test WineD3D, then DXVK D3D9/11.
9. Evaluate vkd3d-proton hard requirements; stop early on failure.
10. Package CoreAudio and minimal GStreamer.
11. Extract Proton platform backend with Linux snapshot tests.
12. Build and notarize a Rosetta developer bundle.
13. Integrate lsteamclient only if the Steam contract is viable.
14. Establish the certification title/hardware matrix.
15. Decide whether native arm64/FEX work has sufficient value.

## 19. Important source paths

### Root integration

- proton: launcher, prefix, configuration, environment, Wine process.
- default_pfx.py: initial prefix generation.
- filelock.py: prefix/session locking.
- Makefile: build entry point.
- Makefile.in: component graph and distribution.
- configure.sh: Linux target/container configuration.
- make/rules-common.mk: architecture tuples and common build rules.
- compatibilitytool.vdf.template: compatibility-tool OS mapping.
- toolmanifest_x86_64.vdf and toolmanifest_arm64.vdf: Steam runtime metadata.
- lsteamclient/: Steamworks thunk bridge.
- steam_helper/: built-in steam.exe.
- vrclient_x64/: OpenVR thunk bridge.
- wineopenxr/: OpenXR thunk bridge.
- symstore/: packaged symbol tools.

### Wine macOS platform

- wine/dlls/winemac.drv/: Cocoa window, event, display, OpenGL, and Vulkan/Metal surface driver.
- wine/dlls/winecoreaudio.drv/: CoreAudio and MIDI.
- wine/configure.ac: Darwin toolchain, frameworks, drivers, Vulkan/MoltenVK selection.
- wine/dlls/ntdll/: loader, virtual memory, signals, threading, and system primitives.
- wine/server/: wineserver objects and synchronization.
- wine/tools/gitlab/build-mac: existing Wine mac build helper.
- wine/dlls/winegstreamer/: Windows media APIs and Proton media behavior.

### Graphics and translation

- dxvk/: D3D8 through D3D11 to Vulkan.
- vkd3d-proton/: Proton D3D12 to Vulkan.
- vkd3d/: Wine D3D12/Vulkan support.
- FEX/: ARM64EC/WoW64 translation modules and FEXCore.
- Vulkan-Headers/, SPIRV-Headers/, glslang/: graphics build inputs.

## 20. Audited source baseline

Top-level repository:

- Remote: https://github.com/ValveSoftware/Proton.git
- Branch: proton_11.0
- Commit: 0745bfbc4cf4365e8cf048b003990c59def29948

Pinned top-level components at audit time:

| Path | Commit |
|---|---|
| FEX | a04b0241 |
| OpenXR-SDK | 8899a91 |
| SPIRV-Headers | 6cae821 |
| Vulkan-Headers | 31aa7f6 |
| dav1d | 8a6f054 |
| dxvk | 0a70623 |
| dxvk-nvapi | c68c350 |
| ffmpeg | a77521c |
| fonts/liberation-fonts | 4b01920 |
| glslang | df7fec2 |
| graphene | 4e25784 |
| gst-orc | 7d5bbad |
| gst-plugins-rs | 0205aa4 |
| gstreamer | bf6ce1d |
| kaldi | a25f216 |
| libsoup | 25eac15 |
| openfst | 18e94e6 |
| openvr | 9182530 |
| piper | 9d06b74 |
| vkd3d | 30b93d |
| vkd3d-proton | ef20c02 |
| vosk-api | 12f29a3 |
| wine | 81d78e4 |

Use full hashes from git submodule status --recursive when producing a release manifest. Short hashes here are for human orientation only.

### 20.1 Recursive source closure

The complete recursive submodule closure in the audited checkout is below. A release pipeline should generate this list rather than copy it manually.

~~~text
a04b0241c2fe3911729842205cd8643981108aad FEX
b3fb4b9feafcd8d91c5cb510a4775143fdbef02f FEX/External/Catch2
450bd2232225d6c7728a4108055ac2e37cef6475 FEX/External/Vulkan-Headers
3e49836995c1dcb3df709440ad2f270b569c6a5f FEX/External/drm-headers
442678a134e2d25e759c430cca32e06e9e142f1f FEX/External/fex-gcc-target-tests-bins
71349ae6d14ac2e3e792730e240aecd8076cee6c FEX/External/fex-gvisor-tests-bins
9ae29638f8000c1603f16385ed1cf6c4c23ee414 FEX/External/fex-posixtest-bins
407c905e45ad75fc29bf0f9bb7c5c2fd3475976f FEX/External/fmt
8436195ad5e1bc347d9b39743af3d29abee59f06 FEX/External/jemalloc_glibc
ca1388fb9da8e69314dda222dc7b139ca84e092f FEX/External/range-v3
2dae74bb693e42d850fb0adcc9045c5b71fbdeae FEX/External/range-v3/doc/gh-pages
1f6fb494f2a4237c35494786a3c8f1eba048b217 FEX/External/rpmalloc
650c98ece70da9e155e7ba1c2b3ee16004aae118 FEX/External/tracy
3234af2c03549bc85656bfd3a86993bf1cd8aef1 FEX/External/unordered_dense
5f418449c48f6ca3ad37c47ec632f17a561c0580 FEX/External/vixl
e626a72bc2321cd320e953a0ccf1584cad60f363 FEX/External/xxhash
9bfadd6a55fc92dbd37fa3ba089bf8b36622df4f FEX/External/zydis
75a36c45ae1ad382b0f4e0ede0af84c11ee69928 FEX/External/zydis/dependencies/zycore
9f94388a339fcbb0bc95c17768eb786c85988f6e FEX/Source/Common/cpp-optparse
8899a91c17ce9618f565f42408b47db1d6e9ccc7 OpenXR-SDK
6cae8216a6ea19ff3f237af01e54378c1ff81fcd SPIRV-Headers
31aa7f634b052d87ede4664053e85f3f4d1d50d3 Vulkan-Headers
8a6f054ef1e0f7886bc6e53e6be97c427154fe85 dav1d
0a70623de9c5c6993c71ba3f063719ec29f431ec dxvk
9df86f2341616ef1888ae59919feaa6d4fad693d dxvk/include/native/directx
04f10f650d514df88b76d25e83db360142c7b174 dxvk/include/spirv
5d94bb4dcc968cccce1f601324fcaf3eda92a52b dxvk/include/vulkan
8a80d87964a0e55671f4b44fedbcc14194cdf5f3 dxvk/subprojects/dxbc-spirv
c8ad050fcb29e42a2f57d9f59e97488f465c436d dxvk/subprojects/dxbc-spirv/submodules/spirv_headers
275e6459c7ab1ddd4b125f28d0440716e4888078 dxvk/subprojects/libdisplay-info
c68c35071128c2bda31916c50080c07062f23fe6 dxvk-nvapi
c94b9b23aaadc2034dd1cad656a5a69f1526f98a dxvk-nvapi/external/DirectX-Headers
2cd90f9d20df57eac214c148f3aed885372ddcfe dxvk-nvapi/external/Vulkan-Headers
832a3673d66a0fdf6d6e522468821d5cbd925f23 dxvk-nvapi/external/nvapi
51c32131da197a38c340da2537cbfd695e6ede78 dxvk-nvapi/external/vkroots
a77521cd5d27e955b16e8097eecefc779ffdcb6d ffmpeg
4b0192046158094654e865245832c66d2104219e fonts/liberation-fonts
df7fec2cfa966919172ee83bfcae6c9c9b3f91b8 glslang
4e2578450809c2099400cf85caf18eafcd7100aa graphene
f0dcb2a48a4a8ef3dc1f7327bb0d4056a798c1a7 graphene/subprojects/mutest
7d5bbada3f1c6cf34182abccf47a34d79b83fa97 gst-orc
0205aa43d6d8c5d0c9d4e4f83e0a3aaa94acef89 gst-plugins-rs
bf6ce1d64a0697e7910826147b48f8f658366a5a gstreamer
06f5a5a9bad01b5cf76184aee4f430c834a9dac3 gstreamer/subprojects/gst-integration-testsuites/medias
a25f216f5ce4eec5e45a6ab7651e20c9840a05cd kaldi
25eac153004f777581ca2d95e31a02ca96844332 libsoup
18e94e63870ebcf79ebb42b7035cd3cb626ec090 openfst
91825305130f446f82054c1ec3d416321ace0072 openvr
9d06b74959570772e8bcbe7a3f696664d2421167 piper
30b93dcea8b0597f7d964fafc907d3e9609a4651 vkd3d
ef20c02c61e10fd15fb8769872048fa45c7bb072 vkd3d-proton
f88a2d766840fc825af1fc065977953ba1fa4a91 vkd3d-proton/khronos/SPIRV-Headers
ad9ce1235e88dc09287e19171dfac384db8ec32c vkd3d-proton/khronos/Vulkan-Headers
219d770799606f15abb3c57a8a9b9d19c2ae94ca vkd3d-proton/subprojects/dxil-spirv
29c93aeecd55533a357fdd7c95be5587d1c1f506 vkd3d-proton/subprojects/dxil-spirv/subprojects/dxbc-spirv
c8ad050fcb29e42a2f57d9f59e97488f465c436d vkd3d-proton/subprojects/dxil-spirv/subprojects/dxbc-spirv/submodules/spirv_headers
4b7bcb7e5cf71015b3299088d22004bfe4e13a5e vkd3d-proton/subprojects/dxil-spirv/third_party/SPIRV-Cross
64f5770f59db933d46b9cad6edc42b4186409ef4 vkd3d-proton/subprojects/dxil-spirv/third_party/SPIRV-Tools
f88a2d766840fc825af1fc065977953ba1fa4a91 vkd3d-proton/subprojects/dxil-spirv/third_party/spirv-headers
12f29a3415e4967e088ed09202bfb0007e5a1787 vosk-api
81d78e4f3ea8ce868d775021fdc9f90122dc1a6b wine
~~~

## 21. Open decisions

These cannot be inferred from source:

1. What is the minimum supported macOS version?
2. Is Intel a release target or build-validation aid only?
3. Is standalone acceptable if Steam does not support a macOS compatibility-tool contract?
4. Is D3D12 required for the first release?
5. Which game set defines “useful”?
6. What performance regression versus native Windows/Linux Proton is acceptable?
7. Can Apple toolkit components be redistributed in the intended product?
8. Is a full-root Z: drive acceptable?
9. Which codecs can be shipped in target jurisdictions?
10. Is VR/OpenXR in scope?
11. Is native arm64 worth a separate FEX port?
12. Who owns Wine/DXVK/vkd3d/FEX upstream relationships and long-term rebases?

Resolve these as architecture decision records before their dependent phases.

## 22. External references

- [Proton repository](https://github.com/ValveSoftware/Proton)
- [Proton Steamworks documentation](https://partner.steamgames.com/doc/steamhardware/proton?l=english)
- [Steamworks macOS platform and entitlement guidance](https://partner.steamgames.com/doc/store/application/platforms?l=english)
- [Steam overlay documentation](https://partner.steamgames.com/doc/features/overlay?language=english)
- [Valve Steam Runtime](https://github.com/ValveSoftware/steam-runtime)
- [MoltenVK runtime guide](https://github.com/KhronosGroup/MoltenVK/blob/main/Docs/MoltenVK_Runtime_UserGuide.md)
- [MoltenVK project and portability limitations](https://github.com/KhronosGroup/MoltenVK)
- [Apple Game Porting Toolkit](https://developer.apple.com/games/game-porting-toolkit/)
- [Apple Metal capability tables](https://developer.apple.com/metal/capabilities/)
- [Apple Rosetta translation environment](https://developer.apple.com/documentation/Apple-Silicon/about-the-rosetta-translation-environment)
- [Apple hardened runtime](https://developer.apple.com/documentation/xcode/configuring-the-hardened-runtime)
- [Apple allow-JIT entitlement](https://developer.apple.com/documentation/bundleresources/entitlements/com.apple.security.cs.allow-jit)
- [Apple distribution signing](https://developer.apple.com/documentation/xcode/creating-distribution-signed-code-for-the-mac/)
- [Apple notarization](https://developer.apple.com/documentation/security/notarizing-macos-software-before-distribution)

## 23. Final recommendation

Authorize a gated Proton-mac port, not a rewrite.

Start with the x86_64 Wine/macOS lane running natively on Intel and through Rosetta on Apple Silicon. Deliver a standalone vertical slice before binding the program to Steam's macOS compatibility-tool behavior. Use WineD3D to decouple platform bring-up from Vulkan. Add DXVK plus MoltenVK only through measured feature and title gates. Make D3D12 an independent go/no-go decision, with vkd3d-proton and any Apple translator evaluated under technical and legal constraints. Defer native arm64/FEX work until the Rosetta product demonstrates value and profiling shows a reason to incur that maintenance cost.

The reusable Wine macOS platform code makes the port technically credible. The program's critical uncertainties are graphics capability, Steam client integration, Apple-Silicon execution strategy, and signed distribution—not the absence of a Windows compatibility foundation.
