<h1 style="text-align:center;"> Gstreamer Basics</p>

## What is Gstreamer?

- GStreamer is a powerful multimedia framework used for creating audio and video pipelines.
- It's widely used in applications like media players, streaming services, and video processing tools.

## Key Concepts

**A. Elements**

Elements are the building blocks of a GStreamer pipeline.

| Element | Functionality   | Examples                   |
| ------- | --------------- | -------------------------- |
| Source  | Generates media | filesrc, audiotestsrc      |
| Filter  | Modifies media  | audioconvert, videoconvert |
| Sink    | Outputs media   | autovideosink, filesink    |

<br>

**B. Pipelines**

A pipeline is a collection of elements linked together to process multimedia data.

### 🧪 Basic Usage

1. **MP4 video playback**

   ```sh
   gst-launch-1.0 filesrc location=file.mp4 ! qtdemux ! h264parse ! vaapih264dec ! vaapisink
   ```

2. **AV1 video playback**
   ```sh
   gst-launch-1.0 filesrc location=CityHall_1920x1080.webm ! matroskademux ! av1parse ! vaapiav1dec ! vaapisink
   ```

### References:

https://wiki.nixos.org/wiki/GStreamer
