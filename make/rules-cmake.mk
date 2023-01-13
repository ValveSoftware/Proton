# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): CROSS/<empty>, cross compile
#
define create-rules-cmake
$(call create-rules-common,$(1),$(2),$(3),$(4))

$$($(2)_SRC)/CMakeLists.txt: | $$(OBJ)/.$(1)-post-source
$$(OBJ)/.$(1)-configure$(3): $$($(2)_SRC)/CMakeLists.txt
	@echo ":: configuring $(3)bit $(1)..." >&2
	rm -rf "$$($(2)_OBJ$(3))/CMakeCache.txt"

	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	cmake "$$($(2)_SRC)" \
	    -DCMAKE_INSTALL_PREFIX="$$($(2)_DST$(3))" \
	    -DCMAKE_INSTALL_LIBDIR="lib$(subst 32,,$(3))" \
	    -DCMAKE_BUILD_TYPE=plain \
	    -DCMAKE_SYSTEM_NAME=$(if $(4),Windows,) \
	    -DCMAKE_SHARED_LIBRARY_PREFIX_C=$(if $(4),,lib) \
	    -DCMAKE_IMPORT_LIBRARY_PREFIX_C=$(if $(4),,lib) \
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
endef

rules-cmake = $(call create-rules-cmake,$(1),$(call toupper,$(1)),$(2),$(3))
