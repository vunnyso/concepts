<h1 style="text-align:center;"> Linux Audio</p>

### Audio Architecture

The Linux audio architecture is a complex system that involves multiple components and layers. Here's an overview of the main components:

1. ALSA (Advanced Linux Sound Architecture)
   - Manages audio hardware.
   - Provides low-level drivers for sound cards.
   - Directly interacts with applications or higher-level audio systems.

2. PulseAudio
   - A sound server that sits on top of ALSA.
   - Handles software mixing, per-application volume control, and network streaming.

3. JACK (JACK Audio Connection Kit)
   - Used for professional, real-time, low-latency audio.
   - Preferred for audio production and music creation.

4. PipeWire
   - A modern replacement for PulseAudio and JACK.
   - Default on some newer distributions like Fedora.

5. OSS (Open Sound System) [Deprecated]
   - Older sound system, replaced by ALSA.

<br>

---

### Managing Audio in Linux

1. Check and List Audio Devices
   - ALSA

     ```
     aplay -l   # List playback devices

     arecord -l # List recording devices
     ```

   - Pulseaudio

     ```
     pactl list sinks   # Lists output devices
     pactl list sources # Lists input devices
     ```

   - Pipe Wire

     ```
     pw-cli ls Node
     ```

### Checking default source and sinks using PulseAudio

- The default sink (default_sink_name) changes only if you explicitly change the default device in PulseAudio.

  ```bash
  pactl get-default-sink
  pactl get-default-source
  ```
