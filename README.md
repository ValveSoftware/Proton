Introduction
------------

**Proton** is a tool for use with the Steam client which allows games which are
exclusive to Windows to run on the Linux operating system. It uses Wine to
facilitate this.

**Most users should use Proton provided by the Steam Client itself.** See
[this Steam Community post][steam-play-introduction] for more details.

The source code is provided to enable advanced users the ability to alter
Proton. For example, some users may wish to use a different version of Wine
with a particular title.

**The changelog** is available on [our wiki][changelog].

[steam-play-introduction]: https://steamcommunity.com/games/221410/announcements/detail/1696055855739350561
[changelog]: https://github.com/ValveSoftware/Proton/wiki/Changelog


Obtaining Proton sources
------------------------

Acquire Proton's source by cloning <https://github.com/ValveSoftware/Proton>
and checking out the branch you desire.

You can clone the latest Proton to your system with this command:

```bash
git clone --recurse-submodules https://github.com/ValveSoftware/Proton.git proton
```

Be sure to update submodules when switching between branches:

```bash
git checkout experimental_6.3
git submodule update --init --recursive
```

If you want to change any subcomponent, now is the time to do so. For
example, if you wish to make changes to Wine, you would apply them to the
`wine/` directory.


Building Proton
---------------

Most of Proton builds inside the Proton SDK container with very few
dependencies on the host side.

## Preparing the build environment

You need either a Docker or a Podman setup. We highly recommend [the rootless
Podman setup][rootless-podman]. Please refer to your distribution's
documentation for setup instructions (e.g. Arch [Podman][arch-podman] /
[Docker][arch-docker], Debian [Podman][debian-podman] /
[Docker][debian-docker]).

[rootless-podman]: https://github.com/containers/podman/blob/main/docs/tutorials/rootless_tutorial.md
[arch-podman]: https://wiki.archlinux.org/title/Podman
[arch-docker]: https://wiki.archlinux.org/title/Docker
[debian-podman]: https://wiki.debian.org/Podman
[debian-docker]: https://wiki.debian.org/Docker


## The Easy Way

We provide a top-level Makefile which will execute most of the build commands
for you.

After checking out the repository and updating its submodules, assuming that
you have a working Docker or Podman setup, you can build and install Proton
with a simple:

```bash
make install
```

If your build system is missing dependencies, it will fail quickly with a clear
error message.

After the build finishes, you may need to restart the Steam client to see the
new Proton tool. The tool's name in the Steam client will be based on the
currently checked out branch of Proton. You can override this name using the
`build_name` variable.

See `make help` for other build targets and options.



## Manual building

### Configuring the build

```bash
mkdir ../build && cd ../build
../proton/configure.sh --enable-ccache --build-name=my_build
```

Running `configure.sh` will create a `Makefile` allowing you to build Proton.
The scripts checks if containers are functional and prompt you if any
host-side dependencies are missing. You should run the command from a
directory created specifically for your build.

The configuration script tries to discover a working Docker or Podman setup
to use, but you can force a compatible engine with
`--container-engine=<executable_name>`.

You can enable ccache with `--enable-cache` flag. This will mount your
`$CCACHE_DIR` or `$HOME/.ccache` inside the container.

`--proton-sdk-image=registry.gitlab.steamos.cloud/proton/soldier/sdk:<version>`
can be used to build with a custom version of the Proton SDK images.

Check `--help` for other configuration options.

NOTE: If **SELinux** is in use, the Proton build container may fail to access
your user's files. This is caused by [SELinux's filesystem
labels][selinux-labels]. You may pass the `--relabel-volumes` switch to
configure to cause the [container engine to relabel its
bind-mounts][bind-mounts] and allow access to those files from within the
container. This can be dangerous when used with system directories. Proceed
with caution and refer your container engine's manual.

[selinux-labels]: https://access.redhat.com/documentation/en-us/red_hat_enterprise_linux/6/html/security-enhanced_linux/sect-security-enhanced_linux-working_with_selinux-selinux_contexts_labeling_files
[bind-mounts]: https://docs.docker.com/storage/bind-mounts/


### Building

```
make
```

**Important make targets:**

