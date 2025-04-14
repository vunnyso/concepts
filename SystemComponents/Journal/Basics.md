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

### How to put your own custom log in journal
```sh
logger -t vunny "This is message from me"
```