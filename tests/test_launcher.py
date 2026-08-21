import os
import subprocess
import sys
import unittest

SRCDIR = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))

class TestProtonLauncherAndBuild(unittest.TestCase):
    def test_proton_platform_import_in_launcher(self):
        cmd = [sys.executable, "-c", "import proton_platform; print(proton_platform.get_platform_backend().name)"]
        out = subprocess.check_output(cmd, cwd=SRCDIR).decode("utf-8").strip()
        self.assertIn(out, ["macos", "linux"])

    def test_configure_macos_script_exists_and_executable(self):
        script_path = os.path.join(SRCDIR, "configure-macos.sh")
        self.assertTrue(os.path.exists(script_path))
        self.assertTrue(os.access(script_path, os.X_OK))

    def test_compatibilitytool_vdf_format(self):
        vdf_path = os.path.join(SRCDIR, "dist", "compatibilitytool.vdf")
        if os.path.exists(vdf_path):
            with open(vdf_path, "r") as f:
                content = f.read()
            self.assertIn("compatibilitytools", content)
            self.assertIn("from_oslist", content)
            self.assertIn("to_oslist", content)
            if sys.platform == "darwin":
                self.assertIn("macos", content)

    def test_proton_mac_app_bundle_structure(self):
        app_dir = os.path.join(SRCDIR, "ProtonMac.app")
        if os.path.exists(app_dir):
            self.assertTrue(os.path.exists(os.path.join(app_dir, "Contents", "MacOS", "proton")))
            self.assertTrue(os.path.exists(os.path.join(app_dir, "Contents", "MacOS", "proton_platform")))
            self.assertTrue(os.path.exists(os.path.join(app_dir, "Contents", "Info.plist")))


if __name__ == "__main__":
    unittest.main()
