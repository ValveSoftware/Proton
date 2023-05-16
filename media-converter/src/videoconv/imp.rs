/*
 * Copyright (c) 2020, 2021, 2022 Valve Corporation
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

use crate::format_hash;
use crate::HASH_SEED;
use crate::box_array;
use crate::copy_into_array;
use crate::BufferedReader;
use crate::discarding_disabled;
use crate::steam_compat_shader_path;
use crate::touch_file;

use gst::glib;
use gst::prelude::*;
use gst::subclass::prelude::*;
use gst::EventView;
use gst::QueryViewMut;

use std::sync::Mutex;
use std::fs;
use std::io;
use std::io::Read;
use std::fs::OpenOptions;

#[cfg(target_arch = "x86")]
use crate::murmur3_x86_128::murmur3_x86_128 as murmur3_128;
#[cfg(target_arch = "x86_64")]
use crate::murmur3_x64_128::murmur3_x64_128 as murmur3_128;

use crate::fossilize;

use once_cell::sync::Lazy;

/* Algorithm
 * ---------
 *
 * Nicely, both Quartz and Media Foundation allow us random access to the entire data stream. So we
 * can easily hash the entire incoming stream and substitute it with our Ogg Theora video. If there
 * is a cache miss, then we dump the entire incoming stream. In case of a cache hit, we dump
 * nothing.
 *
 * Incoming video data is stored in the video.foz Fossilize database.
 *
 * Transcoded video data is stored in the transcoded_video.foz Fossilize database.
 *
 *
 * Hashing algorithm
 * -----------------
 *
 * We use murmur3 hash with the seed given below. We use the x32 variant for 32-bit programs, and
 * the x64 variant for 64-bit programs.
 *
 * For speed when hashing, we specify a stride which will skip over chunks of the input. However,
 * we will always hash the first "stride" number of bytes, to try to avoid collisions on smaller
 * files with size between chunk and stride.
 *
 * For example, the 'H's below are hashed, the 'x's are skipped:
 *
 * let chunk = 4;
 * let stride = chunk * 3;
 * H = hashed, x = skipped
 * [HHHH HHHH HHHH HHHH xxxx xxxx HHHH xxxx xxxx HHHH xxxx] < data stream
 *  ^^^^ ^^^^ ^^^^ stride prefix, hashed
 *                 ^^^^ chunk
 *                 ^^^^ ^^^^ ^^^^ stride
 *                                ^^^^ chunk
 *                                ^^^^ ^^^^ ^^^^ stride
 *                                               ^^^^ chunk
 *                                               ^^^^ ^^^^ stride
 */

/* changing any of these will invalidate the cache. you MUST clear it. */
const HASH_CHUNK_SIZE: usize = 8 * 1024 /* to kiB */ * 1024 /* to MiB */;
const HASH_STRIDE: usize = 6 * HASH_CHUNK_SIZE;

static CAT: Lazy<gst::DebugCategory> = Lazy::new(|| {
    gst::DebugCategory::new(
        "protonvideoconverter",
        gst::DebugColorFlags::empty(),
        Some("Proton video converter"))
});

const VIDEOCONV_FOZ_TAG_VIDEODATA: u32 = 0;
const VIDEOCONV_FOZ_TAG_OGVDATA: u32 = 1;
const VIDEOCONV_FOZ_TAG_STREAM: u32 = 2;
const VIDEOCONV_FOZ_TAG_MKVDATA: u32 = 3;
const VIDEOCONV_FOZ_NUM_TAGS: usize = 4;

struct VideoConverterDumpFozdb {
    fozdb: Option<fossilize::StreamArchive>,
    already_cleaned: bool,
}

impl VideoConverterDumpFozdb {
    fn new() -> Self {
        Self {
            fozdb: None,
            already_cleaned: false,
        }
    }

