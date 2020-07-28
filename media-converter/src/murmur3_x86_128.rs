// Copyright (c) 2020 Stu Small
//
// Modified to return its internal state for continuous hashing:
// Copyright (c) 2020 Andrew Eikum <aeikum@codeweavers.com> for CodeWeavers
//
// Licensed under the Apache License, Version 2.0
// <LICENSE-APACHE or http://www.apache.org/licenses/LICENSE-2.0> or the MIT
// license <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. All files in the project carrying such notice may not be copied,
// modified, or distributed except according to those terms.

use std::io::{Read, Result};
use std::ops::Shl;

use crate::copy_into_array;

#[allow(non_camel_case_types)]
pub struct murmur3_x86_128_state {
    seed: u32,
    h1: u32,
    h2: u32,
    h3: u32,
    h4: u32,
    processed: usize,
}

impl murmur3_x86_128_state {
    pub fn new(seed: u32) -> Self {
        murmur3_x86_128_state {
            seed,
            h1: seed,
            h2: seed,
            h3: seed,
            h4: seed,
            processed: 0,
        }
    }

    #[allow(dead_code)]
    pub fn reset(&mut self) {
        self.h1 = self.seed;
        self.h2 = self.seed;
        self.h3 = self.seed;
        self.h4 = self.seed;
        self.processed = 0;
    }
}

/// Use the x86 variant of the 128 bit murmur3 to hash some [Read] implementation.
///
/// # Example
/// ```
/// use std::io::Cursor;
/// use murmur3::murmur3_x86_128;
/// let hash_result = murmur3_x86_128(&mut Cursor::new("hello world"), 0);
/// ```
pub fn murmur3_x86_128<T: Read>(source: &mut T, seed: u32) -> Result<u128> {
    let mut state = murmur3_x86_128_state::new(seed);
    murmur3_x86_128_full(source, &mut state)
}

