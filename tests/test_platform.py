import os
import sys
import unittest

# Ensure top level source dir is on Python sys.path
SRCDIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
if SRCDIR not in sys.path:
    sys.path.insert(0, SRCDIR)

from proton_platform import get_platform_backend
from proton_platform.base import PlatformBackend
from proton_platform.linux import LinuxPlatformBackend
from proton_platform.macos import MacOSPlatformBackend


class TestPlatformBackend(unittest.TestCase):
    def test_factory_returns_backend(self):
        backend = get_platform_backend()
        self.assertIsInstance(backend, PlatformBackend)
        if sys.platform == "darwin":
            self.assertEqual(backend.name, "macos")
            self.assertIsInstance(backend, MacOSPlatformBackend)
        elif sys.platform.startswith("linux"):
            self.assertEqual(backend.name, "linux")
            self.assertIsInstance(backend, LinuxPlatformBackend)

    def test_macos_backend_properties(self):
        backend = MacOSPlatformBackend()
        self.assertEqual(backend.name, "macos")
        self.assertEqual(backend.ld_library_path_var, "DYLD_LIBRARY_PATH")
        self.assertFalse(backend.default_fsync_enabled)
        self.assertFalse(backend.default_esync_enabled)
        self.assertFalse(backend.supports_casefold)
        self.assertFalse(backend.supports_wine_preloader)
        self.assertIn("CompatData", backend.get_default_compat_data_path())

    def test_linux_backend_properties(self):
        backend = LinuxPlatformBackend()
        self.assertEqual(backend.name, "linux")
        self.assertEqual(backend.ld_library_path_var, "LD_LIBRARY_PATH")
        self.assertTrue(backend.default_fsync_enabled)
        self.assertTrue(backend.default_esync_enabled)
        self.assertTrue(backend.supports_casefold)
        self.assertTrue(backend.supports_wine_preloader)

    def test_macos_graphics_environment_configuration(self):
        backend = MacOSPlatformBackend()
        env = {}
        compat_config = set()
        backend.configure_graphics_environment(env, compat_config)
        self.assertIn("WINE_MAC_NO_YIELD", env)
        self.assertEqual(env["WINE_MAC_NO_YIELD"], "1")
        # If MoltenVK is missing on host, wined3d fallback should be added
        if not backend.find_moltenvk_library():
            self.assertIn("wined3d", compat_config)

    def test_diagnostics_info(self):
        backend = MacOSPlatformBackend()
        info = backend.get_diagnostics_info()
        self.assertIn("os", info)
        self.assertEqual(info["os"], "macos")
        self.assertIn("moltenvk", info)


if __name__ == "__main__":
    unittest.main()
