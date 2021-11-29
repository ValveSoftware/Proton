SONAME := libprotonmediaconverter.so

TRIPLE64 := x86_64-unknown-linux-gnu
TRIPLE32 := i686-unknown-linux-gnu

DESTDIR ?= dist/
DIST_GST_DIR64 := $(DESTDIR)/lib64/gstreamer-1.0/
DIST_GST_DIR32 := $(DESTDIR)/lib/gstreamer-1.0/

ifeq ($(DEBUG),)
    CARGO_RELEASE_ARG := --release
    TARGET_BUILD_TYPE := release
else
    CARGO_RELEASE_ARG :=
    TARGET_BUILD_TYPE := debug
endif

all: install

build: blank.mkv blank.ptna
	cargo build --target $(TRIPLE64) $(CARGO_RELEASE_ARG)
	PKG_CONFIG_ALLOW_CROSS=1 cargo build --target $(TRIPLE32) $(CARGO_RELEASE_ARG)

install: build
	install -d "$(DIST_GST_DIR64)"
	install -m 755 target/$(TRIPLE64)/$(TARGET_BUILD_TYPE)/$(SONAME) "$(DIST_GST_DIR64)"
	install -d "$(DIST_GST_DIR32)"
	install -m 755 target/$(TRIPLE32)/$(TARGET_BUILD_TYPE)/$(SONAME) "$(DIST_GST_DIR32)"

blank.mkv:
	#120 frames @ 30 FPS == 4 seconds
	gst-launch-1.0 videotestsrc num-buffers=120 pattern=smpte ! 'video/x-raw,format=(string)I420,width=320,height=240,framerate=(fraction)30/1' ! av1enc ! queue ! mux. audiotestsrc num-buffers=400 freq=0 samplesperbuffer=441 ! 'audio/x-raw,rate=48000,channels=2' ! opusenc ! queue ! mux. matroskamux name=mux ! filesink location=blank.mkv

make_blank_ptna: make_blank_ptna.c
	gcc -Wall -O2 $(shell pkg-config --cflags opus) -o $@ $< -lm $(shell pkg-config --libs opus)

blank.ptna: make_blank_ptna
	./make_blank_ptna $@
