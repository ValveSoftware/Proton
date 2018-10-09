#!/bin/bash

usage()
{
    echo "$1: [--build component] [--release] [--package] [--with-ffmpeg]"
    echo "Build the Proton Steam Tool"
    echo "Component can be one or more of:"
    echo "  wine, wine32, wine64"
    echo "  vrclient, vrclient32, vrclient64"
    echo "  lsteamclient, lsteamclient32, lsteamclient64"
    echo "or all, which is the default.  The 'all' component also implies --package"
    echo "--release causes symbols to be stripped of debug info."
    echo "--package creates the tar ball in dist/."
    echo "--with-ffmpeg builds FFmpeg for WMA audio support"
}

set -e

JOBS=-j"$(( $(nproc 2>/dev/null||sysctl -n hw.ncpu 2>/dev/null||echo 4) + 1))"
PLATFORM=$(uname)

[ -z "$STEAM_RUNTIME" ] && STEAM_RUNTIME="$HOME/steam-runtime"

#./wine/ <-- wine source
#./build/ <-- build files
#./dist/ <-- proton build, ready to distribute

function build_freetype
{
    cd "$TOP"/freetype2

    if [ ! -e "$TOOLS_DIR64"/lib/libprotonfreetype."$LIB_SUFFIX" ]; then
        sed -i -e 's/^LIBRARY.*/LIBRARY=libprotonfreetype/' builds/unix/unix-cc.in

        bash ./autogen.sh

        #freetype 32-bit
        mkdir -p "$TOP"/build/freetype.win32
        cd "$TOP"/build/freetype.win32
        "$TOP"/freetype2/configure --prefix="$TOOLS_DIR32" --without-png --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32 PKG_CONFIG=false
        make $JOBS
        make install

        #freetype 64-bit
        mkdir -p "$TOP"/build/freetype.win64
        cd "$TOP"/build/freetype.win64
        "$TOP"/freetype2/configure --prefix="$TOOLS_DIR64" --without-png --host x86_64-apple-darwin PKG_CONFIG=false
        make $JOBS
        make install
    fi

    cp "$TOOLS_DIR32"/lib/libprotonfreetype.dylib "$DST_DIR"/lib
    $STRIP "$DST_DIR"/lib/libprotonfreetype.dylib

    cp "$TOOLS_DIR64"/lib/libprotonfreetype.dylib "$DST_DIR"/lib64
    $STRIP "$DST_DIR"/lib64/libprotonfreetype.dylib
}

function build_libpng
{
    cd "$TOP"/libpng
    if [ ! -e 'configure' ]; then
        sed -i -e 's/libpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/libprotonpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/' Makefile.am

        bash ./autogen.sh
    fi

    if [ ! -e "$TOOLS_DIR64"/lib/libprotonpng16."$LIB_SUFFIX" ]; then
        #libpng 32-bit
        mkdir -p "$TOP"/build/libpng.win32
        cd "$TOP"/build/libpng.win32
        "$TOP"/libpng/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32
        make $JOBS
        make install

        #libpng 64-bit
        mkdir -p "$TOP"/build/libpng.win64
        cd "$TOP"/build/libpng.win64
        "$TOP"/libpng/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
        make $JOBS
        make install
    fi

    cp "$TOOLS_DIR32"/lib/libprotonpng16.dylib "$DST_DIR"/lib
    $STRIP "$DST_DIR"/lib/libprotonpng16.dylib

    cp "$TOOLS_DIR64"/lib/libprotonpng16.dylib "$DST_DIR"/lib64
    $STRIP "$DST_DIR"/lib64/libprotonpng16.dylib
}

function build_libjpeg
{
    cd "$TOP"/libjpeg-turbo
    if [ ! -e 'configure' ]; then
        autoreconf -fiv
    fi

    #if this fails with an nasm error, install a newer nasm with
    #homebrew or the like and put it into your PATH

    if [ ! -e "$TOOLS_DIR64"/lib/libprotonjpeg."$LIB_SUFFIX" ]; then
        #libjpeg 32-bit
        mkdir -p "$TOP"/build/libjpeg.win32
        cd "$TOP"/build/libjpeg.win32
        "$TOP"/libjpeg-turbo/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-O3 -g -m32' LDFLAGS=-m32
        make $JOBS
        make install
        mv "$TOOLS_DIR32"/lib/lib{,proton}jpeg.dylib

        #libjpeg 64-bit
        mkdir -p "$TOP"/build/libjpeg.win64
        cd "$TOP"/build/libjpeg.win64
        "$TOP"/libjpeg-turbo/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
        make $JOBS
        make install
        mv "$TOOLS_DIR64"/lib/lib{,proton}jpeg.dylib
    fi

    cp "$TOOLS_DIR32"/lib/libprotonjpeg.dylib "$DST_DIR"/lib/
    $STRIP "$DST_DIR"/lib/libprotonjpeg.dylib

    cp "$TOOLS_DIR64"/lib/libprotonjpeg.dylib "$DST_DIR"/lib64/
    $STRIP "$DST_DIR"/lib64/libprotonjpeg.dylib
}

