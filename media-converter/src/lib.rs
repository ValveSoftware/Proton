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

#[macro_use]
extern crate gstreamer as gst;
extern crate gstreamer_base as gst_base;
extern crate gstreamer_video as gst_video;
extern crate gstreamer_audio as gst_audio;
extern crate once_cell;

use std::fs::File;
use std::io;
use std::io::Read;
use std::path::Path;
use std::path::PathBuf;

use filetime::FileTime;
use filetime::set_file_handle_times;

#[cfg(target_arch = "x86")]
mod murmur3_x86_128;
#[cfg(target_arch = "x86_64")]
mod murmur3_x64_128;

mod videoconv;
mod audioconv;
mod audioconvbin;
mod fossilize;

// copy_into_array:
//
// Copyright (c) 2020 Stu Small
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
//     The above copyright notice and this permission notice shall be included in all copies or
//     substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
fn copy_into_array<A, T>(slice: &[T]) -> A
where
    A: Default + AsMut<[T]>,
    T: Copy,
{
    let mut a = A::default();
    <A as AsMut<[T]>>::as_mut(&mut a).copy_from_slice(slice);
    a
}

fn touch_file<P>(p: P) -> io::Result<()>
where
    P: AsRef<Path> + std::fmt::Debug
{
    let f = File::create(p)?;
    let now = FileTime::now();
    set_file_handle_times(&f, Some(now), Some(now))?;
    Ok(())
}

fn steam_compat_shader_path() -> Option<PathBuf>
{
    match std::env::var("STEAM_COMPAT_SHADER_PATH") {
        Err(_) => None,
        Ok(c) => Some(Path::new(&c).to_path_buf()),
    }
}

/* rust has a hard time with large heap allocations. below macro works around that.
 *
 * by @simias from https://github.com/rust-lang/rust/issues/53827 */
#[macro_export]
macro_rules! box_array {
    ($val:expr ; $len:expr) => {{
        // Use a generic function so that the pointer cast remains type-safe
        fn vec_to_boxed_array<T>(vec: Vec<T>) -> Box<[T; $len]> {
            let boxed_slice = vec.into_boxed_slice();

            let ptr = ::std::boxed::Box::into_raw(boxed_slice) as *mut [T; $len];

            unsafe { Box::from_raw(ptr) }
        }

        vec_to_boxed_array(vec![$val; $len])
    }};
}

/* you MUST use this to consistently format the hash bytes into a string */
fn format_hash(hash: u128) -> String {
    format!("{:032x}", hash)
}

/* changing this will invalidate the cache. you MUST clear it. */
const HASH_SEED: u32 = 0x4AA61F63;

pub struct BufferedReader<'a> {
    dat: &'a [u8],
    len: usize,
    ofs: usize,
}

impl<'a> BufferedReader<'a> {
    fn new(dat: &'a [u8], len: usize) -> Self {
        BufferedReader {
            dat,
            len,
            ofs: 0,
        }
    }
}

impl<'a> Read for BufferedReader<'a> {
    fn read(&mut self, out: &mut [u8]) -> io::Result<usize> {
        let to_copy = std::cmp::min(self.len - self.ofs, out.len());

        if to_copy == 0 {
            return Ok(0);
        }

        if to_copy == out.len() {
            out.copy_from_slice(&self.dat[self.ofs..(self.ofs + to_copy)]);
        }else{
            out[0..to_copy].copy_from_slice(&self.dat[self.ofs..(self.ofs + to_copy)]);
        }

        self.ofs += to_copy;

        Ok(to_copy)
    }
}

fn discarding_disabled() -> bool {
    let v = match std::env::var("MEDIACONV_DONT_DISCARD") {
        Err(_) => { return false; },
        Ok(c) => c,
    };
    v != "0"
}

fn plugin_init(plugin: &gst::Plugin) -> Result<(), glib::BoolError> {
    videoconv::register(plugin)?;
    audioconvbin::register(plugin)?;
    audioconv::register(plugin)?;
    Ok(())
}

plugin_define!(
    protonmediaconverter,
    env!("CARGO_PKG_DESCRIPTION"),
    plugin_init,
    concat!(env!("CARGO_PKG_VERSION"), "-", env!("COMMIT_ID")),
    "MIT/X11",
    env!("CARGO_PKG_NAME"),
    env!("CARGO_PKG_NAME"),
    env!("CARGO_PKG_REPOSITORY"),
    env!("BUILD_REL_DATE")
);
