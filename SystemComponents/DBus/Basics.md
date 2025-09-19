<h1 style="text-align:center;"> DBus</p>

### DBus (short for Desktop Bus)

Its an inter-process communication (IPC) system that allows communication between multiple processes running on the same machine. It is commonly used in Linux-based systems, although it can be used on other operating systems as well. DBus provides a way for applications and services to send messages or requests to each other in a way that is efficient and well-organized.

### Key Features of DBus:

1. **Message Passing:** DBus allows different applications (or processes) to send messages to each other asynchronously. This means that a program can request something from another program and not be blocked while waiting for a response.

2. **Bus Types:**
   - **System Bus:** Used for system-wide communication between processes. It is typically used for things like hardware management or communication with system services.
   - **Session Bus:** Used for communication between user applications running in the same session (e.g., desktop applications talking to each other).

3. **Service Discovery:** DBus allows applications to register their own "services" and interact with other services, making it easy to discover which services are available and how to communicate with them.

4. **Signal and Method Calls:**
   - **Method Calls:** A process can call a method (like a function) on a service, and the service will execute it and potentially return data.
   - **Signals:** A process can send a signal, which is a notification to other processes about an event (like a change in state).

5. **Languages and Bindings:** DBus can be used in many programming languages, such as C, Python, and Java, through various bindings, which make it flexible and accessible to different developers.

<br>

---

### Please note below commands can be sepcific to user Account as well.

### List of services on the System Bus

```bash
$ busctl list
```

### List of services on the Session Bus

```bash
$ dbus-send --session --dest=org.freedesktop.DBus --type=method_call --print-reply   /org/freedesktop/DBus org.freedesktop.DBus.ListNames
```

### Monitoring

```bash
dbus-monitor --session
```

Or for system bus:

```bash
dbus-monitor --system
```

### Listen for all signals on that interface

```bash
dbus-monitor --session "type='signal',interface='org.ghaf.Audio'"
```
