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
 *
 * Based on "Fossilize," which is
 * Copyright (c) 2018-2019 Hans-Kristian Arntzen
 * https://github.com/ValveSoftware/Fossilize/
 */

/* This is a read/write implementation of the Fossilize database format.
 *
 * https://github.com/ValveSoftware/Fossilize/
 *
 * That C++ implementation is specific to Vulkan, while this one tries to be generic to store any
 * type of data.
 *
 * FIXME: It should probably live in that repo or in a separate project.
 */

use std::fs;
use std::io;
use std::io::Read;
use std::io::Write;
use std::io::Seek;
use std::fs::OpenOptions;
use std::convert::From;
use std::collections::HashMap;
use crc32fast;

use crate::*;

/* Fossilize StreamArchive database format version 6:
 *
 * The file consists of a header, followed by an unlimited series of "entries".
 *
 * All multi-byte entities are little-endian.
 *
 * The file header is as follows:
 *
 * Field           Type           Description
 * -----           ----           -----------
 * magic_number    uint8_t[12]    Constant value: "\x81""FOSSILIZEDB"
 * version         uint32_t       StreamArchive version: 6
 *
 *
 * Each entry follows this format:
 *
 * Field           Type                    Description
 * -----           ----                    -----------
 * name            unsigned char[40]       Application-defined entry identifier, stored in hexadecimal big-endian
 *                                         ASCII. Usually N-char tag followed by (40 - N)-char hash.
 * stored_size     uint32_t                Size of the payload as stored in this file.
 * flags           uint32_t                Flags for this entry (e.g. compression). See below.
 * crc32           uint32_t                CRC32 of the payload as stored in this file.
 * payload_size    uint32_t                Size of this payload after decompression.
 * payload         uint8_t[stored_size]    Entry data.
 *
 * The flags field may contain:
 * 0x1: No compression.
 * 0x2: Deflate compression.
 */

const FOSSILIZE_MAGIC: [u8; 12] = [0x81, 0x46, 0x4f, 0x53, 0x53, 0x49, 0x4c, 0x49, 0x5a, 0x45, 0x44, 0x42];
const FOSSILIZE_MIN_COMPAT_VERSION: u8 = 5;
const FOSSILIZE_VERSION: u8 = 6;
const MAGIC_LEN_BYTES: usize = 12 + 4;

const FOSSILIZE_COMPRESSION_NONE: u32 = 1;
const _FOSSILIZE_COMPRESSION_DEFLATE: u32 = 2;

#[derive(Debug)]
pub enum Error {
    NotImplemented,
    IOError(io::Error),
    CorruptDatabase,
    DataTooLarge,
    InvalidTag,
    EntryNotFound,
    FailedChecksum,
}

impl From<io::Error> for Error {
    fn from(e: io::Error) -> Error {
        Error::IOError(e)
    }
}

type FossilizeHash = u128;
const _FOSSILIZEHASH_ASCII_LEN: usize = (128 / 8) * 2;

trait ToAscii {
    fn to_ascii_bytes(&self) -> Vec<u8>;

    fn from_ascii_bytes(b: &[u8]) -> Result<Self, Error>
        where Self: std::marker::Sized;
}

impl ToAscii for FossilizeHash {
    fn to_ascii_bytes(&self) -> Vec<u8> {
        format_hash(*self).into_bytes()
    }

    fn from_ascii_bytes(b: &[u8]) -> Result<Self, Error> {
        let s = String::from_utf8(b.to_vec())
            .map_err(|_| Error::CorruptDatabase)?;
        Self::from_str_radix(&s, 16)
           .map_err(|_| Error::CorruptDatabase)
    }
}

type FossilizeTag = u32;
const FOSSILIZETAG_ASCII_LEN: usize = (32 / 8) * 2;

impl ToAscii for FossilizeTag {
    fn to_ascii_bytes(&self) -> Vec<u8> {
        format!("{:08x}", *self).into_bytes()
    }

    fn from_ascii_bytes(b: &[u8]) -> Result<Self, Error> {
        let s = String::from_utf8(b.to_vec())
            .map_err(|_| Error::CorruptDatabase)?;
        Self::from_str_radix(&s, 16)
           .map_err(|_| Error::CorruptDatabase)
    }
}

const PAYLOAD_NAME_LEN_BYTES: usize = 40;

struct PayloadInfo {
    size: u32,
    compression: u32,
    crc: u32,
    full_size: u32,
}

const PAYLOAD_HEADER_LEN_BYTES: usize = 4 * 4;

impl PayloadInfo {

