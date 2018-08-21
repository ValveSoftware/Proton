#!/bin/bash

# Expect to be setting up a container or chroot
if [[ $(stat -c %d:%i /) != $(stat -c %d:%i /proc/1/root/.) ]]; then
  echo "Running in chroot environment. Continuing..."
elif [[ -f /.dockerenv ]]; then
  echo "Running in docker environment. Continuing..."
else
  echo "Script must be running in a chroot environment. Exiting..."
  exit 1
fi

set -xe

apt-get install -y gcc-5 g++-5 g++-5-multilib flex bison libosmesa6-dev libpcap-dev \
                   libhal-dev libsane-dev libv4l-dev libgphoto2-2-dev libcapi20-dev \
                   libgsm1-dev libmpg123-dev libvulkan-dev libxslt1-dev nasm yasm ccache
update-alternatives --install `which gcc` gcc `which gcc-5` 50
update-alternatives --set gcc `which gcc-5`
update-alternatives --install `which g++` g++ `which g++-5` 50
update-alternatives --set g++ `which g++-5`
update-alternatives --install `which cpp` cpp-bin `which cpp-5` 50
update-alternatives --set cpp-bin `which cpp-5`
