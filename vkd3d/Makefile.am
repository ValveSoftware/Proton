ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = @VKD3D_CFLAGS@
AM_CPPFLAGS = -I$(srcdir)/include -I$(srcdir)/include/dummy -I$(srcdir)/include/private
AM_LDFLAGS = -no-undefined

widl_headers = \
	include/vkd3d_d3d12.h \
	include/vkd3d_d3d12sdklayers.h \
	include/vkd3d_d3dcommon.h \
	include/vkd3d_dxgi.h \
	include/vkd3d_dxgi1_2.h \
	include/vkd3d_dxgi1_3.h \
	include/vkd3d_dxgi1_4.h \
	include/vkd3d_dxgibase.h \
	include/vkd3d_dxgiformat.h \
	include/vkd3d_dxgitype.h

vkd3d_public_headers = \
	include/vkd3d.h \
	include/vkd3d_d3d12.h \
	include/vkd3d_d3d12sdklayers.h \
	include/vkd3d_d3dcommon.h \
	include/vkd3d_dxgibase.h \
	include/vkd3d_dxgiformat.h \
	include/vkd3d_shader.h \
	include/vkd3d_types.h \
	include/vkd3d_utils.h \
	include/vkd3d_windows.h

vkd3d_demos_shaders = \
	demos/gears.hlsl \
	demos/gears_ps_flat.h \
	demos/gears_ps_smooth.h \
	demos/gears_vs.h \
	demos/triangle.hlsl \
	demos/triangle_ps.h \
	demos/triangle_vs.h

vkd3d_tests = \
	tests/vkd3d_api \
	tests/vkd3d_common \
	tests/vkd3d_shader_api

vkd3d_cross_tests = \
	tests/d3d12 \
	tests/d3d12_invalid_usage

vkd3d_test_headers = \
	tests/d3d12_crosstest.h \
	tests/d3d12_test_utils.h

vkd3d_demos = \
	demos/gears \
	demos/triangle

vkd3d_demos_headers = \
	demos/demo.h \
	demos/demo_win32.h \
	demos/demo_xcb.h

BUILT_SOURCES = $(widl_headers)

noinst_LTLIBRARIES = libvkd3d-common.la
libvkd3d_common_la_SOURCES = \
	include/private/vkd3d_debug.h \
	libs/vkd3d-common/debug.c \
	libs/vkd3d-common/memory.c \
	libs/vkd3d-common/utf8.c

lib_LTLIBRARIES = libvkd3d-shader.la libvkd3d.la libvkd3d-utils.la

libvkd3d_shader_la_SOURCES = \
	include/private/list.h \
	include/private/rbtree.h \
	include/private/vkd3d_common.h \
	include/private/vkd3d_debug.h \
	include/private/vkd3d_memory.h \
	include/vkd3d_shader.h \
	libs/vkd3d-shader/checksum.c \
	libs/vkd3d-shader/dxbc.c \
	libs/vkd3d-shader/spirv.c \
	libs/vkd3d-shader/trace.c \
	libs/vkd3d-shader/vkd3d_shader.map \
	libs/vkd3d-shader/vkd3d_shader_main.c \
	libs/vkd3d-shader/vkd3d_shader_private.h
libvkd3d_shader_la_CFLAGS = $(AM_CFLAGS) @SPIRV_TOOLS_CFLAGS@
libvkd3d_shader_la_LDFLAGS = $(AM_LDFLAGS) -version-info 1:0:0
libvkd3d_shader_la_LIBADD = libvkd3d-common.la @SPIRV_TOOLS_LIBS@
if HAVE_LD_VERSION_SCRIPT
libvkd3d_shader_la_LDFLAGS += -Wl,--version-script=$(srcdir)/libs/vkd3d-shader/vkd3d_shader.map
EXTRA_libvkd3d_shader_la_DEPENDENCIES = $(srcdir)/libs/vkd3d-shader/vkd3d_shader.map
endif

libvkd3d_la_SOURCES = \
	include/private/vkd3d_common.h \
	include/private/vkd3d_debug.h \
	include/private/vkd3d_memory.h \
	include/private/vkd3d_utf8.h \
	include/private/vkd3d_test.h \
	include/vkd3d_d3d12.idl \
	include/vkd3d_d3dcommon.idl \
	include/vkd3d_unknown.idl \
	libs/vkd3d/command.c \
	libs/vkd3d/device.c \
	libs/vkd3d/resource.c \
	libs/vkd3d/state.c \
	libs/vkd3d/utils.c \
	libs/vkd3d/vkd3d.map \
	libs/vkd3d/vkd3d_main.c \
	libs/vkd3d/vkd3d_private.h \
	libs/vkd3d/vulkan_procs.h \
	libs/vkd3d_version.c
libvkd3d_la_LDFLAGS = $(AM_LDFLAGS) -version-info 2:0:1
libvkd3d_la_LIBADD = libvkd3d-common.la libvkd3d-shader.la @DL_LIBS@ @PTHREAD_LIBS@
if HAVE_LD_VERSION_SCRIPT
libvkd3d_la_LDFLAGS += -Wl,--version-script=$(srcdir)/libs/vkd3d/vkd3d.map
EXTRA_libvkd3d_la_DEPENDENCIES = $(srcdir)/libs/vkd3d/vkd3d.map
endif

