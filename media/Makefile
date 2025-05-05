all: blank.mkv blank.ptna

blank.mkv:
	#120 frames @ 30 FPS == 4 seconds
	gst-launch-1.0 videotestsrc num-buffers=160 horizontal-speed=2 ! 'video/x-raw,format=(string)I420,width=320,height=240,framerate=(fraction)30/1' ! textoverlay text="Missing audio or video codecs" valignment=center font-desc="Sans 32" ! av1enc ! queue ! mux. audiotestsrc num-buffers=400 wave=silence samplesperbuffer=441 ! 'audio/x-raw,rate=48000,channels=2' ! opusenc ! queue ! mux. matroskamux name=mux ! filesink location=blank.mkv

make_blank_ptna: make_blank_ptna.c
	gcc -Wall -O2 $(shell pkg-config --cflags opus) -o $@ $< -lm $(shell pkg-config --libs opus)

blank.ptna: make_blank_ptna
	./make_blank_ptna $@

