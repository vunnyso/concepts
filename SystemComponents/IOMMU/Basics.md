<h1 style="text-align:center;"> IOMMU </p>

### 💡 What is IOMMU?
* IOMMU stands for Input-Output Memory Management Unit. It’s like an MMU (Memory Management Unit) but for I/O devices instead of the CPU.

### 🧠 What Does It Do?
* At a high level, IOMMU provides memory virtualization for I/O devices. Here's what that means:
* It maps device-visible virtual addresses to physical memory addresses.
* It allows safe and controlled DMA (Direct Memory Access) from devices.
* It helps prevent devices from accessing unauthorized memory — a big deal for security.

### 🛡️ Why is it useful?
* Device isolation: Prevents rogue or buggy devices from overwriting system memory.
* VFIO / PCI passthrough: Needed when passing PCI devices directly to virtual machines (e.g., GPU passthrough with QEMU/KVM).
* Security: Contains DMA attacks, especially from untrusted devices.
* Memory protection: Adds another layer of memory access control.

### 🐧 IOMMU in Linux
* In Linux, the kernel supports IOMMU for both Intel (VT-d) and AMD (AMD-Vi) platforms.
* Enable it by adding to the bootloader:
* Intel: intel_iommu=on
* AMD: amd_iommu=on
* Then check if it’s active:

  ```bash
  dmesg | grep -i iommu
  ```

### ⚙️ List the devices and their IOMMU groups.
* Run the below script

    ```sh
    #!/bin/bash
    for d in $(find /sys/kernel/iommu_groups/ -type l | sort -n -k5 -t/); do 
        n=${d#*/iommu_groups/*}; n=${n%%/*}
        printf 'IOMMU Group %s ' "$n"
        lspci -Dnns "${d##*/}"
    done;
    ```