libvkd3d_utils_la_SOURCES = \
	libs/vkd3d-utils/vkd3d_utils.map \
	libs/vkd3d-utils/vkd3d_utils_main.c \
	libs/vkd3d-utils/vkd3d_utils_private.h
libvkd3d_utils_la_LDFLAGS = $(AM_LDFLAGS) -version-info 1:1:0
libvkd3d_utils_la_LIBADD = libvkd3d-common.la libvkd3d.la
if HAVE_LD_VERSION_SCRIPT
libvkd3d_utils_la_LDFLAGS += -Wl,--version-script=$(srcdir)/libs/vkd3d-utils/vkd3d_utils.map
EXTRA_libvkd3d_utils_la_DEPENDENCIES = $(srcdir)/libs/vkd3d-utils/vkd3d_utils.map
endif

EXTRA_DIST = LICENSE

pkgconfigdir = $(libdir)/pkgconfig
pkginclude_HEADERS = $(vkd3d_public_headers)
nodist_pkgconfig_DATA = libvkd3d.pc libvkd3d-shader.pc libvkd3d-utils.pc
CLEANFILES = libvkd3d.pc libvkd3d-shader.pc libvkd3d-utils.pc
EXTRA_DIST += \
	libs/vkd3d/libvkd3d.pc.in \
	libs/vkd3d-shader/libvkd3d-shader.pc.in \
	libs/vkd3d-utils/libvkd3d-utils.pc.in

noinst_PROGRAMS = vkd3d-compiler
vkd3d_compiler_SOURCES = programs/vkd3d-compiler/main.c
vkd3d_compiler_LDADD = libvkd3d-shader.la

LDADD = libvkd3d.la libvkd3d-utils.la
AM_DEFAULT_SOURCE_EXT = .c
if BUILD_TESTS
check_PROGRAMS = $(vkd3d_tests) $(vkd3d_cross_tests)
TESTS = $(vkd3d_tests) $(vkd3d_cross_tests)
tests_d3d12_LDADD = $(LDADD) @PTHREAD_LIBS@ @VULKAN_LIBS@
tests_d3d12_invalid_usage_LDADD = $(LDADD) @VULKAN_LIBS@
tests_vkd3d_api_LDADD = libvkd3d.la @VULKAN_LIBS@
tests_vkd3d_shader_api_LDADD = libvkd3d-shader.la
endif

if BUILD_DEMOS
DEMOS_LDADD = $(LDADD) libvkd3d-shader.la @XCB_LIBS@ @VULKAN_LIBS@
DEMOS_CFLAGS = $(AM_CFLAGS) @XCB_CFLAGS@
noinst_PROGRAMS += $(vkd3d_demos)

demos_gears_CFLAGS = $(DEMOS_CFLAGS)
demos_gears_LDADD = $(DEMOS_LDADD) -lm

demos_triangle_CFLAGS = $(DEMOS_CFLAGS)
demos_triangle_LDADD = $(DEMOS_LDADD)
endif

EXTRA_DIST += $(vkd3d_test_headers) $(vkd3d_demos_headers)

VKD3D_V_WIDL = $(vkd3d_v_widl_@AM_V@)
vkd3d_v_widl_ = $(vkd3d_v_widl_@AM_DEFAULT_V@)
vkd3d_v_widl_0 = @echo "  WIDL    " $@;
vkd3d_v_widl_1 =

EXTRA_DIST += $(widl_headers) $(widl_headers:.h=.idl)
$(widl_headers): %.h: %.idl
if HAVE_WIDL
	$(VKD3D_V_WIDL)$(WIDL) -h -o $@ $<
else
	@echo "widl is required to generate $@"
endif

EXTRA_DIST += $(vkd3d_demos_shaders)

libvkd3d-utils.pc: $(srcdir)/libs/vkd3d-utils/libvkd3d-utils.pc.in Makefile
	$(AM_V_GEN)$(SED) -e 's![@]prefix[@]!$(prefix)!g' \
		-e 's![@]exec_prefix[@]!$(exec_prefix)!g' \
		-e 's![@]includedir[@]!$(includedir)!g' \
		-e 's![@]libdir[@]!$(libdir)!g' \
		-e 's![@]PACKAGE_VERSION[@]!$(PACKAGE_VERSION)!g' \
		$< > $@

libvkd3d-shader.pc: $(srcdir)/libs/vkd3d-shader/libvkd3d-shader.pc.in Makefile
	$(AM_V_GEN)$(SED) -e 's![@]prefix[@]!$(prefix)!g' \
		-e 's![@]exec_prefix[@]!$(exec_prefix)!g' \
		-e 's![@]includedir[@]!$(includedir)!g' \
		-e 's![@]libdir[@]!$(libdir)!g' \
		-e 's![@]PACKAGE_VERSION[@]!$(PACKAGE_VERSION)!g' \
		$< > $@

