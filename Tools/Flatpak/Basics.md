<h1 style="text-align:center;"> Flatpak </p>

### Overview

- Flatpak is a universal package system for Linux.
- It allows you to install and run applications in a sandboxed and distribution-independent way.
- Flatpak app can run on Ubuntu, Fedora, Arch, Debian, or any other distro
- Flatpak is like an "App Store" system for Linux, but open-source and cross-distro

### Features

1. Sandboxing: Flatpak apps run in a sandboxed environment, meaning they are isolated from the rest of the system for security and stability. This makes it harder for apps to interfere with each other or your system.

2. Cross-distribution: Unlike traditional package formats (like .deb or .rpm), Flatpak apps are distribution-agnostic. This means an app packaged as a Flatpak can be installed on nearly any Linux distribution, provided that Flatpak is supported.

3. Dependencies: Flatpak apps include all the libraries and dependencies they need to run, which ensures the app will work on any system, even if the system doesn't have those libraries installed.

4. App Updates: Flatpak provides a consistent way to handle updates for apps, which makes keeping software up-to-date easier.

5. Centralized Repositories: Flatpak apps are usually hosted in repositories like Flathub, which is the most popular source for Flatpak apps. Flathub offers thousands of applications, making it easy to find and install software.

6. Versioning and Portability: Because Flatpak bundles the dependencies, it helps avoid "dependency hell," which is a common problem when different apps require different versions of libraries that might not be compatible with each other.

### Installation

- Can be installed user or system wide
- System mode is by default

### Usage

```bash
# Add Flathub repo (once)
$ flatpak remote-add --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo

# Search apps with specific name
$ flatpak search discord

$ flatpak install flathub com.discordapp.Discord
$ flatpak --user install flathub com.discordapp.Discord

# List installed apps
$ flatpak list

# Run app
$ flatpak run com.discordapp.Discord

# Uinstall apps
$ flatpak uninstall com.discordapp.Discord
$ flatpak uninstall --unsed # Delete unsed runtimes

$ flatpake update

```

### Reference

https://flatpak.org/setup/
