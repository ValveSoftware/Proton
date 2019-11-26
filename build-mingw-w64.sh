#!/bin/bash

set -e

# The Story So Far
#
# We need two cross-compilers to build Proton. These each have to run in the
# Steam runtimes, each of which only supports 32- or 64-bit programs. Our build
# VM is a 64-bit Linux machine. So our platform configurations are:
#
# 64-bit cross-compiler:
#  Build (where the compiler is built): 64-bit linux (our VM)
#  Host (where the compiler is run):    64-bit linux (64-bit Steam runtime)
#  Target (what the compiler outputs):  64-bit win32 (PE files to be run)
#
# 32-bit cross-compiler:
#  Build (where the compiler is built): 64-bit linux (our VM)
#  Host (where the compiler is run):    32-bit linux (32-bit Steam runtime)
#  Target (what the compiler outputs):  32-bit win32 (PE files to be run)
#
# The former is a pretty standard cross-compiler setup.
#
# gcc calls the latter, where all of the platforms are different, a "Canadian"
# build. See "The GNU configure and build system" by Ian Lance Taylor, section
# "Canadian Cross", available here:
#     https://www.airs.com/ian/configure/configure_6.html
#
# This turned out to be quite difficult, possibly due to the added complexity of
# mingw-w64. I'm documenting the problems I had and how I solved/worked around
# them here, to hopefully save myself or someone else some heartburn in the
# future. If you are a compiler expert and find yourself shaking your head at
# this poor fool, I welcome your assistance improving this.
#
# Canadian builds require the build machine to already have a cross-compiler for
# the Target platform available on the Build machine. Without this, the gcc build
# will fail with:
#
#     i686-w64-mingw32-gcc -dumpspecs > tmp-specs
#     /bin/bash: i686-w64-mingw32-gcc: command not found
#
# We are building both C and C++ lang support, so we need both gcc and g++
# cross-compilers available. With the Build->Target cross-compilers installed,
# we can now build gcc, and use that to build mingw-w64. After that, we need to
# build gcc's libraries, like libgcc and libstdc++v3, against those mingw-w64
# libraries.  However, the libatomic and/or libgomp builds will fail with:
#
#     checking for suffix of object files...
#     configure: error: in `/home/vagrant/mingw/build-i686-w64-mingw32/gcc/i686-w64-mingw32/libatomic':
#     configure: error: C compiler cannot create executables
#     See `config.log' for more details
#
#     checking for suffix of object files...
#     configure: error: in `/home/vagrant/mingw/build-i686-w64-mingw32/gcc/i686-w64-mingw32/libgomp':
#     configure: error: C compiler cannot create executables
#     See `config.log' for more details
#
# Digging into config.log shows it can't find libgcc:
#
#     configure:3722: checking whether the C compiler works
#     configure:3744: i686-w64-mingw32-gcc -L/home/vagrant/mingw/output/i686-w64-mingw32/lib -L/home/vagrant/mingw/output/mingw/lib -isystem /home/vagrant/mingw/output/i686-w64-mingw32/include -isystem /home/vagrant/mingw/output/mingw/include    -g -O2   conftest.c  >&5
#     /home/vagrant/mingw/output/lib/gcc/i686-w64-mingw32/9.2.0/../../../../i686-w64-mingw32/bin/ld: cannot find -lgcc
#     /home/vagrant/mingw/output/lib/gcc/i686-w64-mingw32/9.2.0/../../../../i686-w64-mingw32/bin/ld: cannot find -lgcc_eh
#     /home/vagrant/mingw/output/lib/gcc/i686-w64-mingw32/9.2.0/../../../../i686-w64-mingw32/bin/ld: cannot find -lgcc
#     /home/vagrant/mingw/output/lib/gcc/i686-w64-mingw32/9.2.0/../../../../i686-w64-mingw32/bin/ld: cannot find -lgcc_eh
#     collect2: error: ld returned 1 exit status
#
# I don't know what causes this (maybe Canadian builds don't like being split up
# like this?). However, installing libgcc explicitly first will work around it.
# After installing libgcc explicitly, we can then build the rest of gcc's
# libraries. That was all the easy (ha!) stuff. At this point, you will have a
# cross-compiler that will build Proton.
#
# However, there's a sneaky problem. For some reason the libstdc++v3 build system
# requires libstdc++ to be available to detect C-lang functions(?!?). It will
# still build without those C functions, but it may have far worse performance
# (see Proton github issue #3198). You can detect this situation by examining the
# config.log output for libstdc++v3 after your build completes:
#
#     configure:16811: checking for gettimeofday
#     configure:16827: checking sys/time.h usability
#     configure:16827:  i686-w64-mingw32-c++ -L/home/vagrant/mingw/output/i686-w64-mingw32/lib -L/home/vagrant/mingw/output/mingw/lib -isystem /home/vagrant/mingw/output/i686-w64-mingw32/include -isystem /home/vagrant/mingw/output/mingw/include    -c -g -O2 -fno-exceptions  conftest.cpp >&5
#     configure:16827: $? = 0
#     configure:16827: result: yes
#     configure:16827: checking sys/time.h presence
#     configure:16827:  i686-w64-mingw32-c++ -L/home/vagrant/mingw/output/i686-w64-mingw32/lib -L/home/vagrant/mingw/output/mingw/lib -isystem /home/vagrant/mingw/output/i686-w64-mingw32/include -isystem /home/vagrant/mingw/output/mingw/include    -E  conftest.cpp
#     configure:16827: $? = 0
#     configure:16827: result: yes
#     configure:16827: checking for sys/time.h
#     configure:16827: result: yes
#     configure:16840: checking for gettimeofday
#     configure:16875:  i686-w64-mingw32-c++ -L/home/vagrant/mingw/output/i686-w64-mingw32/lib -L/home/vagrant/mingw/output/mingw/lib -isystem /home/vagrant/mingw/output/i686-w64-mingw32/include -isystem /home/vagrant/mingw/output/mingw/include    -o conftest.exe -g -O2 -fno-exceptions   conftest.cpp  >&5
#     /home/vagrant/mingw/output/lib/gcc/i686-w64-mingw32/9.2.0/../../../../i686-w64-mingw32/bin/ld: cannot find -lstdc++
#     collect2: error: ld returned 1 exit status
#
# But that error doesn't kill configure, and it happily continues with this in
# config.h:
#
#     /* #undef _GLIBCXX_USE_GETTIMEOFDAY */
#
# This triggers the bad codepath in libstdc++v3 that caused the performance
# problem mentioned above, and is clearly wrong anyway, as gettimeofday is
# definitely available. Yes, this was a huge pain to puzzle out. I "solved" this
# by letting the libstdc++v3 build continue, then re-running the build after
# installing it, so now it will find libstdc++ and so correctly detect the C-lang
# function that has nothing at all to do with libstdc++. Argh.
#
# After all that, we finally have a functioning set of cross-compilers. Most of
# the configuration parameters used here are taken from the Arch Linux mingw-w64
# PKGBUILDs, as those were written by someone with more knowledge than me, and
# have had a lot of testing. We make one tweak to the gcc configuration, which is
# to disable SJLJ exceptions and enable DWARF2 debug symbols. The former
# apparently helps with performance on 32-bit, and the latter puts debug symbols
# in a format that more Linux tooling can read.
#
# Side note, the Arch Linux PKGBUILDs work very differently from how this script
# works. While working on this, I tried to adapt the PKGBUILDs' process here
# (e.g.  build a bootstrap C-lang compiler, use that to build mingw-w64, then
# rebuild gcc against the mingw-w64 CRT with C++-lang support), but I ran into a
# ton of problems, possibly caused by the Canadian-ness of the build, and
# eventually ran out of ideas for working around them.

