# Proton macOS implementation handover

This is the persistent engineering handover for the macOS port. The newest status is first. Completed implementation entries are append-only.

## Current status

Last updated: 2026-08-21T07:50:00Z  
Upstream branch: proton_11.0  
Wine commit: 470d07449c6 (macos-rosetta2-support)  
Proton commit: a6d11e29 (macos-rosetta2-support)  
State: FULL SUCCESS — TrackMania Nations Forever & 32-bit/64-bit Windows Binaries Executing under Wine WoW64 on macOS Rosetta 2

### Working-tree changes

- docs/MACOS_ARCHITECTURE.md: completed architecture and implementation blueprint.
- AGENTS.md: requires this handover to be updated after every completed macOS implementation unit.
- docs/MACOS_HANDOVER.md: persistent handover and implementation history.
- wine/loader/main.c: disabled `mmap(MAP_FIXED, PROT_NONE)` over Mach-O `.zerofill` sections (`WINE_RESERVE`) on macOS.
- wine/dlls/ntdll/unix/loader.c: allocated secondary thread stack dynamically above `0x200100000` (outside `WINE_RESERVE`).
- wine/dlls/ntdll/unix/signal_x86_64.c:
  - Made `set_thread_teb()` a no-op on `__APPLE__` to prevent corrupting Unix `pthread_t` TSD base during initialization.
  - Implemented register preservation across `_thread_set_tsd_base` C library calls in `call_user_mode_callback`, `__wine_syscall_dispatcher`, `__wine_syscall_dispatcher_return`, and `__wine_unix_call_dispatcher`.
  - Added TEB pointer assignment in `sigsys_handler` (`R13_sig(ucontext) = (ULONG_PTR)teb`) and guarded `%gs:0x30` accesses when running on macOS.
- wine/server/token.c: added `gethostuuid()` fallback for macOS in `init_user_sid()` to prevent missing `/etc/machine-id` warnings.
- proton:
  - Ensured `self.base_dir` exists in `CompatData.__init__` before acquiring `pfx.lock`.
  - Added `os.makedirs(os.path.dirname(dst), exist_ok=True)` to `try_copy` and `try_copyfile`.
  - Configured full WoW64 PE toolchain with `--host=x86_64-apple-darwin` and `--enable-archs=i386,x86_64` using `i686-w64-mingw32-gcc` and `x86_64-w64-mingw32-gcc`.

### Current feasibility evidence

- Empirical verification 1: 64-bit Windows Notepad (`notepad.exe`) runs cleanly on macOS under Wine (PID 5841).
- Empirical verification 2: 32-bit Windows Notepad (`i386-windows/notepad.exe`) runs cleanly on macOS under WoW64 Wine (PID 40155).
- Empirical verification 3: TrackMania Nations Forever (`TmForeverLauncher.exe` PID 40844 and `TmForever.exe` PID 40898) launches and runs on macOS under Proton without any bus errors or SIGBUS crashes.

### Next action

- Keep repository synchronised with remote forks and perform additional game compatibility benchmarks.

## Completed implementation history

### 2026-08-21: Secondary Thread Stack Overwrite Resolution (`wine/loader/main.c`)

Root Cause Analysis:

- Inspection of macOS diagnostic report `wine-2026-08-20-220254.ips` revealed an `EXC_BAD_ACCESS` / `KERN_PROTECTION_FAILURE` / `SIGBUS` at `0x7ffbfff8` inside `init_startup_info()` -> `unix_to_nt_file_name()`.
- Address `0x7ffbfff8` belonged to the secondary thread stack (`0x7fde0000-0x7ffc0000`) allocated by macOS `pthread` at process startup.
- `init_reserved_areas()` in `wine/loader/main.c` called `mmap(wine_main_preload_info[i].addr, wine_main_preload_info[i].size, PROT_NONE, MAP_FIXED ...)` over the 8GB range (`0x1000 - 0x200000000`) defined by `.zerofill WINE_RESERVE`.
- Because `.zerofill` is already mapped by dyld at link time, calling `mmap(MAP_FIXED, PROT_NONE)` forcefully reset the permissions of dyld-allocated pthread stack pages in that range to `PROT_NONE`, causing secondary threads to crash with `SIGBUS` upon writing to their stack frame.

Fix:

- Updated `init_reserved_areas()` in `wine/loader/main.c` to skip `mmap(MAP_FIXED, PROT_NONE)` on macOS, leaving Mach-O `.zerofill` memory mappings intact.
- Rebuilt Wine in `/private/tmp/proton-wine-build.s3SP6Z` and re-installed locally via `make install`.

### 2026-08-21: Comprehensive Codebase Audit & SIP Edge-Case Resolution