    fn open(&mut self, create: bool) -> &mut Self {
        if self.fozdb.is_none() {
            let dump_file_path = match std::env::var("MEDIACONV_VIDEO_DUMP_FILE") {
                Err(_) => { return self; },
                Ok(c) => c,
            };

            let dump_file_path = std::path::Path::new(&dump_file_path);

            if fs::create_dir_all(&dump_file_path.parent().unwrap()).is_err() {
                return self;
            }

            match fossilize::StreamArchive::new(&dump_file_path, OpenOptions::new().write(true).read(true).create(create), false /* read-only? */, VIDEOCONV_FOZ_NUM_TAGS) {
                Ok(newdb) => {
                    self.fozdb = Some(newdb);
                },
                Err(_) => {
                    return self;
                },
            }
        }
        self
    }

    fn close(&mut self) {
        self.fozdb = None
    }

    fn discard_transcoded(&mut self) {
        if self.already_cleaned {
            return;
        }
        if discarding_disabled() {
            self.already_cleaned = true;
            return;
        }
        if let Some(fozdb) = &mut self.open(false).fozdb {
            if let Ok(read_fozdb_path) = std::env::var("MEDIACONV_VIDEO_TRANSCODED_FILE") {
                if let Ok(read_fozdb) = fossilize::StreamArchive::new(&read_fozdb_path, OpenOptions::new().read(true), true /* read-only? */,  VIDEOCONV_FOZ_NUM_TAGS) {
                    let mut chunks = Vec::<(u32, u128)>::new();

                    for stream_id in fozdb.iter_tag(VIDEOCONV_FOZ_TAG_STREAM).cloned().collect::<Vec<u128>>() {
                        if read_fozdb.has_entry(VIDEOCONV_FOZ_TAG_MKVDATA, stream_id) {
                            if let Ok(chunks_size) = fozdb.entry_size(VIDEOCONV_FOZ_TAG_STREAM, stream_id) {
                                let mut buf = vec![0u8; chunks_size].into_boxed_slice();
                                if fozdb.read_entry(VIDEOCONV_FOZ_TAG_STREAM, stream_id, 0, &mut buf, fossilize::CRCCheck::WithCRC).is_ok() {
                                    for i in 0..(chunks_size / 16) {
                                        let offs = i * 16;
                                        let chunk_id = u128::from_le_bytes(copy_into_array(&buf[offs..offs + 16]));
                                        chunks.push((VIDEOCONV_FOZ_TAG_VIDEODATA, chunk_id));
                                    }
                                }
                            }
                            chunks.push((VIDEOCONV_FOZ_TAG_STREAM, stream_id));
                        }
                    }

                    if fozdb.discard_entries(&chunks).is_err() {
                        self.close();
                    }
                }
            }
        }
        self.already_cleaned = true;
    }
}

static DUMP_FOZDB: Lazy<Mutex<VideoConverterDumpFozdb>> = Lazy::new(|| {
    Mutex::new(VideoConverterDumpFozdb::new())
});

struct PadReader<'a> {
    pad: &'a gst::Pad,
    offs: usize,
    chunk: Box<[u8; HASH_CHUNK_SIZE]>,
    chunk_offs: usize,
    chunk_end: usize,
    stride: usize, /* set to usize::max_value() to skip no bytes */
}

impl<'a> PadReader<'a> {

    fn new_with_stride(pad: &'a gst::Pad, stride: usize) -> Self {
        PadReader {
            pad,
            offs: 0,
            chunk: box_array![0u8; HASH_CHUNK_SIZE],
            chunk_offs: 0,
            chunk_end: 0,
            stride
        }
    }

    fn new(pad: &'a gst::Pad) -> Self {
        Self::new_with_stride(pad, usize::max_value())
    }
}

