#!/bin/sh
git clone https://github.com/ValveSoftware/steam-runtime.git -b wip-docker
./steam-runtime/setup_docker.sh --beta amd64 --extra-bootstrap=/home/vagrant/Proton/steamrt-bootstrap.sh steam-proton-dev
./steam-runtime/setup_docker.sh --beta i386 --extra-bootstrap=/home/vagrant/Proton/steamrt-bootstrap.sh steam-proton-dev32
mkdir build
cd build
../Proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32