pub fn murmur3_x86_128_full<T: Read>(source: &mut T, state: &mut murmur3_x86_128_state) -> Result<u128> {
    const C1: u32 = 0x239b_961b;
    const C2: u32 = 0xab0e_9789;
    const C3: u32 = 0x38b3_4ae5;
    const C4: u32 = 0xa1e3_8b93;
    const C5: u32 = 0x561c_cd1b;
    const C6: u32 = 0x0bca_a747;
    const C7: u32 = 0x96cd_1c35;
    const C8: u32 = 0x32ac_3b17;
    const M: u32 = 5;

    let mut h1: u32 = state.h1;
    let mut h2: u32 = state.h2;
    let mut h3: u32 = state.h3;
    let mut h4: u32 = state.h4;

    let mut buf = [0; 16];
    let mut processed: usize = state.processed;
    loop {
        let read = source.read(&mut buf[..])?;
        processed += read;
        if read == 16 {
            let k1 = u32::from_le_bytes(copy_into_array(&buf[0..4]));
            let k2 = u32::from_le_bytes(copy_into_array(&buf[4..8]));
            let k3 = u32::from_le_bytes(copy_into_array(&buf[8..12]));
            let k4 = u32::from_le_bytes(copy_into_array(&buf[12..16]));
            h1 ^= k1.wrapping_mul(C1).rotate_left(15).wrapping_mul(C2);
            h1 = h1
                .rotate_left(19)
                .wrapping_add(h2)
                .wrapping_mul(M)
                .wrapping_add(C5);
            h2 ^= k2.wrapping_mul(C2).rotate_left(16).wrapping_mul(C3);
            h2 = h2
                .rotate_left(17)
                .wrapping_add(h3)
                .wrapping_mul(M)
                .wrapping_add(C6);
            h3 ^= k3.wrapping_mul(C3).rotate_left(17).wrapping_mul(C4);
            h3 = h3
                .rotate_left(15)
                .wrapping_add(h4)
                .wrapping_mul(M)
                .wrapping_add(C7);
            h4 ^= k4.wrapping_mul(C4).rotate_left(18).wrapping_mul(C1);
            h4 = h4
                .rotate_left(13)
                .wrapping_add(h1)
                .wrapping_mul(M)
                .wrapping_add(C8);
        } else if read == 0 {
            state.h1 = h1;
            state.h2 = h2;
            state.h3 = h3;
            state.h4 = h4;
            state.processed = processed;
            h1 ^= processed as u32;
            h2 ^= processed as u32;
            h3 ^= processed as u32;
            h4 ^= processed as u32;
            h1 = h1.wrapping_add(h2);
            h1 = h1.wrapping_add(h3);
            h1 = h1.wrapping_add(h4);
            h2 = h2.wrapping_add(h1);
            h3 = h3.wrapping_add(h1);
            h4 = h4.wrapping_add(h1);
            h1 = fmix32(h1);
            h2 = fmix32(h2);
            h3 = fmix32(h3);
            h4 = fmix32(h4);
            h1 = h1.wrapping_add(h2);
            h1 = h1.wrapping_add(h3);
            h1 = h1.wrapping_add(h4);
            h2 = h2.wrapping_add(h1);
            h3 = h3.wrapping_add(h1);
            h4 = h4.wrapping_add(h1);
            let x = ((h4 as u128) << 96) | ((h3 as u128) << 64) | ((h2 as u128) << 32) | h1 as u128;
            return Ok(x);
        } else {
            let mut k1 = 0;
            let mut k2 = 0;
            let mut k3 = 0;
            let mut k4 = 0;
            if read >= 15 {
                k4 ^= (buf[14] as u32).shl(16);
            }
            if read >= 14 {
                k4 ^= (buf[13] as u32).shl(8);
            }
            if read >= 13 {
                k4 ^= buf[12] as u32;
                k4 = k4.wrapping_mul(C4).rotate_left(18).wrapping_mul(C1);
                h4 ^= k4;
            }
            if read >= 12 {
                k3 ^= (buf[11] as u32).shl(24);
            }
            if read >= 11 {
                k3 ^= (buf[10] as u32).shl(16);
            }
            if read >= 10 {
                k3 ^= (buf[9] as u32).shl(8);
            }
            if read >= 9 {
                k3 ^= buf[8] as u32;
                k3 = k3.wrapping_mul(C3).rotate_left(17).wrapping_mul(C4);
                h3 ^= k3;
            }
            if read >= 8 {
                k2 ^= (buf[7] as u32).shl(24);
            }
            if read >= 7 {
                k2 ^= (buf[6] as u32).shl(16);
            }
            if read >= 6 {
                k2 ^= (buf[5] as u32).shl(8);
            }
            if read >= 5 {
                k2 ^= buf[4] as u32;
                k2 = k2.wrapping_mul(C2).rotate_left(16).wrapping_mul(C3);
                h2 ^= k2;
            }
            if read >= 4 {
                k1 ^= (buf[3] as u32).shl(24);
            }
            if read >= 3 {
                k1 ^= (buf[2] as u32).shl(16);
            }
            if read >= 2 {
                k1 ^= (buf[1] as u32).shl(8);
            }
            if read >= 1 {
                k1 ^= buf[0] as u32;
            }
            k1 = k1.wrapping_mul(C1);
            k1 = k1.rotate_left(15);
            k1 = k1.wrapping_mul(C2);
            h1 ^= k1;
        }
    }
}

fn fmix32(k: u32) -> u32 {
    const C1: u32 = 0x85eb_ca6b;
    const C2: u32 = 0xc2b2_ae35;
    const R1: u32 = 16;
    const R2: u32 = 13;
    let mut tmp = k;
    tmp ^= tmp >> R1;
    tmp = tmp.wrapping_mul(C1);
    tmp ^= tmp >> R2;
    tmp = tmp.wrapping_mul(C2);
    tmp ^= tmp >> R1;
    tmp
}