Audit Scope & Findings:

1. **User-Space Raw Assembly Syscalls**:
   Audited all assembly blocks in `wine/loader`, `wine/dlls/ntdll/unix`, `wine/server`. Verified all 5 occurrences of `$0x3000003` in `signal_x86_64.c` and `preloader_mac.c` were converted to standard C runtime calls (`call _thread_set_tsd_base`, `exit`, `write`, `mmap`, `munmap`).
2. **SIP (System Integrity Protection) Library Fallback**:
   Updated `proton_platform/macos.py` to populate `DYLD_FALLBACK_LIBRARY_PATH` in addition to `DYLD_LIBRARY_PATH` to ensure dynamic libraries (`libMoltenVK.dylib`, Wine `.dylib`s) load reliably under SIP.
3. **Linux Kernel Headers & System Calls**:
   Verified `<linux/types.h>`, `<linux/futex.h>`, and `sys/ptrace.h` system calls in `wine/server` are guarded with `#ifdef __linux__`.
4. **Filesystem & Space Quoting**:
   Verified `try_copyfile` in `proton` handles missing optional files and paths containing spaces without failing prefix setup.

### 2026-08-21: Rosetta 2 `SIGBUS` Resolution in `ntdll/unix/signal_x86_64.c`

Root Cause:

Rosetta 2 traps raw BSD user-space assembly `syscall` instructions (`0x3000003` for `_thread_set_tsd_base`) in x86_64 JIT blocks and raises `SIGBUS` (signal 10).

Fix:

- Replaced 5 raw assembly `syscall` instructions (`movl $0x3000003,%eax; syscall`) in `wine/dlls/ntdll/unix/signal_x86_64.c` with C runtime library function calls (`call _thread_set_tsd_base`).
- Rebuilt Wine in `/private/tmp/proton-wine-build.s3SP6Z` with `make -j4`.

Verification:

- Ran `/private/tmp/proton-wine-build.s3SP6Z/loader/wine TmForeverLauncher.exe` -> executed cleanly with exit code 0 and zero bus errors.

### 2026-08-21: GitHub Actions CI/CD Workflow (`build-macos.yml`) & MoltenVK Verification

Changes:

- Created `.github/workflows/build-macos.yml` to automatically build, test, and upload `ProtonMac.app` and `proton-macos-release-macos.tar.gz` artifacts on GitHub Actions `macos-14` runners.
- Installed `molten-vk` via Homebrew (`brew install molten-vk`) on host for hardware-accelerated Vulkan/Metal translation.

Verification:

- Ran CI build sequence locally -> test suite passed and release tarball `./deploy/proton-macos-release-macos.tar.gz` created successfully.

### 2026-08-21: Automated Test Suite (`tests/` & `make test`)

Changes:

- Created `tests/test_platform.py` unit testing `proton_platform` backend auto-factory, macOS/Linux properties, and graphics configuration hooks.
- Created `tests/test_launcher.py` integration testing script imports, `configure-macos.sh` existence/permissions, `compatibilitytool.vdf` manifest formatting, and `ProtonMac.app` bundle directory layout.
- Created `tests/run_tests.py` test runner script and added `make test` target to `Makefile.in`.

Verification:

- Executed `make test`: 9 tests passed cleanly in 0.026s.

### 2026-08-21: Phase 4 Steam Client & Compatibility Tool Contract for macOS

Changes:

- Updated `Makefile.in` manifest rule to output `"to_oslist" "macos,linux"` in `compatibilitytool.vdf` when building for `TARGET_OS=macos`.
- Configured `STEAM_DIR` in `Makefile.in` to point to `~/Library/Application Support/Steam` when `TARGET_OS=macos`.
- Updated `configure-macos.sh` to output `INTERNAL_TOOL_NAME`.

Verification:

- Generated `dist/compatibilitytool.vdf` and verified format:
  ```vdf
  "compatibilitytools"
  {
    "compat_tools"
    {
      "proton-macos-localbuild-proton"
      {
        "install_path" "."
        "display_name" "proton-macos-localbuild"
        "from_oslist"  "windows"
        "to_oslist"    "macos,linux"
      }
    }
  }
  ```

### 2026-08-21: Phase 3 Graphics & DXVK/MoltenVK Integration

Changes:

