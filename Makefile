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

ifneq ($(module),)
    ifneq ($(findstring .,$(module)),)
		MODULE_SFX :=
	else
		MODULE_SFX := .dll
	endif
endif

ifneq ($(unstripped),)
    UNSTRIPPED := UNSTRIPPED_BUILD=1
    DEPLOY_DIR := $(DEPLOY_DIR)_unstripped
endif

CONFIGURE_CMD := ../proton/configure.sh \
	--steam-runtime64=docker:steam-proton-dev --steam-runtime32=docker:steam-proton-dev32 \
	--steam-runtime="$$HOME"/steam-runtime/runtime/ \
	--build-name="$(_build_name)"

# make doesn't handle spaces well... replace them with underscores in paths
BUILD_DIR := "build-$(shell echo $(_build_name) | sed -e 's/ /_/g')"

all: help

.PHONY: help vagrant clean configure proton install deploy module

help:
	@echo "Proton Makefile instructions"
	@echo ""
	@echo "\"Quick start\" Makefile targets:"
	@echo "  install - Install Proton into current user's Steam installation"
	@echo "  redist - Build a package suitable for manual installation or distribution"
	@echo "           to other users in vagrant_share/ named after the nearest git tag"
	@echo "  deploy - Build Steam deployment files into a directory in vagrant_share/ named"
	@echo "           after the nearest git tag"
	@echo "  clean - Delete the Proton build directory"
	@echo ""
	@echo "Configuration variables:"
	@echo "  build_name - The name of the build, will be displayed in Steam. Defaults to"
	@echo "               current proton.git branch name if available. A new build dir"
	@echo "               will be created for each build_name, so if you override this,"
	@echo "               remember to always set it!"
	@echo "               Current build name: $(_build_name)"
	@echo "  unstripped - Set to non-empty to avoid stripping installed library files."
	@echo ""
	@echo "Development targets:"
	@echo "  vagrant - Start Vagrant VM"
	@echo "  configure - Configure Proton build directory"
	@echo "  proton - Build Proton"
	@echo ""
	@echo "  The following targets are development targets only useful after building Proton."
	@echo "  module - Rebuild a single Wine module and copy into vagrant_share/."
	@echo "           Specify module variable: make module=kernel32 module"
	@echo "  dxvk - Rebuild DXVK and copy it into vagrant_share/."
	@echo "  lsteamclient - Rebuild the Steam client wrapper and copy it into vagrant_share/."
	@echo ""
	@echo "Examples:"
	@echo "  make install - Build Proton and install into this user's Steam installation,"
	@echo "      with the current Proton branch name as the tool's name."
	@echo ""
	@echo "  make redist - Build a Proton redistribution package in a tagged directory"
	@echo "      in vagrant_share/."
	@echo ""
	@echo "  make build_name=mytest install - Build Proton with the tool name \"mytest\" and"
	@echo "      install into this user's Steam installation."
	@echo ""
	@echo "  make build_name=mytest module=dsound module - Build only the dsound module"
	@echo "      in the \"mytest\" build directory and place it into vagrant_share/dsound/."
	@echo ""
	@echo "Running out of disk space in the VM? See resize-vagrant-disk.sh"

vagrant:
	vagrant up
	vagrant rsync debian10

clean: vagrant
	vagrant ssh -c 'rm -rf $(BUILD_DIR)/'

configure: vagrant
	@vagrant ssh -c 'if [ ! -e $(BUILD_DIR)/Makefile ]; then mkdir -p $(BUILD_DIR); (cd $(BUILD_DIR) && $(CONFIGURE_CMD)); fi && make -C $(BUILD_DIR) downloads'

proton: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) dist'
	echo "Proton built in VM. Use 'install' or 'deploy' targets to retrieve the build."

install: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) STEAM_DIR=/vagrant/ install'
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/
	cp -R vagrant_share/compatibilitytools.d/$(_build_name) $(STEAM_DIR)/compatibilitytools.d/
	echo "Proton installed to your local Steam installation"

redist: configure
	mkdir -p vagrant_share/$(DEPLOY_DIR)
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) redist && cp $(BUILD_DIR)/redist/* /vagrant/$(DEPLOY_DIR)'
	echo "Proton build available at vagrant_share/$(DEPLOY_DIR)"

deploy: configure
	mkdir -p vagrant_share/$(DEPLOY_DIR)-deploy
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) deploy && cp $(BUILD_DIR)/deploy/* /vagrant/$(DEPLOY_DIR)-deploy'
	echo "Proton deployed to vagrant_share/$(DEPLOY_DIR)-deploy"

module: configure
	mkdir -p vagrant_share/$(module)/lib/wine/ vagrant_share/$(module)/lib64/wine/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) module=$(module) module && \
		cp $(BUILD_DIR)/obj-wine32/dlls/$(module)/$(module)$(MODULE_SFX)* /vagrant/$(module)/lib/wine/ && \
		cp $(BUILD_DIR)/obj-wine64/dlls/$(module)/$(module)$(MODULE_SFX)* /vagrant/$(module)/lib64/wine/'
	rm -f vagrant_share/$(module)/lib*/wine/*.fake

dxvk: configure
	mkdir -p vagrant_share/dxvk/lib/wine/dxvk/
	mkdir -p vagrant_share/dxvk/lib64/wine/dxvk/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) dxvk && \
		cp $(BUILD_DIR)/dist/dist/lib/wine/dxvk/*.dll /vagrant/dxvk/lib/wine/dxvk/ && \
		cp $(BUILD_DIR)/dist/dist/lib64/wine/dxvk/*.dll /vagrant/dxvk/lib64/wine/dxvk/'

d9vk: configure
	mkdir -p vagrant_share/d9vk/lib/wine/dxvk/
	mkdir -p vagrant_share/d9vk/lib64/wine/dxvk/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) d9vk && \
		cp $(BUILD_DIR)/dist/dist/lib/wine/dxvk/*.dll /vagrant/d9vk/lib/wine/dxvk/ && \
		cp $(BUILD_DIR)/dist/dist/lib64/wine/dxvk/*.dll /vagrant/d9vk/lib64/wine/dxvk/'

vkd3d: configure
	mkdir -p vagrant_share/vkd3d/lib/
	mkdir -p vagrant_share/vkd3d/lib64/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) vkd3d && \
		cp $(BUILD_DIR)/dist/dist/lib/*vkd3d* /vagrant/vkd3d/lib/ && \
		cp $(BUILD_DIR)/dist/dist/lib64/*vkd3d* /vagrant/vkd3d/lib64/'

lsteamclient: configure
	mkdir -p vagrant_share/lsteamclient/lib/wine
	mkdir -p vagrant_share/lsteamclient/lib64/wine
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) lsteamclient && \
		cp $(BUILD_DIR)/dist/dist/lib/wine/lsteamclient.dll.so /vagrant/lsteamclient/lib/wine && \
		cp $(BUILD_DIR)/dist/dist/lib64/wine/lsteamclient.dll.so /vagrant/lsteamclient/lib64/wine'

vrclient: configure
	mkdir -p vagrant_share/vrclient/lib/wine
	mkdir -p vagrant_share/vrclient/lib64/wine
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) vrclient && \
		cp $(BUILD_DIR)/dist/dist/lib/wine/vrclient.dll.so /vagrant/vrclient/lib/wine && \
		cp $(BUILD_DIR)/dist/dist/lib64/wine/vrclient_x64.dll.so /vagrant/vrclient/lib64/wine'
