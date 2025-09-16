<h1 style="text-align:center;"> CPU</p>

## Check performance mode

```bash
for i in /sys/devices/system/cpu/cpu[0-9]*/cpufreq/scaling_governor; do     cpu=$(basename "$(dirname "$(dirname "$i")")");     echo "$cpu: $(cat "$i")"; done
```

**Output**

```bash
cpu0: powersave
cpu10: powersave
cpu11: powersave
cpu12: powersave
.....
```
