<h1 style="text-align:center;"> Linux Input Events</p>

## Overview
Linux Input Events provide a unified interface for the kernel to communicate input device data such as from keyboards, mice, joysticks, touchscreens, and gamepads to user-space applications. This system is part of the Linux Input Subsystem, and it exposes device events through device files typically found in:
```bash
/dev/input/eventX
```

## 🔧 Structure of a Linux Input Event

```c
struct input_event {
    struct timeval time; // timestamp
    __u16 type;          // event type (e.g., EV_KEY, EV_REL, etc.)
    __u16 code;          // event code (e.g., KEY_A, REL_X, etc.)
    __s32 value;         // value (meaning varies based on type/code)
};
```
## Meaning of Fields
`time:` When the event occurred (used for synchronizing)

`type:` What kind of event is this? (e.g., key, relative move, absolute move)

`code:` The specific button, key, or axis

`value:`

For **EV_KEY:**

* 1 = key press
* 0 = key release
* 2 = key hold (auto-repeat)

For EV_REL and EV_ABS:

The movement or position value

## 🧠 Common type Values

| Value  | Macro   | Description                                |
|--------|---------|--------------------------------------------|
| 0x00   | EV_SYN  | Synchronization events                     |
| 0x01   | EV_KEY  | Keys and button presses/releases           |
| 0x02   | EV_REL  | Relative movement (e.g. mouse)             |
| 0x03   | EV_ABS  | Absolute movement (e.g. touchscreen)       |
| 0x04   | EV_MSC  | Miscellaneous (like scan codes)            |
| 0x11   | EV_LED  | LED state changes (e.g., Num Lock)         |