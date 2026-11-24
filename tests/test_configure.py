import pathlib
import subprocess
import tempfile
import unittest


CONFIGURE = pathlib.Path(__file__).resolve().parents[1] / "configure.sh"


class ConfigureTests(unittest.TestCase):
    def test_option_values_are_preserved(self):
        for options in ("", "--privileged", "--env=FOO=bar", "--security-opt=label=disable"):
            with self.subTest(options=options), tempfile.TemporaryDirectory() as directory:
                build = pathlib.Path(directory)
                engine = build / "container-engine"
                # Only the container permission probe needs output.
                engine.write_text('#!/bin/sh\nif [ "$2" = "-v" ]; then echo 0; fi\nexit 0\n')
                engine.chmod(0o755)
                result = subprocess.run(
                    ["bash", str(CONFIGURE), "--proton-sdk-image=test-image",
                     f"--container-engine={engine}", f"--docker-opts={options}"],
                    cwd=build, capture_output=True, text=True,
                )
                self.assertEqual(result.returncode, 0, result.stderr)
                makefile = (build / "Makefile").read_text()
                if options:
                    self.assertIn(f"DOCKER_OPTS := {options}\n", makefile)
                else:
                    self.assertNotIn("DOCKER_OPTS :=", makefile)

    def test_invalid_options_are_rejected(self):
        for arguments in (["--unknown=value=other"], ["--enable-ccache=value=other"],
                          ["--build-name"], ["--build-name", "--enable-ccache"]):
            with self.subTest(arguments=arguments), tempfile.TemporaryDirectory() as directory:
                result = subprocess.run(
                    ["bash", str(CONFIGURE), *arguments], cwd=directory,
                    capture_output=True, text=True,
                )
                self.assertNotEqual(result.returncode, 0)
                self.assertIn("!!", result.stderr)
                self.assertFalse((pathlib.Path(directory) / "Makefile").exists())


if __name__ == "__main__":
    unittest.main()
