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
use crate::box_array;
use crate::BufferedReader;

use gst;
use gst::prelude::*;
use gst::subclass::prelude::*;
use gst::EventView;
use gst::QueryView;

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
const VIDEOCONV_FOZ_NUM_TAGS: usize = 3;

static DUMP_FOZDB: Lazy<Mutex<Option<fossilize::StreamArchive>>> = Lazy::new(|| {
    let dump_file_path = match std::env::var("MEDIACONV_VIDEO_DUMP_FILE") {
        Err(_) => { return Mutex::new(None); },
        Ok(c) => c,
    };

    let dump_file_path = std::path::Path::new(&dump_file_path);

    if fs::create_dir_all(&dump_file_path.parent().unwrap()).is_err() {
        return Mutex::new(None);
    }

    match fossilize::StreamArchive::new(&dump_file_path, OpenOptions::new().write(true).read(true).create(true), VIDEOCONV_FOZ_NUM_TAGS) {
        Ok(newdb) => Mutex::new(Some(newdb)),
        Err(_) => Mutex::new(None),
    }
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

                    if self.offs + buf.get_size() < self.stride {
                        to_copy = buf.get_size();
                        self.offs += to_copy;
                    }else if self.offs < self.stride {
                        to_copy = self.stride - self.offs;
                        self.offs = self.stride;
                    }else{
                        to_copy = buf.get_size();
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
}

impl VideoConvState {
    fn new() -> Result<VideoConvState, gst::LoggableError> {

        let read_fozdb_path = std::env::var("MEDIACONV_VIDEO_TRANSCODED_FILE").map_err(|_| {
            gst_loggable_error!(CAT, "MEDIACONV_VIDEO_TRANSCODED_FILE is not set!")
        })?;

        let read_fozdb = match fossilize::StreamArchive::new(&read_fozdb_path, OpenOptions::new().read(true), VIDEOCONV_FOZ_NUM_TAGS) {
            Ok(s) => Some(s),
            Err(_) => None,
        };

        Ok(VideoConvState {
            transcode_hash: None,

            read_fozdb,

            upstream_duration: None,
            our_duration: None,
        })
    }

    /* true if the file is transcoded; false if not */
    fn begin_transcode(&mut self, hash: u128) -> bool {
        if let Some(read_fozdb) = &mut self.read_fozdb {
            if let Ok(transcoded_size) = read_fozdb.entry_size(VIDEOCONV_FOZ_TAG_OGVDATA, hash) {
                self.transcode_hash = Some(hash);
                self.our_duration = Some(transcoded_size as u64);
                return true;
            }
        }

        gst_log!(CAT, "No transcoded video for {}. Substituting a blank video.", format_hash(hash));

        self.transcode_hash = None;
        self.our_duration = Some(include_bytes!("../blank.ogv").len() as u64);

        false
    }

    fn fill_buffer(&mut self, offs: usize, out: &mut [u8]) -> Result<usize, gst::LoggableError> {
        match self.transcode_hash {
            Some(hash) => {
                let read_fozdb = self.read_fozdb.as_mut().unwrap();
                read_fozdb.read_entry(VIDEOCONV_FOZ_TAG_OGVDATA, hash, offs as u64, out, fossilize::CRCCheck::WithoutCRC)
                    .map_err(|e| gst_loggable_error!(CAT, "Error reading ogvdata: {:?}", e))
            },

            None => {
                let blank = include_bytes!("../blank.ogv");

                let remaining = blank.len() - offs;

                if out.len() <= remaining {
                    out.copy_from_slice(&blank[offs..(offs + out.len())]);
                    Ok(out.len())
                }else{
                    (0..remaining).for_each(|i| out[i] = blank[offs + i]);
                    Ok(remaining)
                }
            },
        }
    }
}

struct VideoConv {
    state: Mutex<Option<VideoConvState>>,
    sinkpad: gst::Pad,
    srcpad: gst::Pad,
}

impl ObjectSubclass for VideoConv {
    const NAME: &'static str = "ProtonVideoConverter";
    type ParentType = gst::Element;
    type Instance = gst::subclass::ElementInstanceStruct<Self>;
    type Class = subclass::simple::ClassStruct<Self>;

    glib_object_subclass!();

    fn with_class(klass: &subclass::simple::ClassStruct<Self>) -> Self {
        let templ = klass.get_pad_template("sink").unwrap();
        let sinkpad = gst::Pad::builder_with_template(&templ, Some("sink"))
            .event_function(|pad, parent, event| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |videoconv, element| videoconv.sink_event(pad, element, event)
                )
            }).build();

        let templ = klass.get_pad_template("src").unwrap();
        let srcpad = gst::Pad::builder_with_template(&templ, Some("src"))
            .getrange_function(|pad, parent, offset, in_buf, size| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || Err(gst::FlowError::Error),
                    |videoconv, element| videoconv.get_range(pad, element, offset, in_buf, size)
                )
            })
            .query_function(|pad, parent, query| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || false,
                    |videoconv, element| videoconv.src_query(pad, element, query)
                )
            })
            .activatemode_function(|pad, parent, mode, active| {
                VideoConv::catch_panic_pad_function(
                    parent,
                    || Err(gst_loggable_error!(CAT, "Panic activating srcpad with mode")),
                    |videoconv, element| videoconv.src_activatemode(pad, element, mode, active)
                )
            }).build();

        VideoConv {
            state: Mutex::new(None),
            sinkpad,
            srcpad,
        }
    }

    fn class_init(klass: &mut subclass::simple::ClassStruct<Self>) {

        klass.set_metadata(
            "Proton video converter",
            "Codec/Parser",
            "Converts video for Proton",
            "Andrew Eikum <aeikum@codeweavers.com>");

        let mut caps = gst::Caps::new_empty();
        {
            let caps = caps.get_mut().unwrap();
            caps.append(gst::Caps::builder("video/x-ms-asf").build());
            caps.append(gst::Caps::builder("video/x-msvideo").build());
            caps.append(gst::Caps::builder("video/mpeg").build());
        }
        let sink_pad_template = gst::PadTemplate::new(
            "sink",
            gst::PadDirection::Sink,
            gst::PadPresence::Always,
            &caps).unwrap();
        klass.add_pad_template(sink_pad_template);

        let caps = gst::Caps::builder("application/ogg").build();
        let src_pad_template = gst::PadTemplate::new(
            "src",
            gst::PadDirection::Src,
            gst::PadPresence::Always,
            &caps).unwrap();
        klass.add_pad_template(src_pad_template);
    }
}

