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

use gst::glib;
use gst::prelude::*;
use gst::subclass::prelude::*;
use gst::EventView;

use once_cell::sync::Lazy;

/* Opus is a great fit for our usecase except for one problem: it only supports a few samplerates.
 * Notably it doesn't support 44100 Hz, which is a very frequently used samplerate. This bin
 * provides a capssetter element which will override the rate we get from Opus with the rate the
 * application requested. Similarly, on the transcoder side, we just encode the audio as if it were
 * at 48 kHz, even if it is actually at 44.1 kHz.
 *
 * The downside to this is a small decrease in audio quality. If Opus is most responsive between 20
 * Hz and 20 kHz, then when 44.1 audio is converted to 48, we'll gain noise between 18-20 Hz
 * (although WMA probably already filtered that out) and start to lose audio above 18,375 kHz. This
 * is at the very edge of human hearing, so we're unlikely to lose any noticeable quality.
 *
 * Resampling is an option, but has some problems. It's significantly more complicated, and more
 * CPU-intensive.  Also, XAudio2 buffers can be started and ended at arbitrary points, so if we
 * start moving audio data from one buffer into another due to resampling, it may result in audible
 * artifacts. I think just encoding at the wrong rate is the best compromise. If the application
 * actually cared about audio quality, they probably would not have used WMA in the first place.
 */

static CAT: Lazy<gst::DebugCategory> = Lazy::new(|| {
    gst::DebugCategory::new(
        "protonaudioconverterbin",
        gst::DebugColorFlags::empty(),
        Some("Proton audio converter bin"))
});

pub struct AudioConvBin {
    audioconv: gst::Element,
    opusdec: gst::Element,
    capssetter: gst::Element,
    srcpad: gst::GhostPad,
    sinkpad: gst::GhostPad,
}

#[glib::object_subclass]
impl ObjectSubclass for AudioConvBin {
    const NAME: &'static str = "ProtonAudioConverterBin";
    type Type = super::AudioConvBin;
    type ParentType = gst::Bin;

    fn with_class(klass: &Self::Class) -> Self {

        let templ = klass.pad_template("src").unwrap();
        let srcpad = gst::GhostPad::builder_with_template(&templ, Some("src")).build();

        let templ = klass.pad_template("sink").unwrap();
        let sinkpad = gst::GhostPad::builder_with_template(&templ, Some("sink"))
            .event_function(|pad, parent, event| {
                AudioConvBin::catch_panic_pad_function(
                    parent,
                    || false,
                    |audioconvbin| audioconvbin.sink_event(pad, event)
                )
            }).build();

        let audioconv = gst::ElementFactory::make("protonaudioconverter").build().unwrap();
        let opusdec = gst::ElementFactory::make("opusdec").build().unwrap();
        let capssetter = gst::ElementFactory::make("capssetter").build().unwrap();

        AudioConvBin {
            audioconv,
            opusdec,
            capssetter,
            srcpad,
            sinkpad,
        }
    }
}

impl ObjectImpl for AudioConvBin {
    fn constructed(&self) {
        self.parent_constructed();

        let obj = self.obj();

        obj.add(&self.audioconv).unwrap();
        obj.add(&self.opusdec).unwrap();
        obj.add(&self.capssetter).unwrap();

        self.audioconv.link(&self.opusdec).unwrap();
        self.opusdec.link(&self.capssetter).unwrap();

        self.sinkpad
            .set_target(Some(&self.audioconv.static_pad("sink").unwrap()))
            .unwrap();
        self.srcpad
            .set_target(Some(&self.capssetter.static_pad("src").unwrap()))
            .unwrap();

        obj.add_pad(&self.sinkpad).unwrap();
        obj.add_pad(&self.srcpad).unwrap();
    }
}

impl GstObjectImpl for AudioConvBin { }

impl BinImpl for AudioConvBin { }

impl ElementImpl for AudioConvBin {
    fn metadata() -> Option<&'static gst::subclass::ElementMetadata> {
        static ELEMENT_METADATA: Lazy<gst::subclass::ElementMetadata> = Lazy::new(|| {
            gst::subclass::ElementMetadata::new(
                "Proton audio converter with rate fixup",
                "Codec/Decoder/Audio",
                "Converts audio for Proton, fixing up samplerates",
                "Andrew Eikum <aeikum@codeweavers.com>")
        });

        Some(&*ELEMENT_METADATA)
    }

    fn pad_templates() -> &'static [gst::PadTemplate] {
        static PAD_TEMPLATES: Lazy<Vec<gst::PadTemplate>> = Lazy::new(|| {
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

            let caps = gst::Caps::builder("audio/x-raw")
                .field("format", "S16LE") /* opusdec always output S16LE */
                .build();
            let src_pad_template = gst::PadTemplate::new(
                "src",
                gst::PadDirection::Src,
                gst::PadPresence::Always,
                &caps).unwrap();

            vec![src_pad_template, sink_pad_template]
        });

        PAD_TEMPLATES.as_ref()
    }
}

impl AudioConvBin {
    fn sink_event(
        &self,
        pad: &gst::GhostPad,
        event: gst::Event
    ) -> bool {
        match event.view() {
            EventView::Caps(event_caps) => {
                /* set up capssetter with this rate */
                if let Some(s) = event_caps.caps().structure(0) {

                    if let Ok(override_rate) = s.get::<i32>("rate") {

                        let mut rate_caps = gst::Caps::new_empty();
                        {
                            let rate_caps = rate_caps.get_mut().unwrap();
                            let s = gst::Structure::builder("audio/x-raw")
                                .field("rate", &override_rate)
                                .build();
                            rate_caps.append_structure(s);
                        }
                        self.capssetter.set_property("caps", &rate_caps);
                    }else{
                        gst::warning!(CAT, "event has no rate");
                    }
                } else {
                    gst::warning!(CAT, "event has no structure");
                }

                /* forward on to the real pad */
                self.audioconv.static_pad("sink").unwrap()
                    .send_event(event)
            },
            _ => gst::Pad::event_default(pad, Some(&*self.obj()), event)
        }
    }
}
