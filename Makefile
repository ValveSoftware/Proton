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

enable_ccache := 1
ifneq ($(enable_ccache),0)
    CCACHE_FLAG := ENABLE_CCACHE=1
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

protonsdk_version := 0.20210126.1-0
CONFIGURE_CMD := ../proton/configure.sh \
	--steam-runtime-image=registry.gitlab.steamos.cloud/proton/soldier/sdk:$(protonsdk_version) \
	--build-name="$(_build_name)"

# make doesn't handle spaces well... replace them with underscores in paths
BUILD_DIR := "build-$(shell echo $(_build_name) | sed -e 's/ /_/g')"

all: help

.PHONY: help vagrant clean configure proton install deploy module protonsdk

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
	@echo "  enable_ccache - Enabled by default, set to 0 to disable ccache."
	@echo "  protonsdk_version - Version of the proton sdk image to use for building,"
	@echo "                      use protonsdk_version=local to build it locally."
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

protonsdk: vagrant
	vagrant ssh -c 'make -C proton/docker $(UNSTRIPPED) $(CCACHE_FLAG) PROTONSDK_VERSION=$(protonsdk_version) proton'

configure: vagrant
	@vagrant ssh -c 'if [ ! -e $(BUILD_DIR)/Makefile ]; then mkdir -p $(BUILD_DIR); (cd $(BUILD_DIR) && $(CONFIGURE_CMD)); fi && make -C $(BUILD_DIR) downloads'

ifeq ($(protonsdk_version),local)
configure: protonsdk
endif

proton: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) dist'
	echo "Proton built in VM. Use 'install' or 'deploy' targets to retrieve the build."

install: configure
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) STEAM_DIR=/vagrant/ install'
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/
	cp -Rf --no-dereference --preserve=mode,links vagrant_share/compatibilitytools.d/$(_build_name) $(STEAM_DIR)/compatibilitytools.d/
	echo "Proton installed to your local Steam installation"

redist: configure
	mkdir -p vagrant_share/$(DEPLOY_DIR)
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) redist && cp $(BUILD_DIR)/redist/* /vagrant/$(DEPLOY_DIR)'
	echo "Proton build available at vagrant_share/$(DEPLOY_DIR)"

deploy: configure
	mkdir -p vagrant_share/$(DEPLOY_DIR)-deploy
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) deploy && cp $(BUILD_DIR)/deploy/* /vagrant/$(DEPLOY_DIR)-deploy'
	echo "Proton deployed to vagrant_share/$(DEPLOY_DIR)-deploy"

module: configure
	mkdir -p vagrant_share/$(module)/lib/wine/ vagrant_share/$(module)/lib64/wine/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) module=$(module) module && \
		cp -f $(BUILD_DIR)/obj-wine32/dlls/$(module)/$(module)$(MODULE_SFX)* /vagrant/$(module)/lib/wine/ && \
		cp -f $(BUILD_DIR)/obj-wine64/dlls/$(module)/$(module)$(MODULE_SFX)* /vagrant/$(module)/lib64/wine/ && \
		if [ -e $(BUILD_DIR)/obj-wine64/dlls/$(module)/$(module).so ]; then \
			cp -f $(BUILD_DIR)/obj-wine32/dlls/$(module)/$(module).so /vagrant/$(module)/lib/wine/ && \
			cp -f $(BUILD_DIR)/obj-wine64/dlls/$(module)/$(module).so /vagrant/$(module)/lib64/wine/; \
		fi'
	rm -f vagrant_share/$(module)/lib*/wine/*.fake

dxvk: configure
	mkdir -p vagrant_share/dxvk/lib/wine/dxvk/
	mkdir -p vagrant_share/dxvk/lib64/wine/dxvk/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) dxvk && \
		cp -f $(BUILD_DIR)/dist/dist/lib/wine/dxvk/*.dll /vagrant/dxvk/lib/wine/dxvk/ && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/dxvk/*.dll /vagrant/dxvk/lib64/wine/dxvk/'

d9vk: configure
	mkdir -p vagrant_share/d9vk/lib/wine/dxvk/
	mkdir -p vagrant_share/d9vk/lib64/wine/dxvk/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) d9vk && \
		cp -f $(BUILD_DIR)/dist/dist/lib/wine/dxvk/*.dll /vagrant/d9vk/lib/wine/dxvk/ && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/dxvk/*.dll /vagrant/d9vk/lib64/wine/dxvk/'

vkd3d-proton: configure
	mkdir -p vagrant_share/vkd3d-proton/lib/wine/vkd3d-proton/
	mkdir -p vagrant_share/vkd3d-proton/lib64/wine/vkd3d-proton/
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) vkd3d-proton && \
		cp -f $(BUILD_DIR)/dist/dist/lib/wine/vkd3d-proton/*.dll /vagrant/vkd3d-proton/lib/wine/vkd3d-proton/ && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/vkd3d-proton/*.dll /vagrant/vkd3d-proton/lib64/wine/vkd3d-proton/'

lsteamclient: configure
	mkdir -p vagrant_share/lsteamclient/lib/wine
	mkdir -p vagrant_share/lsteamclient/lib64/wine
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) lsteamclient && \
		cp -f $(BUILD_DIR)/dist/dist/lib/wine/lsteamclient.dll.so /vagrant/lsteamclient/lib/wine && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/lsteamclient.dll.so /vagrant/lsteamclient/lib64/wine'

vrclient: configure
	mkdir -p vagrant_share/vrclient/lib/wine
	mkdir -p vagrant_share/vrclient/lib64/wine
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) vrclient && \
		cp -f $(BUILD_DIR)/dist/dist/lib/wine/vrclient.dll.so /vagrant/vrclient/lib/wine && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/vrclient_x64.dll.so /vagrant/vrclient/lib64/wine'

wineopenxr: configure
	mkdir -p vagrant_share/wineopenxr/lib64/wine
	vagrant ssh -c 'make -C $(BUILD_DIR)/ $(UNSTRIPPED) $(CCACHE_FLAG) wineopenxr && \
		cp -f $(BUILD_DIR)/dist/dist/lib64/wine/wineopenxr.dll.so /vagrant/wineopenxr/lib64/wine'