function build_openal
{
    if [ ! -e "$TOOLS_DIR64"/lib/libopenal."$LIB_SUFFIX" ]; then
        #openal 32-bit
        cd "$TOP"
        mkdir -p build/openal.win32
        cd build/openal.win32
        $I386_WRAPPER "$CMAKE32" "$TOP"/openal-soft -DCMAKE_C_FLAGS="-m32" -DCMAKE_INSTALL_PREFIX="$TOOLS_DIR32"
        $I386_WRAPPER make $JOBS VERBOSE=1
        $I386_WRAPPER make install VERBOSE=1

        #openal 64-bit
        cd "$TOP"
        mkdir -p build/openal.win64
        cd build/openal.win64
        $AMD64_WRAPPER "$CMAKE64" "$TOP"/openal-soft -DCMAKE_INSTALL_PREFIX="$TOOLS_DIR64"
        $AMD64_WRAPPER make $JOBS VERBOSE=1
        $AMD64_WRAPPER make install VERBOSE=1
    fi

    cp -L "$TOOLS_DIR32"/lib/libopenal* "$DST_DIR"/lib/
    cp -L "$TOOLS_DIR64"/lib/libopenal* "$DST_DIR"/lib64/
    $STRIP "$DST_DIR"/lib/libopenal."$LIB_SUFFIX"
    $STRIP "$DST_DIR"/lib64/libopenal."$LIB_SUFFIX"
}

function build_libSDL
{
    if [ ! -e "$TOOLS_DIR64/lib/libSDL2.$LIB_SUFFIX" ]; then
        cd "$TOP"/SDL-mirror
        bash ./autogen.sh

        #libsdl2 32-bit
        cd "$TOP"
        mkdir -p build/SDL2.win32
        cd build/SDL2.win32
        "$TOP"/SDL-mirror/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32
        make $JOBS
        make install-hdrs
        make install-lib

        #libsdl2 64-bit
        cd "$TOP"
        mkdir -p build/SDL2.win64
        cd build/SDL2.win64
        "$TOP"/SDL-mirror/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
        make $JOBS
        make install-hdrs
        make install-lib
    fi

    cp "$TOOLS_DIR32"/lib/libSDL2."$LIB_SUFFIX" "$DST_DIR"/lib
    $STRIP "$DST_DIR"/lib/libSDL2.dylib

    cp "$TOOLS_DIR64"/lib/libSDL2."$LIB_SUFFIX" "$DST_DIR"/lib64
    $STRIP "$DST_DIR"/lib64/libSDL2.dylib
}