if [ -z "$1" ]; then
    echo "Makes a local build of mingw-w64 in this directory and installs it to the given path."
    echo ""
    echo "Note: Requires a system mingw-w64 compiler to be present already on your build machine, for us to bootstrap with."
    echo ""
    echo "usage:"
    echo -e "\t$0 <installation path e.g. \$HOME/.local>"
    exit 1
fi

if [ -z "$MAKEFLAGS" ]; then
    JOBS=-j$(($(nproc) - 1))
fi

DST_DIR="$1"

BINUTILS_VER=2.32
BINUTILS_SRCTARBALL=binutils-$BINUTILS_VER.tar.xz
BINUTILS_URL="https://ftp.gnu.org/gnu/binutils/$BINUTILS_SRCTARBALL"
BINUTILS_SRCDIR=binutils-$BINUTILS_VER

GCC_VER=9.2.0
GCC_SRCTARBALL=gcc-$GCC_VER.tar.xz
GCC_URL="https://ftp.gnu.org/gnu/gcc/gcc-$GCC_VER/$GCC_SRCTARBALL"
GCC_SRCDIR=gcc-$GCC_VER

MINGW_W64_GITVER=v6.0.0
MINGW_W64_GITURL="git://git.code.sf.net/p/mingw-w64/mingw-w64"
MINGW_W64_SRCDIR=mingw-w64-git

