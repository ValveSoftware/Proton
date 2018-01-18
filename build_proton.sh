#!/bin/bash

set -e

#./wine/ <-- wine source
#./build/ <-- built files
#./dist/ <-- proton build, ready to distribute

mkdir -p dist/bin build/wine.win32 build/dist.win32 build/wine.win64

TOP="$PWD"
RUNTIME_PATH="$TOP/../../runtime/steam-runtime-both/"
DST_DIR="$TOP/dist"
TOOLS_DIR64="$TOP/build/tools.win64"
TOOLS_DIR32="$TOP/build/tools.win32"

cp -a toolmanifest.vdf dist/
cp -a proton dist/bin/

#build wine64
cd "$TOP"/build/wine.win64
CC="ccache gcc" "$RUNTIME_PATH/shell-amd64.sh" "$TOP"/wine/configure --enable-win64 --disable-tests --prefix="$DST_DIR"
"$RUNTIME_PATH/shell-amd64.sh" make
"$RUNTIME_PATH/shell-amd64.sh" make install-lib
"$RUNTIME_PATH/shell-amd64.sh" make prefix="$TOOLS_DIR64" libdir="$TOOLS_DIR64/lib64" dlldir="$TOOLS_DIR64/lib64/wine" install-dev install-lib

#build wine32
cd "$TOP"/build/wine.win32
CC="ccache gcc" "$RUNTIME_PATH/shell-i386.sh" "$TOP"/wine/configure --disable-tests --prefix="$TOP/build/dist.win32/"
"$RUNTIME_PATH/shell-i386.sh" make
"$RUNTIME_PATH/shell-i386.sh" make install-lib
"$RUNTIME_PATH/shell-i386.sh" make prefix="$TOOLS_DIR32" libdir="$TOOLS_DIR32/lib" dlldir="$TOOLS_DIR32/lib/wine" install-dev install-lib

#install 32-bit stuff manually, see
# https://wiki.winehq.org/Packaging#WoW64_Workarounds
cd "$TOP"/build/dist.win32/
cp -a lib "$DST_DIR"/
cp -a bin/wine "$DST_DIR"/bin/
cp -a bin/wine-preloader "$DST_DIR"/bin/
cp -a bin/wineserver "$DST_DIR"/bin/wineserver32

#build 64-bit lsteamclient
cd "$TOP"
rm -rf build/lsteamclient.win64
cp -a lsteamclient build/lsteamclient.win64
cd "$TOP"/build/lsteamclient.win64/
"$RUNTIME_PATH/shell-amd64.sh" "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt \
    -DSTEAM_API_EXPORTS \
    -I"$TOOLS_DIR64"/include/ \
    -I"$TOOLS_DIR64"/include/wine/ \
    -I"$TOOLS_DIR64"/include/wine/windows/ \
    -L"$TOOLS_DIR64"/lib64/ \
    -L"$TOOLS_DIR64"/lib64/wine/ \
    --dll .
CXXFLAGS=-Wno-attributes PATH="$TOOLS_DIR64/bin:$PATH" "$RUNTIME_PATH/shell-amd64.sh" make
cp -a lsteamclient.dll.so "$TOP"/dist/lib64/wine/

#build 32-bit lsteamclient
cd "$TOP"
rm -rf build/lsteamclient.win32
cp -a lsteamclient build/lsteamclient.win32
cd "$TOP"/build/lsteamclient.win32/
"$RUNTIME_PATH/shell-i386.sh" "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
    -DSTEAM_API_EXPORTS \
    -I"$TOOLS_DIR32"/include/ \
    -I"$TOOLS_DIR32"/include/wine/ \
    -I"$TOOLS_DIR32"/include/wine/windows/ \
    -L"$TOOLS_DIR32"/lib/ \
    -L"$TOOLS_DIR32"/lib/wine/ \
    --dll .
CXXFLAGS=-Wno-attributes PATH="$TOOLS_DIR32/bin:$PATH" "$RUNTIME_PATH/shell-i386.sh" make -j1
cp -a lsteamclient.dll.so "$TOP"/dist/lib/wine/

#build 64-bit vrclient
cd "$TOP"
rm -rf build/vrclient_x64
cp -a vrclient_x64 build/vrclient_x64
cd "$TOP"/build/vrclient_x64/
"$RUNTIME_PATH/shell-amd64.sh" "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt \
    -I"$TOOLS_DIR64"/include/ \
    -I"$TOOLS_DIR64"/include/wine/ \
    -I"$TOOLS_DIR64"/include/wine/windows/ \
    -L"$TOOLS_DIR64"/lib64/ \
    -L"$TOOLS_DIR64"/lib64/wine/ \
    --dll .
CXXFLAGS="-Wno-attributes -std=c++0x" PATH="$TOOLS_DIR64/bin:$PATH" "$RUNTIME_PATH/shell-amd64.sh" make
cp -a vrclient_x64.dll.so "$TOP"/dist/lib64/wine/

#build 32-bit vrclient
cd "$TOP"
rm -rf build/vrclient
cp -a vrclient_x64 build/vrclient
cd "$TOP"/build/vrclient/
mv vrclient_x64.spec vrclient.spec
"$RUNTIME_PATH/shell-i386.sh" "$TOP"/wine/tools/winemaker/winemaker \
    --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
    -I"$TOOLS_DIR32"/include/ \
    -I"$TOOLS_DIR32"/include/wine/ \
    -I"$TOOLS_DIR32"/include/wine/windows/ \
    -L"$TOOLS_DIR32"/lib/ \
    -L"$TOOLS_DIR32"/lib/wine/ \
    --dll .
CXXFLAGS="-Wno-attributes -std=c++0x" PATH="$TOOLS_DIR32/bin:$PATH" "$RUNTIME_PATH/shell-i386.sh" make
cp -a vrclient.dll.so "$TOP"/dist/lib/wine/

echo "Proton ready in dist/"
