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
dependencies on the host side. For convenience we also provide
[Vagrant][vagrant] scripts that will create a VM with all the dependencies
and a working container runtime and build Proton inside it.

The direct container build is recommended for people building Proton on a
regular basis as it is faster and less resource hungry.

The Vagrant VM is easier to set up but comes with higher overhead, which
makes it more suitable for an occasional Proton build.

[vagrant]: https://www.vagrantup.com/


Building with Podman or Docker
------------------------------

### Preparing the build environment

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


### Configuring the build

```bash
mkdir ../build && cd ../build
../proton/configure.sh --container-engine=podman --enable-ccache --build-name=my_build
```

Running `configure.sh` will create a `Makefile` allowing you to build Proton.
The scripts checks if containers are functional and prompt you if any
host-side dependencies are missing. You should run the command from a
directory created specifically for your build.

The build by default uses Docker, but you can switch to another, compatible
engine with `--container-engine=<executable_name>`.

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


Building using Vagrant
----------------------

This section describes how to use a virtual machine to build proton.

### Preparing the build environment

The VM is managed with [Vagrant][vagrant], which you will need to install and
configure before invoking these commands. Proton's build system is most well
tested with Vagrant's VirtualBox and libvirt/qemu backends. It also requires
the vagrant-sshfs plugin. You may run into problems with the shared folder
(`vagrant_share`) and/or CPU and memory usage with other backends.

[vagrant]: https://www.vagrantup.com/


### The Easy Way

We provide a top-level Makefile which will execute most of the build commands
for you.

After checking out the repository and updating its submodules, assuming that
you have working Vagrant setup, you can build and install Proton with a
simple:

```bash
make install
```

You may need to restart the Steam client to see the new Proton tool. The
tool's name in the Steam client will be based on the currently checked out
branch of Proton. You can override this name using the `build_name` variable.

See `make help` for other build targets and options.

If your build VM gets cluttered, or falls out of date, you can use `vagrant
destroy` to wipe the VM clean, then invoke one of the below commands to start
over.


### The Detailed Way

Proton provides a Vagrantfile, which will automatically set up the Debian VM
for you. After installing Vagrant, initialize the VM by running from within
the Proton directory:

```bash
vagrant up
```

It will take a long time to download the base image and install all the build
dependencies. Eventually it will complete. You can SSH into the virtual
machine with:

```bash
vagrant ssh
```