impl<'a> Read for PadReader<'a> {
    fn read(&mut self, out: &mut [u8]) -> io::Result<usize> {
        if self.chunk_offs >= self.chunk_end {
            self.chunk_offs = 0;
            self.chunk_end = 0;

            let buf = self.pad.pull_range(self.offs as u64, HASH_CHUNK_SIZE as u32);

            match buf {
                Err(err) => {
                    /* on Eos, keep going; we'll return later */
                    if err != gst::FlowError::Eos {
                        return Err(io::Error::new(io::ErrorKind::Other, "upstream pull_range failed" /* TODO can we print our gst err here? */));
                    }
                },
                Ok(buf) => {
                    let to_copy;

                    if self.offs + buf.size() < self.stride {
                        to_copy = buf.size();
                        self.offs += to_copy;
                    }else if self.offs < self.stride {
                        to_copy = self.stride - self.offs;
                        self.offs = self.stride;
                    }else{
                        to_copy = buf.size();
                        self.offs += self.stride;
                    };

                    if out.len() >= to_copy {
                        /* copy directly into out buffer and return */
                        return Ok(
                            match buf.copy_to_slice(0, &mut out[0..to_copy]) {
                            Err(c) => c,
                            Ok(_) => to_copy,
                        });
                    } else {
                        self.chunk_end = match buf.copy_to_slice(0, &mut (*self.chunk)[0..to_copy]) {
                            Err(c) => c,
                            Ok(_) => to_copy,
                        };
                    }
                }
            }
        }

        if self.chunk_offs >= self.chunk_end {
            return Ok(0);
        }

        let to_copy = std::cmp::min(self.chunk_end - self.chunk_offs, out.len());

        if to_copy == 0 {
            return Ok(0);
        }

        out[..to_copy].copy_from_slice(&self.chunk[self.chunk_offs..(self.chunk_offs + to_copy)]);

        self.chunk_offs += to_copy;

        Ok(to_copy)
    }
}

struct VideoConvState {
    transcode_hash: Option<u128>,

    read_fozdb: Option<fossilize::StreamArchive>,

    upstream_duration: Option<u64>,
    our_duration: Option<u64>,

    transcoded_tag: u32,

    need_stream_start: bool,
}

impl VideoConvState {
    fn new() -> VideoConvState {

        let read_fozdb_path = std::env::var("MEDIACONV_VIDEO_TRANSCODED_FILE");

        if read_fozdb_path.is_err() {
            gst::error!(CAT, "MEDIACONV_VIDEO_TRANSCODED_FILE is not set!")
        }

        let read_fozdb = match read_fozdb_path {
            Ok(path) => match fossilize::StreamArchive::new(&path,
                                                            OpenOptions::new().read(true),
                                                            true /* read-only? */,
                                                            VIDEOCONV_FOZ_NUM_TAGS)
                {
                    Ok(s) => Some(s),
                    Err(_) => None
                },
            Err(_) => None
        };


        VideoConvState {
            transcode_hash: None,

            read_fozdb,

            upstream_duration: None,
            our_duration: None,

            transcoded_tag: VIDEOCONV_FOZ_TAG_MKVDATA,

            need_stream_start: true,
        }
    }

    /* true if the file is transcoded; false if not */
    fn begin_transcode(&mut self, hash: u128) -> bool {
        if let Some(read_fozdb) = &mut self.read_fozdb {
            if let Ok(transcoded_size) = read_fozdb.entry_size(VIDEOCONV_FOZ_TAG_MKVDATA, hash) {
                gst::log!(CAT, "Found an MKV video for hash {}", format_hash(hash));
                self.transcode_hash = Some(hash);
                self.our_duration = Some(transcoded_size as u64);
                self.transcoded_tag = VIDEOCONV_FOZ_TAG_MKVDATA;
                return true;
            }
            if let Ok(transcoded_size) = read_fozdb.entry_size(VIDEOCONV_FOZ_TAG_OGVDATA, hash) {
                gst::log!(CAT, "Found an OGV video for hash {}", format_hash(hash));
                self.transcode_hash = Some(hash);
                self.our_duration = Some(transcoded_size as u64);
                self.transcoded_tag = VIDEOCONV_FOZ_TAG_OGVDATA;
                return true;
            }
        }

        gst::log!(CAT, "No transcoded video for {}. Substituting a blank video.", format_hash(hash));

        self.transcode_hash = None;
        self.our_duration = Some(include_bytes!("../../blank.mkv").len() as u64);

        match steam_compat_shader_path() {
            None => gst::log!(CAT, "env STEAM_COMPAT_SHADER_PATH not set"),
            Some(mut path) => {
                path.push("placeholder-video-used");
                if let Err(e) = touch_file(path) { gst::log!(CAT, "Failed to touch placeholder-video-used file: {:?}", e) }
            },
        };

        false
    }