ISL_VER=0.21
ISL_SRCTARBALL=isl-$ISL_VER.tar.bz2
ISL_URL="http://isl.gforge.inria.fr/isl-$ISL_VER.tar.bz2"
ISL_SRCDIR=isl-$ISL_VER

function setup_src {
    if [ ! -e "$BINUTILS_SRCTARBALL" ]; then
        wget -O "$BINUTILS_SRCTARBALL" "$BINUTILS_URL"
    fi

    if [ ! -e "$BINUTILS_SRCDIR" ]; then
        tar -xf "$BINUTILS_SRCTARBALL"
        for f in $(dirname $0)/mingw-w64-patches/binutils-*; do
            patch -d "$BINUTILS_SRCDIR" -p1 < $f
        done
    fi

    if [ ! -e "$ISL_SRCTARBALL" ]; then
        wget -O "$ISL_SRCTARBALL" "$ISL_URL"
    fi

    if [ ! -e "$ISL_SRCDIR" ]; then
        tar -xf "$ISL_SRCTARBALL"
    fi

    if [ ! -e "$GCC_SRCTARBALL" ]; then
        wget -O "$GCC_SRCTARBALL" "$GCC_URL"
    fi

    if [ ! -e "$GCC_SRCDIR" ]; then
        tar -xf "$GCC_SRCTARBALL"
        ln -s ../$ISL_SRCDIR $GCC_SRCDIR/isl
    fi

    if [ ! -e "$MINGW_W64_SRCDIR" ]; then
        #shallow clone, we just want this one version
        git clone -b $MINGW_W64_GITVER --depth 1 \
            "$MINGW_W64_GITURL" "$MINGW_W64_SRCDIR"
    fi
}

