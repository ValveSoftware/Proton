#!/bin/sh
#set up steam runtimes. remove these lines if building without the runtime
git clone https://github.com/ValveSoftware/steam-runtime.git -b wip-docker
./steam-runtime/setup_docker.sh --beta amd64 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev
./steam-runtime/setup_docker.sh --beta i386 --extra-bootstrap=/home/vagrant/proton/steamrt-bootstrap.sh steam-proton-dev32

#configure proton build
mkdir build
cd build
../proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32
#if building without the runtime:
#../proton/configure.sh --no-steam-runtime
