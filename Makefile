# Makefile targets:
#   vagrant - start Vagrant VM
#   proton - build Proton
#   install - install Proton into current user's Steam installation
#   deploy - build deployment files into tagged directory

STEAM_DIR := $(HOME)/.steam/root
DEPLOY_DIR := $(shell git describe --tags --always)

all: proton

.PHONY: vagrant proton install proton_build deploy

vagrant:
	vagrant up
	vagrant rsync

proton: vagrant
	vagrant ssh -c "make -C build/ dist"
	echo "Proton built in VM. Use 'install' or 'deploy' targets to retrieve the build."

install: vagrant
	vagrant ssh -c "make -C build/ STEAM_DIR=/vagrant/ install"
	cp -R vagrant_share/compatibilitytools.d/ $(STEAM_DIR)
	echo "Proton installed to your local Steam installation"

deploy: vagrant
	vagrant ssh -c "make -C build/ deploy"
	mkdir -p vagrant_share/$(DEPLOY_DIR)
	vagrant ssh -c "cp -a build/deploy/* /vagrant/$(DEPLOY_DIR)"
	echo "Proton deployed to vagrant_share/$(DEPLOY_DIR)"
