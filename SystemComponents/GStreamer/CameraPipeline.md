<h1 style="text-align:center;"> Gstreamer camera pipeline commands</p>

## Commands
1. To test camera in producer and consumer model:<br>

   **Producer**
   ```
   gst-launch-1.0 videotestsrc is-live=true ! video/x-raw,format=YUY2,framerate=30/1 ! identity drop-allocation=true ! pipewiresink stream-properties="p,node.description=test_out,node.name=test_out,media.class=Video/Source" mode=provide sync=false
   ```
   **Csonsumer**
   ```
   gst-launch-1.0 pipewiresrc target-object=test_out ! videoconvert ! xvimagesink
   ```