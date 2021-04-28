/*
 * Copyright (c) 2020 Valve Corporation
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

use glib;
use glib::subclass;
use glib::subclass::prelude::*;

use crate::format_hash;
use crate::HASH_SEED;

use gst;
use gst::prelude::*;
use gst::subclass::prelude::*;
use gst::EventView;
use gst::QueryView;
use gst_audio;

use std::sync::Mutex;
use std::io;
use std::io::Read;
use std::fs;
use std::fs::OpenOptions;

#[cfg(target_arch = "x86")]
use crate::murmur3_x86_128::murmur3_x86_128_full as murmur3_128_full;
#[cfg(target_arch = "x86")]
use crate::murmur3_x86_128::murmur3_x86_128_state as murmur3_128_state;

#[cfg(target_arch = "x86_64")]
use crate::murmur3_x64_128::murmur3_x64_128_full as murmur3_128_full;
#[cfg(target_arch = "x86_64")]
use crate::murmur3_x64_128::murmur3_x64_128_state as murmur3_128_state;

use crate::fossilize;
use crate::copy_into_array;
use crate::BufferedReader;

use once_cell::sync::Lazy;

/* Algorithm
 * ---------
 *
 * The application feeds encoded audio into XAudio2 in chunks. Since we don't have access to all
 * chunks in a stream on initialization (as we do with the video converter), we continuously hash
 * the stream as it is sent to us. Each "chunk" is identified as the hash of the entire stream up
 * to that chunk.
 *
 * Since chunks are small (~2 kilobytes), this leads to a significant possibility of two different
 * streams having identical intro chunks (imagine two streams that start with several seconds of
 * silence). This means we need a tree of chunks. Suppose two incoming streams with chunks that
 * hash as shown (i.e. identical intro chunks that diverge later):
 *
 * Stream 1: [AA BB CC DD]
 *
 * Stream 2: [AA BB YY ZZ]
 *
 * We record a tree and the transcoder will walk it depth-first in order to reconstruct each unique
 * stream:
 *
 * AA => aa.ptna
 * AA+BB => bb.ptna
 * AA+BB+CC => cc.ptna
 * AA+BB+CC+DD => dd.ptna
 * AA+BB+YY => yy.ptna
 * AA+BB+YY+ZZ => zz.ptna
 *
 * Upon playback, we chain each transcoded stream chunk together as the packets come in:
 *
 * AA -> start stream with aa.ptna
 * BB -> play bb.ptna
 * CC -> play cc.ptna
 * DD -> play dd.ptna
 *
 * or:
 *
 * AA -> start stream with aa.ptna
 * BB -> play bb.ptna
 * YY -> play yy.ptna
 * ZZ -> play zz.ptna
 *
 * or:
 *
 * AA -> start stream with aa.ptna
 * NN -> not recognized, instead play blank.ptna and mark this stream as needs-transcoding
 * OO -> play blank.ptna
 * PP -> play blank.ptna
 * When the Stream is destroyed, we'll record AA+NN+OO+PP into the needs-transcode database
 * for the transcoder to convert later.
 *
 *
 * Physical Format
 * ---------------
 *
 * All stored values are little-endian.
 *
 * Transcoded audio is stored in the "transcoded" Fossilize database under the
 * AUDIOCONV_FOZ_TAG_PTNADATA tag. Each chunk is stored in one entry with as many of the following
 * "Proton Audio" (ptna) packets as are required to store the entire transcoded chunk:
 *
 *     uint32_t packet_header: Information about the upcoming packet, see bitmask:
 *        MSB [FFFF PPPP PPPP PPPP PPPP LLLL LLLL LLLL] LSB
 *        L: Number of _bytes_ in this packet following this header.
 *        P: Number of _samples_ at the end of this packet which are padding and should be skipped.
 *        F: Flag bits:
 *           0x1: This packet is an Opus header
 *           0x2, 0x4, 0x8: Reserved for future use.
 *
 *     If the Opus header flag is set:
 *        Following packet is an Opus identification header, as defined in RFC 7845 "Ogg
 *        Encapsulation for the Opus Audio Codec" Section 5.1.
 *        <https://tools.ietf.org/html/rfc7845#section-5.1>
 *
 *     If the header flag is not set:
 *        Following packet is raw Opus data to be sent to an Opus decoder.
 *
 *
 * If we encounter a stream which needs transcoding, we record the buffers and metadata in
 * a Fossilize database. The database has three tag types:
 *
 * AUDIOCONV_FOZ_TAG_STREAM: This identifies each unique stream of buffers. For example:
 *   [hash(AA+BB+CC+DD)] -> [AA, BB, CC, DD]
 *   [hash(AA+BB+XX+YY)] -> [AA, BB, XX, YY]
 *
 * AUDIOCONV_FOZ_TAG_AUDIODATA: This contans the actual encoded audio data. For example:
 *   [AA] -> [AA's buffer data]
 *   [BB] -> [BB's buffer data]
 *
 * AUDIOCONV_FOZ_TAG_CODECINFO: This contans the codec data required to decode the buffer. Only
 * the "head" of each stream is recorded. For example:
 *   [AA] -> [
 *     uint32_t wmaversion                 (from WAVEFORMATEX.wFormatTag)
 *     uint32_t bitrate                    (from WAVEFORMATEX.nAvgBytesPerSec)
 *     uint32_t channels                   (WAVEFORMATEX.nChannels)
 *     uint32_t rate                       (WAVEFORMATEX.nSamplesPerSec)
 *     uint32_t block_align                (WAVEFORMATEX.nBlockAlign)
 *     uint32_t depth                      (WAVEFORMATEX.wBitsPerSample)
 *     char[remainder of entry] codec_data (codec data which follows WAVEFORMATEX)
 *   ]
 *
 */