`make install` - install Proton into your user's Steam directory, see the [install Proton
locally](#install-proton-locally) section for details.

`make redist` - create a redistribute build (`redist/`) that can be copied to
`~/.steam/root/compatibilitytools.d/`.

`make deploy` - create a deployment build (`deploy/`). This is what we use to
deploy Proton to Steam users via Steamworks.

`make module=<module> module` - build both 32- and 64-bit versions of the
specified wine module. This allows rapid iteration on one module. This target
is only useful after building Proton.

`make dxvk` / `make vkd3d-proton` - rebuild DXVK / vkd3d-proton.


### Debug Builds

To prevent symbol stripping add `UNSTRIPPED_BUILD=1` to the `make`
invocation. This should be used only with a clean build directory.

E.g.:

```
mkdir ../debug-proton-build && cd ../debug-proton-build
../proton/configure.sh --enable-ccache --build-name=debug_build
make UNSTRIPPED_BUILD=1 install
```


Install Proton locally
----------------------

Steam ships with several versions of Proton, which games will use by default or
that you can select in Steam Settings' Steam Play page. Steam also supports
running games with local builds of Proton, which you can install on your
machine.

To install a local build of Proton into Steam, make a new directory in
`~/.steam/root/compatibilitytools.d/` with a tool name of your choosing and
place the directory containing your redistributable build under that path.

The `make install` target will perform this task for you, installing the
Proton build into the Steam folder for the current user. You will have to
restart the Steam client for it to pick up on a new tool.

A correct local tool installation should look similar to this:

```
compatibilitytools.d/my_proton/
├── compatibilitytool.vdf
├── filelock.py
├── LICENSE
├── proton
├── proton_dist.tar
├── toolmanifest.vdf
├── user_settings.sample.py
└── version
```

To enable your local build in Steam, go to the Steam Play section of the
Settings window. If the build was correctly installed, you should see
"proton-localbuild" in the drop-down list of compatibility tools.

Each component of this software is used under the terms of their licenses.
See the `LICENSE` files here, as well as the `LICENSE`, `COPYING`, etc files
in each submodule and directory for details. If you distribute a built
version of Proton to other users, you must adhere to the terms of these
licenses.


Debugging
---------

Proton builds have their symbols stripped by default. You can switch to
"debug" beta branch in Steam (search for Proton in your library,
Properties... -> BETAS -> select "debug") or build without stripping (see
[Debug Builds section](#debug-builds)).

The symbols are provided through the accompanying `.debug` files which may
need to be explicitly loaded by the debugging tools. For GDB there's a helper
script `wine/tools/gdbinit.py` (source it) that provides `load-symbol-files`
(or `lsf` for short) command which loads the symbols for all the mapped files.

For tips on debugging see [docs/DEBUGGING.md](docs/DEBUGGING.md).


`compile_commands.json`
-----------------------

For use with [clangd](https://clangd.llvm.org/) LSP server and similar tooling.

Projects built using cmake or meson (e.g. vkd3d-proton) automatically come with
`compile_commands.json`. For autotools (e.g. wine) you have to [configure the
build](#configuring-the-build) with `--enable-bear` that uses
[bear](https://github.com/rizsotto/Bear) to create the compilation database.
It's not on by default as it make the build slightly slower.

The build system collects all the created compile_commands.json files in a
build subdirectory named `compile_commands/`.

The paths are translated to point to the real source (i.e. not the rsynced
copy). It still may depend on build directory for things like auto-generated
`config.h` though and for wine it may be beneficial to run `tools/make_requests`
in you source directories as those changes are not committed.

You can then configure your editor to use that file for clangd in a few ways:

1) directly - some editors/plugins allow you to specify the path to `compile_commands.json`
2) via `.clangd` file, e.g.
```bash
cd src/proton/wine/
cat > .clangd <<EOF
CompileFlags:
  CompilationDatabase: ../build/current-dev/compile_commands/wine64/
EOF
```
3) by symlinking:
```bash
ln -s ../build/current-dev/compile_commands/wine64/compile_commands.json .
```


Runtime Config Options
----------------------

Proton can be tuned at runtime to help certain games run. The Steam client sets
some options for known games using the `STEAM_COMPAT_CONFIG` variable.
You can override these options using the environment variables described below.

The best way to set these environment overrides for all games is by renaming
`user_settings.sample.py` to `user_settings.py` and modifying it appropriately.
This file is located in the Proton installation directory in your Steam library
(often `~/.steam/steam/steamapps/common/Proton #.#`).

If you want to change the runtime configuration for a specific game, you can
use the `Set Launch Options` setting in the game's `Properties` dialog in the
Steam client. Set the variable, followed by `%command%`. For example, input
"`PROTON_USE_WINED3D=1 %command%`" to use the OpenGL-based wined3d renderer
instead of the Vulkan-based DXVK renderer.

To enable an option, set the variable to a non-`0` value.  To disable an
option, set the variable to `0`. To use Steam's default configuration, do
not specify the variable at all.

All of the below are runtime options. They do not effect permanent changes to
the Wine prefix. Removing the option will revert to the previous behavior.

| Compat config string  | Environment Variable               | Description  |
| :-------------------- | :--------------------------------- | :----------- |
|                       | `PROTON_LOG`                       | Convenience method for dumping a useful debug log to `$PROTON_LOG_DIR/steam-$APPID.log`. Set to `1` to enable default logging, or set to a string to be appended to the default `WINEDEBUG` channels. |
|                       | `PROTON_LOG_DIR`                   | Output log files into the directory specified. Defaults to your home directory. |
|                       | `PROTON_WAIT_ATTACH`               | Wait for a debugger to attach to steam.exe before launching the game process. To attach to the game process at startup, debuggers should be set to follow child processes. |
|                       | `PROTON_CRASH_REPORT_DIR`          | Write crash logs into this directory. Does not clean up old logs, so may eat all your disk space eventually. |
| `wined3d`             | `PROTON_USE_WINED3D`               | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11, d3d10, and d3d9. |
| `nod3d11`             | `PROTON_NO_D3D11`                  | Disable `d3d11.dll`, for d3d11 games which can fall back to and run better with d3d9. |
| `nod3d10`             | `PROTON_NO_D3D10`                  | Disable `d3d10.dll` and `dxgi.dll`, for d3d10 games which can fall back to and run better with d3d9. |
| `dxvkd3d8`            | `PROTON_DXVK_D3D8`                 | Use DXVK's `d3d8.dll`. |
| `noesync`             | `PROTON_NO_ESYNC`                  | Do not use eventfd-based in-process synchronization primitives. |
| `nofsync`             | `PROTON_NO_FSYNC`                  | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| `noxim`               | `PROTON_NO_XIM`                    | Enabled by default. Do not attempt to use XIM (X Input Methods) support. XIM support is known to cause crashes with libx11 older than version 1.7. |
| `disablenvapi`        | `PROTON_DISABLE_NVAPI`             | Disable NVIDIA's NVAPI GPU support library. |
| `nativevulkanloader`  |                                    | Use the Vulkan loader shipped with the game instead of Proton's built-in Vulkan loader. This breaks VR support, but is required by a few games. |
| `forcelgadd`          | `PROTON_FORCE_LARGE_ADDRESS_AWARE` | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. Enabled by default. |
| `heapdelayfree`       | `PROTON_HEAP_DELAY_FREE`           | Delay freeing some memory, to work around application use-after-free bugs. |
| `gamedrive`           | `PROTON_SET_GAME_DRIVE`            | Create an S: drive which points to the Steam Library which contains the game. |
| `noforcelgadd`        |                                    | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| `oldglstr`            | `PROTON_OLD_GL_STRING`             | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
| `vkd3dfl12`           |                                    | Force the Direct3D 12 feature level to 12, regardless of driver support. |
| `vkd3dbindlesstb`     |                                    | Put `force_bindless_texel_buffer` into `VKD3D_CONFIG`. |
| `nomfdxgiman`         | `WINE_DO_NOT_CREATE_DXGI_DEVICE_MANAGER` | Enable hack to work around video issues in some games due to incomplete IMFDXGIDeviceManager support. |
| `noopwr`              | `WINE_DISABLE_VULKAN_OPWR`               | Enable hack to disable Vulkan other process window rendering which sometimes causes issues on Wayland due to blit being one frame behind. |
| `hidenvgpu`           | `PROTON_HIDE_NVIDIA_GPU`           | Force Nvidia GPUs to always be reported as AMD GPUs. Some games require this if they depend on Windows-only Nvidia driver functionality. See also DXVK's nvapiHack config, which only affects reporting from Direct3D. |
|                       | `WINE_FULLSCREEN_INTEGER_SCALING`  | Enable integer scaling mode, to give sharp pixels when upscaling. |
| `cmdlineappend:`      |                                    | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| `xalia`               | `PROTON_USE_XALIA`                 | Enable Xalia, a program that can add a gamepad UI for some keyboard/mouse interfaces. |
| `seccomp`             | `PROTON_USE_SECCOMP`               | **Note: Obsoleted in Proton 5.13.** In older versions, enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| `d9vk`                | `PROTON_USE_D9VK`                  | **Note: Obsoleted in Proton 5.0.** In older versions, use Vulkan-based DXVK instead of OpenGL-based wined3d for d3d9. |

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
