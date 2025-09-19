<h1 style="text-align:center;"> i915 Basics</p>

### GT ( Graphics Technology )

# Uncore

**uncore** refers to the parts of the GPU hardware that are outside the individual graphics/compute cores (GTs).

### Forcewake

GT's forcewake domain is a mechanism to temporarily force specific parts of the GPU's execution units to remain powered on while accessing their registers.

### ⚡ Forcewake Mechanism

- The forcewake mechanism is a software-controlled wake-up system:
- The driver sets a forcewake request bit in a special register.
- The hardware powers up the associated block/domain.
- The driver then safely accesses the registers.
- Afterwards, it clears the bit to allow the block to power down again.
- This ensures safe and reliable register access without race conditions or hangs.

### 🗂 Forcewake Domains

- Different GT subsystems are grouped into forcewake domains.
- Each domain can be powered/woken independently.
- Examples of domains (names vary by GPU generation):
  - FORCEWAKE_RENDER — for main 3D/Render engine registers
  - FORCEWAKE_MEDIA — for video/media engine registers
  - FORCEWAKE_BLITTER — for blitter/copy engine registers
  - FORCEWAKE_GT — a combined domain covering most GT units

### Graphics Security Controller (GSC)

- The proxy handler is a software component in the i915 driver that
- Sets up communication channels between the GSC firmware and user space via the GuC (Graphics Microcontroller).