const AUDIOCONV_ENCODED_LENGTH_MASK: u32 = 0x00000fff; /* 4kB fits in here */
const AUDIOCONV_PADDING_LENGTH_MASK: u32 = 0x0ffff000; /* 120ms of samples at 48kHz fits in here */
const AUDIOCONV_PADDING_LENGTH_SHIFT: u32 = 12;
const AUDIOCONV_FLAG_MASK: u32 = 0xf0000000;
const AUDIOCONV_FLAG_HEADER: u32 = 0x10000000; /* this chunk is the Opus header */
const _AUDIOCONV_FLAG_RESERVED1: u32 = 0x20000000; /* not yet used */
const _AUDIOCONV_FLAG_RESERVED2: u32 = 0x40000000; /* not yet used */
const _AUDIOCONV_FLAG_V2: u32 = 0x80000000; /* indicates a "version 2" header, process somehow differently (TBD) */

/* properties of the "blank" audio file */
const BLANK_AUDIO_FILE_LENGTH_MS: f32 = 10.0;
const BLANK_AUDIO_FILE_RATE: f32 = 48000.0;

static CAT: Lazy<gst::DebugCategory> = Lazy::new(|| {
    gst::DebugCategory::new(
        "protonaudioconverter",
        gst::DebugColorFlags::empty(),
        Some("Proton audio converter"))
});

static DUMP_FOZDB: Lazy<Mutex<Option<fossilize::StreamArchive>>> = Lazy::new(|| {
    let dump_file_path = match std::env::var("MEDIACONV_AUDIO_DUMP_FILE") {
        Err(_) => { return Mutex::new(None); },
        Ok(c) => c,
    };

    let dump_file_path = std::path::Path::new(&dump_file_path);

    if fs::create_dir_all(&dump_file_path.parent().unwrap()).is_err() {
        return Mutex::new(None);
    }

    match fossilize::StreamArchive::new(&dump_file_path, OpenOptions::new().write(true).read(true).create(true), AUDIOCONV_FOZ_NUM_TAGS) {
        Ok(newdb) => Mutex::new(Some(newdb)),
        Err(_) => Mutex::new(None),
    }
});

