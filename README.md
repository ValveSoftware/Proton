---
Introduction
---
Proton is a tool for use with the Steam client which allows games which are
exclusive to Windows to run on Linux and macOS operating systems. It uses Wine
to facilitate this.

Most users will prefer to use Proton provided by the Steam client itself.  The
source code is provided to enable advanced users the ability to alter
Proton.  For example, some users may wish to use a different version of Wine with
a particular title.

---
Getting Started with Proton from Steam Play
---
* As the new Steam Play is still in Beta, it is recommended that you opt into the [Steam Client Beta](https://steamcommunity.com/sharedfiles/filedetails/?id=182912431) for the latest features and fixes.
* Proton requires graphics drivers that are more recent than what is typically packaged in most distributions; please read the [list of requirements and quickstart for Ubuntu 18.04 users](https://github.com/ValveSoftware/Proton/blob/proton_3.7/PREREQS.md)
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
        #for linux:
        git submodule update --init wine dxvk ffmpeg openal-soft openvr
        #for macos:
        git submodule update --init

If you wish to change any subcomponent, now is the time to do so.
For example, if you wish make changes to Wine, you would apply those
changes to the <tt>wine/</tt> directory.

---
Building for Linux
---
To build Proton for Linux, set up a Debian machine with the Steam runtime and
chroots as documented in the Steam Runtime repository:

  <https://github.com/ValveSoftware/steam-runtime>

In addition, you will need to install gcc-5 and a long list of dependencies
required for Wine. The following set of commands is an example session, and may
not be complete.

        cd ~
        git clone https://github.com/ValveSoftware/steam-runtime.git
        cd steam-runtime
        #install the end-user steam runtime:
        ./build-runtime.py
        #install the 32-bit scout_beta runtime:
        ./setup_chroot.sh --beta --i386
        #enter the 32-bit runtime:
        schroot --chroot steamrt_scout_beta_i386

This will enter the chroot environment, where you would issue the following commands:

        sudo apt-get install gcc-5 g++-5 g++-5-multilib flex bison libosmesa6-dev libpcap-dev libhal-dev libsane-dev libv4l-dev libgphoto2-2-dev libcapi20-dev libgsm1-dev libmpg123-dev libvulkan-dev libxslt1-dev nasm yasm
        sudo update-alternatives --install `which gcc` gcc `which gcc-5` 50
        sudo update-alternatives --set gcc `which gcc-5`
        sudo update-alternatives --install `which g++` g++ `which g++-5` 50
        sudo update-alternatives --set g++ `which g++-5`
        sudo update-alternatives --install `which cpp` cpp-bin `which cpp-5` 50
        sudo update-alternatives --set cpp-bin `which cpp-5`
        exit

Next, you need to repeat the process, but for amd64:

        ./setup_chroot.sh --beta --amd64
        schroot --chroot steamrt_scout_beta_amd64

And then repeat all of the commands to install gcc and Wine dependencies again.

In addition, your host system will need to be able to run Wine in both 64-bit and
32-bit modes in order to create the default prefix. It is recommended to
install Wine from your package manager, including its optional dependencies.

The openal-soft build system requires cmake 3.0.2 or later, which is newer than
the Steam runtime SDK provides. You will need to build and install a newer
cmake into each of the runtimes. For convenience, the build_proton.sh script
will attempt to use cmake from ~/opt32/bin/ and ~/opt64/bin/, if available.

The following example session obtained and built cmake:

      cd /tmp
      wget https://cmake.org/files/v3.11/cmake-3.11.4.tar.gz
      schroot --chroot steamrt_scout_beta_i386
      tar -xzf cmake-3.11.4.tar.gz
      cd cmake-3.11.4
      ./configure --parallel=4 --prefix=~/opt32
      make -j 4 && make install
      exit
      rm -rf cmake-3.11.4
      schroot --chroot steamrt_scout_beta_amd64
      tar -xzf cmake-3.11.4.tar.gz
      cd cmake-3.11.4
      ./configure --parallel=4 --prefix=~/opt64
      make -j 4 && make install
      exit


Finally, change your directory back to proton, and run:

        cd ../proton
        ./build_proton.sh

That should configure and build Wine, and then package the result up into
<tt>dist/</tt>. It is important to examine the output near the end of
<tt>build/wine.win{64,32}/config.log</tt> to ensure that you have all of the relevant
libraries in each chroot. Search for '<tt>executing Makefile commands</tt>' in
<tt>config.log</tt> to find messages about missing libraries. It is normal to be missing
a few libraries, including OpenCL, OSS, and libav.

**NOTE:** The build_proton.sh script builds most components inside the Steam runtime
chroot.  However, dxvk will not build in that environment, so the build_proton.sh
script will build it on your local system.  This will require you to be able to
build dxvk on your local system; refer to [the dxvk README.md](https://github.com/ValveSoftware/dxvk/blob/master/README.md) for more details.

---
Building for macOS
---
To build Proton for macOS, install the latest Xcode command line tools, as
well as cmake (for openal-soft), a recent nasm (for libjpeg-turbo), libtool, and automake. You can
use a packager like [Homebrew](https://brew.sh/) to find these packages.

        brew install cmake nasm libtool automake

Then run:

        ./build_proton.sh

TODO - Surely there are other dependencies we have not listed there.

It is important to examine the output near the end of
<tt>build/wine.win{64,32}/config.log</tt> to ensure that you have all of the
relevant libraries required to build Wine properly.

---
Deploying
---
Once built, the <tt>dist/</tt> directory will contain the files which can be distributed
through Steam. For testing purposes, you should be able to clear out the files
in your <tt>steamapps/common/Proton</tt> directory and replace them with the contents of
<tt>dist/</tt>. The <tt>proton</tt> script will unpack the files on first run.  Note that if you
use the Steam client to verify local files, it will restore the production version
of Proton.

Each component of this software is used under the terms of their licenses.
See the <tt>LICENSE</tt> files here, as well as the <tt>LICENSE</tt>, <tt>COPYING</tt>, etc files in each
submodule and directory for details.


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

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
