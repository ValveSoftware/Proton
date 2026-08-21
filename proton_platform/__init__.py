import sys
from proton_platform.base import PlatformBackend
from proton_platform.linux import LinuxPlatformBackend
from proton_platform.macos import MacOSPlatformBackend

_backend_instance = None

def get_platform_backend() -> PlatformBackend:
    global _backend_instance
    if _backend_instance is None:
        if sys.platform == "darwin":
            _backend_instance = MacOSPlatformBackend()
        else:
            _backend_instance = LinuxPlatformBackend()
    return _backend_instance