    fn new_from_slice(dat: &[u8]) -> Self {
        Self {
            size: u32::from_le_bytes(copy_into_array(&dat[0..4])),
            compression: u32::from_le_bytes(copy_into_array(&dat[4..8])),
            crc: u32::from_le_bytes(copy_into_array(&dat[8..12])),
            full_size: u32::from_le_bytes(copy_into_array(&dat[12..16])),
        }
    }

    fn to_slice(&self) -> [u8; PAYLOAD_HEADER_LEN_BYTES] {
        let mut ret = [0u8; PAYLOAD_HEADER_LEN_BYTES];
        ret[0..4].copy_from_slice(&self.size.to_le_bytes());
        ret[4..8].copy_from_slice(&self.compression.to_le_bytes());
        ret[8..12].copy_from_slice(&self.crc.to_le_bytes());
        ret[12..16].copy_from_slice(&self.full_size.to_le_bytes());
        ret
    }
}

pub struct PayloadEntry {
    offset: u64,
    payload_info: PayloadInfo,
}

impl PayloadEntry {
    fn new_from_slice(offset: u64, dat: &[u8]) -> Self {
        Self {
            offset,
            payload_info: PayloadInfo::new_from_slice(dat),
        }
    }
}

pub struct StreamArchive {
    file: fs::File,
    read_only: bool,

    seen_blobs: Vec<HashMap<FossilizeHash, PayloadEntry>>,

    write_pos: u64,
}

pub enum CRCCheck {
    WithoutCRC,
    WithCRC,
}

impl StreamArchive {

    pub fn new<P: AsRef<std::path::Path>>(filename: P, fileopts: &OpenOptions, read_only: bool, num_tags: usize) -> Result<Self, Error> {

        let file = fileopts.open(filename)?;

        let mut seen_blobs = Vec::new();
        for _ in 0..num_tags {
            seen_blobs.push(HashMap::new());
        }

        let mut ret = Self {
            file,
            read_only,
            seen_blobs,
            write_pos: 0,
        };

        ret.prepare()?;

        Ok(ret)
    }

    pub fn prepare(&mut self) -> Result<(), Error> {
        self.write_pos = self.file.seek(io::SeekFrom::Start(0))?;

        if self.file.metadata().unwrap().len() > 0 {
            let mut magic_and_version = [0_u8; MAGIC_LEN_BYTES];
            self.file.read_exact(&mut magic_and_version)?;

            let version = magic_and_version[15];

            if magic_and_version[0..12] != FOSSILIZE_MAGIC ||
                    version < FOSSILIZE_MIN_COMPAT_VERSION ||
                    version > FOSSILIZE_VERSION {
                return Err(Error::CorruptDatabase);
            }

            self.write_pos = MAGIC_LEN_BYTES as u64;

            loop {
                let mut name_and_header = [0u8; PAYLOAD_NAME_LEN_BYTES + PAYLOAD_HEADER_LEN_BYTES];
                let res = self.file.read_exact(&mut name_and_header);

                if let Err(fail) = res {
                    if fail.kind() == io::ErrorKind::UnexpectedEof {
                        break;
                    }
                    return Err(Error::IOError(fail));
                }

                let name = &name_and_header[0..PAYLOAD_NAME_LEN_BYTES];

                let tag: usize = FossilizeTag::from_ascii_bytes(&name[0..FOSSILIZETAG_ASCII_LEN])? as usize;
                let hash = FossilizeHash::from_ascii_bytes(&name[FOSSILIZETAG_ASCII_LEN..])?;

                let payload_entry = PayloadEntry::new_from_slice(
                    self.file.seek(io::SeekFrom::Current(0))?,
                    &name_and_header[PAYLOAD_NAME_LEN_BYTES..]
                );

                let res = self.file.seek(io::SeekFrom::Current(payload_entry.payload_info.size as i64));
                match res {
                    Ok(p) => {
                        self.write_pos = p;
                        if tag >= self.seen_blobs.len() && self.read_only {
                            /* ignore unknown tags for read-only DBs, otherwise panic */
                            continue;
                        }
                        self.seen_blobs[tag].insert(hash, payload_entry);
                    },

                    Err(e) => {
                        /* truncated chunk is not fatal */
                        if e.kind() != io::ErrorKind::UnexpectedEof {
                            return Err(Error::IOError(e));
                        }
                    },
                }
            }
        } else {
            /* new file, write foz header */
            self.file.write_all(&FOSSILIZE_MAGIC)?;
            self.file.write_all(&[0u8, 0u8, 0u8, FOSSILIZE_VERSION])?;

            self.write_pos = MAGIC_LEN_BYTES as u64;
        }

        Ok(())
    }

    pub fn has_entry(&self, tag: FossilizeTag, hash: FossilizeHash) -> bool {
        self.seen_blobs[tag as usize].contains_key(&hash)
    }

