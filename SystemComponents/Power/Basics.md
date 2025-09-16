<h1 style="text-align:center;"> Power</p>

## 🧪 Check available sleep states

```bash
cat /sys/power/state
```

Typical output

```bash
freeze mem disk
```

| Mode      | Description                         |
| --------- | ----------------------------------- |
| `mem`     | Suspend to RAM                      |
| `disk`    | Hibernate (to disk)                 |
| `freeze`  | Light suspend (CPU idle, less used) |
| `standby` | (Rare, platform-specific)           |

## 🧵 Check inhibitors (what prevents sleep)

```bash
systemd-inhibit
```

# 🔍 Check systemd sleep configuration

```bash
systemctl show sleep.target
```

## Suspending the system

```bash
sudo systemctl suspend
```