    fn fill_buffer(&mut self, offs: usize, out: &mut [u8]) -> Result<usize, gst::LoggableError> {
        match self.transcode_hash {
            Some(hash) => {
                let read_fozdb = self.read_fozdb.as_mut().unwrap();
                read_fozdb.read_entry(self.transcoded_tag, hash, offs as u64, out, fossilize::CRCCheck::WithoutCRC)
                    .map_err(|e| loggable_error!(CAT, "Error reading ogvdata: {:?}", e))
            },

            None => {
                let blank = include_bytes!("../../blank.mkv");

                let to_copy = std::cmp::min(blank.len() - offs, out.len());

                out[..to_copy].copy_from_slice(&blank[offs..(offs + to_copy)]);

                Ok(to_copy)
            },
        }
    }
}

pub struct VideoConv {
    state: Mutex<Option<VideoConvState>>,
    sinkpad: gst::Pad,
    srcpad: gst::Pad,
}

#[glib::object_subclass]
impl ObjectSubclass for VideoConv {
    const NAME: &'static str = "ProtonVideoConverter";
    type Type = super::VideoConv;
    type ParentType = gst::Element;

    fn with_class(klass: &Self::Class) -> Self {
        let templ = klass.pad_template("sink").unwrap();
        let sinkpad = gst::Pad::builder_with_template(&templ, Some("sink"))
            .event_function(|pad, parent, event| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |videoconv| videoconv.sink_event(pad, event)
                )
            }).build();

        let templ = klass.pad_template("src").unwrap();
        let srcpad = gst::Pad::builder_with_template(&templ, Some("src"))
            .getrange_function(|pad, parent, offset, in_buf, size| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || Err(gst::FlowError::Error),
                    |videoconv| videoconv.range(pad, offset, in_buf, size)
                )
            })
            .query_function(|pad, parent, query| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |videoconv| videoconv.src_query(pad, query)
                )
            })
            .activatemode_function(|pad, parent, mode, active| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || Err(loggable_error!(CAT, "Panic activating srcpad with mode")),
                    |videoconv| videoconv.src_activatemode(pad, mode, active)
                )
            }).build();

        VideoConv {
            state: Mutex::new(None),
            sinkpad,
            srcpad,
        }
    }
}

impl ObjectImpl for VideoConv {
    fn constructed(&self) {
        self.parent_constructed();

        let obj = self.obj();

        obj.add_pad(&self.sinkpad).unwrap();
        obj.add_pad(&self.srcpad).unwrap();
    }
}

impl GstObjectImpl for VideoConv { }

impl ElementImpl for VideoConv {
    fn metadata() -> Option<&'static gst::subclass::ElementMetadata> {
        static ELEMENT_METADATA: Lazy<gst::subclass::ElementMetadata> = Lazy::new(|| {
            gst::subclass::ElementMetadata::new(
                "Proton video converter",
                "Codec/Demuxer",
                "Converts video for Proton",
                "Andrew Eikum <aeikum@codeweavers.com>"
            )
        });

