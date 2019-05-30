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

apt-get install -y gcc-5 g++-5 g++-5-multilib flex libosmesa6-dev libpcap-dev \
                   libhal-dev libsane-dev libv4l-dev libgphoto2-2-dev libcapi20-dev \
                   libgsm1-dev libmpg123-dev libvulkan-dev libxslt1-dev nasm yasm ccache
update-alternatives --install "$(command -v gcc)" gcc "$(command -v gcc-5)" 50
update-alternatives --set gcc "$(command -v gcc-5)"
update-alternatives --install "$(command -v g++)" g++ "$(command -v g++-5)" 50
update-alternatives --set g++ "$(command -v g++-5)"
update-alternatives --install "$(command -v cpp)" cpp-bin "$(command -v cpp-5)" 50
update-alternatives --set cpp-bin "$(command -v cpp-5)"
