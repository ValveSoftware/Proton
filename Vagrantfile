# -*- mode: ruby -*-
# vi: set ft=ruby :

# Vagrant file for setting up a build environment for Proton.

Vagrant.configure(2) do |config|
  config.vm.box = "generic/debian9"

  config.vm.provider "virtualbox" do |v|
    v.cpus = `nproc`.to_i
    # meminfo shows KB and we need to convert to MB
    v.memory = `grep 'MemTotal' /proc/meminfo | sed -e 's/MemTotal://' -e 's/ kB//'`.to_i / 1024 / 2
  end

  #set up shared and rsynced folders
  config.vm.synced_folder "./vagrant_share/", "/vagrant/", id: "share", create: true
  config.vm.synced_folder ".", "/home/vagrant/proton", id: "proton", type: "rsync", rsync__exclude: ["/output/", "vagrant_share"]

  #this is where the VM is initialized on first setup
  config.vm.provision "shell", privileged: "true", inline: <<-SHELL
    #install docker and steam-runtime dependencies
    dpkg --add-architecture i386
    apt-get update
    apt-get install -y apt-transport-https ca-certificates curl gnupg2 software-properties-common

    #add winehq repo
    curl -fsSL https://dl.winehq.org/wine-builds/winehq.key | apt-key add -
    echo 'deb http://dl.winehq.org/wine-builds/debian stretch main' > /etc/apt/sources.list.d/winehq.list

    #add docker repo
    curl -fsSL https://download.docker.com/linux/debian/gpg | apt-key add -
    add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/debian stretch stable"

    #add backports
    echo 'deb http://ftp.debian.org/debian stretch-backports main' > /etc/apt/sources.list.d/backports.list

    #install host build-time dependencies
    apt-get update
    apt-get install -y gpgv2 gnupg2 g++ g++-6-multilib git docker-ce fontforge-nox python-debian schroot
    apt-get -y -t stretch-backports install meson

    #winehq-devel is installed to pull in dependencies to run Wine
    apt-get install -y --install-recommends winehq-devel

    #remove system Wine installation to ensure no accidental leakage
    apt-get remove -y winehq-devel

    #allow vagrant user to run docker
    adduser vagrant docker

    #download build of recent mingw-w64 with dwarf2 exceptions enabled
    wget -O /root/dxvk_crosscc.tar.xz 'http://repo.steampowered.com/proton_mingw/proton_mingw-9.1-1.tar.xz'
    unxz -T0 /root/dxvk_crosscc.tar.xz
    mkdir -p /srv/chroot/dxvk_crosscc/
    tar -xf /root/dxvk_crosscc.tar -C /srv/chroot/dxvk_crosscc/
    #install dxvk_crosscc schroot
    cat > /etc/schroot/chroot.d/dxvk_crosscc <<EOF
[dxvk_crosscc]
description=Special mingw-w64 for building DXVK
type=directory
directory=/srv/chroot/dxvk_crosscc/
users=vagrant
personality=linux
preserve-environment=true
EOF

  SHELL

  config.vm.provision "shell", privileged: "true", inline: <<-SHELL
    # unprivileged shell still runs as root for some reason

    # the script below will set up the steam-runtime docker containers
    sudo -u vagrant /home/vagrant/proton/vagrant-user-setup.sh
  SHELL
end
