<h1 style="text-align:center;"> GUI Client</p>

### ⚙️ Steps to install XFCE + VNC on Ubuntu EC2

1️⃣ Update and install desktop + VNC

```bash
sudo apt update
sudo apt install xfce4 xfce4-goodies tightvncserver -y
```

2️⃣ Start VNC and set password

```bash
vncserver :1
```

You’ll be prompted for a password (max 8 characters).

Then stop it to configure:

```bash
vncserver -kill :1
```

3️⃣ Configure XFCE startup for VNC

Edit the VNC startup script:

```bash
nano ~/.vnc/xstartup
```

Replace contents with:

```bash
#!/bin/bash
xrdb $HOME/.Xresources
startxfce4 &
```

Make it executable:

```bash
chmod +x ~/.vnc/xstartup
```

4️⃣ Start VNC server again

```bash
vncserver :1
```

By default, this listens on TCP port 5901 (for display :1).

5️⃣ Adjust AWS Security Group
Add inbound rule:

```bash
Type: Custom TCP
Port: 5901
Source: Your_IP
```

6️⃣ Connect from your local machine
Open VNC Viewer (e.g., TigerVNC, RealVNC)

```bash
ec2-your-ip.compute.amazonaws.com:5901
```

🔐 Optional: Tunnel over SSH (more secure)
Instead of opening port 5901, you can forward it via SSH:

```bash
ssh -i your-key.pem -L 5901:localhost:5901 ubuntu@ec2-your-ip.compute.amazonaws.com
```

Then connect your VNC client to:

```bash
localhost:5901
```
