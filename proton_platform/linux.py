import array
import fcntl
import os
import sys
from proton_platform.base import PlatformBackend

EXT2_IOC_GETFLAGS = 0x80046601
EXT2_IOC_SETFLAGS = 0x40046602
EXT4_CASEFOLD_FL = 0x40000000

class LinuxPlatformBackend(PlatformBackend):
    """Linux platform backend for Proton launcher."""

    @property
    def name(self) -> str:
        return "linux"

    @property
    def ld_library_path_var(self) -> str:
        return "LD_LIBRARY_PATH"

    @property
    def default_fsync_enabled(self) -> bool:
        return True

    @property
    def default_esync_enabled(self) -> bool:
        return True

    @property
    def supports_casefold(self) -> bool:
        return True

    @property
    def supports_wine_preloader(self) -> bool:
        return True

    def get_wine_cmd(self, g_proton, env: dict) -> list:
        if g_proton.host_pe_arch == "x86_64-windows":
            env["WINELOADERNOEXEC"] = "1"
            preloader_bin = g_proton.lib_dir + "/wine/x86_64-unix/wine-preloader"
            wine_unix_bin = g_proton.lib_dir + "/wine/x86_64-unix/wine"
            return [preloader_bin, wine_unix_bin, "c:\\windows\\system32\\steam.exe"]
        return [g_proton.wine_bin, "c:\\windows\\system32\\steam.exe"]

    def apply_dir_casefold(self, dir_path: str) -> None:
        try:
            dr = os.open(dir_path, 0o644)
            if dr < 0:
                return
            try:
                dat = array.array('I', [0])
                if fcntl.ioctl(dr, EXT2_IOC_GETFLAGS, dat, True) >= 0:
                    dat[0] = dat[0] | EXT4_CASEFOLD_FL
                    fcntl.ioctl(dr, EXT2_IOC_SETFLAGS, dat, False)
            except (OSError, IOError):
                pass
            finally:
                os.close(dr)
        except (OSError, IOError):
            pass

    def configure_graphics_environment(self, env: dict, compat_config: set) -> None:
        # Default Linux environment options
        pass

    def get_diagnostics_info(self) -> dict:
        info = {"os": "linux"}
        try:
            if os.path.exists("/proc/sys/vm/max_map_count"):
                with open("/proc/sys/vm/max_map_count", "r") as f:
                    info["max_map_count"] = f.read().strip()
        except OSError:
            pass
        return info
