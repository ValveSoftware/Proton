#!/bin/sh

#set up steam runtimes. remove these lines if building without the runtime
if [ ! -e "$HOME/steam-runtime" ]; then
    git clone https://github.com/ValveSoftware/steam-runtime.git
    ./steam-runtime/setup_docker.sh amd64 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev
    ./steam-runtime/setup_docker.sh i386 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev32
    (cd steam-runtime && ./build-runtime.py --verbose --output=./runtime/)
fi

#build and install recent mingw-w64
if [ ! -e "$HOME/.local/bin/x86_64-w64-mingw32-gcc" ]; then
    mkdir -p $HOME/mingw-w64-build/
    (cd $HOME/mingw-w64-build && $HOME/proton/build-mingw-w64.sh "$HOME/.local/")
    #clean up the build tree, this takes up like 6GB
    rm -rf $HOME/mingw-w64-build/
fi
