<h1 style="text-align:center;"> PCI</p>

### 🔧 What is PCI?

- PCI (Peripheral Component Interconnect) is a standard for connecting peripheral devices (like network cards, GPUs, sound cards, etc.) to a computer's motherboard.

### 🐧 How Linux Handles PCI

Linux uses a set of tools, kernel subsystems, and directories (mainly under /sys and /proc) to manage PCI devices.

1. Listing PCI Devices

   ```sh
   lspci # Shows all PCI devices
   lspci -v  # Gives verbose output
   lspci -nn # Includes numeric vendor/device IDs.
   lspci -k # Shows which kernel driver is handling the device
   ```
