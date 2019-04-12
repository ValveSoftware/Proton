---
Introduction
---
Proton is a tool for use with the Steam client which allows games which are
exclusive to Windows to run on the Linux operating system. It uses Wine to
facilitate this.

Most users will prefer to use Proton provided by the Steam client itself.  The
source code is provided to enable advanced users the ability to alter
Proton.  For example, some users may wish to use a different version of Wine with
a particular title.

---
Getting Started with Proton from Steam Play
---
* As the new Steam Play is still in Beta, it is recommended that you opt into the [Steam Client Beta](https://steamcommunity.com/sharedfiles/filedetails/?id=182912431) for the latest features and fixes.
* Proton requires graphics drivers that are more recent than what is typically packaged in most distributions; please read the [list of requirements and quickstart for Ubuntu 18.04 users](https://github.com/ValveSoftware/Proton/wiki/Requirements)
* Install and play games! Please refer to [this post](https://steamcommunity.com/games/221410/announcements/detail/1696055855739350561) for more information.
* Visit the [changelog](https://github.com/ValveSoftware/Proton/wiki/Changelog) for information about recent updates.

---
Obtaining Proton from source
---
**NOTE:** If you are not comfortable in a command line terminal, or if you find
any of the information presented in here strange and uncomfortable, then
this is probably not for you.  The instructions are likely to be incomplete
and require some knowledge and skill on your part, and there is no warranty
or guarantee that anyone will help you with this process.

We strongly recommend that most users use the production build of Proton.

The most current source for Proton is here:
  <https://github.com/ValveSoftware/Proton>

Which you can clone to your system with this command:

        git clone --recurse-submodules https://github.com/ValveSoftware/Proton.git proton
        cd proton

If you wish to change any subcomponent, now is the time to do so.
For example, if you wish make changes to Wine, you would apply those
changes to the <tt>wine/</tt> directory.

---
Easy build path
---

Building Proton is quite complicated. We provide a top-level Makefile which
will execute most of the build commands for you. This section describes how to
use this Makefile for simple Proton builds.

This Makefile uses a virtual machine to create a consistent build environment.
The VM is managed with [Vagrant](https://www.vagrantup.com/), which you will
need to install before invoking these commands. While Vagrant supports several
VM software backends, Proton's build system has been tested only with its
VirtualBox backend. You may run into problems with the shared folder
(`vagrant_share`) and/or CPU and memory usage with other backends.

If your build VM gets cluttered, or falls out of date, you can use `vagrant
destroy` to wipe the VM clean, then invoke one of the below commands to start
over.

After checking out Proton and updating its submodules, you can use these
targets to build Proton:

`make install` - This will install Proton into your user's Steam directory.
You may need to restart the Steam client to see it. The tool's name in the
Steam client will be based on the currently checked out branch of Proton. You
can override this name using the `build_name` variable.

`make deploy` - This will create a deployment tarball and set of files which
can be distributed as a Proton package. This is what we use to deploy Proton to
Steam users. The package will be dropped into a new directory in
`vagrant_share/`, named after the nearest Git tag (see `git describe`).

`make clean` - This will completely erase the build tree.

`make help` - View the Makefile documentation and examples.

We also provide targets useful for simple Wine development:

`make proton` - This will build Proton without copying its files out of the VM.

`make module=<module> module` - This will build both 32- and 64-bit versions of
the specified module, and copy the result into the `vagrant_share` directory.
This allows rapid iteration on one module. This target is only useful after
building Proton.

If you are doing significant Wine development or want to control the build with
more fine detail, see the full documentation below.

---
Building
---
At a high level, the build instructions are:

1. Set up your build environment
1. Configure the build
1. Build Proton
1. Install Proton locally (optional)

See below for more details on all of these steps. Please read all of the
instructions before proceeding.

---
Set up the build environment
---
Proton has a lot of build-time dependencies. The following instructions
describe how we create the build environment for the production builds of
Proton. For reproducibility and security reasons, we will be setting up a
Debian 9 virtual machine. However, you should be able to follow these
instructions on other distributions as well.

Proton provides a Vagrantfile, which will automatically set up the Debian 9 VM
for you. After installing [Vagrant](https://www.vagrantup.com/), initialize the
VM by running from within the Proton directory:

        vagrant up

It will take a long time to download and install the Steam runtime containers
and so on. Eventually it will complete. You can SSH into the virtual machine
with:

        vagrant ssh

At this point you will need to configure the build directory. See below.

The Vagrantfile is set up to rsync the `proton` directory into the VM on boot.
On the host machine, you can use `vagrant rsync-auto` to have Vagrant
automatically sync changes on your host machine into the build machine. It is
recommended that you make changes on your host machine, and then perform the
build in the VM. Any changes you make in the `proton` directory on the VM may
be overwritten by later rsync updates from the host machine.

The Vagrantfile also creates a directory called `vagrant_share` in the `proton`
directory of your host machine, which is mounted at `/vagrant` within the VM.
You can use this shared folder to move your Proton build out of the VM, or as
one way to copy files into the VM.

When you are done with the VM, you can shut it down from the host machine:

        vagrant halt

Please read the Vagrant documentation for more information about how to use
Vagrant VMs.

If you do not wish to use Vagrant, you can read through both Vagrantfile and
`vagrant-user-setup.sh` for the list of dependencies and instructions on how to
set up your own machine or another VM of your choosing. It is aimed at Debian
9, but you should be able to adapt them for other distributions.

---
Alternative: Building without the Steam Runtime
---
The Steam Runtime provides a clean and consistent set of libraries. Software
distributed through Steam should depend only on libraries available through the
runtime, and so we build in that environment for production Proton builds. The
Vagrantfile described above will set this up for you.  However, if you are
simply making a build for yourself, you may want to skip setting up the Steam
runtime, as it takes a very long time to set up. To do this, edit the
`vagrant-user-setup.sh` script appropriately before running `vagrant up`.

---
Configure the build
---
After setting up the build system, it is time to run the configure script which
will generate the Makefile to build your project. Run these steps. You may of
course use whatever paths you like.

        mkdir build/
        cd build
        ../proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32 --steam-runtime=$HOME/steam-runtime/runtime/

If you are building without the Steam runtime, then instead use:

        ../proton/configure.sh --no-steam-runtime

**Tip**: If you are building without the Steam runtime, you should now run
`make obj-wine64/Makefile obj-wine32/Makefile` and check the files
`obj-wine64/config.log` and `obj-wine32/config.log` for missing packages.
Search for `won't be supported`. A couple of missing packages are normal:
`opencv`, `gstreamer`, `vkd3d`, `oss`. More than that may indicate a problem.
Please see your distro's documentation to acquire the considerable build
dependencies for Wine.

---
Build Proton
---
A couple of Makefile targets are provided.

`make dist` will create a Proton installation in `dist/` that you can install
manually (see below), or automatically with `make install`.

`make deploy` will package Proton up for distribution via Steamworks.

---
Install Proton locally
---
Steam ships with several versions of Proton, which games will use by default or
that you can select in Steam Settings's SteamPlay page. Steam also supports
running games with local builds of Proton, which you can install on your
machine. The `install` target will perform the below steps for you.

To install a local build of Proton into Steam, make a new directory in
`~/.steam/root/compatibilitytools.d/` with a tool name of your choosing and
place the contents of `dist` into that folder. The `make install` target will
perform this task for you, installing the Proton build into the Steam folder
for the current user. You will have to restart the Steam client for it to pick
up on a new tool.

A correct local tool installation should look like this:

        compatibilitytools.d/my_proton/
        ├── compatibilitytool.vdf
        ├── filelock.py
        ├── LICENSE
        ├── proton
        ├── proton_dist.tar.gz
        ├── toolmanifest.vdf
        ├── user_settings.sample.py
        └── version

To enable your local build in Steam, go to the Steam Play section of the
Settings window. If the build was correctly installed, you should see
"proton-localbuild" in the drop-down list of compatibility tools.

Each component of this software is used under the terms of their licenses.  See
the <tt>LICENSE</tt> files here, as well as the <tt>LICENSE</tt>,
<tt>COPYING</tt>, etc files in each submodule and directory for details. If you
distribute a built version of Proton to other users, you must adhere to the
terms of these licenses.

----
Runtime Config Options
----
Proton can be tuned at runtime to help certain games run. The Steam client sets
some options for known games using the <tt>STEAM_COMPAT_CONFIG</tt> variable.
You can override these options using the environment variables described below.
The best way to set these environment overrides for all games is by renaming
`user_settings.sample.py` to `user_settings.py` and modifying it appropriately.
If you want to change the runtime configuration for a specific game, you can
use the `Set Launch Options` setting in the game's `Properties` dialog in the Steam client. You can launch the
game as you would with "`PROTON_VARIABLE=1 %command%`" [(source)](https://superuser.com/questions/954041/how-to-set-an-environment-variable-for-an-specific-game-on-steam-for-linux#980437).

To enable an option, set the variable to a non-<tt>0</tt> value.  To disable an
option, set the variable to <tt>0</tt>. To use Steam's default configuration, do
not specify the variable at all.

All of the below are runtime options. They do not effect permanent changes to
the Wine prefix. Removing the option will revert to the previous behavior.

| Compat config string  | Environment Variable           | Description  |
| :-------------------- | :----------------------------- | :----------- |
|                       | <tt>PROTON_LOG</tt>            | Convenience method for dumping a useful debug log to `$HOME/steam-$APPID.log`. For more thorough logging, use `user_settings.py`. |
|                       | <tt>PROTON_DUMP_DEBUG_COMMANDS</tt> | When running a game, Proton will write some useful debug scripts for that game into `$PROTON_DEBUG_DIR/proton_$USER/`. |
|                       | <tt>PROTON_DEBUG_DIR</tt>      | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d</tt>      | <tt>PROTON_USE_WINED3D</tt>    | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11 and d3d10. This used to be called `PROTON_USE_WINED3D11`, which is now an alias for this same option. |
| <tt>nod3d11</tt>      | <tt>PROTON_NO_D3D11</tt>       | Disable <tt>d3d11.dll</tt>, for d3d11 games which can fall back to and run better with d3d9. |
| <tt>nod3d10</tt>      | <tt>PROTON_NO_D3D10</tt>       | Disable <tt>d3d10.dll</tt> and <tt>dxgi.dll</tt>, for d3d10 games which can fall back to and run better with d3d9. |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
| <tt>forcelgadd</tt>   | <tt>PROTON_FORCE_LARGE_ADDRESS_AWARE</tt> | Force Wine to enable the LARGE_ADDRESS_AWARE flag for all executables. |
| <tt>oldglstr</tt>     | <tt>PROTON_OLD_GL_STRING</tt>  | Set some driver overrides to limit the length of the GL extension string, for old games that crash on very long extension strings. |

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