        Some(&*ELEMENT_METADATA)
    }

    fn pad_templates() -> &'static [gst::PadTemplate] {
        static PAD_TEMPLATES: Lazy<Vec<gst::PadTemplate>> = Lazy::new(|| {
            let mut caps = gst::Caps::new_empty();
            {
                let caps = caps.get_mut().unwrap();
                caps.append(gst::Caps::builder("video/x-ms-asf").build());
                caps.append(gst::Caps::builder("video/x-msvideo").build());
                caps.append(gst::Caps::builder("video/mpeg").build());
                caps.append(gst::Caps::builder("video/quicktime").build());
            }
            let sink_pad_template = gst::PadTemplate::new(
                "sink",
                gst::PadDirection::Sink,
                gst::PadPresence::Always,
                &caps).unwrap();

            let mut caps = gst::Caps::new_empty();
            {
                let caps = caps.get_mut().unwrap();
                caps.append(gst::Caps::builder("video/x-matroska").build());
                caps.append(gst::Caps::builder("application/ogg").build());
            }
            let src_pad_template = gst::PadTemplate::new(
                "src",
                gst::PadDirection::Src,
                gst::PadPresence::Always,
                &caps).unwrap();

            vec![src_pad_template, sink_pad_template]
        });

        PAD_TEMPLATES.as_ref()
    }

    fn change_state(
        &self,
        transition: gst::StateChange
    ) -> Result<gst::StateChangeSuccess, gst::StateChangeError> {

        gst::log!(CAT, imp: self, "State transition: {:?}", transition);

        match transition {
            gst::StateChange::NullToReady => {
                /* do runtime setup */

                let new_state = VideoConvState::new();

                let mut state = self.state.lock().unwrap();
                assert!((*state).is_none());
                *state = Some(new_state);
            },

            gst::StateChange::ReadyToNull => {
                /* do runtime teardown */

                let _ = self.state.lock().unwrap().take(); // dispose of state
            },

            _ => (),
        };

        self.parent_change_state(transition)

        /* XXX on ReadyToNull, sodium drops state _again_ here... why? */
    }
}

struct StreamSerializer<'a> {
    stream: &'a [u128],
    cur_idx: usize,
}

impl<'a> StreamSerializer<'a> {
    fn new(stream: &'a [u128]) -> Self {
        StreamSerializer {
            stream,
            cur_idx: 0,
        }
    }
}

impl <'a> Read for StreamSerializer<'a> {
    fn read(&mut self, out: &mut [u8]) -> io::Result<usize> {
        if self.cur_idx >= self.stream.len() {
            return Ok(0)
        }

        out[0..std::mem::size_of::<u128>()].copy_from_slice(&self.stream[self.cur_idx].to_le_bytes());
        self.cur_idx += 1;

        Ok(std::mem::size_of::<u128>())
    }
}

impl VideoConv {
    fn get_upstream_range(&self, offset: u64, requested_size: u32) -> Result<(u64, u32), gst::FlowError> {
        let mut state = self.state.lock().unwrap();
        let state = match &mut *state {
            Some(s) => s,
            None => { return Err(gst::FlowError::Error); }
        };

        if state.upstream_duration.is_none() {
            self.query_upstream_duration(state);
        }

        let ups_offset = self.duration_ours_to_upstream(state, offset).unwrap();
        let ups_requested_size = self.duration_ours_to_upstream(state, requested_size as u64).unwrap() as u32;

        Ok((ups_offset, ups_requested_size))
    }