**You are now inside a virtual machine with a working Docker setup.** At this
point you will need to configure and make the build, see [building with
podman or docker](#building-with-podman-or-docker) section for details.

```bash
mkdir build/
cd build
../proton/configure.sh --build-name=my_build
make
```

The Vagrantfile is set up to rsync the `proton` directory into the VM on
boot. On the host machine, you can use `vagrant rsync-auto` to have Vagrant
automatically sync changes on your host machine into the build machine. It is
recommended that you make changes on your host machine, and then perform the
build in the VM. Any changes you make in the `proton` directory on the VM may
be overwritten by later rsync updates from the host machine.

The Vagrantfile also creates a directory called `vagrant_share/` in the
`proton/` directory of your host machine, which is mounted at `/vagrant`
within the VM. You can use this shared folder to move your Proton build out
of the VM, or as one way to copy files into the VM.

When you are done with the VM, you can shut it down from the host machine:

```bash
vagrant halt
```

Please read the Vagrant documentation for more information about how to use
Vagrant VMs.


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

A correct local tool installation should look like this:

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
|                       | `PROTON_LOG`                       | Convenience method for dumping a useful debug log to `$PROTON_LOG_DIR/steam-$APPID.log` For more thorough logging, use `user_settings.py`. |
|                       | `PROTON_LOG_DIR`                   | Output log files into the directory specified. Defaults to your home directory. |
|                       | `PROTON_DUMP_DEBUG_COMMANDS`       | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | `PROTON_DEBUG_DIR`                 | Root directory for the Proton debug scripts, `/tmp` by default. |
|                       | `PROTON_WAIT_ATTACH`               | Wait for a debugger to attach to steam.exe before launching the game process. To attach to the game process at startup, debuggers should be set to follow child processes. |
|                       | `PROTON_CRASH_REPORT_DIR`          | Write crash logs into this directory. Does not clean up old logs, so may eat all your disk space eventually. |
| `wined3d`             | `PROTON_USE_WINED3D`               | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11, d3d10, and d3d9. |
| `nod3d11`             | `PROTON_NO_D3D11`                  | Disable `d3d11.dll`, for d3d11 games which can fall back to and run better with d3d9. |
| `nod3d10`             | `PROTON_NO_D3D10`                  | Disable `d3d10.dll` and `dxgi.dll`, for d3d10 games which can fall back to and run better with d3d9. |
| `noesync`             | `PROTON_NO_ESYNC`                  | Do not use eventfd-based in-process synchronization primitives. |
| `nofsync`             | `PROTON_NO_FSYNC`                  | Do not use futex-based in-process synchronization primitives. (Automatically disabled on systems with no `FUTEX_WAIT_MULTIPLE` support.) |
| `noxim`               | `PROTON_NO_XIM`                    | Enabled by default. Do not attempt to use XIM (X Input Methods) support. XIM support is known to cause crashes with libx11 older than version 1.7. |
| `enablenvapi`         | `PROTON_ENABLE_NVAPI`              | Enable NVIDIA's NVAPI GPU support library. |
| `nativevulkanloader`  |                                    | Use the Vulkan loader shipped with the game instead of Proton's built-in Vulkan loader. This breaks VR support, but is required by a few games. |
| `forcelgadd`          | `PROTON_FORCE_LARGE_ADDRESS_AWARE` | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. Enabled by default. |
| `heapdelayfree`       | `PROTON_HEAP_DELAY_FREE`           | Delay freeing some memory, to work around application use-after-free bugs. |
| `gamedrive`           | `PROTON_SET_GAME_DRIVE`            | Create an S: drive which points to the Steam Library which contains the game. |
| `noforcelgadd`        |                                    | Disable forcelgadd. If both this and `forcelgadd` are set, enabled wins. |
| `oldglstr`            | `PROTON_OLD_GL_STRING`             | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |
| `vkd3dfl12`           |                                    | Force the Direct3D 12 feature level to 12, regardless of driver support. |
| `vkd3dbindlesstb`     |                                    | Put `force_bindless_texel_buffer` into `VKD3D_CONFIG`. |
| `hidenvgpu`           | `PROTON_HIDE_NVIDIA_GPU`           | Force Nvidia GPUs to always be reported as AMD GPUs. Some games require this if they depend on Windows-only Nvidia driver functionality. See also DXVK's nvapiHack config, which only affects reporting from Direct3D. |
|                       | `WINE_FULLSCREEN_INTEGER_SCALING`  | Enable integer scaling mode, to give sharp pixels when upscaling. |
| `cmdlineappend:`      |                                    | Append the string after the colon as an argument to the game command. May be specified more than once. Escape commas and backslashes with a backslash. |
| `nowritewatch`        | `PROTON_NO_WRITE_WATCH`            | Disable support for memory write watches in ntdll. This is a very dangerous hack and should only be applied if you have verified that the game can operate without write watches. This improves performance for some very specific games (e.g. CoreRT-based games). |
| `seccomp`             | `PROTON_USE_SECCOMP`               | **Note: Obsoleted in Proton 5.13.** In older versions, enable seccomp-bpf filter to emulate native syscalls, required for some DRM protections to work. |
| `d9vk`                | `PROTON_USE_D9VK`                  | **Note: Obsoleted in Proton 5.0.** In older versions, use Vulkan-based DXVK instead of OpenGL-based wined3d for d3d9. |

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
