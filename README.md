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
* Proton requires graphics drivers that are more recent than what is typically packaged in most distributions; please read the [list of requirements and quickstart for Ubuntu 18.04 users](https://github.com/ValveSoftware/Proton/blob/proton_3.16/PREREQS.md)
* Install and play games! Please refer to [this post](https://steamcommunity.com/games/221410/announcements/detail/1696055855739350561) for more information.

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

       git clone https://github.com/ValveSoftware/Proton.git proton

After cloning the Proton git repository, the next step will be to
obtain the various submodules that go into building Proton:

        cd proton
        git submodule update --init

If you wish to change any subcomponent, now is the time to do so.
For example, if you wish make changes to Wine, you would apply those
changes to the <tt>wine/</tt> directory.

---
Building
---
The following instructions describe how we create the build environment for the
production builds of Proton. For reproducibility and security reasons, we build
inside of a Debian 9 virtual machine. However, you should be able to follow
these instructions on other distributions as well.

The Steam Runtime provides a clean and consistent set of libraries. Software
distributed through Steam should depend only on libraries available through the
runtime, and so we build in that environment for production Proton builds.
However, if you are simply making a build for yourself, you can skip the Docker
and Steam Runtime setup steps below, as they take a very long time to set up.
At configure-time, pass the `--no-steam-runtime` flag instead of the Docker
flags shown here.

The build system uses Docker containers. It requires your user to be able to
usefully run Docker containers, which generally means [your user needs to be in
the "docker" group](https://docs.docker.com/install/linux/linux-postinstall/),
which can have [security
implications](https://docs.docker.com/engine/security/security/).

Starting from a stock Debian 9 installation, you will need to install the
`gpgv2`, `gnupg2`, `g++`, and `g++-6-multilib` packages from the
Debian repos.  You will also need to install `meson` version 0.43 or later,
which can be [acquired from backports](https://backports.debian.org/Instructions/). Next,
[install Docker-CE from the official Docker repositories](https://docs.docker.com/install/linux/docker-ce/debian/).
Finally, since we will need to be able to run Wine during the build process,
[install the `winehq-devel` package from the official WineHQ repositories](https://wiki.winehq.org/Debian).
This will pull in all of the dependencies required to run wine. You can then
(and we do) uninstall the `winehq-devel` package in order to ensure that a
system Wine installation does not interfere with your build process.

Next we set up the Steam runtime build environments. Here we use the
`wip-docker` branch to get access to the Docker images.

        cd ~
        git clone https://github.com/ValveSoftware/steam-runtime.git
        cd steam-runtime
        git checkout -b wip-docker origin/wip-docker

The steps below will build the Docker images. Each step will take a significant
amount of time. Note the path to a file in the `proton` directory. See the
previous section for instructions on cloning Proton.

        cd ~
        #set up the 64-bit Docker image for building Proton
        ./steam-runtime/setup_docker.sh --beta amd64 --extra-bootstrap=./proton/steamrt-bootstrap.sh steam-proton-dev
        #set up the 32-bit Docker image for building Proton
        ./steam-runtime/setup_docker.sh --beta i386 --extra-bootstrap=./proton/steamrt-bootstrap.sh steam-proton-dev32

With the build system set up, we can configure Proton and kick off the build.
If you are not building in the runtime, pass `--no-steam-runtime` to
`configure.sh` instead.

        mkdir proton/mybuild/
        cd proton/mybuild
        ../configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32
        make -j6 all dist

**Tip**: If you are building without the Steam runtime as shown here, you
should first run `make obj-wine64/Makefile obj-wine32/Makefile` and check the
files `obj-wine64/config.log` and `obj-wine32/config.log` for missing packages.
Search for `won't be supported`. A couple of missing packages are normal:
`opencv`, `gstreamer`, `vkd3d`, `oss`, and `libavcodec`. More than that may
indicate a problem. One easy way to install the dependencies required to build
Wine is to use `apt-get`'s `build-dep` feature.

The `mybuild/dist` folder now contains a build of Proton which you can install
manually or with `make install` to install into your user's Steam installation.
See the next section for more details.

---
Deploying
---
Steam ships with several versions of Proton, which games will use by default or
that you can select in Steam Settings's SteamPlay page. Steam also supports
running games with local builds of Proton, which you can install on your
machine.

To install a local build of Proton into Steam, make a new directory in
`~/.steam/steam/compatibilitytools.d/` with a tool name of your choosing and
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
|                       | <tt>PROTON_DEBUG_DIR<tt>       | Root directory for the Proton debug scripts, `/tmp` by default. |
| <tt>wined3d11</tt>    | <tt>PROTON_USE_WINED3D11</tt>  | Use OpenGL-based wined3d instead of Vulkan-based DXVK for d3d11. |
| <tt>nod3d11</tt>      | <tt>PROTON_NO_D3D11</tt>       | Disable <tt>d3d11.dll</tt>, for games which can fall back to and run better with d3d9. |
| <tt>noesync</tt>      | <tt>PROTON_NO_ESYNC</tt>       | Do not use eventfd-based in-process synchronization primitives. |
|                       | <tt>PROTON_NO_TWEAKS</tt>      | Disable game-specific tweaks provided by Proton. See `tweaks.py` for details. |

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
