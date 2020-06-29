#!/bin/sh

#build and install recent mingw-w64
if [ ! -e "$HOME/.local/bin/x86_64-w64-mingw32-gcc" ]; then
    mkdir -p $HOME/mingw-w64-build/
    (cd $HOME/mingw-w64-build && $HOME/proton/build-mingw-w64.sh "$HOME/.local/")
    #clean up the build tree, this takes up like 6GB
    rm -rf $HOME/mingw-w64-build/
fi
