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

meson configure -Dprefix="$TOP"/dxvk/dist.$TYPE
meson configure -Dbuildtype=release

ninja
ninja install

#mark as built
touch "$TOP"/dxvk/proton.$TYPE.built
