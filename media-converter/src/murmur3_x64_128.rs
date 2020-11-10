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
pub struct murmur3_x64_128_state {
    seed: u32,
    h1: u64,
    h2: u64,
    processed: usize,
}

impl murmur3_x64_128_state {
    pub fn new(seed: u32) -> Self {
        murmur3_x64_128_state {
            seed,
            h1: seed as u64,
            h2: seed as u64,
            processed: 0,
        }
    }

    #[allow(dead_code)]
    pub fn reset(&mut self) {
        self.h1 = self.seed as u64;
        self.h2 = self.seed as u64;
        self.processed = 0;
    }
}

/// Use the x64 variant of the 128 bit murmur3 to hash some [Read] implementation.
///
/// # Example
/// ```
/// use std::io::Cursor;
/// use murmur3::murmur3_x64_128;
/// let hash_result = murmur3_x64_128(&mut Cursor::new("hello world"), 0);
/// ```
pub fn murmur3_x64_128<T: Read>(source: &mut T, seed: u32) -> Result<u128> {
    let mut state = murmur3_x64_128_state::new(seed);
    murmur3_x64_128_full(source, &mut state)
}

pub fn murmur3_x64_128_full<T: Read>(source: &mut T, state: &mut murmur3_x64_128_state) -> Result<u128> {
    const C1: u64 = 0x87c3_7b91_1142_53d5;
    const C2: u64 = 0x4cf5_ad43_2745_937f;
    const C3: u64 = 0x52dc_e729;
    const C4: u64 = 0x3849_5ab5;
    const R1: u32 = 27;
    const R2: u32 = 31;
    const R3: u32 = 33;
    const M: u64 = 5;
    let mut h1: u64 = state.h1;
    let mut h2: u64 = state.h2;
    let mut buf = [0; 16];
    let mut processed: usize = state.processed;
    loop {
        let read = source.read(&mut buf[..])?;
        processed += read;
        if read == 16 {
            let k1 = u64::from_le_bytes(copy_into_array(&buf[0..8]));
            let k2 = u64::from_le_bytes(copy_into_array(&buf[8..]));
            h1 ^= k1.wrapping_mul(C1).rotate_left(R2).wrapping_mul(C2);
            h1 = h1
                .rotate_left(R1)
                .wrapping_add(h2)
                .wrapping_mul(M)
                .wrapping_add(C3);
            h2 ^= k2.wrapping_mul(C2).rotate_left(R3).wrapping_mul(C1);
            h2 = h2
                .rotate_left(R2)
                .wrapping_add(h1)
                .wrapping_mul(M)
                .wrapping_add(C4);
        } else if read == 0 {
            state.h1 = h1;
            state.h2 = h2;
            state.processed = processed;
            h1 ^= processed as u64;
            h2 ^= processed as u64;
            h1 = h1.wrapping_add(h2);
            h2 = h2.wrapping_add(h1);
            h1 = fmix64(h1);
            h2 = fmix64(h2);
            h1 = h1.wrapping_add(h2);
            h2 = h2.wrapping_add(h1);
            let x = ((h2 as u128) << 64) | (h1 as u128);
            return Ok(x);
        } else {
            let mut k1 = 0;
            let mut k2 = 0;
            if read >= 15 {
                k2 ^= (buf[14] as u64).shl(48);
            }
            if read >= 14 {
                k2 ^= (buf[13] as u64).shl(40);
            }
            if read >= 13 {
                k2 ^= (buf[12] as u64).shl(32);
            }
            if read >= 12 {
                k2 ^= (buf[11] as u64).shl(24);
            }
            if read >= 11 {
                k2 ^= (buf[10] as u64).shl(16);
            }
            if read >= 10 {
                k2 ^= (buf[9] as u64).shl(8);
            }
            if read >= 9 {
                k2 ^= buf[8] as u64;
                k2 = k2.wrapping_mul(C2).rotate_left(33).wrapping_mul(C1);
                h2 ^= k2;
            }
            if read >= 8 {
                k1 ^= (buf[7] as u64).shl(56);
            }
            if read >= 7 {
                k1 ^= (buf[6] as u64).shl(48);
            }
            if read >= 6 {
                k1 ^= (buf[5] as u64).shl(40);
            }
            if read >= 5 {
                k1 ^= (buf[4] as u64).shl(32);
            }
            if read >= 4 {
                k1 ^= (buf[3] as u64).shl(24);
            }
            if read >= 3 {
                k1 ^= (buf[2] as u64).shl(16);
            }
            if read >= 2 {
                k1 ^= (buf[1] as u64).shl(8);
            }
            if read >= 1 {
                k1 ^= buf[0] as u64;
            }
            k1 = k1.wrapping_mul(C1);
            k1 = k1.rotate_left(31);
            k1 = k1.wrapping_mul(C2);
            h1 ^= k1;
        }
    }
}

