<h1 style="text-align:center;"> Gstreamer Basics</p>

## What is Gstreamer?
* GStreamer is a powerful multimedia framework used for creating audio and video pipelines.
* It's widely used in applications like media players, streaming services, and video processing tools.

## Key Concepts

**A. Elements**

Elements are the building blocks of a GStreamer pipeline.

| Element    | Functioanlity   | Examples                   |
| --------   | -------         | -------                    |
| Source     | Generates media | filesrc, audiotestsrc      |
| Filter     | Modifies media  | audioconvert, videoconvert |
| Sink       | Outputs media   | autovideosink, filesink    |


<br>

**B. Pipelines**

A pipeline is a collection of elements linked together to process multimedia data.


