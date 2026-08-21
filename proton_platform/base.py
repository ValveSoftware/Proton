import os
import sys

class PlatformBackend:
    """Abstract base class for OS-specific Proton launcher operations."""

    @property
    def name(self) -> str:
        raise NotImplementedError

    @property
    def ld_library_path_var(self) -> str:
        raise NotImplementedError

    @property
    def default_fsync_enabled(self) -> bool:
        raise NotImplementedError

    @property
    def default_esync_enabled(self) -> bool:
        raise NotImplementedError

    @property
    def supports_casefold(self) -> bool:
        raise NotImplementedError

    @property
    def supports_wine_preloader(self) -> bool:
        raise NotImplementedError

    def get_default_compat_data_path(self) -> str:
        return None

    def get_wine_cmd(self, g_proton, env: dict) -> list:
        raise NotImplementedError

    def apply_dir_casefold(self, dir_path: str) -> None:
        pass

    def configure_graphics_environment(self, env: dict, compat_config: set) -> None:
        """Apply OS-specific graphics translation environment variables."""
        pass

    def get_diagnostics_info(self) -> dict:
        return {"os": sys.platform}
