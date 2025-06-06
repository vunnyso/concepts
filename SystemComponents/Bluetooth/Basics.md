<h1 style="text-align:center;"> Bluetooth</p>

## GATT
GATT stands for Generic Attribute Profile, and it’s one of the core components of Bluetooth Low Energy (BLE) communication.

🔍 In simple terms:

* GATT defines how two BLE devices exchange data.
* It operates on top of ATT (Attribute Protocol), which organizes data into attributes.
* GATT allows devices to discover and use services and characteristics provided by other BLE devices.


## 🔎 1. Identify the Bluetooth device
Run:
```bash
hciconfig
```

This shows information about your Bluetooth adapters. You should see something like:

```bash
hci0:   Type: Primary  Bus: USB
        BD Address: XX:XX:XX:XX:XX:XX  ACL MTU: 1021:8  SCO MTU: 64:1
        UP RUNNING
        RX bytes:1234 acl:12 sco:0 events:456 errors:0
        TX bytes:5678 acl:34 sco:0 commands:123 errors:0
```

## 🔎 2. Get detailed adapter information
```bash
hciconfig hci0 -a
```

## 📢 3. Check connected device HOGP support
```bash
sudo btmon
```

### 4. Debugging Tips
a. Enable debug logs for `bluetoothd` which usually be running as systemd service
```
  systemd.services.greetd.serviceConfig = {
    Execstart = lib.mkForce [
      "/run/current-system/sw/bin/bluetoothd -d -f /etc/bluetooth/main.conf"
    ];
  };
```

b. Check bluetooth control details
```
bluetoothctl info
bluetoothctl show
```