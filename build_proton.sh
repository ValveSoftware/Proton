#!/bin/bash

set -e

#./wine/ <-- wine source
#./build/ <-- built files
#./dist/ <-- proton build, ready to distribute

TOP="$PWD"

PLATFORM=$(uname)
if [ "$PLATFORM" == "Darwin" ]; then
    CC="ccache clang -g"
    STRIPFLAGS=''
    AMD64_WRAPPER=""
    I386_WRAPPER=""
else
    CC="ccache gcc -g"
    STRIPFLAGS='-s'
    AMD64_WRAPPER="schroot --chroot steamrt_scout_beta_amd64 --"
    I386_WRAPPER="schroot --chroot steamrt_scout_beta_i386 --"
fi

STRIP='strip'
if [ "$1" == "--debug" ]; then
    #don't strip
    STRIPFLAGS=''
    STRIP=''
fi

DST_DIR="$TOP/build/dist"
TOOLS_DIR64="$TOP/build/tools.win64"
TOOLS_DIR32="$TOP/build/tools.win32"

mkdir -p dist "$DST_DIR"/bin build/wine.win32 build/dist.win32 build/wine.win64

#build wine64
cd "$TOP"/build/wine.win64
CC="$CC" $AMD64_WRAPPER "$TOP"/wine/configure --enable-win64 --disable-tests --prefix="$DST_DIR"
$AMD64_WRAPPER make -j5
INSTALL_PROGRAM_FLAGS="$STRIPFLAGS" $AMD64_WRAPPER make install-lib
INSTALL_PROGRAM_FLAGS="$STRIPFLAGS" $AMD64_WRAPPER make prefix="$TOOLS_DIR64" libdir="$TOOLS_DIR64/lib64" dlldir="$TOOLS_DIR64/lib64/wine" install-dev install-lib
rm -f "$DST_DIR"/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
rm -rf "$DST_DIR/share/man/"

#build wine32
cd "$TOP"/build/wine.win32
CC="$CC" $I386_WRAPPER "$TOP"/wine/configure --disable-tests --prefix="$TOP/build/dist.win32/"
$I386_WRAPPER make -j5
INSTALL_PROGRAM_FLAGS="$STRIPFLAGS" $I386_WRAPPER make install-lib
INSTALL_PROGRAM_FLAGS="$STRIPFLAGS" $I386_WRAPPER make prefix="$TOOLS_DIR32" libdir="$TOOLS_DIR32/lib" dlldir="$TOOLS_DIR32/lib/wine" install-dev install-lib

#install 32-bit stuff manually, see
# https://wiki.winehq.org/Packaging#WoW64_Workarounds
cd "$TOP"/build/dist.win32/
cp -a lib "$DST_DIR"/
cp -a bin/wine "$DST_DIR"/bin/
if [ "$PLATFORM" != "Darwin" ]; then
    cp -a bin/wine-preloader "$DST_DIR"/bin/
fi
cp -a bin/wineserver "$DST_DIR"/bin/wineserver32

#build 64-bit lsteamclient
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
CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make
if [ x"$STRIP" != x ]; then
    $AMD64_WRAPPER "$STRIP" lsteamclient.dll.so
fi
cp -a lsteamclient.dll.so "$DST_DIR"/lib64/wine/

#build 32-bit lsteamclient
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
CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make
if [ x"$STRIP" != x ]; then
    $I386_WRAPPER "$STRIP" lsteamclient.dll.so
fi
cp -a lsteamclient.dll.so "$DST_DIR"/lib/wine/

#build 64-bit vrclient
cd "$TOP"
rm -rf build/vrclient_x64
cp -a vrclient_x64 build/vrclient_x64
cd "$TOP"/build/vrclient_x64/
$AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt \
    -I"$TOOLS_DIR64"/include/ \
    -I"$TOOLS_DIR64"/include/wine/ \
    -I"$TOOLS_DIR64"/include/wine/windows/ \
    -L"$TOOLS_DIR64"/lib64/ \
    -L"$TOOLS_DIR64"/lib64/wine/ \
    --dll .
CXXFLAGS="-Wno-attributes -std=c++0x -O2" CFLAGS="-O2" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make
PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER winebuild --dll --fake-module -E vrclient_x64.spec -o vrclient_x64.dll.fake
if [ x"$STRIP" != x ]; then
    $AMD64_WRAPPER "$STRIP" vrclient_x64.dll.so
fi
cp -a vrclient_x64.dll.so "$DST_DIR"/lib64/wine/
cp -a vrclient_x64.dll.fake "$DST_DIR"/lib64/wine/fakedlls/vrclient_x64.dll

#build 32-bit vrclient
cd "$TOP"
rm -rf build/vrclient
cp -a vrclient_x64 build/vrclient
cd "$TOP"/build/vrclient/
mv vrclient_x64.spec vrclient.spec
$I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
    -I"$TOOLS_DIR32"/include/ \
    -I"$TOOLS_DIR32"/include/wine/ \
    -I"$TOOLS_DIR32"/include/wine/windows/ \
    -L"$TOOLS_DIR32"/lib/ \
    -L"$TOOLS_DIR32"/lib/wine/ \
    --dll .
CXXFLAGS="-Wno-attributes -std=c++0x -O2" CFLAGS="-O2" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make
PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER winebuild --dll --fake-module -E vrclient.spec -o vrclient.dll.fake
if [ x"$STRIP" != x ]; then
    $I386_WRAPPER "$STRIP" vrclient.dll.so
fi
cp -a vrclient.dll.so "$DST_DIR"/lib/wine/
cp -a vrclient.dll.fake "$DST_DIR"/lib/wine/fakedlls/vrclient.dll

echo "Packaging..."
cd "$TOP"

#the difference between -1 and -9 is about 20 MB, so prioritize quick startup over file size
tar -C build/dist -c . | gzip -c -1 > dist/proton_dist.tar.gz

cp -a toolmanifest.vdf dist/
cp -a proton dist/
cp -a LICENSE dist/
date '+%s' > dist/version

echo "Proton ready in dist/"
