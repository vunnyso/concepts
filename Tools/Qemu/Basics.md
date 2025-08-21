<h1 style="text-align:center;"> Qemu </p>

## Overview

QEMU (short for Quick Emulator) is an open-source machine emulator and virtualizer.

It has two main modes of operation:

1. Emulator (full system emulation)

- QEMU can emulate a full computer system, including CPU, memory, storage, and network interfaces.
- It allows you to run operating systems and programs for one architecture (e.g., ARM, RISC-V, PowerPC) on a completely different one (e.g., x86).
- Example: Running an ARM-based Linux system on an x86 host.

2. Virtualizer (with hardware acceleration)

- When used with KVM (Kernel-based Virtual Machine) on Linux, QEMU can run virtual machines with near-native performance by taking advantage of hardware virtualization features (Intel VT-x, AMD-V).
- In this mode, QEMU acts more like a virtual machine manager, similar to VirtualBox or VMware.

### Monitor modes

- QEMU has two “monitor” modes you can use for interaction:

1. HMP
2. QMP

### HMP (Human Monitor Protocol)

- Start QEMU with HMP enabled

```bash
qemu-system-x86_64  -enable-kvm -m 2G   -monitor tcp:localhost:4444,server,nowait
```

and then connect with

```bash
nc localhost 4444
```

- Here you can type human commands, e.g.:

```bash
(qemu) info usb
(qemu) device_del myusb
```

**Note:**
When removing USB the device if you didn’t specify an id= when adding the USB device, you cannot remove it later (neither in HMP nor QMP). That’s why assigning id= is mandatory for hot-unplugging.

### QMP (QEMU Machine Protocol)

- It’s a JSON-based control protocol that lets external programs communicate with and control QEMU while it’s running.

#### How QMP works

- QEMU starts a QMP server on a Unix socket or TCP port.
- You connect to that socket with a client (your script or management software).
- You send JSON commands and receive JSON responses.

#### 🔹 Example session (simplified)

Start QEMU with QMP enabled:

```bash
qemu-system-x86_64 -qmp unix:/tmp/qmp-sock,server,nowait -enable-kvm -m 2G
```

Connect to the socket with socat:

```bash
socat -,raw,echo=0 unix-connect:/tmp/qmp-sock
```

Then exchange JSON:

```json
{ "execute": "qmp_capabilities" }
{ "execute": "query-status" }
{ "execute": "stop" }
{ "execute": "cont" }
```

### API References:

https://qemu-project.gitlab.io/qemu/interop/qemu-qmp-ref.html