    fn range(
        &self,
        _pad: &gst::Pad,
        offset: u64,
        in_buf: Option<&mut gst::BufferRef>,
        requested_size: u32,
    ) -> Result<gst::PadGetRangeSuccess, gst::FlowError> {
        let (ups_offset, ups_requested_size) = self.get_upstream_range(offset, requested_size)?;

        let mut state = self.state.lock().unwrap();
        let state = match &mut *state {
            Some(s) => s,
            None => { return Err(gst::FlowError::Error); }
        };

        /* read and ignore upstream bytes */
        self.sinkpad.pull_range(ups_offset, ups_requested_size)?;

        match in_buf {
            Some(buf) => {
                let readed;

                {
                    let mut map = buf.map_writable().unwrap();
                    readed = state.fill_buffer(offset as usize, map.as_mut())
                        .map_err(|e| { e.log(); gst::FlowError::Error })?;
                }

                if readed > 0 || buf.size() == 0 {
                    buf.set_size(readed);
                    return Ok(gst::PadGetRangeSuccess::FilledBuffer);
                }

                Err(gst::FlowError::Eos)
            },

            None => {
                /* XXX: can we use a buffer cache here? */
                let b = gst::Buffer::with_size(requested_size as usize)
                    .map_err(|_| gst::FlowError::Error)?;

                let mut map = b.into_mapped_buffer_writable().unwrap();

                let readed = state.fill_buffer(offset as usize, map.as_mut())
                    .map_err(|e| { e.log(); gst::FlowError::Error })?;

                let mut b = map.into_buffer();

                if readed > 0 || b.size() == 0 {
                    b.get_mut().unwrap().set_size(readed);
                    return Ok(gst::PadGetRangeSuccess::NewBuffer(b));
                }

                Err(gst::FlowError::Eos)
            }
        }
    }

    fn sink_event(
        &self,
        pad: &gst::Pad,
        event: gst::Event
    ) -> bool {
        gst::log!(CAT, obj:pad, "Got an event {:?}", event);
        match event.view() {
            EventView::Caps(_) => {

                /* push_event, below, can also grab state and cause a deadlock, so make sure it's
                 * released before calling */
                let caps = {
                    let mut state = self.state.lock().unwrap();

                    let state = match &mut *state {
                        Some(s) => s,
                        None => { gst::error!(CAT, "VideoConv not yet in READY state?"); return false; },
                    };

                    if self.sinkpad.activate_mode(gst::PadMode::Pull, true).is_err() {
                        gst::error!(CAT, "Failed to activate sinkpad in pull mode");
                        return false;
                    }

                    self.init_transcode(state);

                    match state.transcoded_tag {
                        VIDEOCONV_FOZ_TAG_MKVDATA => gst::Caps::builder("video/x-matroska").build(),
                        VIDEOCONV_FOZ_TAG_OGVDATA => gst::Caps::builder("application/ogg").build(),
                        _ => { return false; },
                    }
                };

                self.srcpad.push_event(gst::event::Caps::new(&caps))
            }
            _ => gst::Pad::event_default(pad, Some(&*self.obj()), event)
        }
    }

    fn query_upstream_duration(&self, state: &mut VideoConvState) {
        let mut query = gst::query::Duration::new(gst::Format::Bytes);

        if self.sinkpad.peer_query(&mut query) {
            state.upstream_duration = match query.result() {
                gst::GenericFormattedValue::Bytes(Some(size)) => Some(*size),
                _ => None,
            }
        }else{
            gst::warning!(CAT, "upstream duration query failure");
        }
    }

    fn duration_ours_to_upstream(&self, state: &VideoConvState, pos: u64) -> Option<u64> {
        if let Some(our) = state.our_duration {
            if let Some(upstream) = state.upstream_duration {
                return Some(pos * upstream / our);
            }
        }
        None
    }

    fn src_query(
        &self,
        pad: &gst::Pad,
        query: &mut gst::QueryRef) -> bool
    {
        gst::log!(CAT, obj: pad, "got query: {:?}", query);
        match query.view_mut() {
            QueryViewMut::Scheduling(q) => {
                let mut peer_query = gst::query::Scheduling::new();
                let res = self.sinkpad.peer_query(&mut peer_query);
                if ! res {
                    return res;
                }

                let (flags, min, max, align) = peer_query.result();

                q.set(flags, min, max, align);
                q.add_scheduling_modes(&[gst::PadMode::Pull]);
                true
            },
            QueryViewMut::Duration(ref mut q) => {
                if q.format() != gst::Format::Bytes { return false };

                let mut state = self.state.lock().unwrap();

                let state = match &mut *state {
                    Some(s) => s,
                    None => { return false; }
                };

                if state.upstream_duration.is_none() {
                    self.query_upstream_duration(state);
                }

                if let Some(sz) = state.our_duration {
                    q.set(gst::format::Bytes::from_u64(sz));
                    return true
                }

                false
            }
            _ => gst::Pad::query_default(pad, Some(&*self.obj()), query)
        }
    }

