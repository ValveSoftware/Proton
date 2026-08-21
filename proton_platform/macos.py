import os
import subprocess
import sys
from proton_platform.base import PlatformBackend

class MacOSPlatformBackend(PlatformBackend):
    """macOS (Darwin) platform backend for Proton launcher under Rosetta / Apple Silicon."""

    @property
    def name(self) -> str:
        return "macos"

    @property
    def ld_library_path_var(self) -> str:
        return "DYLD_LIBRARY_PATH"

    @property
    def default_fsync_enabled(self) -> bool:
        # Darwin does not support Linux futex/fsync kernel module
        return False

    @property
    def default_esync_enabled(self) -> bool:
        # Darwin uses Wine server synchronization initially
        return False

    @property
    def supports_casefold(self) -> bool:
        # APFS handles case-insensitivity natively if formatted as case-insensitive
        return False

    @property
    def supports_wine_preloader(self) -> bool:
        # macOS Mach-O zerofill reserve is used instead of wine-preloader
        return False

    def get_default_compat_data_path(self) -> str:
        return os.path.expanduser("~/Library/Application Support/Proton/CompatData")

    def get_wine_cmd(self, g_proton, env: dict) -> list:
        # Avoid wine-preloader on macOS; run wine directly
        if "WINELOADERNOEXEC" in env:
            del env["WINELOADERNOEXEC"]
        steam_exe = "c:\\windows\\system32\\steam.exe"
        pfx_steam = os.path.join(g_proton.lib_dir, "wine/x86_64-windows/steam.exe")
        if os.path.exists(pfx_steam):
            return [g_proton.wine_bin, steam_exe]
        return [g_proton.wine_bin]

    def apply_dir_casefold(self, dir_path: str) -> None:
        # No-op on macOS
        pass

    def find_moltenvk_library(self) -> str:
        candidates = [
            "/opt/homebrew/lib/libMoltenVK.dylib",
            "/usr/local/lib/libMoltenVK.dylib",
            "/opt/homebrew/lib/libvulkan.dylib",
            "/usr/local/lib/libvulkan.dylib",
            os.path.expanduser("~/Library/Frameworks/MoltenVK.framework/MoltenVK"),
            "/Library/Frameworks/MoltenVK.framework/MoltenVK",
        ]
        for candidate in candidates:
            if os.path.exists(candidate):
                return candidate
        return None

    def configure_graphics_environment(self, env: dict, compat_config: set) -> None:
        moltenvk_path = self.find_moltenvk_library()
        if moltenvk_path:
            env.setdefault("MVK_CONFIG_LOG_LEVEL", "1")
            env.setdefault("MVK_ALLOW_METAL_EVENTS", "1")
            mvk_dir = os.path.dirname(moltenvk_path)
            if mvk_dir:
                for var_name in ("DYLD_LIBRARY_PATH", "DYLD_FALLBACK_LIBRARY_PATH"):
                    cur_val = env.get(var_name, "")
                    if mvk_dir not in cur_val.split(":"):
                        env[var_name] = (mvk_dir + ":" + cur_val).rstrip(":")
        else:
            # When MoltenVK is not installed on host, use WineD3D (OpenGL over MacDriver)
            compat_config.add("wined3d")

        # MacDriver specific optimization flags
        env.setdefault("WINE_MAC_NO_YIELD", "1")

    def get_diagnostics_info(self) -> dict:
        info = {"os": "macos", "platform": sys.platform}
        mvk = self.find_moltenvk_library()
        info["moltenvk"] = mvk if mvk else "Not found (using WineD3D)"
        try:
            out = subprocess.check_output(["sysctl", "-n", "machdep.cpu.brand_string"], stderr=subprocess.DEVNULL)
            info["cpu"] = out.decode("utf-8", errors="replace").strip()
        except (OSError, subprocess.CalledProcessError):
            pass
        return info
