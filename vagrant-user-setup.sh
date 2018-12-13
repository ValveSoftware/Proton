#!/bin/sh

#set up steam runtimes. remove these lines if building without the runtime
git clone https://github.com/ValveSoftware/steam-runtime.git
./steam-runtime/setup_docker.sh amd64 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev
./steam-runtime/setup_docker.sh i386 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev32

#configure proton build
mkdir build
cd build
../proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32 --with-ffmpeg
#if building without the runtime, use:
#../proton/configure.sh --no-steam-runtime --with-ffmpeg