#[derive(Clone)]
struct NeedTranscodeHead {
    wmaversion: i32,
    bitrate: i32,
    channels: i32,
    rate: i32,
    block_align: i32,
    depth: i32,
    codec_data: Vec<u8>
}

impl NeedTranscodeHead {
    fn new_from_caps(caps: &gst::CapsRef) -> Result<Self, gst::LoggableError> {
        let s = caps.get_structure(0).ok_or_else(|| gst_loggable_error!(CAT, "Caps have no WMA data!"))?;

        let wmaversion = s.get_some::<i32>("wmaversion").map_err(|_| gst_loggable_error!(CAT, "Caps have no wmaversion field"))?;
        let bitrate = s.get_some::<i32>("bitrate").map_err(|_| gst_loggable_error!(CAT, "Caps have no bitrate field"))?;
        let channels = s.get_some::<i32>("channels").map_err(|_| gst_loggable_error!(CAT, "Caps have no channels field"))?;
        let rate = s.get_some::<i32>("rate").map_err(|_| gst_loggable_error!(CAT, "Caps have no rate field"))?;
        let block_align = s.get_some::<i32>("block_align").map_err(|_| gst_loggable_error!(CAT, "Caps have no block_align field"))?;
        let depth = s.get_some::<i32>("depth").map_err(|_| gst_loggable_error!(CAT, "Caps have no depth field"))?;
        let codec_data_buf = s.get::<gst::Buffer>("codec_data")
            .map_err(|_| gst_loggable_error!(CAT, "Caps have no codec_data field"))?
            .ok_or_else(|| gst_loggable_error!(CAT, "Caps have NULL codec_data field"))?;

        let mapped = codec_data_buf.into_mapped_buffer_readable().unwrap();
        let mut codec_data = Vec::new();
        codec_data.extend_from_slice(mapped.as_slice());

        Ok(NeedTranscodeHead {
            wmaversion,
            bitrate,
            channels,
            rate,
            block_align,
            depth,
            codec_data,
        })
    }

    fn serialize(&self) -> Vec<u8> {
        let mut ret = Vec::new();
        ret.extend_from_slice(&self.wmaversion.to_le_bytes());
        ret.extend_from_slice(&self.bitrate.to_le_bytes());
        ret.extend_from_slice(&self.channels.to_le_bytes());
        ret.extend_from_slice(&self.rate.to_le_bytes());
        ret.extend_from_slice(&self.block_align.to_le_bytes());
        ret.extend_from_slice(&self.depth.to_le_bytes());
        ret.extend(self.codec_data.iter());
        ret
    }
}

const AUDIOCONV_FOZ_TAG_STREAM: u32 = 0;
const AUDIOCONV_FOZ_TAG_CODECINFO: u32 = 1;
const AUDIOCONV_FOZ_TAG_AUDIODATA: u32 = 2;
const AUDIOCONV_FOZ_TAG_PTNADATA: u32 = 3;
const AUDIOCONV_FOZ_NUM_TAGS: usize = 4;

/* represents a Stream, a sequence of buffers */
struct StreamState {
    hash_state: murmur3_128_state,
    cur_hash: u128,
    buffers: Vec<(u128, gst::MappedBuffer<gst::buffer::Readable>)>,
    loop_buffers: Vec<(u128, gst::MappedBuffer<gst::buffer::Readable>)>,
    codec_info: Option<NeedTranscodeHead>,
    needs_dump: bool,
}

enum LoopState {
    NoLoop,
    Looping,
    LoopEnded,
}

impl StreamState {
    fn new() -> Self {
        Self {
            hash_state: murmur3_128_state::new(HASH_SEED),
            buffers: Vec::<(u128, gst::MappedBuffer<gst::buffer::Readable>)>::new(),
            loop_buffers: Vec::<(u128, gst::MappedBuffer<gst::buffer::Readable>)>::new(),
            cur_hash: 0,
            codec_info: None,
            needs_dump: false,
        }
    }

