#See help target below for documentation

ifeq ($(build_name),)
    _build_name := $(shell git symbolic-ref --short HEAD 2>/dev/null)-local
else
    _build_name := $(build_name)
endif

ifeq ($(_build_name),)
    $(error ERROR: Unable to auto-detect build name. Check out a branch or specify with "build_name=...")
endif

# remove special chars
override _build_name := $(shell echo $(_build_name) | tr -dc '[:alnum:] ._-')

STEAM_DIR := $(HOME)/.steam/root
BUILD_DIR := $(_build_name)

ifeq ($(build_name),)
    DEPLOY_DIR := $(shell git describe --tags --always)
else
    DEPLOY_DIR := $(_build_name)
endif


CONFIGURE_CMD := ../proton/configure.sh --steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32 --steam-runtime="$$HOME"/steam-runtime/runtime/ --build-name="$(_build_name)"

# make doesn't handle spaces well... replace them with underscores in paths
BUILD_DIR := "build-$(shell echo $(_build_name) | sed -e 's/ /_/g')"

all: help

.PHONY: help vagrant clean configure proton install deploy module

help:
	@echo "Proton Makefile instructions"
	@echo ""
	@echo ""Quick start" Makefile targets:"
	@echo "  install - Install Proton into current user's Steam installation"
	@echo "  deploy - Build deployment files into a directory in vagrant_share/ named"
	@echo "           after the nearest git tag"
	@echo "  clean - Delete the Proton build directory"
	@echo ""
	@echo "Configuration variables:"
	@echo "  build_name - The name of the build, will be displayed in Steam. Defaults to"
	@echo "               current proton.git branch name if available. A new build dir"
	@echo "               will be created for each build_name, so if you override this,"
	@echo "               remember to always set it!"
	@echo "               Current build name: $(_build_name)"
	@echo ""
	@echo "Development targets:"
	@echo "  vagrant - Start Vagrant VM"
	@echo "  configure - Configure Proton build directory"
	@echo "  proton - Build Proton"
	@echo "  module - Build a single Wine module and copy into the shared directory."
	@echo "           Note: This is a development loop target. Use it only after building"
	@echo "           all of wine with one of the other targets."
	@echo "           Specify module variable: make module=kernel32 module"
	@echo ""
	@echo "Examples:"
	@echo "  "make install" - Build Proton and install into this user's Steam installation,"
	@echo "      with the current Proton branch name as the tool's name."
	@echo ""
	@echo "  "make deploy" - Build a Proton deployment package in a tagged directory"
	@echo "      in vagrant_share/."
	@echo ""
	@echo "  "make build_name=mytest install" - Build Proton with the tool name \"mytest\" and"
	@echo "      install into this user's Steam installation."
	@echo ""
	@echo "  "make build_name=mytest module=dsound module" - Build only the dsound module"
	@echo "      in the \"mytest\" build directory and place it into vagrant_share/dsound/."

vagrant:
	vagrant up
	vagrant rsync

clean: vagrant
	vagrant ssh -c 'rm -rf $(BUILD_DIR)/'

configure: vagrant
	vagrant ssh -c 'if [ ! -e $(BUILD_DIR)/Makefile ]; then mkdir $(BUILD_DIR); (cd $(BUILD_DIR) && $(CONFIGURE_CMD)); fi'

proton: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ dist'
	echo "Proton built in VM. Use 'install' or 'deploy' targets to retrieve the build."

install: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ STEAM_DIR=/vagrant/ install'
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/
	cp -R vagrant_share/compatibilitytools.d/$(_build_name) $(STEAM_DIR)/compatibilitytools.d/
	echo "Proton installed to your local Steam installation"

deploy: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ deploy'
	mkdir -p vagrant_share/$(DEPLOY_DIR)
	vagrant ssh -c 'cp $(BUILD_DIR)/deploy/* /vagrant/$(DEPLOY_DIR)'
	echo "Proton deployed to vagrant_share/$(DEPLOY_DIR)"

module: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ module=$(module) module'
	mkdir -p vagrant_share/$(module)/lib/wine/
	vagrant ssh -c 'cp $(BUILD_DIR)/obj-wine32/dlls/$(module)/$(module)*.so /vagrant/$(module)/lib/wine/'
	mkdir -p vagrant_share/$(module)/lib64/wine/
	vagrant ssh -c 'cp $(BUILD_DIR)/obj-wine64/dlls/$(module)/$(module)*.so /vagrant/$(module)/lib64/wine/'