    pub fn iter_tag(&self, tag: FossilizeTag) -> std::collections::hash_map::Keys<FossilizeHash, PayloadEntry> {
        self.seen_blobs[tag as usize].keys()
    }

    pub fn entry_size(&self, tag: FossilizeTag, hash: FossilizeHash) -> Result<usize, Error> {
        match self.seen_blobs[tag as usize].get(&hash) {
            None => Err(Error::EntryNotFound),
            Some(e) => Ok(e.payload_info.full_size as usize),
        }
    }

    pub fn read_entry(&mut self, tag: FossilizeTag, hash: FossilizeHash, offset: u64, buf: &mut [u8], crc_opt: CRCCheck) -> Result<usize, Error> {
        if tag as usize >= self.seen_blobs.len() {
            return Err(Error::InvalidTag);
        }

        let entry = &self.seen_blobs[tag as usize].get(&hash);

        let entry = match entry {
            None => { return Err(Error::EntryNotFound); }
            Some(e) => e,
        };

        if entry.payload_info.compression != FOSSILIZE_COMPRESSION_NONE {
            return Err(Error::NotImplemented);
        }

        if offset >= entry.payload_info.full_size as u64 {
            return Ok(0);
        }

        self.file.seek(io::SeekFrom::Start(entry.offset + offset))?;

        let to_copy = std::cmp::min(entry.payload_info.full_size as usize - offset as usize, buf.len());

        self.file.read_exact(&mut buf[0..to_copy])
            .map_err(Error::IOError)?;

        if entry.payload_info.crc != 0 {
            if let CRCCheck::WithCRC = crc_opt {
                let mut crc_hasher = crc32fast::Hasher::new();
                crc_hasher.update(&buf[0..to_copy]);
                let got_crc = crc_hasher.finalize();
                if got_crc != entry.payload_info.crc {
                    return Err(Error::FailedChecksum);
                }
            }
        }

        Ok(to_copy)
    }

    pub fn write_entry(&mut self, tag: FossilizeTag, hash: FossilizeHash, data: &mut dyn Read, crc_opt: CRCCheck) -> Result<(), Error> {
        if self.has_entry(tag, hash) {
            return Ok(());
        }

        self.file.seek(io::SeekFrom::Start(self.write_pos))?;

        /* write entry name */
        let mut name = [0u8; PAYLOAD_NAME_LEN_BYTES];

        name[0..FOSSILIZETAG_ASCII_LEN].copy_from_slice(&tag.to_ascii_bytes());

        name[FOSSILIZETAG_ASCII_LEN..].copy_from_slice(&hash.to_ascii_bytes());

        self.file.write_all(&name)?;

        /* allocate payload info space */
        let payload_info_pos = self.file.seek(io::SeekFrom::Current(0))?;

        let payload_info = PayloadInfo {
            size: u32::max_value(), /* will be filled later */
            compression: FOSSILIZE_COMPRESSION_NONE,
            crc: 0, /* will be filled later */
            full_size: u32::max_value(), /* will be filled later */
        };

        self.file.write_all(&payload_info.to_slice())?;

        /* write data */
        let mut payload_entry = PayloadEntry {
            offset: self.file.seek(io::SeekFrom::Current(0))?,
            payload_info,
        };

        const BUFFER_COPY_BYTES: usize = 8 * 1024 * 1024; /* tuneable */
        let mut buf = box_array![0u8; BUFFER_COPY_BYTES];
        let mut size: usize = 0;
        let mut crc_hasher = crc32fast::Hasher::new();
        loop {
            let readed = data.read(&mut *buf)?;
            if readed == 0 {
                break;
            }

            if size + readed > u32::max_value() as usize {
                /* Fossilize format only supports 4 GiB entries */
                return Err(Error::DataTooLarge);
            }

            size += readed;

            self.file.write_all(&buf[0..readed])?;

            if let CRCCheck::WithCRC = crc_opt {
                crc_hasher.update(&buf[0..readed]);
            }
        }

        self.write_pos = self.file.seek(io::SeekFrom::Current(0))?;

        /* seek back and fill in the size */
        self.file.seek(io::SeekFrom::Start(payload_info_pos))?;

        payload_entry.payload_info.size = size as u32;
        payload_entry.payload_info.full_size = size as u32;

        if let CRCCheck::WithCRC = crc_opt {
            payload_entry.payload_info.crc = crc_hasher.finalize();
        }

        self.file.write_all(&payload_entry.payload_info.to_slice())?;

        /* success. record entry and exit */
        self.seen_blobs[tag as usize].insert(hash, payload_entry);

        Ok(())
    }

