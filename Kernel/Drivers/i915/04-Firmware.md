<h1 style="text-align:center;"> i915 Basics</p>

## Update Graphics firmware

```bash
cd /tmp
git clone https://git.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git
sudo cp -r linux-firmware/i915 /lib/firmware/
sudo update-initramfs -u
sudo reboot
```

### Reference:

https://git.kernel.org/pub/scm/linux/kernel/git/firmware/linux-firmware.git/tree/i915
