# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): CROSS/<empty>, cross compile
#
define create-rules-configure
$(call create-rules-common,$(1),$(2),$(3),$(4))

$$(OBJ)/.$(1)-configure$(3):
	@echo ":: configuring $(3)bit $(1)..." >&2

	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$($(2)_SRC)/configure $(--quiet?) \
	    --cross-prefix=$$(TARGET_$(3))- \
	    --arch=$(CONFIGURE_ARCH$(3)) \
	    --target-os=linux \
	    --prefix="$$($(2)_DST$(3))" \
	    --libdir="$$($(2)_DST$(3))/lib$(subst 32,,$(3))" \
	    $$($(2)_CONFIGURE_ARGS) \
	    $$($(2)_CONFIGURE_ARGS$(3))

	touch $$@

$$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	+cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(BEAR) $$(MAKE)
	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(MAKE) install
	touch $$@
endef

CONFIGURE_ARCH32 = x86
CONFIGURE_ARCH64 = x86_64

rules-configure = $(call create-rules-configure,$(1),$(call toupper,$(1)),$(2),$(3))