function build_arch {
    BUILD_ARCH=$(gcc -dumpmachine) #machine which is building the compiler
    HOST_ARCH=$1 #machine which will run the compiler
    WIN32_TARGET_ARCH=$2 #machine which we are building for
    NEWPATH=$DST_DIR/bin:$PATH

    mkdir -p build-$WIN32_TARGET_ARCH/
    pushd build-$WIN32_TARGET_ARCH/

        mkdir -p binutils/
        pushd binutils/
            if [ ! -e Makefile ]; then
                ../../$BINUTILS_SRCDIR/configure \
                    --prefix=$DST_DIR/ \
                    --build=$BUILD_ARCH \
                    --host=$HOST_ARCH \
                    --target=$WIN32_TARGET_ARCH \
                    --enable-lto \
                    --enable-plugins \
                    --enable-deterministic-archives \
                    --disable-multilib \
                    --disable-nls \
                    --disable-werror \
                    $BINUTILS_EXTRA_CONFIGURE
            fi
            make $JOBS configure-host
            make $JOBS LDFLAGS=-all-static
            make $JOBS install
        popd

        mkdir -p mingw-w64-headers/
        pushd mingw-w64-headers/
            if [ ! -e Makefile ]; then
                PATH=$NEWPATH:$PATH ../../$MINGW_W64_SRCDIR/mingw-w64-headers/configure \
                    --prefix=$DST_DIR/$WIN32_TARGET_ARCH/ \
                    --host=$WIN32_TARGET_ARCH \
                    --enable-sdk=all \
                    --enable-secure-api \
                    $MINGW_W64_HEADERS_EXTRA_CONFIGURE
            fi
            PATH=$NEWPATH:$PATH make $JOBS install
        popd

        mkdir -p gcc/
        pushd gcc/
            if [ ! -e Makefile ]; then
                #arguments mostly taken from Arch AUR mingw-w64-gcc PKGBUILD,
                #except "--disable-dw2-exceptions" swapped for "--disable-sjlj-exceptions --with-dwarf2"
                #for performance reasons on 32-bit
                LDFLAGS=-static PATH=$NEWPATH:$PATH ../../$GCC_SRCDIR/configure \
                    --prefix=$DST_DIR/ \
                    --build=$BUILD_ARCH \
                    --host=$HOST_ARCH \
                    --target=$WIN32_TARGET_ARCH \
                    --enable-static \
                    --enable-shared \
                    --enable-languages=c,lto,c++ \
                    --disable-multilib \
                    --enable-threads=posix \
                    --enable-fully-dynamic-string \
                    --enable-libstdcxx-time=yes \
                    --enable-libstdcxx-filesystem-ts=yes \
                    --enable-cloog-backend=isl \
                    --enable-libgomp \
                    --enable-lto \
                    --disable-sjlj-exceptions \
                    --with-dwarf2 \
                    $GCC_EXTRA_CONFIGURE
            fi
            PATH=$NEWPATH make $JOBS all-gcc
            PATH=$NEWPATH make $JOBS install-gcc
        popd

        mkdir -p mingw-w64-crt/
        pushd mingw-w64-crt/
            if [ ! -e Makefile ]; then
                PATH=$NEWPATH ../../$MINGW_W64_SRCDIR/mingw-w64-crt/configure \
                    --prefix=$DST_DIR/$WIN32_TARGET_ARCH/ \
                    --host=$WIN32_TARGET_ARCH \
                    --enable-wildcard \
                    $MINGW_W64_CRT_EXTRA_CONFIGURE
            fi
            PATH=$NEWPATH make $JOBS
            PATH=$NEWPATH make $JOBS install
        popd

        mkdir -p mingw-w64-winpthreads/
        pushd mingw-w64-winpthreads/
            if [ ! -e Makefile ]; then
                PATH=$NEWPATH ../../$MINGW_W64_SRCDIR/mingw-w64-libraries/winpthreads/configure \
                    --prefix=$DST_DIR/$WIN32_TARGET_ARCH/ \
                    --host=$WIN32_TARGET_ARCH \
                    --enable-static \
                    --enable-shared \
                    $MINGW_W64_WINPTHREADS_EXTRA_CONFIGURE
            fi
            PATH=$NEWPATH make $JOBS
            PATH=$NEWPATH make $JOBS install
        popd

        pushd gcc/
            #next step requires libgcc in default library location, but
            #"canadian" build doesn't handle that(?), so install it explicitly
            PATH=$NEWPATH make configure-target-libgcc
            PATH=$NEWPATH make -C $WIN32_TARGET_ARCH/libgcc $JOBS
            PATH=$NEWPATH make -C $WIN32_TARGET_ARCH/libgcc $JOBS install

            #install libstdc++ and other stuff
            PATH=$NEWPATH make $JOBS
            PATH=$NEWPATH make $JOBS install

            #libstdc++ requires that libstdc++ is installed in order to find gettimeofday(???)
            #so, rebuild libstdc++ after installing it above
            PATH=$NEWPATH make $JOBS -C $WIN32_TARGET_ARCH/libstdc++-v3/ distclean
            PATH=$NEWPATH make $JOBS
            PATH=$NEWPATH make $JOBS install
        popd

    popd
}

setup_src

mkdir -p $DST_DIR

MINGW_W64_CRT_EXTRA_CONFIGURE="--disable-lib64 --enable-lib32" build_arch i686-linux-gnu i686-w64-mingw32

MINGW_W64_CRT_EXTRA_CONFIGURE="--disable-lib32 --enable-lib64" build_arch x86_64-linux-gnu x86_64-w64-mingw32

echo "Done!"
