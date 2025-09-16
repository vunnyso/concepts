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