    fn record_buffer(&mut self, buf_hash: u128, loop_hash: u128, buffer: gst::MappedBuffer<gst::buffer::Readable>, codec_info: Option<&NeedTranscodeHead>) -> io::Result<LoopState> {
        if self.codec_info.is_none() {
            if let Some(codec_info) = codec_info {
                self.codec_info = Some(codec_info.clone());
            }
        }

        if self.loop_buffers.len() < self.buffers.len() &&
                self.buffers[self.loop_buffers.len()].0 == loop_hash {

            self.loop_buffers.push((buf_hash /* not loop_hash! */, buffer));

            if self.loop_buffers.len() == self.buffers.len() {
                /* full loop, just drop them */
                self.loop_buffers.clear();
                return Ok(LoopState::LoopEnded);
            }

            Ok(LoopState::Looping)
        }else{
            if !self.loop_buffers.is_empty() {
                /* partial loop, track them and then continue */
                self.buffers.append(&mut self.loop_buffers);
            }

            self.buffers.push((buf_hash, buffer));

            self.cur_hash = murmur3_128_full(&mut (&buf_hash.to_le_bytes() as &[u8]), &mut self.hash_state)?;
            Ok(LoopState::NoLoop)
        }
    }

    fn write_to_foz(&self) -> Result<(), gst::LoggableError> {
        if self.needs_dump && !self.buffers.is_empty() {
            let mut db = (*DUMP_FOZDB).lock().unwrap();
            let db = match &mut *db {
                Some(d) => d,
                None => { return Err(gst_loggable_error!(CAT, "Failed to open fossilize db!")) },
            };

            let mut found = db.has_entry(AUDIOCONV_FOZ_TAG_STREAM, self.cur_hash);

            if !found {
                /* are there any recorded streams of which this stream is a subset? */
                let stream_ids = db.iter_tag(AUDIOCONV_FOZ_TAG_STREAM).cloned().collect::<Vec<u128>>();

                found = stream_ids.iter().any(|stream_id| {
                        let mut offs = 0;

                        for cur_buf_id in self.buffers.iter() {
                            let mut buf = [0u8; 16];

                            let res = db.read_entry(AUDIOCONV_FOZ_TAG_STREAM, *stream_id, offs, &mut buf, fossilize::CRCCheck::WithCRC);

                            let buffer_id = match res {
                                Err(_) => { return false; }
                                Ok(s) => {
                                    if s != std::mem::size_of::<u128>() {
                                        return false;
                                    }
                                    u128::from_le_bytes(buf)
                                }
                            };

                            if buffer_id != (*cur_buf_id).0 {
                                return false;
                            }

                            offs += 16;
                        }

                        gst_trace!(CAT, "stream id {} is a subset of {}, so not recording stream", self.cur_hash, *stream_id);
                        return true;
                    });
            }

            if !found {
                gst_trace!(CAT, "recording stream id {}", self.cur_hash);
                db.write_entry(AUDIOCONV_FOZ_TAG_CODECINFO,
                               self.buffers[0].0,
                               &mut self.codec_info.as_ref().unwrap().serialize().as_slice(),
                               fossilize::CRCCheck::WithCRC)
                    .map_err(|e| gst_loggable_error!(CAT, "Unable to write stream header: {:?}", e))?;

                db.write_entry(AUDIOCONV_FOZ_TAG_STREAM,
                               self.cur_hash,
                               &mut StreamStateSerializer::new(self),
                               fossilize::CRCCheck::WithCRC)
                    .map_err(|e| gst_loggable_error!(CAT, "Unable to write stream: {:?}", e))?;

                for buffer in self.buffers.iter() {
                    db.write_entry(AUDIOCONV_FOZ_TAG_AUDIODATA,
                                   buffer.0,
                                   &mut buffer.1.as_slice(),
                               fossilize::CRCCheck::WithCRC)
                        .map_err(|e| gst_loggable_error!(CAT, "Unable to write audio data: {:?}", e))?;
                }
            }
        }
        Ok(())
    }

