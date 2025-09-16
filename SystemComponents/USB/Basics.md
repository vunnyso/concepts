<h1 style="text-align:center;"> USB Basics</p>

## What is USB?

USB (Universal Serial Bus) is a standard for connecting peripherals to computers and other devices

## Useful Commands:

1. `lsusb` used to list all USB devices connected to the system. <br>
   It provides detailed information about each USB device, including vendor ID, product ID, and bus location

   **Example:**

   ```
   $ lsusb
     Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
     Bus 001 Device 003: ID 174f:11a8 Syntek Integrated Camera
     Bus 001 Device 004: ID 058f:9540 Alcor Micro Corp. AU9540 Smartcard Reader
     Bus 001 Device 073: ID 8087:0033 Intel Corp. AX211 Bluetooth
   ```

   **More detailed info about device:**

   ```
   # sudo lsusb -v -d 0b95:1790
     Bus 004 Device 007: ID 0b95:1790 ASIX Electronics Corp. AX88179 Gigabit Ethernet
     .........................
     .........................
   ```

   **Variation:**
   To displays USB devices in a tree-like hierarchy, showing how they are connected to different USB controllers and ports. It helps in understanding the USB topology of your system.

   ```
   # lsusb -t
     /:  Bus 001.Port 001: Dev 001, Class=root_hub, Driver=xhci_hcd/4p, 480M
     /:  Bus 002.Port 001: Dev 001, Class=root_hub, Driver=xhci_hcd/4p, 5000M
         |__ Port 004: Dev 005, If 0, Class=[unknown], Driver=r8152, 5000M
   ```
