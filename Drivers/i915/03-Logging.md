<h1 style="text-align:center;"> i915 Basics</p>

### 🛠 How to enable uncore-related debug logs

At boot time (GRUB/Kernel cmdline):

```bash
drm.debug=0x1e log_buf_len=4M
```

## Enable display logs

Add below to kernel cmdline

```bash
drm.debug=0xe log_buf_len=4M
```

### References:

https://github.com/torvalds/linux/blob/master/drivers/gpu/drm/drm_print.c#L46-L54
