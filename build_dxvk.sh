#!/bin/bash

set -e

if [ x"$1" == x ]; then
    echo missing build type, give win32 or win64
    exit 1
fi

TOP="$PWD"
TYPE="$1"

cd "$TOP"/dxvk

sed -i -e 's/^exe_wrapper.*$//' build-$TYPE.txt

meson --prefix="$TOP"/dxvk/dist.$TYPE --cross-file build-$TYPE.txt build.$TYPE

cd build.$TYPE

meson configure -Dprefix="$TOP"/dxvk -Dbuildtype=release

ninja

#build on Arch Linux and deploy into git, see build_proton.sh
mkdir -p "$TOP"/dxvk.$TYPE
cp src/dxgi/dxgi.dll "$TOP"/dxvk.$TYPE/
strip "$TOP"/dxvk.$TYPE/dxgi.dll
cp src/d3d11/d3d11.dll "$TOP"/dxvk.$TYPE/
strip "$TOP"/dxvk.$TYPE/d3d11.dll
echo "build_dxvk: $TYPE build done"

#mark as built
#touch "$TOP"/dxvk/proton.$TYPE.built
