<h1 style="text-align:center;"> Journal</p>

### Checking journal logs of specific service

```sh
journalctl -u <service.name>
```

### Checking previous boot journal logs

```sh
journalctl -b -1
```

### Checking specific journal file logs

```sh
journalctl --file=system.journal
```

### Check size of journal on your system

```sh
journalctl --disk-usage
```

### If your journal is too large, you reduce its size

```sh
sudo journalctl --vacuum-size=500M
```

### Send logs to journal

```bash
logger "This is a test log message"
logger -t myscript "Backup completed successfully"
```
