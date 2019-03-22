# "Quick start" Makefile targets:
#   install - install Proton into current user's Steam installation
#   deploy - build deployment files into tagged directory
#
# Development targts:
#   vagrant - start Vagrant VM
#   proton - build Proton
#   module - build a single Wine module and copy into the shared directory.
#            note: this is a development loop target. use it only after building all of wine with one of the other targets
#            specify module variable:  make module=kernel32 module

STEAM_DIR := $(HOME)/.steam/root
DEPLOY_DIR := $(shell git describe --tags --always)
CONFIGURE_CMD := ../proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32 --steam-runtime="$$HOME"/steam-runtime/runtime/

all: proton

.PHONY: vagrant clean configure proton install deploy module

vagrant:
	vagrant up
	vagrant rsync

clean: vagrant
	vagrant ssh -c "rm -rf build/"

configure: vagrant
	vagrant ssh -c 'if [ ! -e build ]; then mkdir build; (cd build && $(CONFIGURE_CMD)); fi'

proton: configure
	vagrant ssh -c "make -C build/ dist"
	echo "Proton built in VM. Use 'install' or 'deploy' targets to retrieve the build."

install: configure
	vagrant ssh -c "make -C build/ STEAM_DIR=/vagrant/ install"
	cp -R vagrant_share/compatibilitytools.d/ $(STEAM_DIR)
	echo "Proton installed to your local Steam installation"

deploy: configure
	vagrant ssh -c "make -C build/ deploy"
	mkdir -p vagrant_share/$(DEPLOY_DIR)
	vagrant ssh -c "cp -a build/deploy/* /vagrant/$(DEPLOY_DIR)"
	echo "Proton deployed to vagrant_share/$(DEPLOY_DIR)"

module: configure
	vagrant ssh -c "make -C build/ module=$(module) module"
	mkdir -p vagrant_share/$(module)/lib{,64}/wine/
	vagrant ssh -c "cp -a build/obj-wine32/dlls/$(module)/$(module)*.so /vagrant/$(module)/lib/wine/"
	vagrant ssh -c "cp -a build/obj-wine64/dlls/$(module)/$(module)*.so /vagrant/$(module)/lib64/wine/"