    fn reset(&mut self) {
        self.hash_state.reset();
        self.buffers.clear();
        self.loop_buffers.clear();
        self.cur_hash = 0;
        self.codec_info = None;
        self.needs_dump = false;
    }
}

struct StreamStateSerializer<'a> {
    stream_state: &'a StreamState,
    cur_idx: usize,
}

impl<'a> StreamStateSerializer<'a> {
    fn new(stream_state: &'a StreamState) -> Self {
        StreamStateSerializer {
            stream_state,
            cur_idx: 0
        }
    }
}

impl<'a> Read for StreamStateSerializer<'a> {
    fn read(&mut self, out: &mut [u8]) -> io::Result<usize> {
        if self.cur_idx >= self.stream_state.buffers.len() {
            return Ok(0);
        }

        out[0..std::mem::size_of::<u128>()].copy_from_slice(&self.stream_state.buffers[self.cur_idx].0.to_le_bytes());
        self.cur_idx += 1;

        Ok(std::mem::size_of::<u128>())
    }
}

fn hash_data(dat: &[u8], len: usize, hash_state: &mut murmur3_128_state) -> io::Result<u128> {
    murmur3_128_full(&mut BufferedReader::new(dat, len), hash_state)
}

struct AudioConvState {
    sent_header: bool,

    codec_data: Option<NeedTranscodeHead>,

    hash_state: murmur3_128_state,
    loop_hash_state: murmur3_128_state,

    stream_state: StreamState,

    read_fozdb: Option<fossilize::StreamArchive>,
}

impl AudioConvState {
    fn new() -> Result<AudioConvState, gst::LoggableError> {

        let read_fozdb_path = std::env::var("MEDIACONV_AUDIO_TRANSCODED_FILE").map_err(|_| {
            gst_loggable_error!(CAT, "MEDIACONV_AUDIO_TRANSCODED_FILE is not set!")
        })?;

        let read_fozdb = match fossilize::StreamArchive::new(&read_fozdb_path, OpenOptions::new().read(true), AUDIOCONV_FOZ_NUM_TAGS) {
            Ok(s) => Some(s),
            Err(_) => None,
        };

        Ok(AudioConvState {
            sent_header: false,

            codec_data: None,

            hash_state: murmur3_128_state::new(HASH_SEED),
            loop_hash_state: murmur3_128_state::new(HASH_SEED),

            stream_state: StreamState::new(),

            read_fozdb,
        })
    }

    fn reset(&mut self) {
        if let Err(e) = self.stream_state.write_to_foz() {
            e.log();
        }

        self.stream_state.reset();

        self.hash_state.reset();
        self.loop_hash_state.reset();
    }

