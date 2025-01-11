# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): build target arch
#   $(4): build target os
#
define create-rules-cmake
$(call create-rules-common,$(1),$(2),$(3),$(4))
ifneq ($(findstring $(3)-$(4),$(ARCHS)),)

$$($(2)_SRC)/CMakeLists.txt: | $$(OBJ)/.$(1)-post-source
$$(OBJ)/.$(1)-$(3)-configure: $$($(2)_SRC)/CMakeLists.txt
	@echo ":: configuring $(1)-$(3)..." >&2
	rm -rf "$$($(2)_$(3)_OBJ)/CMakeCache.txt"

	cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	cmake "$$($(2)_SRC)" \
	    -DCMAKE_INSTALL_PREFIX="$$($(2)_$(3)_DST)" \
	    -DCMAKE_INSTALL_LIBDIR="lib/$$($(3)-$(4)_LIBDIR)" \
	    -DCMAKE_BUILD_TYPE=plain \
	    $$($(3)-$(4)_CMAKE_ARGS) \
	    $$($(2)_CMAKE_ARGS) \
	    $$($(2)_$(3)_CMAKE_ARGS)

	touch $$@

$$(OBJ)/.$(1)-$(3)-build:
	@echo ":: building $(1)-$(3)..." >&2
	cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	$$(MAKE)
	cd "$$($(2)_$(3)_OBJ)" && env $$($(2)_$(3)_ENV) \
	$$(MAKE) install
	touch $$@
endif
endef

i386-unix_CMAKE_ARGS := -DCMAKE_SHARED_LIBRARY_PREFIX_C=lib -DCMAKE_IMPORT_LIBRARY_PREFIX_C=lib
x86_64-unix_CMAKE_ARGS := -DCMAKE_SHARED_LIBRARY_PREFIX_C=lib -DCMAKE_IMPORT_LIBRARY_PREFIX_C=lib
aarch64-unix_CMAKE_ARGS := -DCMAKE_SHARED_LIBRARY_PREFIX_C=lib -DCMAKE_IMPORT_LIBRARY_PREFIX_C=lib
i386-windows_CMAKE_ARGS := -DCMAKE_SYSTEM_NAME=Windows
x86_64-windows_CMAKE_ARGS := -DCMAKE_SYSTEM_NAME=Windows
aarch64-windows_CMAKE_ARGS := -DCMAKE_SYSTEM_NAME=Windows

rules-cmake = $(call create-rules-cmake,$(1),$(call toupper,$(1)),$(2),$(3))
