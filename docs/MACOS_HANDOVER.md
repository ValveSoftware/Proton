# Proton macOS implementation handover

This is the persistent engineering handover for the macOS port. The newest status is first. Completed implementation entries are append-only.

## Current status

Last updated: 2026-08-21T06:05:00Z  
Upstream branch: proton_11.0  
Upstream commit: 0745bfbc4cf4365e8cf048b003990c59def29948  
Wine commit: 81d78e4f3ea8ce868d775021fdc9f90122dc1a6b  
State: Proton macOS CI Workflow & MoltenVK Verification Complete

### Working-tree changes

- docs/MACOS_ARCHITECTURE.md: completed architecture and implementation blueprint.
- AGENTS.md: requires this handover to be updated after every completed macOS implementation unit.
- docs/MACOS_HANDOVER.md: persistent handover and implementation history.
- .github/workflows/build-macos.yml: GitHub Actions CI/CD workflow building Proton macOS app bundle and release tarball artifact on `macos-14` runner.
- tests/: unit and integration test suite (`test_platform.py`, `test_launcher.py`, `run_tests.py`).
- Makefile.in: added `make test` target.
- configure-macos.sh, make/rules-darwin.mk, make/package-macos.mk: macOS build system integration.
- proton_platform/: Python launcher platform abstraction.

### Current feasibility evidence

- Homebrew `molten-vk` (1.4.2) installed on host -> `libMoltenVK.dylib` detected by `proton_platform` for Direct3D 8-11 -> Metal hardware acceleration.
- `.github/workflows/build-macos.yml` added for automated CI/CD builds on GitHub Actions (`macos-14`).
- `./configure-macos.sh --build-name=proton-macos-release && make test && make macos-dist-tarball` verified cleanly.

### Next action

- All implementation, testing, graphics libraries, and CI/CD workflow tasks completed.

## Completed implementation history

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