    fn open_transcode_file(&mut self, buffer: gst::Buffer) -> io::Result<(Box<[u8]>, f32)> {
        let mapped = buffer.into_mapped_buffer_readable().unwrap();
        let buf_len = mapped.get_size();

        let hash = hash_data(mapped.as_slice(), buf_len, &mut self.hash_state)
            .map_err(|e|{ gst_warning!(CAT, "Hashing buffer failed! {}", e); io::ErrorKind::Other })?;
        let loop_hash = hash_data(mapped.as_slice(), buf_len, &mut self.loop_hash_state)
            .map_err(|e|{ gst_warning!(CAT, "Hashing buffer failed! {}", e); io::ErrorKind::Other })?;

        let try_loop = match self.stream_state.record_buffer(hash, loop_hash, mapped, Some(self.codec_data.as_ref().unwrap()))? {
            LoopState::NoLoop => { self.loop_hash_state.reset(); false },
            LoopState::Looping => { true },
            LoopState::LoopEnded => { self.loop_hash_state.reset(); true },
        };

        if try_loop {
            gst_log!(CAT, "Buffer hash: {} (loop: {})", format_hash(hash), format_hash(loop_hash));
        }else{
            gst_log!(CAT, "Buffer hash: {}", format_hash(hash));
        }

        /* try to read transcoded data */
        if let Some(read_fozdb) = &mut self.read_fozdb {
            if let Ok(transcoded_size) = read_fozdb.entry_size(AUDIOCONV_FOZ_TAG_PTNADATA, hash) {
                /* success */
                let mut buf = vec![0u8; transcoded_size].into_boxed_slice();
                if read_fozdb.read_entry(AUDIOCONV_FOZ_TAG_PTNADATA, hash, 0, &mut buf, fossilize::CRCCheck::WithoutCRC).is_ok() {
                    return Ok((buf, 0.0));
                }
            }
            if try_loop {
                if let Ok(transcoded_size) = read_fozdb.entry_size(AUDIOCONV_FOZ_TAG_PTNADATA, loop_hash) {
                    /* success */
                    let mut buf = vec![0u8; transcoded_size].into_boxed_slice();
                    if read_fozdb.read_entry(AUDIOCONV_FOZ_TAG_PTNADATA, loop_hash, 0, &mut buf, fossilize::CRCCheck::WithoutCRC).is_ok() {
                        return Ok((buf, 0.0));
                    }
                }
            }
        }

        /* if we can't, return the blank file */
        self.stream_state.needs_dump = true;

        let buf = Box::new(*include_bytes!("../blank.ptna"));

        /* calculate average expected length of this buffer */
        let codec_data = self.codec_data.as_ref().unwrap();

        let mut repeat_count = if codec_data.bitrate > 0 {
            let buffer_time_ms = (buf_len * 8 /* to bits */ * 1000 /* to ms */) as f32
                / (codec_data.bitrate as f32);

            /* repeat the known-length blank file enough times to fill the expected length */
            buffer_time_ms / BLANK_AUDIO_FILE_LENGTH_MS
        } else {
            /* invalid bitrate, so just play the file once */
            0.0
        };

        /* scale to output rate */
        repeat_count *= codec_data.rate as f32 / BLANK_AUDIO_FILE_RATE;

        Ok((buf, repeat_count))
    }
}

struct AudioConv {
    state: Mutex<Option<AudioConvState>>,
    sinkpad: gst::Pad,
    srcpad: gst::Pad,
}

impl ObjectSubclass for AudioConv {
    const NAME: &'static str = "ProtonAudioConverter";
    type ParentType = gst::Element;
    type Instance = gst::subclass::ElementInstanceStruct<Self>;
    type Class = subclass::simple::ClassStruct<Self>;

    glib_object_subclass!();

    fn with_class(klass: &subclass::simple::ClassStruct<Self>) -> Self {
        let templ = klass.get_pad_template("sink").unwrap();
        let sinkpad = gst::Pad::builder_with_template(&templ, Some("sink"))
            .chain_function(|pad, parent, buffer| {
                AudioConv::catch_panic_pad_function(
                    parent,
                    || Err(gst::FlowError::Error),
                    |audioconv, element| audioconv.chain(pad, element, buffer)
                )
            })
            .event_function(|pad, parent, event| {
                AudioConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |audioconv, element| audioconv.sink_event(pad, element, event)
                )
            }).build();

        let templ = klass.get_pad_template("src").unwrap();
        let srcpad = gst::Pad::builder_with_template(&templ, Some("src"))
            .query_function(|pad, parent, query| {
                AudioConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |audioconv, element| audioconv.src_query(pad, element, query)
                )
            })
            .activatemode_function(|pad, parent, mode, active| {
                AudioConv::catch_panic_pad_function(
                    parent,
                    || Err(gst_loggable_error!(CAT, "Panic activating srcpad with mode")),
                    |audioconv, element| audioconv.src_activatemode(pad, element, mode, active)
                )
            }).build();

        AudioConv {
            state: Mutex::new(None),
            sinkpad,
            srcpad,
        }
    }

    fn class_init(klass: &mut subclass::simple::ClassStruct<Self>) {

        klass.set_metadata(
            "Proton audio converter",
            "Codec/Parser",
            "Converts audio for Proton",
            "Andrew Eikum <aeikum@codeweavers.com>");

        let mut caps = gst::Caps::new_empty();
        {
            let caps = caps.get_mut().unwrap();
            caps.append(gst::Caps::builder("audio/x-wma").build());
        }
        let sink_pad_template = gst::PadTemplate::new(
            "sink",
            gst::PadDirection::Sink,
            gst::PadPresence::Always,
            &caps).unwrap();
        klass.add_pad_template(sink_pad_template);

        let caps = gst::Caps::builder("audio/x-opus").build();
        let src_pad_template = gst::PadTemplate::new(
            "src",
            gst::PadDirection::Src,
            gst::PadPresence::Always,
            &caps).unwrap();
        klass.add_pad_template(src_pad_template);
    }
}

