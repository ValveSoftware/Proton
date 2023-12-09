# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): CROSS/<empty>, cross compile
#
define create-rules-autoconf
$(call create-rules-common,$(1),$(2),$(3),$(4))

$$($(2)_SRC)/configure: $$($(2)_ORIGIN)/configure.ac | $$(OBJ)/.$(1)-post-source
	@echo ":: autoreconfing $(1)..." >&2
	cd "$$($(2)_SRC)" && autoreconf -fiv

$$(OBJ)/.$(1)-configure$(3): $$($(2)_SRC)/configure
	@echo ":: configuring $(3)bit $(1)..." >&2
	rm -rf "$$($(2)_OBJ$(3))/config.cache"

	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$($(2)_SRC)/configure $(--quiet?) -C \
	    --prefix="$$($(2)_DST$(3))" \
	    --libdir="$$($(2)_DST$(3))/lib$(subst 32,,$(3))" \
	    --host="$$(TARGET_$(4)$(3))" \
	    $$($(2)_ENV$(3)) \
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

rules-autoconf = $(call create-rules-autoconf,$(1),$(call toupper,$(1)),$(2),$(3))
