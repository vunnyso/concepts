<h1 style="text-align:center;"> i915 Basics</p>

## How to find Graphics memory

```bash
$ sudo cat /sys/kernel/debug/dri/0/i915_gem_objects
103 shrinkable [0 free] objects, 84258816 bytes
system: total:0x00000002ebd16000 bytes  (~12GB)
stolen-system: total:0x0000000000000000 bytes
```