function build_moltenvk
{
    #requires Xcode >= 9
    cd "$TOP"/MoltenVK/

    if [ ! -e "Package/Release/MoltenVK/macOS/libMoltenVK.dylib" ]; then
        ./fetchDependencies
        xcodebuild -scheme 'MoltenVK (Release)' build
    fi

    cp -a Package/Release/MoltenVK/include/* "$TOOLS_DIR64"/include/
    cp -a Package/Release/MoltenVK/macOS/libMoltenVK.dylib "$TOOLS_DIR64"/lib/
    cp -a Package/Release/MoltenVK/macOS/libMoltenVK.dylib "$DST_DIR"/lib64/
}

function build_ffmpeg
{
    if [ ! -e "$TOOLS_DIR64/lib/libavcodec.$LIB_SUFFIX" ]; then
        #ffmpeg 32-bit
        cd "$TOP"
        mkdir -p build/ffmpeg.win32
        cd build/ffmpeg.win32
        $I386_WRAPPER "$TOP"/ffmpeg/configure \
                --extra-cflags="$FFMPEG_CROSS_CFLAGS" --extra-ldflags="$FFMPEG_CROSS_LDFLAGS" \
                --prefix="$TOOLS_DIR32" \
                --disable-static \
                --enable-shared \
                --disable-programs \
                --disable-doc \
                --disable-avdevice \
                --disable-avformat \
                --disable-swresample \
                --disable-swscale \
                --disable-postproc \
                --disable-avfilter \
                --disable-alsa \
                --disable-iconv \
                --disable-libxcb_shape \
                --disable-libxcb_shm \
                --disable-libxcb_xfixes \
                --disable-sdl2 \
                --disable-xlib \
                --disable-zlib \
                --disable-bzlib \
                --disable-libxcb \
                --disable-vaapi \
                --disable-vdpau \
                --disable-everything \
                --enable-decoder=wmav2 \
                --enable-decoder=adpcm_ms
        $I386_WRAPPER make $JOBS
        $I386_WRAPPER make install


        #ffmpeg 64-bit
        cd "$TOP"
        mkdir -p build/ffmpeg.win64
        cd build/ffmpeg.win64
        $AMD64_WRAPPER "$TOP"/ffmpeg/configure --prefix="$TOOLS_DIR64" \
                --disable-static \
                --enable-shared \
                --disable-programs \
                --disable-doc \
                --disable-avdevice \
                --disable-avformat \
                --disable-swresample \
                --disable-swscale \
                --disable-postproc \
                --disable-avfilter \
                --disable-alsa \
                --disable-iconv \
                --disable-libxcb_shape \
                --disable-libxcb_shm \
                --disable-libxcb_xfixes \
                --disable-sdl2 \
                --disable-xlib \
                --disable-zlib \
                --disable-bzlib \
                --disable-libxcb \
                --disable-vaapi \
                --disable-vdpau \
                --disable-everything \
                --enable-decoder=wmav2 \
                --enable-decoder=adpcm_ms
        $AMD64_WRAPPER make $JOBS
        $AMD64_WRAPPER make install
    fi

    cp -L "$TOOLS_DIR32"/lib/libavcodec* "$DST_DIR"/lib/
    cp -L "$TOOLS_DIR32"/lib/libavutil* "$DST_DIR"/lib/
    cp -L "$TOOLS_DIR64"/lib/libavcodec* "$DST_DIR"/lib64/
    cp -L "$TOOLS_DIR64"/lib/libavutil* "$DST_DIR"/lib64/
}

function build_wine64
{
    cd "$TOP"/build/wine.win64
    STRIP="$STRIP" CFLAGS="-I$TOOLS_DIR64/include -g -O2" LDFLAGS="-L$TOOLS_DIR64/lib" PKG_CONFIG_PATH="$TOOLS_DIR64/lib/pkgconfig" CC="$CC" \
        PNG_CFLAGS="$PNG64_CFLAGS" PNG_LIBS="$PNG64_LIBS" ac_cv_lib_soname_png="$ac_cv_lib_soname_png64" \
        JPEG_CFLAGS="$JPEG64_CFLAGS" JPEG_LIBS="$JPEG64_LIBS" ac_cv_lib_soname_jpeg="$ac_cv_lib_soname_jpeg64" \
        FREETYPE_CFLAGS="$FREETYPE64_CFLAGS" FREETYPE_LIBS="$FREETYPE64_LIBS" ac_cv_lib_soname_freetype="$ac_cv_lib_soname_freetype64" \
        $AMD64_WRAPPER "$TOP"/wine/configure \
        --without-curses "$WITHOUT_X" \
        --enable-win64 --disable-tests --prefix="$DST_DIR"
    STRIP="$STRIP" $AMD64_WRAPPER make $JOBS
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $AMD64_WRAPPER make install-lib
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $AMD64_WRAPPER make prefix="$TOOLS_DIR64" libdir="$TOOLS_DIR64/lib64" dlldir="$TOOLS_DIR64/lib64/wine" install-dev install-lib
    rm -f "$DST_DIR"/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
    rm -rf "$DST_DIR/share/man/"
}

function build_wine32
{
    cd "$TOP"/build/wine.win32
    STRIP="$STRIP" CFLAGS="-I$TOOLS_DIR32/include -g -O2" LDFLAGS="-L$TOOLS_DIR32/lib" PKG_CONFIG_PATH="$TOOLS_DIR32/lib/pkgconfig" CC="$CC" \
        PNG_CFLAGS="$PNG32_CFLAGS" PNG_LIBS="$PNG32_LIBS" ac_cv_lib_soname_png="$ac_cv_lib_soname_png32" \
        JPEG_CFLAGS="$JPEG32_CFLAGS" JPEG_LIBS="$JPEG32_LIBS" ac_cv_lib_soname_jpeg="$ac_cv_lib_soname_jpeg32" \
        FREETYPE_CFLAGS="$FREETYPE32_CFLAGS" FREETYPE_LIBS="$FREETYPE32_LIBS" ac_cv_lib_soname_freetype="$ac_cv_lib_soname_freetype32" \
        $I386_WRAPPER "$TOP"/wine/configure \
        --without-curses "$WITHOUT_X" \
        --disable-tests --prefix="$TOP/build/dist.win32/"
    STRIP="$STRIP" $I386_WRAPPER make $JOBS
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $I386_WRAPPER make install-lib
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $I386_WRAPPER make prefix="$TOOLS_DIR32" libdir="$TOOLS_DIR32/lib" dlldir="$TOOLS_DIR32/lib/wine" install-dev install-lib

    #install 32-bit stuff manually, see
    # https://wiki.winehq.org/Packaging#WoW64_Workarounds
    cd "$TOP"/build/dist.win32/
    cp -a lib "$DST_DIR"/
    cp -a bin/wine "$DST_DIR"/bin/
    if [ "$PLATFORM" != "Darwin" ]; then
        cp -a bin/wine-preloader "$DST_DIR"/bin/
    fi
}

function build_lsteamclient64
{
    cd "$TOP"
    rm -rf build/lsteamclient.win64
    cp -a lsteamclient build/lsteamclient.win64
    cd "$TOP"/build/lsteamclient.win64/
    $AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -DSTEAM_API_EXPORTS \
        -I"$TOOLS_DIR64"/include/ \
        -I"$TOOLS_DIR64"/include/wine/ \
        -I"$TOOLS_DIR64"/include/wine/windows/ \
        -L"$TOOLS_DIR64"/lib64/ \
        -L"$TOOLS_DIR64"/lib64/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make $JOBS
    if [ x"$STRIP" != x ]; then
        $AMD64_WRAPPER $STRIP lsteamclient.dll.so
    fi
    cp -a lsteamclient.dll.so "$DST_DIR"/lib64/wine/
}

function build_lsteamclient32
{
    cd "$TOP"
    rm -rf build/lsteamclient.win32
    cp -a lsteamclient build/lsteamclient.win32
    cd "$TOP"/build/lsteamclient.win32/
    $I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
        -DSTEAM_API_EXPORTS \
        -I"$TOOLS_DIR32"/include/ \
        -I"$TOOLS_DIR32"/include/wine/ \
        -I"$TOOLS_DIR32"/include/wine/windows/ \
        -L"$TOOLS_DIR32"/lib/ \
        -L"$TOOLS_DIR32"/lib/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make $JOBS
    if [ x"$STRIP" != x ]; then
        $I386_WRAPPER $STRIP lsteamclient.dll.so
    fi
    cp -a lsteamclient.dll.so "$DST_DIR"/lib/wine/
}

function build_vrclient64
{
    cd "$TOP"
    rm -rf build/vrclient_x64
    cp -a vrclient_x64 build/vrclient_x64
    cd "$TOP"/build/vrclient_x64/
    $AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -I"$TOOLS_DIR64"/include/ \
        -I"$TOOLS_DIR64"/include/wine/ \
        -I"$TOOLS_DIR64"/include/wine/windows/ \
        -I.. \
        -L"$TOOLS_DIR64"/lib64/ \
        -L"$TOOLS_DIR64"/lib64/wine/ \
        --dll vrclient_x64
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make $JOBS -C vrclient_x64
    PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER winebuild --dll --fake-module -E vrclient_x64/vrclient_x64.spec -o vrclient_x64.dll.fake
    if [ x"$STRIP" != x ]; then
        $AMD64_WRAPPER $STRIP vrclient_x64/vrclient_x64.dll.so
    fi
    cp -a vrclient_x64/vrclient_x64.dll.so "$DST_DIR"/lib64/wine/
    cp -a vrclient_x64.dll.fake "$DST_DIR"/lib64/wine/fakedlls/vrclient_x64.dll
}

function build_vrclient64_tests
{
    build_vrclient64

    cp -a vrclient_x64/flatapi.c tests/
    $AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -I"$TOOLS_DIR64"/include/ \
        -I"$TOOLS_DIR64"/include/wine/ \
        -I"$TOOLS_DIR64"/include/wine/windows/ \
        -I../vrclient_x64/ \
        -L"$TOOLS_DIR64"/lib64/ \
        -L"$TOOLS_DIR64"/lib64/wine/ \
        tests
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make $JOBS -C tests
}

function build_vrclient32
{
    cd "$TOP"
    rm -rf build/vrclient
    cp -a vrclient_x64 build/vrclient
    cd "$TOP"/build/vrclient/
    mv vrclient_x64 vrclient
    mv vrclient/vrclient_x64.spec vrclient/vrclient.spec
    $I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
        -I"$TOOLS_DIR32"/include/ \
        -I"$TOOLS_DIR32"/include/wine/ \
        -I"$TOOLS_DIR32"/include/wine/windows/ \
        -I.. \
        -L"$TOOLS_DIR32"/lib/ \
        -L"$TOOLS_DIR32"/lib/wine/ \
        --dll vrclient
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make $JOBS -C vrclient
    PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER winebuild --dll --fake-module -E vrclient/vrclient.spec -o vrclient.dll.fake
    if [ x"$STRIP" != x ]; then
        $I386_WRAPPER $STRIP vrclient/vrclient.dll.so
    fi
    cp -a vrclient/vrclient.dll.so "$DST_DIR"/lib/wine/
    cp -a vrclient.dll.fake "$DST_DIR"/lib/wine/fakedlls/vrclient.dll
}

function build_vrclient32_tests
{
    build_vrclient32

    cp -a vrclient/flatapi.c tests/
    $I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -I"$TOOLS_DIR32"/include/ \
        -I"$TOOLS_DIR32"/include/wine/ \
        -I"$TOOLS_DIR32"/include/wine/windows/ \
        -I../vrclient/ \
        -L"$TOOLS_DIR32"/lib/ \
        -L"$TOOLS_DIR32"/lib/wine/ \
        tests
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make $JOBS -C tests
}

function build_dxvk
{
    #unfortunately the Steam chroots are too old to build DXVK, so we have to
    #build it in the host system
    if [ ! -e "$TOP/build/dxvk.win64/bin/d3d11.dll" ]; then
        cd "$TOP"/dxvk
        mkdir -p "$TOP"/build/dxvk.win32
        cd "$TOP"/dxvk
        PATH="$TOP/glslang/bin/:$PATH" meson --strip --buildtype="release" --prefix="$TOP"/build/dxvk.win32 --cross-file build-win32.txt "$TOP"/build/dxvk.win32
        cd "$TOP"/build/dxvk.win32
        PATH="$TOP/glslang/bin/:$PATH" ninja
        PATH="$TOP/glslang/bin/:$PATH" ninja install

        cd "$TOP"/dxvk
        mkdir -p "$TOP"/build/dxvk.win64
        PATH="$TOP/glslang/bin/:$PATH" meson --strip --buildtype="release" --prefix="$TOP"/build/dxvk.win64 --cross-file build-win64.txt "$TOP"/build/dxvk.win64
        cd "$TOP"/build/dxvk.win64
        PATH="$TOP/glslang/bin/:$PATH" ninja
        PATH="$TOP/glslang/bin/:$PATH" ninja install
    fi

    cd "$TOP"
    mkdir -p "$DST_DIR"/lib64/wine/dxvk
    cp "$TOP/build/dxvk.win64/bin/dxgi.dll" "$DST_DIR"/lib64/wine/dxvk/
    cp "$TOP/build/dxvk.win64/bin/d3d11.dll" "$DST_DIR"/lib64/wine/dxvk/
    git submodule status -- dxvk > "$DST_DIR"/lib64/wine/dxvk/version

    mkdir -p "$DST_DIR"/lib/wine/dxvk
    cp "$TOP/build/dxvk.win32/bin/dxgi.dll" "$DST_DIR"/lib/wine/dxvk/
    cp "$TOP/build/dxvk.win32/bin/d3d11.dll" "$DST_DIR"/lib/wine/dxvk/
    git submodule status -- dxvk > "$DST_DIR"/lib/wine/dxvk/version
}



PACKAGE=false
BUILD_COMPONENTS='all'
INSTALL_PROGRAM_FLAGS=''
for (( i=1; i <= $#; i++)); do
    param="${!i}"
    if [ "$param" == "--release" ]; then
        RELEASE_BUILD=1
        INSTALL_PROGRAM_FLAGS='-s'
    elif [ "$param" == "--package" ]; then
        PACKAGE=true
    elif [ "$param" == "--build" ]; then
        i=$((i+1))
        if [ "$i" -gt "$#" ]; then
            usage "$(basename "$0")"
            exit 1
        fi
        BUILD_COMPONENTS="${!i}"
    elif [ "$param" == "--with-ffmpeg" ]; then
        WITH_FFMPEG=1
    else
        usage "$(basename "$0")"
        exit 1
    fi
done

if [ "$BUILD_COMPONENTS" == "all" ]; then
    PACKAGE=true
fi

TOP="$PWD"
DST_DIR="$TOP/build/dist"
TOOLS_DIR64="$TOP/build/tools.win64"
TOOLS_DIR32="$TOP/build/tools.win32"
mkdir -p "$TOP"/dist
mkdir -p "$TOP"/build/wine.win{32,64} "$TOP"/build/dist.win32
mkdir -p "$DST_DIR"/{bin,lib,lib64}
mkdir -p "$TOOLS_DIR64"/lib{,64}

if [ x"$RELEASE_BUILD" == x ]; then
    set +e; CCACHE="$(command -v ccache)"; set -e
fi

if [ "$PLATFORM" == "Darwin" ]; then
    CC="$CCACHE clang"
    AMD64_WRAPPER=""
    I386_WRAPPER=""
    STRIP='strip -x'
    MAKE="make"
    LIB_SUFFIX="dylib"
    CMAKE32="cmake"
    CMAKE64="cmake"
    WITHOUT_X="--without-x"
    FFMPEG_CROSS_CFLAGS="-m32"
    FFMPEG_CROSS_LDFLAGS="-m32"
else
    CC="$CCACHE gcc"
    AMD64_WRAPPER="schroot --chroot steamrt_scout_beta_amd64 --"
    I386_WRAPPER="schroot --chroot steamrt_scout_beta_i386 --"
    STRIP='strip'
    MAKE="make"
    LIB_SUFFIX="so"
    WITHOUT_X=""
    FFMPEG_CROSS_CFLAGS=""
    FFMPEG_CROSS_LDFLAGS=""

    if [ -e "$HOME/opt32/bin/cmake" ]; then
        CMAKE32="$HOME/opt32/bin/cmake"
    else
        CMAKE32="cmake"
    fi
    if [ -e "$HOME/opt64/bin/cmake" ]; then
        CMAKE64="$HOME/opt64/bin/cmake"
    else
        CMAKE64="cmake"
    fi

    gcc_ver=$($AMD64_WRAPPER gcc -v 2>&1 | grep 'gcc version' | cut -d' ' -f3)
    gcc_maj=$(echo "$gcc_ver" | cut -d'.' -f1)
    gcc_min=$(echo "$gcc_ver" | cut -d'.' -f2)
    if [ "$gcc_maj" -lt 5 ] || { [ "$gcc_maj" -eq 5 ] && [ "$gcc_min" -lt 3 ];}; then
        echo "need gcc >= 5.3"
        exit 1
    fi
fi

if [ "$PLATFORM" == "Darwin" ]; then
    build_freetype

    FREETYPE32_CFLAGS="-I$TOOLS_DIR32/include/freetype2"
    FREETYPE32_LIBS="-L$TOOLS_DIR32/lib -lprotonfreetype -framework CoreServices -framework ApplicationServices -lz"
    ac_cv_lib_soname_freetype32=libprotonfreetype.dylib

    FREETYPE64_CFLAGS="-I$TOOLS_DIR64/include/freetype2"
    FREETYPE64_LIBS="-L$TOOLS_DIR64/lib -lprotonfreetype"
    ac_cv_lib_soname_freetype64=libprotonfreetype.dylib


    build_libpng

    PNG32_CFLAGS="-I$TOOLS_DIR32/include"
    PNG32_LIBS="-L$TOOLS_DIR32/lib -lprotonpng"
    ac_cv_lib_soname_png32=libprotonpng16.dylib

    PNG64_CFLAGS="-I$TOOLS_DIR64/include"
    PNG64_LIBS="-L$TOOLS_DIR64/lib -lprotonpng"
    ac_cv_lib_soname_png64=libprotonpng16.dylib


    build_libjpeg

    JPEG32_CFLAGS="-I$TOOLS_DIR32/include"
    JPEG32_LIBS="-L$TOOLS_DIR32/lib -lprotonjpeg"
    ac_cv_lib_soname_jpeg32=libprotonjpeg.dylib

    JPEG64_CFLAGS="-I$TOOLS_DIR64/include"
    JPEG64_LIBS="-L$TOOLS_DIR64/lib -lprotonjpeg"
    ac_cv_lib_soname_jpeg64=libprotonjpeg.dylib

    build_libSDL

    build_moltenvk
fi

if [ "$WITH_FFMPEG" = 1 ]; then
    build_ffmpeg
fi

build_openal

build_dxvk

case "$BUILD_COMPONENTS" in
    "all")
        build_wine64
        build_wine32
        build_lsteamclient64
        build_lsteamclient32
        build_vrclient64
        build_vrclient32
        ;;
    "wine") build_wine64; build_wine32 ;;
    "wine32") build_wine32 ;;
    "wine64") build_wine64 ;;
    "vrclient") build_vrclient32; build_vrclient64 ;;
    "vrclient32") build_vrclient32 ;;
    "vrclient64") build_vrclient64 ;;
    "lsteamclient") build_lsteamclient32; build_lsteamclient64 ;;
    "lsteamclient32") build_lsteamclient32 ;;
    "lsteamclient64") build_lsteamclient64 ;;
    "vrclient_tests") build_vrclient32_tests; build_vrclient64_tests ;;
    *) echo "Invalid build components: $BUILD_COMPONENTS" ;;
esac

function setup_wine_gecko
{
    mkdir -p "$DST_DIR"/share/wine/gecko/
    if [ -e "$TOP/../gecko/wine_gecko-$1-$2.msi" ]; then
        cp "$TOP/../gecko/wine_gecko-$1-$2.msi" "$DST_DIR"/share/wine/gecko/
    else
        mkdir -p contrib/
        if [ ! -e "contrib/wine_gecko-$1-$2.msi" ]; then
            echo ">>>> Downloading wine-gecko. To avoid this in future, put it here: $TOP/../gecko/wine_gecko-$1-$2.msi"
            wget -O "contrib/wine_gecko-$1-$2.msi" "https://dl.winehq.org/wine/wine-gecko/$1/wine_gecko-$1-$2.msi"
        fi
        cp "contrib/wine_gecko-$1-$2.msi" "$DST_DIR"/share/wine/gecko/
    fi
}

if [ "$PACKAGE" = true ]; then
    echo ">>>> Packaging..."
    cd "$TOP"

    #create default prefix
    rm -rf "$TOP"/build/dist/share/default_pfx/
    if [ "$PLATFORM" != "Darwin" ]; then
        RUNTIME_RUNSH="$STEAM_RUNTIME"/runtime/run.sh
    else
        RUNTIME_RUNSH=""
    fi
    WINEPREFIX="$TOP"/build/dist/share/default_pfx/ $RUNTIME_RUNSH ./build/dist/bin/wine64 wineboot
    WINEPREFIX="$TOP"/build/dist/share/default_pfx/ $RUNTIME_RUNSH ./build/dist/bin/wineserver -w

    cp -a openvr/bin/win32/openvr_api.dll "$TOP"/build/dist/lib/wine/dxvk/openvr_api_dxvk.dll
    cp -a openvr/bin/win64/openvr_api.dll "$TOP"/build/dist/lib64/wine/dxvk/openvr_api_dxvk.dll

    setup_wine_gecko "2.47" "x86"
    setup_wine_gecko "2.47" "x86_64"

    #the difference between -1 and -9 is about 20 MB, so prioritize quick startup over file size
    tar -C build/dist -c . | gzip -c -1 > dist/proton_dist.tar.gz

    cp -a toolmanifest.vdf dist/
    cp -a filelock.py dist/
    cp -a user_settings.sample.py dist/
    cp -a proton_3.7_tracked_files dist/
    if [ "$PLATFORM" == "Darwin" ]; then
        cp -a dist.LICENSE.osx dist/LICENSE
        sed -e 's/@PYTHON_NAME@/python/' proton.in > dist/proton
    else
        cp -a dist.LICENSE.lin dist/LICENSE
        #work around Ubuntu 18.04 failing to ship a python by default
        sed -e 's/@PYTHON_NAME@/python3/' proton.in > dist/proton
    fi
    chmod 755 dist/proton
    date '+%s' > dist/version

    echo "Proton ready in dist/"
fi