fn fmix64(k: u64) -> u64 {
    const C1: u64 = 0xff51_afd7_ed55_8ccd;
    const C2: u64 = 0xc4ce_b9fe_1a85_ec53;
    const R: u32 = 33;
    let mut tmp = k;
    tmp ^= tmp >> R;
    tmp = tmp.wrapping_mul(C1);
    tmp ^= tmp >> R;
    tmp = tmp.wrapping_mul(C2);
    tmp ^= tmp >> R;
    tmp
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::cmp::min;
    use std::io;
    use std::io::Read;

    const TEST_SEED: u32 = 0x00000000;

    const CONST_DATA: [u8; 64] =
        [ 0u8,  1u8,  2u8,  3u8,  4u8,  5u8,  6u8,  7u8,
         10u8, 11u8, 12u8, 13u8, 14u8, 15u8, 16u8, 17u8,
         20u8, 21u8, 22u8, 23u8, 24u8, 25u8, 26u8, 27u8,
         30u8, 31u8, 32u8, 33u8, 34u8, 35u8, 36u8, 37u8,
         40u8, 41u8, 42u8, 43u8, 44u8, 45u8, 46u8, 47u8,
         50u8, 51u8, 52u8, 53u8, 54u8, 55u8, 56u8, 57u8,
         60u8, 61u8, 62u8, 63u8, 64u8, 65u8, 66u8, 67u8,
         70u8, 71u8, 72u8, 73u8, 74u8, 75u8, 76u8, 77u8 ];

    struct TestReader<'a> {
        data: &'a [u8],
        ofs: usize,
    }

    impl<'a> TestReader<'a> {
        fn new(data: &'a [u8]) -> Self {
            TestReader {
                data,
                ofs: 0,
            }
        }
    }

    impl<'a> Read for TestReader<'a> {
        fn read(&mut self, out: &mut [u8]) -> io::Result<usize> {
            let to_copy = min(out.len(), self.data.len() - self.ofs);

            if to_copy > 0 {
                out[0..to_copy].copy_from_slice(&self.data[self.ofs..(self.ofs + to_copy)]);
                self.ofs += to_copy;
            }

            Ok(to_copy)
        }
    }

    #[test]
    fn test_full_hash() {
        /* test with the full buffer */
        let full_hash = murmur3_x64_128(&mut TestReader::new(&CONST_DATA), TEST_SEED).unwrap();
        assert_eq!(full_hash, 0xeb91a9599de8337d969b1e101c4ee3bc);

        /* accumulate hash across 16-byte chunks (short reads change hash due to 0-padding) */
        let mut hash_state = murmur3_x64_128_state::new(TEST_SEED);
        murmur3_x64_128_full(&mut TestReader::new(&CONST_DATA[0..16]), &mut hash_state).unwrap();
        murmur3_x64_128_full(&mut TestReader::new(&CONST_DATA[16..32]), &mut hash_state).unwrap();
        murmur3_x64_128_full(&mut TestReader::new(&CONST_DATA[32..48]), &mut hash_state).unwrap();
        let hash = murmur3_x64_128_full(&mut TestReader::new(&CONST_DATA[48..64]), &mut hash_state).unwrap();
        assert_eq!(hash, full_hash);
    }
}
