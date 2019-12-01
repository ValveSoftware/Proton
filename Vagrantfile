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
      apt-get install -y gpgv2 gnupg2 g++ g++-multilib git docker-ce docker-ce-cli containerd.io fontforge-nox python-debian schroot python-pip meson


      #install adobe font devkit to build source san hans
      pip install afdko

      #allow vagrant user to run docker
      adduser vagrant docker

      if ! schroot -i -c proton_crosscc >/dev/null 2>&1; then
        #download build of recent mingw-w64 with dwarf2 exceptions enabled
        wget --progress=dot -O /root/proton_crosscc.tar.xz 'http://repo.steampowered.com/proton_mingw/proton_mingw-9.1-1.tar.xz'
        unxz -T0 /root/proton_crosscc.tar.xz
        mkdir -p /srv/chroot/proton_crosscc/
        tar -xf /root/proton_crosscc.tar -C /srv/chroot/proton_crosscc/
        #install proton_crosscc schroot
        cat > /etc/schroot/chroot.d/proton_crosscc <<EOF
[proton_crosscc]
description=Special mingw-w64 for building DXVK
type=directory
directory=/srv/chroot/proton_crosscc/
users=vagrant
personality=linux
preserve-environment=true
EOF
      fi
      # unprivileged shell still runs as root for some reason

      # the script below will set up the steam-runtime docker containers
      sudo -u vagrant /home/vagrant/proton/vagrant-user-setup.sh

    SHELL
  end
end