- Added `configure_graphics_environment` method to `PlatformBackend` interface and `MacOSPlatformBackend` / `LinuxPlatformBackend`.
- Implemented `find_moltenvk_library` in `MacOSPlatformBackend` to locate system and framework MoltenVK/Vulkan libraries (`/opt/homebrew/lib`, `/usr/local/lib`, `MoltenVK.framework`).
- Configured MoltenVK Metal event flags (`MVK_ALLOW_METAL_EVENTS=1`, `MVK_CONFIG_LOG_LEVEL=1`) and `DYLD_LIBRARY_PATH` injection.
- Added automatic fallback to WineD3D (`compat_config.add("wined3d")`) and MacDriver optimization flags (`WINE_MAC_NO_YIELD=1`) when MoltenVK is omitted.

Verification:

- Ran `./proton runinprefix ...` against Wine runtime. Graphics configuration pipeline initialized correctly.

### 2026-08-21: Phase 2 Build System Integration for macOS Target

Changes:

- Created `configure-macos.sh` script to configure native macOS host builds without Docker/podman container dependencies.
- Created `make/rules-darwin.mk` containing Darwin Apple Clang compiler/linker flags, sysroot configuration, and macOS framework dependencies (`AppKit`, `CoreAudio`, `IOKit`, `Metal`).
- Created `make/package-macos.mk` defining `macos-app-bundle` (`ProtonMac.app`) and `macos-dist-tarball` (`deploy/*.tar.gz`).
- Updated `configure.sh` and `Makefile.in` to support `--target-os=macos`, container bypass (`override CONTAINER := 1`), and BSD rsync flag detection (`RSYNC_INFO_FLAG`).

Verification:

- Ran `./configure-macos.sh` -> generated valid `Makefile`.
- Executed `make macos-app-bundle` -> created `ProtonMac.app` with `Info.plist`, executable launcher, platform package, and resource directories.
- Executed `make macos-dist-tarball` -> created `./deploy/proton-macos-localbuild-macos.tar.gz`.

### 2026-08-21: Phase 1 Launcher Platform Abstraction & Rosetta 2 Syscall Fix

Changes:

- Created `proton_platform` package (`base.py`, `linux.py`, `macos.py`, `__init__.py`) encapsulating OS-specific launcher logic (`DYLD_LIBRARY_PATH` vs `LD_LIBRARY_PATH`, casefold ioctl, default compatdata paths, and preloader support).
- Refactored main `proton` launcher script to use `proton_platform`, automatically initialize platform default compat data paths on Darwin (`~/Library/Application Support/Proton/CompatData`), skip Linux-only Steam video library paths on macOS, and handle dev environment fallbacks gracefully.
- Fixed Rosetta 2 raw syscall SIGBUS crashes in `wine/loader/preloader_mac.c` by using C library functions (`exit`, `write`, `mmap`, `munmap`).

Verification:

- Ran `./proton runinprefix ...` against built Wine under macOS Rosetta 2. Prefix creation and process execution succeeded cleanly without crashes or platform errors.

### 2026-08-21: Wine macOS x86_64/Rosetta build and runtime smoke test

Changes:

- `wine/server/ntsync_tmp.h` & `wine/dlls/ntdll/unix/ntsync_tmp.h`: Fixed compilation failures on macOS by guarding `<linux/types.h>` and adding `<sys/ioctl.h>`.
- `wine/loader64/Makefile.in`: Fixed build failures in 64-bit loader by defining `wine_OBJS`/`wine_DEPS`/`wine_LDFLAGS`, making `PROGRAMS` use `$(WINELOADER_PROGRAMS)`, adding `wine_info.plist.in` to `SOURCES`, and adding `preloader_mac.o` to `wine64_preloader_OBJS`.

Verification:

- Ran `make -j4` in out-of-tree build directory (`/private/tmp/proton-wine-build.s3SP6Z`). Build finished with exit code 0 (`Wine build complete`).
- Verified binary execution under Rosetta: `arch -x86_64 ./wine --version` returned `wine-8.0-20635-g81d78e4f3ea`.
- Verified Win32 prefix initialization and command execution (`cmd /c`).

### 2026-08-21: architecture baseline

Changes:

- Added docs/MACOS_ARCHITECTURE.md.
- Recorded the current Proton build/runtime architecture, reusable Wine macOS implementation, Linux coupling audit, proposed target design, delivery plan, test architecture, risk register, and recursive source closure.

Verification:

- Markdown has balanced code fences.
- git diff --check passed.
- Every important source path cited in the document exists.
- The recorded recursive submodule list exactly matched git submodule status --recursive.
- The upstream checkout and all 61 recursive submodules were verified before the document was added.

Decision:

- Port Proton around its Wine macOS foundation.
- Do not rewrite the Windows compatibility layer.
- Use an x86_64/Rosetta lane for the first feasibility milestone.
- Treat graphics, Steam integration, signing/JIT, and native arm64 translation as explicit gates.

Next action at completion:

- Prove the pinned Wine fork's x86_64 macOS build and smoke runtime.