    /* rewrites the database, discarding entries listed in 'to_discard' */
    pub fn discard_entries(&mut self, to_discard: &Vec<(FossilizeTag, FossilizeHash)>) -> Result<(), Error> {
        self.write_pos = self.file.seek(io::SeekFrom::Start(0))?;
        for v in self.seen_blobs.iter_mut() {
            v.clear();
        }

        let mut magic_and_version = [0 as u8; MAGIC_LEN_BYTES];
        self.file.read_exact(&mut magic_and_version)?;

        let version = magic_and_version[15];

        if magic_and_version[0..12] != FOSSILIZE_MAGIC ||
                version < FOSSILIZE_MIN_COMPAT_VERSION ||
                version > FOSSILIZE_VERSION {
            return Err(Error::CorruptDatabase);
        }

        self.write_pos = MAGIC_LEN_BYTES as u64;

        loop {
            let mut name_and_header = [0u8; PAYLOAD_NAME_LEN_BYTES + PAYLOAD_HEADER_LEN_BYTES];
            let res = self.file.read_exact(&mut name_and_header);

            if let Err(fail) = res {
                if fail.kind() == io::ErrorKind::UnexpectedEof {
                    break;
                }
                return Err(Error::IOError(fail));
            }

            let name = &name_and_header[0..PAYLOAD_NAME_LEN_BYTES];

            let tag = FossilizeTag::from_ascii_bytes(&name[0..FOSSILIZETAG_ASCII_LEN])?;
            let hash = FossilizeHash::from_ascii_bytes(&name[FOSSILIZETAG_ASCII_LEN..])?;

            let payload_entry = PayloadEntry::new_from_slice(
                self.file.seek(io::SeekFrom::Current(0))?,
                &name_and_header[PAYLOAD_NAME_LEN_BYTES..]
            );

            if to_discard.contains(&(tag, hash)) {
                /* skip over this entry */
                let res = self.file.seek(io::SeekFrom::Current(payload_entry.payload_info.size as i64));
                match res {
                    Ok(_) => {
                    },

                    Err(e) => {
                        /* truncated chunk is not fatal */
                        if e.kind() != io::ErrorKind::UnexpectedEof {
                            return Err(Error::IOError(e));
                        }
                    },
                }
            } else {
                let mut read_pos = self.file.seek(io::SeekFrom::Current(0))?;
                if self.write_pos == read_pos - name_and_header.len() as u64 {
                    /* if we haven't dropped any chunks, we can just skip it rather than rewrite it */
                    let res = self.file.seek(io::SeekFrom::Current(payload_entry.payload_info.size as i64));
                    match res {
                        Ok(p) => {
                            self.write_pos = p;
                        },

                        Err(e) => {
                            /* truncated chunk is not fatal */
                            if e.kind() != io::ErrorKind::UnexpectedEof {
                                return Err(Error::IOError(e));
                            }
                        },
                    }
                } else {
                    /* we're offset, so we have to rewrite */
                    self.file.seek(io::SeekFrom::Start(self.write_pos))?;

                    {
                        /* write header */
                        let mut name = [0u8; PAYLOAD_NAME_LEN_BYTES];
                        name[0..FOSSILIZETAG_ASCII_LEN].copy_from_slice(&tag.to_ascii_bytes());
                        name[FOSSILIZETAG_ASCII_LEN..].copy_from_slice(&hash.to_ascii_bytes());
                        self.file.write_all(&name)?;
                        self.write_pos += name.len() as u64;

                        let buf = payload_entry.payload_info.to_slice();
                        self.file.write_all(&buf)?;
                        self.write_pos += buf.len() as u64;
                    }

                    /* copy contents */
                    const BUFFER_COPY_BYTES: usize = 8 * 1024 * 1024; /* tuneable */
                    let mut buf = box_array![0u8; BUFFER_COPY_BYTES];
                    let end_read = read_pos + payload_entry.payload_info.size as u64;
                    loop {
                        let to_read = std::cmp::min((end_read - read_pos) as usize, BUFFER_COPY_BYTES);
                        if to_read == 0 {
                            break;
                        }

                        self.file.seek(io::SeekFrom::Start(read_pos))?;

                        let readed = self.file.read(&mut (*buf)[0..to_read])?;
                        if readed == 0 {
                            break;
                        }

                        read_pos += readed as u64;

                        self.file.seek(io::SeekFrom::Start(self.write_pos))?;
                        self.file.write_all(&buf[0..readed])?;
                        self.write_pos += readed as u64;
                    }

                    self.file.seek(io::SeekFrom::Start(read_pos))?;
                }
            }
        }

        self.file.set_len(self.write_pos)?;

        self.prepare()
    }
}
