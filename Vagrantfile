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
  config.vm.synced_folder ".", "/home/vagrant/proton", id: "proton", type: "rsync", rsync__exclude: ["/output/", "vagrant_share"], rsync__args: ["--verbose", "--archive", "-z", "--links", "--update"]

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
    apt-get install -y gpgv2 gnupg2 g++ g++-6-multilib mingw-w64 git docker-ce fontforge-nox python-debian
    apt-get -y -t stretch-backports install meson

    #winehq-devel is installed to pull in dependencies to run Wine
    apt-get install -y --install-recommends winehq-devel

    #remove system Wine installation to ensure no accidental leakage
    apt-get remove -y winehq-devel

    #configure posix mingw-w64 alternative for DXVK
    update-alternatives --set x86_64-w64-mingw32-gcc `which x86_64-w64-mingw32-gcc-posix`
    update-alternatives --set x86_64-w64-mingw32-g++ `which x86_64-w64-mingw32-g++-posix`
    update-alternatives --set i686-w64-mingw32-gcc `which i686-w64-mingw32-gcc-posix`
    update-alternatives --set i686-w64-mingw32-g++ `which i686-w64-mingw32-g++-posix`

    #allow vagrant user to run docker
    adduser vagrant docker
  SHELL

  config.vm.provision "shell", privileged: "true", inline: <<-SHELL
    # unprivileged shell still runs as root for some reason

    # the script below will set up the steam-runtime docker containers
    sudo -u vagrant /home/vagrant/proton/vagrant-user-setup.sh
  SHELL
end
