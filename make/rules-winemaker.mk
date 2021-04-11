# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): module name (with extension)
#
define create-rules-winemaker
$(call create-rules-common,$(1),$(2),$(3))
$(2)_OBJ$(3) := $$($(2)_OBJ$(3))/$(4)

ifeq ($(CONTAINER),1)
$(OBJ)/.$(1)-configure$(3):
	@echo ":: configuring $(3)bit $(1)..." >&2
	rsync -arx "$$($(2)_SRC)/" "$$($(2)_OBJ$(3))/"
	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	winemaker --nosource-fix --nolower-include --nodlls --nomsvcrt \
	    "-I$$(WINE_SRC)/include" \
	    "-I$$(WINE_SRC)/include/wine" \
	    "-I$$(WINE_DST$(3))/include/wine" \
	    $(patsubst %.dll,--dll,$(patsubst %.exe,--guiexe,$(4))) \
	    $$($(2)_WINEMAKER_ARGS) \
	    $$($(2)_WINEMAKER_ARGS$(3)) \
	    $(subst --wine64,,--wine$(3)) \
	    .
	sed -re 's@_LDFLAGS=@_LDFLAGS= $$$$(LDFLAGS) @' -i "$$($(2)_OBJ$(3))/Makefile"
	touch $$@

$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	rsync -arx "$$($(2)_SRC)/" "$$($(2)_OBJ$(3))/"
	env $$($(2)_ENV$(3)) \
	$$(MAKE) -C "$$($(2)_OBJ$(3))" LIBRARIES="$$($(2)_LDFLAGS)"
	cd "$$($(2)_OBJ$(3))" && touch "$(basename $(4)).spec" && env $$($(2)_ENV$(3)) \
	winebuild --dll --fake-module -E "$(basename $(4)).spec" -o "$(4).fake"
	mkdir -p $$($(2)_DST$(3))/lib$(subst 32,,$(3))/wine/fakedlls/
	cp -a $$($(2)_OBJ$(3))/$(4).so $$($(2)_DST$(3))/lib$(subst 32,,$(3))/wine/
	cp -a $$($(2)_OBJ$(3))/$(4).fake $$($(2)_DST$(3))/lib$(subst 32,,$(3))/wine/fakedlls/$(4)
	touch $$@
endif
endef

rules-winemaker = $(call create-rules-winemaker,$(1),$(call toupper,$(1)),$(2),$(3))
