/*
 * Copyright (c) 2020, Valve Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* Dumps a "blank" Proton Audio sample. For documentation of the Proton Audio
 * format, see audioconv.rs. */

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>
#include <opus/opus.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(*x))

/* indexes into frame_sizes[] */
#define FRAME_2p5MS 0
#define FRAME_SMALLEST FRAME_2p5MS
#define FRAME_5MS 1
#define FRAME_10MS 2
#define FRAME_20MS 3
#define FRAME_40MS 4
#define FRAME_60MS 5
#define FRAME_LARGEST FRAME_60MS

/* sample properties */
static const int SAMPLERATE = 48000;
static const int CHANNELS = 1;
static const int SAMPLE_LENGTH = FRAME_10MS; /* must match value in audioconv.rs */
static const float AUDIBLE_HZ = 400.f; /* freq for the --audible switch */

static const int frame_sizes[] = {
    SAMPLERATE * 2.5 / 1000,
    SAMPLERATE * 5 / 1000,
    SAMPLERATE * 10 / 1000,
    SAMPLERATE * 20 / 1000,
    SAMPLERATE * 40 / 1000,
    SAMPLERATE * 60 / 1000,
};

static float theta = 0.f;

static const uint32_t FLAG_HEADER = 0x10000000;
static const uint32_t AUDIOCONV_PADDING_LENGTH_SHIFT = 12;

static int complete_write(const int file, const void *buf, const size_t len)
{
    size_t written = 0;
    ssize_t ret;
    while(written < len){
        ret = write(file, ((const char *)buf) + written, len - written);
        if(ret < 0){
            if(errno != EINTR && errno != EAGAIN)
                return 0;
        }else
            written += ret;
    }
    return written == len;
}

static int dump_hz(float hz, int samples, OpusEncoder *encoder, int outfile)
{
    int i = 0, j, c, frame_size, tot = 0, padding;
    opus_int32 written;
    uint32_t pkt_header;
    float val, *vals;
    unsigned char packet[4000 /* suggested by opus_encoder(3) */ ];

    fprintf(stdout, "dumping %u samples at %f hz\n", samples, hz);

    vals = malloc(sizeof(float) * CHANNELS * frame_sizes[FRAME_LARGEST]);

    while(i < samples){

        /* find the largest packet we can write with the samples remaining */
        frame_size = -1;
        for(j = ARRAY_SIZE(frame_sizes) - 1; j >= 0; --j){
            if(samples - i >= frame_sizes[j]){
                frame_size = frame_sizes[j];
                break;
            }
        }

        if(frame_size < 0){
            /* couldn't fill a whole packet, so write a partial */
            frame_size = frame_sizes[FRAME_SMALLEST];
            padding = frame_size - (samples - i);
        }else
            padding = 0;

        for(j = 0; j < frame_size - padding; ++j){
            val = sinf(theta);
            for(c = 0; c < CHANNELS; ++c)
                vals[j * CHANNELS + c] = val;
            theta += hz * 2.f * M_PI / (float)SAMPLERATE;
            while(theta >= 2.f * M_PI)
                theta -= 2.f * M_PI;
        }

        if(padding)
            memset(vals + (frame_size - padding) * CHANNELS, 0, sizeof(float) * padding * CHANNELS);

        written = opus_encode_float(encoder, vals, frame_size, packet, sizeof(packet));
        if(written < 0){
            fprintf(stderr, "fatal: opus_encode failed!!!\n");
            free(vals);
            return 0;
        }

        pkt_header = written | (padding << AUDIOCONV_PADDING_LENGTH_SHIFT);

        fprintf(stdout, "encoded %u samples (%u are padding) to %u bytes\n", frame_size, padding, written);
        if(!complete_write(outfile, &pkt_header, sizeof(pkt_header))){
            fprintf(stderr, "fatal: error writing packet header!!!\n");
            free(vals);
            return 0;
        }
        if(!complete_write(outfile, packet, written)){
            fprintf(stderr, "fatal: error writing packet contents!!!\n");
            free(vals);
            return 0;
        }
        tot += written + sizeof(written);

        i += frame_size;
    }

    fprintf(stdout, "done dumping, %u bytes\n", tot);

    free(vals);

    return 1;
}

/* OGG's opus header (from RFC 7845 Section 5.1) */
struct __attribute__((__packed__)) opus_header {
    uint64_t magic;
    uint8_t version;
    uint8_t channels;
    uint16_t preskip;
    uint32_t input_samplerate;
    uint16_t output_gain;
    uint8_t mapping_family;
};

static int dump_header(int outfile)
{
    struct opus_header header;
    uint32_t sz = sizeof(header) | FLAG_HEADER;

    static const char magic[] = "OpusHead";

    memcpy(&header.magic, magic, sizeof(magic));
    header.version = 1;
    header.channels = CHANNELS;
    header.preskip = 0;
    header.input_samplerate = SAMPLERATE;
    header.output_gain = 0;
    header.mapping_family = 0; /* FIXME: we need to support mc */

    if(!complete_write(outfile, &sz, sizeof(sz))){
        fprintf(stderr, "fatal: error writing opus header header!!!\n");
        return 0;
    }

    if(!complete_write(outfile, &header, sizeof(header))){
        fprintf(stderr, "fatal: error writing opus header!!!\n");
        return 0;
    }

    return 1;
}

void usage(const char *name)
{
    fprintf(stderr, "usage:\n");
    fprintf(stderr, "\t%s [--help|-h] [--audible] <outfile>\n", name);
    fprintf(stderr, "\n");
    fprintf(stderr, "\t--audible\tGenerate an audible sound clip instead of silence.\n");
    fprintf(stderr, "\t--help -h\tPrint this help message.\n\n");
}

int main(int argc, char **argv)
{
    int err, outfile, i, audible = 0;
    OpusEncoder *encoder;
    const char *outfile_name = NULL;

    for(i = 1; i < argc; ++i){
        if(!strcmp(argv[i], "--help") || !strcmp(argv[i], "-h")){
            usage(argv[0]);
            return 0;
        }else if(!strcmp(argv[i], "--audible")){
            audible = 1;
        }else if(outfile_name){
            fprintf(stderr, "error: too many arguments.\n\n");
            usage(argv[0]);
            return 1;
        }else{
            outfile_name = argv[i];
        }
    }

    if(!outfile_name){
        fprintf(stderr, "error: missing filename.\n\n");
        usage(argv[0]);
        return 1;
    }

    encoder = opus_encoder_create(SAMPLERATE, CHANNELS, OPUS_APPLICATION_AUDIO, &err);
    if(!encoder){
        fprintf(stderr, "couldn't create opus encoder, err: 0x%x\n", err);
        return 1;
    }

    outfile = open(outfile_name, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if(outfile < 0){
        fprintf(stderr, "couldn't open file \"%s\": %s\n", outfile_name, strerror(errno));
        opus_encoder_destroy(encoder);
        return 1;
    }

    if(!dump_header(outfile)){
        close(outfile);
        unlink(outfile_name);
        opus_encoder_destroy(encoder);
        return 1;
    }

    if(!dump_hz(audible ? AUDIBLE_HZ : 0.f, frame_sizes[SAMPLE_LENGTH], encoder, outfile)){
        close(outfile);
        unlink(outfile_name);
        opus_encoder_destroy(encoder);
        return 1;
    }

    close(outfile);
    opus_encoder_destroy(encoder);

    return 0;
}
