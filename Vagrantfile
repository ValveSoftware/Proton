# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.require_version ">= 2.2.0"

module OS
  def OS.windows?
    (/cygwin|mswin|mingw|bccwin|wince|emx/ =~ RUBY_PLATFORM) != nil
  end

  def OS.mac?
    (/darwin/ =~ RUBY_PLATFORM) != nil
  end

  def OS.unix?
    !OS.windows?
  end

  def OS.linux?
    OS.unix? and not OS.mac?
  end
end

# Vagrant file for setting up a build environment for Proton.
if OS.linux?
  cpus = `nproc`.to_i
  # meminfo shows KB and we need to convert to MB
  memory = `grep 'MemTotal' /proc/meminfo | sed -e 's/MemTotal://' -e 's/ kB//'`.to_i / 1024 / 2
elsif OS.mac?
  cpus = `sysctl -n hw.physicalcpu`.to_i
  # sysctl shows bytes and we need to convert to MB
  memory = `sysctl hw.memsize | sed -e 's/hw.memsize: //'`.to_i / 1024 / 1024 / 2
else
  cpus = 1
  memory = 1024
  puts "Vagrant launched from unsupported platform."
end
puts "Platform: " + cpus.to_s + " CPUs, " + memory.to_s + " MB memory"

Vagrant.configure(2) do |config|
  #libvirt doesn't have a decent synced folder, so we have to use vagrant-sshfs.
  #This is not needed for virtualbox, but I couldn't find a way to use a
  #different synced folder type per provider, so we always use it.
  config.vagrant.plugins = "vagrant-sshfs"

  config.vm.provider "virtualbox" do |v|
    v.cpus = cpus
    v.memory = memory
  end

  config.vm.provider "libvirt" do |v|
    v.cpus = cpus
    v.memory = memory
    v.random_hostname = true
    v.default_prefix = ENV['USER'].to_s.dup.concat('_').concat(File.basename(Dir.pwd))
  end

  #deiban10-based build VM
  config.vm.define "debian10", primary: true do |debian10|

    debian10.vm.box = "generic/debian10"

    debian10.vm.synced_folder "./vagrant_share/", "/vagrant/", create: true, type: "sshfs", sshfs_opts_append: "-o cache=no"
    debian10.vm.synced_folder ".", "/home/vagrant/proton", id: "proton", type: "rsync", rsync__exclude: ["vagrant_share"]

    debian10.vm.provision "shell", privileged: "true", inline: <<-SHELL
      #install docker and steam-runtime dependencies
      dpkg --add-architecture i386
      apt-get update
      apt-get install -y apt-transport-https ca-certificates curl gnupg2 software-properties-common

      #add docker repo
      curl -fsSL https://download.docker.com/linux/debian/gpg | apt-key add -
      add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/debian buster stable"

      #install host build-time dependencies
      apt-get update
      apt-get install -y gpgv2 gnupg2 git docker-ce docker-ce-cli containerd.io \
          fontforge-nox python-debian python-pip meson libmpc-dev libmpc-dev:i386 \
          gcc g++ gcc-i686-linux-gnu g++-i686-linux-gnu binutils-i686-linux-gnu \
          gcc-mingw-w64-i686 gcc-mingw-w64-x86-64 \
          g++-mingw-w64-i686 g++-mingw-w64-x86-64

      update-alternatives --set x86_64-w64-mingw32-gcc `which x86_64-w64-mingw32-gcc-posix`
      update-alternatives --set x86_64-w64-mingw32-g++ `which x86_64-w64-mingw32-g++-posix`
      update-alternatives --set i686-w64-mingw32-gcc `which i686-w64-mingw32-gcc-posix`
      update-alternatives --set i686-w64-mingw32-g++ `which i686-w64-mingw32-g++-posix`

      #install adobe font devkit to build source san hans
      pip install afdko

      #allow vagrant user to run docker
      adduser vagrant docker

      # the script below will set up the steam-runtime docker containers
      sudo -u vagrant /home/vagrant/proton/vagrant-user-setup.sh

      #ensure we use only the mingw-w64 that we built
      apt-get remove -y '*mingw-w64*'
    SHELL
  end
end
