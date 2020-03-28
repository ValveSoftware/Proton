# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#
define create-rules-cmake
$(call create-rules-common,$(1),$(2),$(3))

ifeq ($(CONTAINER),1)
$$(OBJ)/.$(1)-configure$(3): $$($(2)_SRC)/CMakeLists.txt
	@echo ":: configuring $(3)bit $(1)..." >&2
	rm -rf "$$($(2)_OBJ$(3))/CMakeCache.txt"

	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	cmake "$$($(2)_SRC)" \
	    -DCMAKE_INSTALL_PREFIX="$$($(2)_DST$(3))" \
	    -DCMAKE_INSTALL_LIBDIR="lib$(subst 32,,$(3))" \
	    -DCMAKE_BUILD_TYPE=plain \
	    $$($(2)_CMAKE_ARGS) \
	    $$($(2)_CMAKE_ARGS$(3))

	touch $$@

$$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(MAKE)
	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(MAKE) install
	touch $$@
endif
endef

rules-cmake = $(call create-rules-cmake,$(1),$(call toupper,$(1)),$(2))