impl ObjectImpl for AudioConv {
    glib_object_impl!();

    fn constructed(&self, obj: &glib::Object) {
        self.parent_constructed(obj);

        let element = obj.downcast_ref::<gst::Element>().unwrap();
        element.add_pad(&self.sinkpad).unwrap();
        element.add_pad(&self.srcpad).unwrap();
    }
}

impl ElementImpl for AudioConv {
    fn change_state(
        &self,
        element: &gst::Element,
        transition: gst::StateChange
    ) -> Result<gst::StateChangeSuccess, gst::StateChangeError> {

        gst_log!(CAT, obj: element, "State transition: {:?}", transition);

        match transition {
            gst::StateChange::NullToReady => {
                /* do runtime setup */

                {
                    /* open fozdb here; this is the right place to fail and opening may be
                     * expensive */
                    let db = (*DUMP_FOZDB).lock().unwrap();
                    if (*db).is_none() {
                        gst_error!(CAT, "Failed to open fossilize db!");
                        return Err(gst::StateChangeError);
                    }
                }

                let new_state = AudioConvState::new().map_err(|err| {
                    err.log();
                    return gst::StateChangeError;
                })?;

                let mut state = self.state.lock().unwrap();
                assert!((*state).is_none());
                *state = Some(new_state);
            },

            gst::StateChange::ReadyToNull => {
                /* do runtime teardown */

                let old_state = self.state.lock().unwrap().take(); // dispose of state
                if let Some(old_state) = old_state {
                    if old_state.stream_state.write_to_foz().is_err() {
                        gst_warning!(CAT, "Error writing out stream data!");
                    }
                }
            },

            _ => (),
        };

        self.parent_change_state(element, transition)

        /* XXX on ReadyToNull, sodium drops state _again_ here... why? */
    }
}

impl AudioConv {

