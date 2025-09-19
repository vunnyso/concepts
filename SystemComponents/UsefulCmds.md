<h1 style="text-align:center;"> Useful Commands </p>

### How to find serial Number of system

🖥️ Method 1 — Using dmidecode

```bash
sudo dmidecode -s system-serial-number
```

🖥️ Method 2 — From /sys/class/dmi/id

```bash
sudo cat /sys/class/dmi/id/product_serial
```
