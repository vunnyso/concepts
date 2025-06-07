<h1 style="text-align:center;"> Gstreamer Basics</p>

## What is FFmpeg?
* FFmpeg is a multimedia framework used to decode, encode, transcode, mux, demux, stream, filter, and play audio and video content. 
* It's widely used on Linux for everything from simple format conversion to complex video processing tasks.

## 🧪 Basic Usage
1. Check FFmpeg version
   ```sh
   ffmpeg -version
   ```

2. Video decoding
   ```sh
   ffplay  -hwaccel vaapi -hwaccel_output_format vaapi -i /tmp/test.mp4 -f null -
   ```