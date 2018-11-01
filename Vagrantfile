# -*- mode: ruby -*-
# vi: set ft=ruby :

# Vagrant file for setting up a build environment for Proton.

Vagrant.configure(2) do |config|
  config.vm.box = "generic/debian9"

  # Uncomment to increase guest resources from the default
  #config.vm.provider "virtualbox" do |v|
  #  v.memory = 2048
  #  v.cpus = 4
  #end

  config.vm.synced_folder ".", "/home/vagrant/Proton", type: "rsync", rsync__exclude: [".git/", "/output/"], rsync__args: ["--verbose", "--archive", "-z", "--links", "--update"]

  config.vm.provision "shell", privileged: "true", inline: <<-SHELL
    dpkg --add-architecture i386
    apt-get update
    apt-get install -y apt-transport-https ca-certificates curl gnupg2 software-properties-common
    #add winehq repo
    curl -fsSL https://dl.winehq.org/wine-builds/Release.key | apt-key add -
    echo 'deb http://dl.winehq.org/wine-builds/debian stretch main' > /etc/apt/sources.list.d/winehq.list
    #add backports
    echo 'deb http://ftp.debian.org/debian stretch-backports main' > /etc/apt/sources.list.d/backports.list
    #add docker repo
    curl -fsSL https://download.docker.com/linux/debian/gpg | apt-key add -
    add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/debian stretch stable"
    apt-get update
	apt-get install -y gpgv2 gnupg2 g++ g++-6-multilib mingw-w64 git docker-ce winehq-devel fontforge-nox
    apt-get remove -y winehq-devel
    apt-get -y -t stretch-backports install meson
    update-alternatives --set x86_64-w64-mingw32-gcc `which x86_64-w64-mingw32-gcc-posix`
    update-alternatives --set x86_64-w64-mingw32-g++ `which x86_64-w64-mingw32-g++-posix`
    update-alternatives --set i686-w64-mingw32-gcc `which i686-w64-mingw32-gcc-posix`
    update-alternatives --set i686-w64-mingw32-g++ `which i686-w64-mingw32-g++-posix`
    adduser vagrant docker
  SHELL

  config.vm.provision "shell", privileged: "true", inline: <<-SHELL
    # unprivileged shell still runs as root for some reason
    sudo -u vagrant /home/vagrant/Proton/vagrant-user-setup.sh
  SHELL
end