    fn chain(
        &self,
        _pad: &gst::Pad,
        _element: &gst::Element,
        buffer: gst::Buffer
    ) -> Result<gst::FlowSuccess, gst::FlowError> {
        gst_log!(CAT, "Handling buffer {:?}", buffer);

        let mut state = self.state.lock().unwrap();
        let mut state = match &mut *state {
            Some(s) => s,
            None => { return Err(gst::FlowError::Error); },
        };

        let (ptnadata, mut repeat_count) = state.open_transcode_file(buffer).map_err(|_| {
            gst_error!(CAT, "ERROR! Failed to read transcoded audio! Things will go badly..."); gst::FlowError::Error
        })?;

        let mut offs: usize = 0;
        loop {

            if offs >= ptnadata.len() {
                if repeat_count > 0.0 {
                    /* TODO: we're sending the whole partial packet. we could set padding instead */
                    repeat_count -= 1.0;
                    offs = 0;
                    continue;
                } else {
                    break;
                }
            }

            if offs + 4 >= ptnadata.len() {
                gst_warning!(CAT, "Short read on ptna header?");
                break;
            }

            let packet_hdr = u32::from_le_bytes(copy_into_array(&ptnadata[offs..offs + 4]));
            offs += 4;

            let (flags, padding_len, encoded_len) =
                    ((packet_hdr & AUDIOCONV_FLAG_MASK),
                     (packet_hdr & AUDIOCONV_PADDING_LENGTH_MASK) >> AUDIOCONV_PADDING_LENGTH_SHIFT,
                     (packet_hdr & AUDIOCONV_ENCODED_LENGTH_MASK) as usize);

            if offs + encoded_len > ptnadata.len() {
                gst_warning!(CAT, "Short read on ptna data?");
                break;
            }

            let pkt_is_header = (flags & AUDIOCONV_FLAG_HEADER) != 0;

            if pkt_is_header && state.sent_header {
                /* only send one header */
                offs += encoded_len;
                continue;
            }

            /* TODO: can we use a gstbuffer cache here? */
            let mut buffer = gst::Buffer::with_size(encoded_len as usize).unwrap();

            if !pkt_is_header && padding_len > 0 {
                gst_audio::AudioClippingMeta::add(buffer.get_mut().unwrap(), gst::format::Default(Some(0)), gst::format::Default(Some(padding_len as u64)));
            }

            let mut writable = buffer.into_mapped_buffer_writable().unwrap();

            writable.as_mut_slice().copy_from_slice(&ptnadata[offs..offs + encoded_len]);

            gst_log!(CAT, "pushing one packet of len {}", encoded_len);
            self.srcpad.push(writable.into_buffer())?;

            if pkt_is_header {
                state.sent_header = true;
            }

            offs += encoded_len;
        }

        Ok(gst::FlowSuccess::Ok)
    }

    fn sink_event(
        &self,
        pad: &gst::Pad,
        element: &gst::Element,
        event: gst::Event
    ) -> bool {
        gst_log!(CAT, obj:pad, "Got an event {:?}", event);
        match event.view() {
            EventView::Caps(event_caps) => {

                let mut state = self.state.lock().unwrap();
                if let Some(state) = &mut *state {
                    let head = match NeedTranscodeHead::new_from_caps(&event_caps.get_caps()){
                        Ok(h) => h,
                        Err(e) => {
                            gst_error!(CAT, "Invalid WMA caps!");
                            e.log();
                            return false;
                        },
                    };
                    state.codec_data = Some(head);
                };
                drop(state);

                let mut caps = gst::Caps::new_empty();
                {
                    let caps = caps.get_mut().unwrap();
                    let s = gst::Structure::builder("audio/x-opus")
                        .field("channel-mapping-family", &0i32)
                        .build();
                    caps.append_structure(s);
                }

                self.srcpad.push_event(gst::event::Caps::new(&caps))
            },
            EventView::FlushStop(_) => {
                let mut state = self.state.lock().unwrap();
                if let Some(state) = &mut *state {
                    state.reset();
                };
                drop(state);

                pad.event_default(Some(element), event)
            },
            _ => pad.event_default(Some(element), event)
        }
    }

    fn src_query(
        &self,
        pad: &gst::Pad,
        element: &gst::Element,
        query: &mut gst::QueryRef) -> bool
    {
        gst_log!(CAT, obj: pad, "got query: {:?}", query);
        match query.view_mut() {
            QueryView::Scheduling(mut q) => {
                let mut peer_query = gst::query::Scheduling::new();
                let res = self.sinkpad.peer_query(&mut peer_query);
                if ! res {
                    return res;
                }

                let (flags, min, max, align) = peer_query.get_result();

                q.set(flags, min, max, align);
                true
            },
            _ => pad.query_default(Some(element), query)
        }
    }

    fn src_activatemode(
        &self,
        _pad: &gst::Pad,
        _element: &gst::Element,
        mode: gst::PadMode,
        active: bool
    ) -> Result<(), gst::LoggableError> {
        self.sinkpad
            .activate_mode(mode, active)?;

        Ok(())
    }

}

pub fn register(plugin: &gst::Plugin) -> Result<(), glib::BoolError> {
    gst::Element::register(
        Some(plugin),
        "protonaudioconverter",
        gst::Rank::Marginal,
        AudioConv::get_type())
}