impl ObjectImpl for VideoConv {
    glib_object_impl!();

    fn constructed(&self, obj: &glib::Object) {
        self.parent_constructed(obj);

        let element = obj.downcast_ref::<gst::Element>().unwrap();
        element.add_pad(&self.sinkpad).unwrap();
        element.add_pad(&self.srcpad).unwrap();
    }
}

impl ElementImpl for VideoConv {
    fn change_state(
        &self,
        element: &gst::Element,
        transition: gst::StateChange
    ) -> Result<gst::StateChangeSuccess, gst::StateChangeError> {

        gst_log!(CAT, obj: element, "State transition: {:?}", transition);

        match transition {
            gst::StateChange::NullToReady => {
                /* do runtime setup */

                let new_state = VideoConvState::new().map_err(|err| {
                    err.log();
                    return gst::StateChangeError;
                })?;

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

        self.parent_change_state(element, transition)

        /* XXX on ReadyToNull, sodium drops state _again_ here... why? */
    }
}

struct StreamSerializer<'a> {
    stream: &'a Vec<u128>,
    cur_idx: usize,
}

impl<'a> StreamSerializer<'a> {
    fn new(stream: &'a Vec<u128>) -> Self {
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
    fn get_range(
        &self,
        _pad: &gst::Pad,
        _element: &gst::Element,
        offset: u64,
        in_buf: Option<&mut gst::BufferRef>,
        requested_size: u32,
    ) -> Result<gst::PadGetRangeSuccess, gst::FlowError> {

        let mut state = self.state.lock().unwrap();

        let state = match &mut *state {
            Some(s) => s,
            None => { return Err(gst::FlowError::Error); }
        };

        let ups_offset = self.duration_ours_to_upstream(&state, offset).unwrap();
        let ups_requested_size = self.duration_ours_to_upstream(&state, requested_size as u64).unwrap() as u32;

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

                if readed > 0 || buf.get_size() == 0 {
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

                if readed > 0 || b.get_size() == 0 {
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
        element: &gst::Element,
        event: gst::Event
    ) -> bool {
        gst_log!(CAT, obj:pad, "Got an event {:?}", event);
        match event.view() {
            EventView::Caps(_) => {
                let caps = gst::Caps::builder("application/ogg").build();
                self.srcpad.push_event(gst::event::Caps::new(&caps))
            }
            _ => pad.event_default(Some(element), event)
        }
    }

    fn query_upstream_duration(&self, state: &mut VideoConvState) {
        let mut query = gst::query::Duration::new(gst::Format::Bytes);

        if self.sinkpad.peer_query(&mut query) {
            /* XXX: what? */
            let res = query.get_result();
            drop(res);
            state.upstream_duration = match query.get_result() {
                gst::format::GenericFormattedValue::Bytes(b) =>
                    *b,
                _ => None,
            }
        }else{
            gst_warning!(CAT, "upstream duration query failure");
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
                q.add_scheduling_modes(&[gst::PadMode::Pull]);
                true
            },
            QueryView::Duration(ref mut q) => {

                let mut state = self.state.lock().unwrap();

                let mut state = match &mut *state {
                    Some(s) => s,
                    None => { return false; }
                };

                if let None = state.upstream_duration {
                    self.query_upstream_duration(&mut state);
                }

                if let Some(sz) = state.our_duration {
                    if q.get_format() == gst::Format::Bytes {
                        q.set(gst::format::Bytes::from(sz));
                        return true
                    }
                }

                false
            }
            _ => pad.query_default(Some(element), query)
        }
    }

    fn hash_upstream_data(&self) -> io::Result<u128> {
        murmur3_128(&mut PadReader::new_with_stride(&self.sinkpad, HASH_STRIDE), HASH_SEED)
    }

    fn dump_upstream_data(&self, hash: u128) -> io::Result<()> {
        let mut db = (*DUMP_FOZDB).lock().unwrap();
        let db = match &mut *db {
            Some(d) => d,
            None => { gst_error!(CAT, "Unable to open fozdb!"); return Err(io::Error::new(io::ErrorKind::Other, "unable to open fozdb")); },
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
                .map_err(|e| { gst_warning!(CAT, "Error writing video data to fozdb: {:?}", e); io::Error::new(io::ErrorKind::Other, "error writing video data to fozdb") } )?;
        }

        db.write_entry(VIDEOCONV_FOZ_TAG_STREAM, hash, &mut StreamSerializer::new(&chunks), fossilize::CRCCheck::WithCRC)
            .map_err(|e| { gst_warning!(CAT, "Error writing stream data to fozdb: {:?}", e); io::Error::new(io::ErrorKind::Other, "error writing stream data to fozdb") } )?;

        Ok(())
    }

    fn init_transcode(
        &self,
        state: &mut VideoConvState
    ) -> Result<(), gst::LoggableError> {

        let hash = self.hash_upstream_data();

        if let Ok(hash) = hash {
            if !state.begin_transcode(hash) {
                self.dump_upstream_data(hash).map_err(|_| gst_loggable_error!(CAT, "Dumping file to disk failed"))?;
            }
        }

        Ok(())
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

        if mode == gst::PadMode::Pull {
            let mut state = self.state.lock().unwrap();

            let mut state = match &mut *state {
                Some(s) => s,
                None => { return Err(gst_loggable_error!(CAT, "VideoConv not yet in READY state?")); }
            };

            /* once we're initted in pull mode, we can start transcoding */
            self.init_transcode(&mut state)?;
        }

        Ok(())
    }

}

pub fn register(plugin: &gst::Plugin) -> Result<(), glib::BoolError> {
    gst::Element::register(
        Some(plugin),
        "protonvideoconverter",
        gst::Rank::Marginal,
        VideoConv::get_type())
}