libvkd3d.pc: $(srcdir)/libs/vkd3d/libvkd3d.pc.in Makefile
	$(AM_V_GEN)$(SED) -e 's![@]prefix[@]!$(prefix)!g' \
		-e 's![@]exec_prefix[@]!$(exec_prefix)!g' \
		-e 's![@]includedir[@]!$(includedir)!g' \
		-e 's![@]libdir[@]!$(libdir)!g' \
		-e 's![@]PACKAGE_VERSION[@]!$(PACKAGE_VERSION)!g' \
		$< > $@

libs/vkd3d_version.c: dummy-vkd3d-version
	$(AM_V_GEN)version=`(GIT_DIR=$(top_srcdir)/.git git describe HEAD 2>/dev/null || echo "vkd3d-$(PACKAGE_VERSION)") | $(SED) -n -e '$$s/\(.*\)/const char vkd3d_build[] = "\1";/p'` && (echo $$version | cmp -s - $@) || echo $$version >$@ || ($(RM) $@ && exit 1)
.SILENT: libs/vkd3d_version.c
CLEANFILES += libs/vkd3d_version.c

.PHONY: dummy-vkd3d-version
dummy-vkd3d-version:

## Cross-compile tests
cross_implibs = crosslibs/d3d12
CROSS_CPPFLAGS = -I$(srcdir)/include -I$(srcdir)/include/private -I$(builddir)/include
CROSS_CFLAGS = -g -O2 -Wall -municode ${CROSS_CPPFLAGS}
EXTRA_DIST += $(cross_implibs:=.cross32.def) $(cross_implibs:=.cross64.def)

if HAVE_CROSSTARGET32
CROSS32_CC = @CROSSCC32@
CROSS32_DLLTOOL = @CROSSTARGET32@-dlltool
CROSS32_IMPLIBS = $(cross_implibs:=.cross32.a)
CROSS32_EXEFILES = $(vkd3d_cross_tests:=.cross32.exe) $(vkd3d_demos:=.cross32.exe)
CROSS32_FILES = $(CROSS32_IMPLIBS) $(CROSS32_EXEFILES)

CLEANFILES += $(CROSS32_FILES)
crosstest32: $(CROSS32_FILES)

-include tests/$(DEPDIR)/*.cross32.Po
-include demos/$(DEPDIR)/*.cross32.Po

$(CROSS32_IMPLIBS): %.cross32.a: %.cross32.def
	@${MKDIR_P} crosslibs
	$(AM_V_GEN)$(CROSS32_DLLTOOL) -k -m i386 --as-flags=-32 -d $< -l $@

$(CROSS32_EXEFILES): %.cross32.exe: %.c $(CROSS32_IMPLIBS) $(widl_headers)
	$(AM_V_CCLD)depbase=`echo $@ | $(SED) 's![^/]*$$!$(DEPDIR)/&!;s!\.exe$$!!'`; \
	$(CROSS32_CC) $(CROSS_CFLAGS) -MT $@ -MD -MP -MF $$depbase.Tpo -o $@ $< $(CROSS32_IMPLIBS) -ldxgi -lgdi32 && \
	$(am__mv) $$depbase.Tpo $$depbase.Po
else
crosstest32:
endif

if HAVE_CROSSTARGET64
CROSS64_CC = @CROSSCC64@
CROSS64_DLLTOOL = @CROSSTARGET64@-dlltool
CROSS64_IMPLIBS = $(cross_implibs:=.cross64.a)
CROSS64_EXEFILES = $(vkd3d_cross_tests:=.cross64.exe) $(vkd3d_demos:=.cross64.exe)
CROSS64_FILES = $(CROSS64_IMPLIBS) $(CROSS64_EXEFILES)

CLEANFILES += $(CROSS64_FILES)
crosstest64: $(CROSS64_FILES)

-include tests/$(DEPDIR)/*.cross64.Po
-include demos/$(DEPDIR)/*.cross64.Po

$(CROSS64_IMPLIBS): %.cross64.a: %.cross64.def
	@${MKDIR_P} crosslibs
	$(AM_V_GEN)$(CROSS64_DLLTOOL) -k -m i386:x86-64 --as-flags=-64 -d $< -l $@

$(CROSS64_EXEFILES): %.cross64.exe: %.c $(CROSS64_IMPLIBS) $(widl_headers)
	$(AM_V_CCLD)depbase=`echo $@ | sed 's![^/]*$$!$(DEPDIR)/&!;s!\.exe$$!!'`; \
	$(CROSS64_CC) $(CROSS_CFLAGS) -MT $@ -MD -MP -MF $$depbase.Tpo -o $@ $< $(CROSS64_IMPLIBS) -ldxgi -lgdi32 && \
	$(am__mv) $$depbase.Tpo $$depbase.Po
else
crosstest64:
endif

.PHONY: crosstest crosstest32 crosstest64
crosstest: crosstest32 crosstest64
