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

**NOTE:** If you are not comfortable in a command line terminal, or if you find
any of the information presented in here strange and uncomfortable, then
this is probably not for you.  The instructions are likely to be incomplete
and require some knowledge and skill on your part, and there is no warranty
or guarantee that anyone will help you with this process.

We strongly recommend that most users use the production build of Proton.

---
Obtaining Proton
---
The most current source for Proton is here:
  <https://TODO>

Which you can clone to your system with this command:

       git clone TODO

If you clone the Proton git repository, the next step will be to
obtain the various submodules that go into building Proton:

        cd proton
        git submodule init
        git submodule update

If you wish to change any subcomponent, now is the time to do so.
For example, if you wish to use an alternate version of Wine, you would
now put that version in place in the wine/ directory in place of the
version that Proton is currently using.

---
Building for Linux
---
To build Proton for Linux, set up a Debian machine with the Steam chroots as
documented in the Steam Runtime repository:

  <https://github.com/ValveSoftware/steam-runtime>

In addition, you will need to install gcc-5 and a long list of dependencies
required for Wine.

The following set of commands is an example session, and may not be
complete.  It is important to examine the output near the end of
build/wine.win{64,32}/config.log to ensure that you have all of the
relevant libraries in each chroot.  Search for 'executing Makefile commands'
in config.log.  It is normal to be missing a few libraries, including
OpenCL, OSS, and XAudio2.

        cd
        git clone https://github.com/ValveSoftware/steam-runtime.git
        cd steam-runtime
        ./setup_chroot.sh --beta --i386
        schroot --chroot steamrt_scout_beta_i386

This will enter the chroot environment, where you would issue the following commands:

        sudo apt-get install gcc-5 g++-5 g++-5-multilib flex bison libosmesa6-dev libpcap-dev libhal-dev libsane-dev libv4l-dev libgphoto2-2-dev libcapi20-dev libgsm1-dev  libmpg123-dev libvulkan-dev libxslt1-dev
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

And then repeat all of the commands to install gcc and Wine depenedencies again.

Finally, change your directory back to proton, and run:

        cd ../proton
        ./build_proton.sh

That should configure and build a variety of sub modules, including Wine, and
then package the result up into dist/.

**NOTE:** For now, dxvk requires build-time components that are too new for Debian
9. It's recommended to build the DLLs on Arch Linux, where dxvk is actively
being developed. This may be resolved in dxvk in the future, or may be worked
around by using a newer Debian release. See comments in build_proton.sh.

---
Building for macOS
---
To build Proton for macOS, install the latest Xcode command line tools, as
well as cmake (for openal-soft) and a recent nasm (for libjpeg-turbo). You can
use a packager like Homebrew to find these packages. Then run:

        ./build_proton.sh

TODO - Surely there are other dependencies we have not listed there.

It is important to examine the output near the end of
build/wine.win{64,32}/config.log to ensure that you have all of the
relevant libraries required to build Wine properly.

---
Deploying
---
Once built, the dist/ directory will contain the files which can be distributed
through Steam. For testing purposes, you should be able to clear out the files
in your steamapps/common/Proton directory and replace them with the contents of
dist/. The proton script will unpack the files on first run.  Note that if you
use the Steam client to verify local files, it will restore the production version
of Proton.

Each component of this software is used under the terms of their licenses.
See the LICENSE files here, as well as the LICENSE, COPYING, etc files in each
submodule and directory for details.


----
Runtime Config Options
----
Proton can be tuned at runtime to help certain games run.  Options can either
be defined in a comma-separated list stored in the STEAM_COMPAT_CONFIG
environment variable when running Proton (the Steam client does this),
or passed through the presence of individual environment variables as documented below.

All of the below are runtime options. They do not effect permanent changes to
the Wine prefix. Removing the option will revert to the previous behavior.

| Compat config string  | Environment Variable  | Description  |
| :-------------------- | :-------------------- | :----------- |
|       dxvk            |    PROTON_USE_DXVK    | Run the game with DXVK instead of wined3d. |
|       nod3d11         |    PROTON_NO_D3D11    | Disable d3d11.dll, for games which can fall
                                                  back to and run better with d3d9. |

<!-- Target:  GitHub Flavor Markdown.  To test locally:  pandoc -f markdown_github -t html README.md  -->