    fn hash_upstream_data(&self) -> io::Result<u128> {
        murmur3_128(&mut PadReader::new_with_stride(&self.sinkpad, HASH_STRIDE), HASH_SEED)
    }

    fn dump_upstream_data(&self, hash: u128) -> io::Result<()> {

        let db = &mut (*DUMP_FOZDB).lock().unwrap();
        let mut db = &mut db.open(true).fozdb;
        let db = match &mut db {
            Some(d) => d,
            None => { gst::error!(CAT, "Unable to open fozdb!"); return Err(io::Error::new(io::ErrorKind::Other, "unable to open fozdb")); },
        };

        let mut chunks = Vec::<u128>::new();

        let mut reader = PadReader::new(&self.sinkpad);

        let mut buf = box_array![0u8; HASH_CHUNK_SIZE];
        loop {
            let readed = reader.read(&mut *buf)?;
            if readed == 0 {
                break;
            }

            let chunk_hash = murmur3_128(&mut BufferedReader::new(&*buf, readed), HASH_SEED)?;
            chunks.push(chunk_hash);

            db.write_entry(VIDEOCONV_FOZ_TAG_VIDEODATA, chunk_hash, &mut BufferedReader::new(&*buf, readed), fossilize::CRCCheck::WithCRC)
                .map_err(|e| { gst::warning!(CAT, "Error writing video data to fozdb: {:?}", e); io::Error::new(io::ErrorKind::Other, "error writing video data to fozdb") } )?;
        }

        db.write_entry(VIDEOCONV_FOZ_TAG_STREAM, hash, &mut StreamSerializer::new(&chunks), fossilize::CRCCheck::WithCRC)
            .map_err(|e| { gst::warning!(CAT, "Error writing stream data to fozdb: {:?}", e); io::Error::new(io::ErrorKind::Other, "error writing stream data to fozdb") } )?;

        Ok(())
    }

    fn init_transcode(&self, state: &mut VideoConvState) {

        if state.transcode_hash.is_none() {
            (*DUMP_FOZDB).lock().unwrap().discard_transcoded();

            let hash = self.hash_upstream_data();

            if let Ok(hash) = hash {
                if !state.begin_transcode(hash) {
                    match self.dump_upstream_data(hash) {
                        Ok(_) => { },
                        Err(e) => { gst::error!(CAT, "{}", e.to_string())}
                    }
                }
            }
        }
    }

    fn src_activatemode(
        &self,
        _pad: &gst::Pad,
        mode: gst::PadMode,
        active: bool
    ) -> Result<(), gst::LoggableError> {
        self.sinkpad
            .activate_mode(mode, active)?;

        if mode == gst::PadMode::Pull {
            let need_stream_start;
            let hash;

            /* push_event, below, can also grab state and cause a deadlock, so make sure it's
             * released before calling */
            match &mut *self.state.lock().unwrap() {
                Some(state) => {
                    self.init_transcode(state);
                    need_stream_start = state.need_stream_start;
                    hash = state.transcode_hash;
                },
                None => { return Err(loggable_error!(CAT, "VideoConv not yet in READY state?")); }
            };

            if need_stream_start && active && hash.is_some() {
                let stream_id = format!("{:032x}", hash.unwrap());
                self.srcpad.push_event(gst::event::StreamStart::new(&stream_id));

                match &mut *self.state.lock().unwrap() {
                    Some(state) => { state.need_stream_start = false },
                    None => { return Err(loggable_error!(CAT, "VideoConv not yet in READY state?")); }
                };
            }
        }

        Ok(())
    }
}
