#!/bin/bash

set -e

RUNTIME_PATH="$PWD/../../runtime/steam-runtime-both/"

#./wine/ <-- wine source
#./build/ <-- built files
#./dist/ <-- proton build, ready to distribute

mkdir -p dist/ build/wine.win32 build/dist.win32 build/wine.win64

DST_DIR="$PWD/dist"

cp -a toolmanifest.vdf dist/

cd build/wine.win64
CC="ccache gcc" "$RUNTIME_PATH/shell-amd64.sh" ../../wine/configure --enable-win64 --disable-tests --prefix="$DST_DIR"
"$RUNTIME_PATH/shell-amd64.sh" make
"$RUNTIME_PATH/shell-amd64.sh" make install-lib

cd ../wine.win32
CC="ccache gcc" "$RUNTIME_PATH/shell-i386.sh" ../../wine/configure --disable-tests --prefix="$PWD/../dist.win32/"
"$RUNTIME_PATH/shell-i386.sh" make
"$RUNTIME_PATH/shell-i386.sh" make install-lib

#install 32-bit stuff manually, see
# https://wiki.winehq.org/Packaging#WoW64_Workarounds
cd ../dist.win32/
cp -a lib "$DST_DIR"/
cp -a bin/wine "$DST_DIR"/bin/
cp -a bin/wine-preloader "$DST_DIR"/bin/
cp -a bin/wineserver "$DST_DIR"/bin/wineserver32

echo "Proton ready in dist/"
