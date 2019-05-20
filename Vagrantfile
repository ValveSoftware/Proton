# -*- mode: ruby -*-
# vi: set ft=ruby :

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

  config.vm.box = "generic/debian9"

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

  config.vm.synced_folder "./vagrant_share/", "/vagrant/", create: true, type: "sshfs", sshfs_opts_append: "-o cache=no"
  config.vm.synced_folder ".", "/home/vagrant/proton", id: "proton", type: "rsync", rsync__exclude: ["vagrant_share"]

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
