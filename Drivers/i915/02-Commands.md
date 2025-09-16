<h1 style="text-align:center;"> i915 Basics</p>

## 🖥️ Step 1 — Identify Your GPU

Run

```bash
# lspci -nn | grep -i 'vga\|3d\|display'
```

### Default Parameters

```bash
ls /sys/module/i915/parameters/
```

## How to find Graphics memory used

```bash
$ sudo cat /sys/kernel/debug/dri/0/i915_gem_objects
103 shrinkable [0 free] objects, 84258816 bytes
system: total:0x00000002ebd16000 bytes  (~12GB)
stolen-system: total:0x0000000000000000 bytes
```
